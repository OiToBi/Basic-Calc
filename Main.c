int main()
{
    printf("Welcome to Basic-Calc.Basic-Calc is a free and open-source calculator that is under development.New web-site for the project shall be made soon.Basic-Calc currently only supports addition upto 3 numbers and basic subtraction.Thank you for using Basic-Calc,hope you enjoy it.To continue,press 'Enter' Thanks -Prajith");
    getchar();
    int a,b,c,d,e;
    printf("Usage Instructions:\n#If its addition you want to perform,then type 1.\n#If you want to perform subtraction,then type 2.\n#If you want to perform multiplication of two numbers,then press 3\n#Now press Enter");
    scanf("%d",&e);
    if(e == 1)
{
    printf("Enter the first number to be added:");
    scanf("%d",&a);
    printf("Enter the second number to be added:");
    scanf("%d",&b);
    printf("Enter the third number to be added:");
    scanf("%d",&c);
    d = a + b + c;
    printf("%d + %d + %d = %d\n",a,b,c,d);
}
    else if(e == 2)
{
    printf("Enter the number  from which the second number is to be subtracted:");
    scanf("%d",&a);
    printf("Enter second number which is to be subtracted from the original number:");
    scanf("%d",&b);
    c = a - b;
    printf("%d - %d = %d\n",a,b,c);
}
    else if(e == 3)
{
    printf("Enter the first number to be multiplied");
    scanf("%d",&a);
    printf("Enter the second number now:");
    scanf("%d",&b);
    c = a * b;
    printf("%d * %d = %d\n",a,b,c);
}
    getchar();
    return 0;
}
