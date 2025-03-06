//prime number 
#include<stdio.h>
int main()
{
    int n,i=2,flag=0;
    printf("enter the number");
    scanf("%d",&n);
    if (n==2){
        printf("its maybe odd or even");}
     else{
         while(i<n-1){
             if(n%i!=0){
                 i=i+1;
                 continue;}
             else{
                 flag=1;
                 break;}}
       if(flag==0){
                 printf("its a prime number");}
        else{
                  printf("its not a prime number");}
         }
         return 0;
 }
           
            
                 
             
        
    
