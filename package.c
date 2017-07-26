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
                  printf("\t\t\t\t\t��������������������������������������������������������������������������������������������������������������������������������\n");
                  printf("\t\t\t\t\t��                   Travel ManageMent Program                  ��\n");
                  printf("\t\t\t\t\t��������������������������������������������������������������������������������������������������������������������������������\n");
                  printf("\t\t\t\t\t��1. ��     �� �� 2. ��  ��  �� �� 3. ��  ��  �� �� 4.���α׷����� ��\n");
                  printf("\t\t\t\t\t��������������������������������������������������������������������������������������������������������������������������������\n");
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
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��        View Of Customer      ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��1.�� �� �� Ű ��              ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��2.��  ��  ��  ��              ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��3.��  ��  ��  ��              ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��4.��  ��  Ȯ  ��              ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��5.��  ��  ��  ��              ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
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
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��      View Of Administrator   ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��1.��  ��  ��  ��              ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��2.��  ��  ��  ��              ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��3.��  ��  ��  ��              ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��4.�� Ű �� �� ��              ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��5.�� Ű �� �� ��              ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��6.�� Ű �� �� ��              ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��7.��  ��  ��  ��              ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
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
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��         View Of Buyer        ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��1.��Ű���� ������Ȳ           ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��2.���ں�  �Ǹ� ��Ȳ           ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��3.��   ��   ��   Ȳ           ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��4.��   ��   ��   ��           ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��5.��   ��   ��   ��           ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\t��6.��   ��   ��   ��           ��\n");
                 printf("\t\t\t\t\t\t����������������������������������������������������������������\n");
                 printf("\t\t\t\t\t\tInput Number :");
                 scanf("%d",&num);
                 functionB(num);
          }
}
