#include<stdio.h>
int main()
{
  int mat1[50][50],mat2[50][50],res[50][50];
  int row1,row2,col1,col2,i,j;
  printf("enter the row size of first matrix\n");
  scanf("%d",&row1);
  printf("enter the column size of first matrix\n");
  scanf("%d",&col1);
  printf("enter the row size of first matrix\n");
  scanf("%d",&row2);
  printf("enter the column size of first matrix\n");
  scanf("%d",&col2);
  if(row1==row2&&col1==col2){
  for(i=0;i<row1;i++){
      printf("enter the row %d \n",i);
  for(j=0;j<col1;j++){
    printf("enter the element \n");
    scanf("%d",&mat1[i][j]);
  }
  }
  printf("matrix 2 \n");
  for(i=0;i<row2;i++){
      printf("enter the row %d \n",i);
  for(j=0;j<col2;j++){
    printf("enter the element \n");
    scanf("%d",&mat2[i][j]);
  }
  }
for(i=0;i<row1;i++){
  for(j=0;j<row1;j++){
   res[i][j]=mat1[i][j]+mat2[i][j];
  }
  }
for(i=0;i<row1;i++){
  for(j=0;j<row1;j++){
    printf("%d",res[i][j]);
  }
  }
 }
 else{
     printf("addtion is not possible");
 }
 return 0;
}
