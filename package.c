#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<mysql/mysql.h>
#include<string.h>
#include"log.h"
#include"function.h"

void customer();
void business();
void administer();


MYSQL mysql;
MYSQL_RES *res;
MYSQL_ROW row;
int num=0;

int main()
{
          int select=0;
         while(select!=4)
         {
                system("clear");
                  printf("\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
                  printf("\t\t\t\t\t弛                   Travel ManageMent Program                  弛\n");
                  printf("\t\t\t\t\t戍式式式式式式式式式式式式式成式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式成式式式式式式式式式式式式式式式式扣\n");
                  printf("\t\t\t\t\t弛1. 堅     偌 弛 2. 婦  葬  濠 弛 3. 餌  機  濠 弛 4.Щ煎斜極謙猿 弛\n");
                  printf("\t\t\t\t\t戌式式式式式式式式式式式式式扛式式式式式式式式式式式式式式式扛式式式式式式式式式式式式式式式扛式式式式式式式式式式式式式式式式戎\n");
                  printf("\t\t\t\t\tInput Operating Number :");
                  scanf("%d",&select);
                 login(select);
         }

          mysql_free_result(res);
          mysql_close(&mysql);

          return 0;
}

void customer()
{
                system("clear");
         printf("\n\n\t\t\t\t\t\tWelcom Customer\n");
         printf("\t\t\t\t\t\t Please Wait");
         sleep(3);

         while(num!=5)
         {
                system("clear");
                 printf("\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
                 printf("\t\t\t\t\t\t弛        View Of Customer      弛\n");
                 printf("\t\t\t\t\t\t戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");
                 printf("\t\t\t\t\t\t弛1.罹 ч ぬ 酈 雖              弛\n");
                 printf("\t\t\t\t\t\t戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");
                 printf("\t\t\t\t\t\t弛2.輿  僥  ж  晦              弛\n");
                 printf("\t\t\t\t\t\t戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");
                 printf("\t\t\t\t\t\t弛3.輿  僥  鏃  模              弛\n");
                 printf("\t\t\t\t\t\t戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");
                 printf("\t\t\t\t\t\t弛4.輿  僥  ��  檣              弛\n");
                 printf("\t\t\t\t\t\t戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");
                 printf("\t\t\t\t\t\t弛5.謙  猿  ж  晦              弛\n");
                 printf("\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
                 printf("\t\t\t\t\t\tInput Number :");
                 scanf("%d",&num);
                 functionC(num);
          }
}

void administer()
{
                system("clear");
         printf("\n\n\t\t\t\t\t\tWelcom Administrator\n");
         printf("\t\t\t\t\t\t Please Wait");
         sleep(3);

          while(num!=7)
          {
                system("clear");
                 printf("\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
                 printf("\t\t\t\t\t\t弛      View Of Administrator   弛\n");
                 printf("\t\t\t\t\t\t戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");
                 printf("\t\t\t\t\t\t弛1.堅  偌  跡  煙              弛\n");
                 printf("\t\t\t\t\t\t戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");
                 printf("\t\t\t\t\t\t弛2.堅  偌  蛔  煙              弛\n");
                 printf("\t\t\t\t\t\t戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");
                 printf("\t\t\t\t\t\t弛3.堅  偌  薯  貲              弛\n");
                 printf("\t\t\t\t\t\t戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");
                 printf("\t\t\t\t\t\t弛4.ぬ 酈 雖 跡 煙              弛\n");
                 printf("\t\t\t\t\t\t戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");
                 printf("\t\t\t\t\t\t弛5.ぬ 酈 雖 蛔 煙              弛\n");
                 printf("\t\t\t\t\t\t戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");
                 printf("\t\t\t\t\t\t弛6.ぬ 酈 雖 薯 剪              弛\n");
                 printf("\t\t\t\t\t\t戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");
                 printf("\t\t\t\t\t\t弛7.謙  猿  ж  晦              弛\n");
                 printf("\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
                 printf("\t\t\t\t\t\tInput Number :");
                 scanf("%d",&num);

                  functionA(num);


          }
}

void business()
{
                system("clear");
         printf("\n\n\t\t\t\t\t\tWelcom Buyer\n");
         printf("\t\t\t\t\t\t Please Wait");
         sleep(3);
         while(num!=6)
          {
                system("clear");
                 printf("\t\t\t\t\t\t忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
                 printf("\t\t\t\t\t\t弛         View Of Buyer        弛\n");
                 printf("\t\t\t\t\t\t戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");
                 printf("\t\t\t\t\t\t弛1.ぬ酈雖滌 掘衙⑷��           弛\n");
                 printf("\t\t\t\t\t\t戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");
                 printf("\t\t\t\t\t\t弛2.橾濠滌  っ衙 ⑷��           弛\n");
                 printf("\t\t\t\t\t\t戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");
                 printf("\t\t\t\t\t\t弛3.霜   錳   ⑷   ��           弛\n");
                 printf("\t\t\t\t\t\t戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");
                 printf("\t\t\t\t\t\t弛4.霜   錳   蹺   陛           弛\n");
                 printf("\t\t\t\t\t\t戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");
                 printf("\t\t\t\t\t\t弛5.霜   錳   薯   剪           弛\n");
                 printf("\t\t\t\t\t\t戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣\n");
                 printf("\t\t\t\t\t\t弛6.謙   猿   ж   晦           弛\n");
                 printf("\t\t\t\t\t\t戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
                 printf("\t\t\t\t\t\tInput Number :");
                 scanf("%d",&num);
                 functionB(num);
          }
}
