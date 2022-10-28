#include<stdio.h>
#include<conio.h>

int main(){

 int i,j,no;

  scanf("%d",&no);

  for(i=1;i<=no;i++){
   printf("\n");

    for(j=1;j<=i;j++){
     printf("* ");
    }
  }
 return 0;
 getch();
}
