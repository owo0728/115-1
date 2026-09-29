#include <stdio.h>

int main()
{
    float a;
    float b;
    float c;
    printf("請輸入三角形的底(cm): ");
    scanf("%f", &a);
    printf("請輸入三角形的高(cm): ");
    scanf("%f", &b);
    c = 0.5 * a * b;
    printf("三角形的面積是: %.2f ", c);
    return 0;
}
