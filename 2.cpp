#include<stdio.h>
int main(){
	int a,b,m,n,i;
	while(scanf("%d%d",&a,&b)!=EOF){
	m=0;n=0;
	if(a>b){int x;x=a;a=b;b=x;}
	for(i=a;i<=b;i++){
	if(i%2==0){m=i*i+m;}
		else{n=i*i*i+n;}}
	printf("%d %d",m,n);
	}return 0;
}
