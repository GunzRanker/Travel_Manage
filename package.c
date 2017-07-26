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
                  printf("\t\t\t\t\t¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
                  printf("\t\t\t\t\t¦¢                   Travel ManageMent Program                  ¦¢\n");
                  printf("\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¨¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                  printf("\t\t\t\t\t¦¢1. °í     °´ ¦¢ 2. °ü  ¸®  ÀÚ ¦¢ 3. »ç  ¾÷  ÀÚ ¦¢ 4.ÇÁ·Î±×·¥Á¾·á ¦¢\n");
                  printf("\t\t\t\t\t¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦ª¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦ª¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦ª¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
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
                 printf("\t\t\t\t\t\t¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
                 printf("\t\t\t\t\t\t¦¢        View Of Customer      ¦¢\n");
                 printf("\t\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                 printf("\t\t\t\t\t\t¦¢1.¿© Çà ÆÐ Å° Áö              ¦¢\n");
                 printf("\t\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                 printf("\t\t\t\t\t\t¦¢2.ÁÖ  ¹®  ÇÏ  ±â              ¦¢\n");
                 printf("\t\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                 printf("\t\t\t\t\t\t¦¢3.ÁÖ  ¹®  Ãë  ¼Ò              ¦¢\n");
                 printf("\t\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                 printf("\t\t\t\t\t\t¦¢4.ÁÖ  ¹®  È®  ÀÎ              ¦¢\n");
                 printf("\t\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                 printf("\t\t\t\t\t\t¦¢5.Á¾  ·á  ÇÏ  ±â              ¦¢\n");
                 printf("\t\t\t\t\t\t¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
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
                 printf("\t\t\t\t\t\t¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
                 printf("\t\t\t\t\t\t¦¢      View Of Administrator   ¦¢\n");
                 printf("\t\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                 printf("\t\t\t\t\t\t¦¢1.°í  °´  ¸ñ  ·Ï              ¦¢\n");
                 printf("\t\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                 printf("\t\t\t\t\t\t¦¢2.°í  °´  µî  ·Ï              ¦¢\n");
                 printf("\t\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                 printf("\t\t\t\t\t\t¦¢3.°í  °´  Á¦  ¸í              ¦¢\n");
                 printf("\t\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                 printf("\t\t\t\t\t\t¦¢4.ÆÐ Å° Áö ¸ñ ·Ï              ¦¢\n");
                 printf("\t\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                 printf("\t\t\t\t\t\t¦¢5.ÆÐ Å° Áö µî ·Ï              ¦¢\n");
                 printf("\t\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                 printf("\t\t\t\t\t\t¦¢6.ÆÐ Å° Áö Á¦ °Å              ¦¢\n");
                 printf("\t\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                 printf("\t\t\t\t\t\t¦¢7.Á¾  ·á  ÇÏ  ±â              ¦¢\n");
                 printf("\t\t\t\t\t\t¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
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
                 printf("\t\t\t\t\t\t¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
                 printf("\t\t\t\t\t\t¦¢         View Of Buyer        ¦¢\n");
                 printf("\t\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                 printf("\t\t\t\t\t\t¦¢1.ÆÐÅ°Áöº° ±¸¸ÅÇöÈ²           ¦¢\n");
                 printf("\t\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                 printf("\t\t\t\t\t\t¦¢2.ÀÏÀÚº°  ÆÇ¸Å ÇöÈ²           ¦¢\n");
                 printf("\t\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                 printf("\t\t\t\t\t\t¦¢3.Á÷   ¿ø   Çö   È²           ¦¢\n");
                 printf("\t\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                 printf("\t\t\t\t\t\t¦¢4.Á÷   ¿ø   Ãß   °¡           ¦¢\n");
                 printf("\t\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                 printf("\t\t\t\t\t\t¦¢5.Á÷   ¿ø   Á¦   °Å           ¦¢\n");
                 printf("\t\t\t\t\t\t¦§¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦©\n");
                 printf("\t\t\t\t\t\t¦¢6.Á¾   ·á   ÇÏ   ±â           ¦¢\n");
                 printf("\t\t\t\t\t\t¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
                 printf("\t\t\t\t\t\tInput Number :");
                 scanf("%d",&num);
                 functionB(num);
          }
}
