#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (c < a + b && b < a + c && a < b + c)
    {
        if (a == b && a == c)
            printf("���ﰢ��");
        else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
            printf("�̵�ﰢ��");
        else if ((a * a) + (b * b) == c * c)
            printf("�����ﰢ��");
        else
            printf("�ﰢ��");
    }
    else
        printf("�ﰢ���ƴ�");

    return 0;
}