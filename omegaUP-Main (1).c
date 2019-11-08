#include<stdio.h>
int main(){
int a,x;
scanf("%d",&a);
if(a<=100000){
for(x=1;x<=a;x=x+1)
{
	printf(" %d",x);
}
}
return 0;
}