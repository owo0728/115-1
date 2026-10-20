#include <stdio.h>
int main()
{
    int a;
    printf("請輸入密碼(輸入-1退出)");
    scanf("%d",&a);
    while(a!=1234 && a!=-1)
    {
        printf("密碼錯誤,請重新輸入(輸入-1退出)");
        scanf("%d",&a);
    }
        if(a==1234)
        {
            printf("登入成功");
        }
        else
        {
            printf("已退出程式");
        }
    return 0;
}