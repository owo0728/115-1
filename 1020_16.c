#include <stdio.h>
int main()
{
    int i,num;
    for (i=1;i<=10;i++) 
    {
        printf("開啟寶箱");
        scanf("%d",&num);
        if(num==8)
        {
            printf("找到神秘寶藏！位於寶箱 8。\n尋寶結束！");
            break;
        }
        if(num==4)
        {
            printf("寶箱 4 是空的，跳過\n");
            continue;
        }
    } 
    return 0;
}