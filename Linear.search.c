//linear search
#include<stdio.h>
int main()
{
    int arr[50],check,i,lim;
    printf("enter the limit\n");
    scanf("%d",&lim);
    for(i=0;i<lim;i++){
        printf("enter the number \n");
        scanf("%d",&arr[i]);}
    printf("enter the number to check in the array\n");
    scanf("%d",&check);
     for(i=0;i<lim;i++){
        if(arr[i]==check){
            printf("number found at the index  %d",i);}
  }
    return 0;
}
