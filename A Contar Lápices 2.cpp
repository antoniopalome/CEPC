#include <stdio.h>
int main (){
int a,b,c,d=0,x;
scanf("%d%d",&a,&b);
for(x=1;x<=a;x=x+1){
scanf("%d",&c);
if(c==b){
d=d+1;			
}
}
printf("%d",d);	
return 0;
}
