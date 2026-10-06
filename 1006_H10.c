#include <stdio.h>
int main()
{
    int login;
    int a;
    int b;
    int black;
    printf("請輸入登入狀態1:(已登入,0:未登入）:");
    scanf("%d",&login);
    printf("請輸入帳戶餘額：");
    scanf("%d",&a);
    printf("請輸入提款金額：");
    scanf("%d",&b);
    printf("請輸入黑名單狀態(1:是,0:否):");
    scanf("%d",&black);
    if(login==1&&a>=b&&!black)
    {
        printf("可提款");
    
    }
    else
    {
        printf("不可提款");
    }
   
return 0;

}