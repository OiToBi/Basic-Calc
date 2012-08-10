int main()
{
    printf("Welcome to Basic-Calc.Basic-Calc is a free and open-source calculator that is under development.New web-site for the project shall be made soon.Basic-Calc currently only supports addition upto 4 numbersThank you for using Basic-Calc,hope you enjoy it.To continue,please press the 'Enter' button Thanks -Prajith");
    getchar();
    int a,b,c,d;
    printf("Enter the first number to be added:");
    scanf("%d",&a);
    printf("Enter the second number to be added:");
    scanf("%d",&b);
    printf("Enter the third number to be added:");
    scanf("%d",&c);
    d = a + b + c;
    printf("%d + %d + %d = %d\n",a,b,c,d);
    getchar();
    return 0;
}
