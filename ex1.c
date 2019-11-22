#include <stdio.h>

#define IN  1  
#define OUT 0 

main()
{
printf("Please enter any letter with a total length of no more than 50 characters");
    char m[50];
     int i,nl,state;
     state=OUT;

     nl=0;
     getchar();
     while(m[i]!="\0"){
         ++i;
         if(m[i]==''||m[i]=='/n'||m[i]=='\t')
         state=OUT;
         else if(state==OUT){
             state=IN;
             ++nl;
         }
     }
     printf("the number of word is=%d",nl);
} 
