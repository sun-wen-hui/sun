#include<stdio.h>
double fact(int n);
int main(){
	int i,n;
	double m;
	scanf("%d",&n);
	m=0;
	for(i=1;i<=n;i++){
		m=m+fact(i);
	}printf("%.0lf",m);
	return 0;
}double fact(int n){
	double x;
	int i;x=1;
	for(i=1;i<=n;i++){
		x=x*i;
	}return x;
}
