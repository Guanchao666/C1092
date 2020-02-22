//
// Created by 86176 on 2020/2/22.
//
#include <stdio.h>
//
//int main() {
//	int i, j, sum = 0, t, m, a, b;
//	scanf("%d", &m);
//	for (i = 0; i < m; i++) {
//		scanf("%d%d", &a, &b);
////		if (a < 0 || b > 600000) break;
//		for (j = 0; j < a; i++) {
//			if (a % i == 0) sum += i;
//		}
//		if (sum == b)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}

void fun(int a,int b) {
    int suma=0,sumb=0,i,j;
    for(i=1; i<= a/2; i++) {
        if(a%i==0) suma+=i;
    }
    if(suma==b) {
        for(j=1; j<=b/2; j++) {
            if(b%j==0)
                sumb+=j;
        }
        if(sumb==a)
            printf("YES\n");
        else
            printf("NO\n");

    } else
        printf("NO\n");
    return;
}

int main() {
    int N,a,b,i;
    scanf("%d", &N);

    for(i=0; i<N; i++) {
        scanf("%d%d",&a,&b);
        if(a<0 || b>60000)
        {
            printf("Error! Please input numbers between 0~600000!\n");
            N=N+1;
            continue;
        }
        fun(a,b);
    }
    return 0;
}
