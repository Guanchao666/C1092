#include<stdio.h>
#include<string.h>
void passwd(char passwd);
int main() {
	int m;
	char passwd[20];
	scanf("%d",&m);
	getchar();
	while(m--) {
		gets(passwd);
		fun(passwd);
	}
	return 0;
}

void fun(char *passwd) {
	int i,count,countA,counta,count0,countchar;
	int length=strlen(passwd);
	if(length<8 || length >16) {
		printf("NO\n");
		return ;
	}
	for(i=0; i<length; i++) {
		if(passwd[i]>='A' && passwd[i]<='Z' && countA==0) countA++;
		if(passwd[i]>='a' && passwd[i]<='z' &&counta==0) counta++;
		if(passwd[i]>='0' && passwd[i]<='9' &&count0==0) count0++;
		if((passwd[i]=='!' | passwd[i]=='@'|passwd[i]=='~'| passwd[i]=='#'
		        ||passwd[i]=='$'||passwd[i]=='%'||passwd[i]=='^' )&& countchar==0) countchar++;
	}
	if(countA+counta+count0+countchar>=3)
		printf("YES\n");
	else
		printf("NO\n");
	return;

}
