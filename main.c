#include <stdio.h>
//1092
int main() {
    int i, j, n, n1, sum = 0, t; //初始化定义变量
    scanf("%d", &n);             //n为外循环总次数
//    while(~scanf("%d",&n) && n!=0)
    for (j = 0; j < n; j++) {    //外循环开始
        scanf("%d", &n1);        //内循环（即所需加的元素个数）
        for (i = 0; i < n1; i++) {
            scanf("%d", &t);
            sum += t;            //累加
        }
        printf("%d\n\n", sum);  //注意格式\n\n代表隔了两行
        sum = 0;                //归零
    }
    return 0;
}