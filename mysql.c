#include "mysql.h"

int main()
{
  MYSQL *conn = mysql_init(NULL);
  MYSQL_RES *res;
  MySQLData mydata = { .server = "localhost", .user = "pw_user", .password = "pw_password", .database = "pw_db", .port = 3306, .socket = NULL, option = 0 };
  char *sql;
  const char *key = "prince4712";

  if(conn == NULL)
    {
      fprintf(stderr, "mysql_init");
      exit(1);
    }

  if(!mysql_real_connect(conn, myd.server, myd.user, myd.password, myd.database, myd.port, myd.socket, myd.option))
    {
      fprintf(stderr, "mysql_real_connect");
      goto end;
    }

  sprintf(sql, "INSERT INTO key_tbl(title, name, password, memo) VALUES ('%s', '%s', AES_ENCRYPT('%s', '%s'), '%s')", argv[1], argv[2], argv[3], key, argv[4]);
  if(mysql_query(conn, sql))
    {
      fprintf(stderr, "mysql_query");
      goto end;
    }

  if((res = mysql_use_result(conn)) == NULL)
    {
      fprintf(stderr, "mysql_use_result");
      goto end;
    }

  while((row = mysql_fetch_row(res)) != NULL)
    {
      printf("%s\n", row);
    }
  
 end:
  mysql_free_result(res);
  mysql_close(conn);

  return 0;
}
