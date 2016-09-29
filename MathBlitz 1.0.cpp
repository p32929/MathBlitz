#include<bits/stdc++.h>
using namespace std;

void menu()
{
    printf("1. Level 1 (Number range: 1~10)\n");
    printf("2. Level 2 (Number range: 1~20)\n");
    printf("3. Level 3 (Number range: 1~50)\n");
    printf("4. Level 4 (Number range: 1~100)\n");
    printf("5. Level 5 (Number range: 1~200)\n");
    return;
}

void l1()
{
    int a,b,c,d,z,m,temp;
    time_t t;
    srand((unsigned) time(&t));
    printf("Level 1 selected\n(To select another level, simply restart the program)\n");
    while(1)
    {
        z=rand()%5+1;
        a=rand()%9+1;
        b=rand()%9+1;
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(z==1)
        {
            c=a+b;
            printf("%d + %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
        else if(z==2)
        {
            c=a-b;
            printf("%d - %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
        else if(z==3)
        {
            c=a*b;
            printf("%d * %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
        else if(z==4)
        {
            if(a%b!=0)
            {
                m=a%b;
                a-=m;
            }
            c=a/b;
            printf("%d / %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
    }
}

void l2()
{
    int a,b,c,d,z,m,temp;
    time_t t;
    srand((unsigned) time(&t));
    printf("Level 2 selected\n(To select another level, simply restart the program)\n");
    while(1)
    {
        z=rand()%5+1;
        a=rand()%19+1;
        b=rand()%19+1;
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(z==1)
        {
            c=a+b;
            printf("%d + %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
        else if(z==2)
        {
            c=a-b;
            printf("%d - %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
        else if(z==3)
        {
            c=a*b;
            printf("%d * %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
        else if(z==4)
        {
            if(a%b!=0)
            {
                m=a%b;
                a-=m;
            }
            c=a/b;
            printf("%d / %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
    }
}

void l3()
{
    int a,b,c,d,z,m,temp;
    time_t t;
    srand((unsigned) time(&t));
    printf("Level 3 selected\n(To select another level, simply restart the program)\n");
    while(1)
    {
        z=rand()%5+1;
        a=rand()%49+1;
        b=rand()%49+1;
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(z==1)
        {
            c=a+b;
            printf("%d + %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
        else if(z==2)
        {
            c=a-b;
            printf("%d - %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
        else if(z==3)
        {
            c=a*b;
            printf("%d * %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
        else if(z==4)
        {
            if(a%b!=0)
            {
                m=a%b;
                a-=m;
            }
            c=a/b;
            printf("%d / %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
    }
}

void l4()
{
    int a,b,c,d,z,m,temp;
    time_t t;
    srand((unsigned) time(&t));
    printf("Level 4 selected\n(To select another level, simply restart the program)\n");
    while(1)
    {
        z=rand()%5+1;
        a=rand()%99+1;
        b=rand()%99+1;
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(z==1)
        {
            c=a+b;
            printf("%d + %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
        else if(z==2)
        {
            c=a-b;
            printf("%d - %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
        else if(z==3)
        {
            c=a*b;
            printf("%d * %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
        else if(z==4)
        {
            if(a%b!=0)
            {
                m=a%b;
                a-=m;
            }
            c=a/b;
            printf("%d / %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
    }
}

void l5()
{
    int a,b,c,d,z,m,temp;
    time_t t;
    srand((unsigned) time(&t));
    printf("Level 5 selected\n(To select another level, simply restart the program)\n");
    while(1)
    {
        z=rand()%5+1;
        a=rand()%199+1;
        b=rand()%199+1;
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(z==1)
        {
            c=a+b;
            printf("%d + %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
        else if(z==2)
        {
            c=a-b;
            printf("%d - %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
        else if(z==3)
        {
            c=a*b;
            printf("%d * %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
        else if(z==4)
        {
            if(a%b!=0)
            {
                m=a%b;
                a-=m;
            }
            c=a/b;
            printf("%d / %d = ", a,b);
            scanf("%d", &d);
            if(c==d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
    }
}

int main()
{
    int n;
    printf("Select level:\n");
    menu();
    scanf("%d", &n);
    switch(n)
    {
    case 1:
        l1();
        break;
    case 2:
        l2();
        break;
    case 3:
        l3();
        break;
    case 4:
        l4();
        break;
    case 5:
        l5();
        break;
    default:
        printf("Incorrect choice|n");
        break;
    }
    return 0;
}

