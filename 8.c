#include<stdio.h>
int main()
{
    float w1,w2,n1,n2,avg;
    scanf("%f%f",&w1,&w2);
    scanf("%f%f",&n1,&n2);
    avg=(w1+w2)/(n1+n2);
    printf("Average value = %.2f\n",avg);

    return 0;
}
