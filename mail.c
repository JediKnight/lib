#include "mail.h"
#include "network.h"

int sendm(Mail mail)
{
  sock soc;
  int i;
  char req[6][1024];

  sprintf(req[0], "helo bamboo-copter.com\r\n");
  sprintf(req[1], "mail from:%s\r\n", mail.from);
  sprintf(req[2], "rcpt to:%s\r\n", mail.to);
  sprintf(req[3], "data\r\n");
  sprintf(req[4], "From: %s\nSubject: %s\n%s\r\n.\r\n", mail.from, mail.subject, mail.message);
  sprintf(req[5], "quit\r\n");

  soc = getsock(mail.serv, mail.port);

  for(i = 0; i < (sizeof(req) / sizeof(req[0])); request(soc, req[i++]));

  sclose(soc);

  return 0;
}
