#include<stdio.h>
main (){
   char a[50] ;
   clrscr();
   printf (“enter a string”);
   gets (a);
   strrev (a);
   printf(“reversed string = %s”,a)
   getch ();
}