#include<stdio.h>
void print_word(int n)
{
    static k=0;
    if(k<n)
    {
        printf("bangladesh\n");
        print_word(n-1);
        printf("the\n");
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    print_word(a);
    return 0;
}
