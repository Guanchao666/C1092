//
// Created by 86176 on 2020/2/22.
//
#include <stdio.h>

int main() {
    int i, j, sum = 0, t, m, a, b;
    scanf("%d", &m);
    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);
        if (a < 0 || b > 600000) break;
        for (i = 0; i < a; i++)
        {
            if (a % i == 0) sum += i;
        }
        if (sum == b)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
