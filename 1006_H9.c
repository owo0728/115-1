#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("請輸入成績(分):");
    scanf("%d",&a);
    if(a<60)
    {
        printf("成績不及格");
    }
    else
    {
      printf("請輸入出席率(%):");
      scanf("%d",&b);
      if(b>=80)
      {
        printf ("課程通過");
      }
    }
return 0;

}