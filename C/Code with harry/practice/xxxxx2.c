#include<stdio.h>
int func()
{
    static int count = 0;
    count ++;
    return count;
}
int main()
{
    static int x;
    // int y;
    printf("%d ",x);
}