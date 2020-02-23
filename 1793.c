#include<stdio.h>
int main() {
	int n,i,sum=0,m=0;
	scanf("%d",&n);
	if(n)
	for(i=1; i<=n; i++) {
		m=2*m+1;
		sum+=m;
	}
	printf("%d",sum);
	return 0;
}
