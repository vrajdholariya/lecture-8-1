// write a program the addition operation of two 1D array & store it in another array. keep in mind that both array size must be the same .

#include<stdio.h>
 void main(){
 
   int x,y;
   printf("Enter the size of array :-");
   scanf("%d",&y);
   
   int a[y];
   printf("Enter the array size :-");
   for(x=0;x<y;x++){
   	printf("a[%d]=",x);
   	scanf("%d",&a[x]);
   }
   
   int b[y];
   printf("enter b elements\y");
   for(x=0;x<y;x++){
   	prinf("b[%d]=",x);
   	scanf("%d",&b[x]);
   }
   
   int c[y];
   for(x=0;x<y;x++){
   	c[x]=a[x]+b[x];
   }
   for(x=0;x<y;x++){
   	printf("array is c[%d]=%d\n",x,c[x]);
   }
}
