#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void  main( )
{
   char  c[128];
   int   a,b;


   srand(time(NULL));                      // 乱数の準備

   while ( 1 )
     {
       printf("\n*******サイコロを振ります。*******\n0を入力すると終了します。\n好きな数字を入力してください: ");
       gets(c); a=atoi(c);
       if ( a==0 ) break;

       b=rand( )%5+1;                      // 乱数発生

       printf(" >>> ");

       switch ( (a+b)%6 )
         {
           case  0: printf("\n+--------+\n|        |\n|   ●    |\n|        |\n+--------+\n"); break;

           case  1: printf("\n+--------+\n| ●      |\n|        |\n|     ●  |\n+--------+\n"); break;

           case  2: printf("\n+--------+\n| ●      |\n|   ●    |\n|     ●  |\n+--------+\n"); break;

           case  3: printf("\n+--------+\n| ●  ●   |\n|        |\n| ●  ●   |\n+--------+\n"); break;

           case  4: printf("\n+--------+\n| ●  ●   |\n|   ●    |\n| ●  ●   |\n+--------+\n"); break;

           case  5: printf("\n+--------+\n| ●  ●   |\n| ●  ●   |\n| ●  ●   |\n+--------+\n"); break;
  
         }
       printf("\n");
    }
}
   
 
