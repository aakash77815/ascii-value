#include<stdio.h>
int main(){
   char ch;
   scanf("%c",&ch);
   if(ch>=97&&ch<=122){
    printf("%d",ch);
   }
   else if(ch>=65&&ch<=90){
    printf("%d",ch);
   }
   else{
    printf("none");
   }
   return 0;
}
