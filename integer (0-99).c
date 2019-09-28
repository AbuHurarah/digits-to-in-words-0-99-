#include<stdio.h>
int main()
{
    int a,n1,n2;
    printf("Enter the digits (0-99)");
    scanf("%d",&a);
    if(a>19)
    {
        n1=a%10;
        n2=a/10;
    switch(n2)
    {


    case 2:printf("Twenty");break;
    case 3:printf("Thirty");break;
    case 4:printf("Fourty");break;
    case 5:printf("Fifty");break;
    case 6:printf("Sixty");break;
    case 7:printf("Seventy");break;
    case 8:printf("Eighty");break;
    case 9:printf("Nighty");break;
    }
    switch(n1)
    {


    case 1:printf("One");break;
    case 2:printf("Two");break;
    case 3:printf("Three");break;
    case 4:printf("Four");break;
    case 5:printf("Five ");break;
    case 6:printf("Six");break;
    case 7:printf("Seven");break;
    case 8:printf("Eight");break;
    case 9:printf("nine");break;
    }
    }
else {
    switch(a)
{
    case 1: printf("Zero");break;
    case 2: printf("One");break;
    case 3: printf("Two");break;
    case 4: printf("Three");break;
    case 5: printf("Four");break;
    case 6: printf("Five");break;
    case 7: printf("Six");break;
    case 8: printf("Seven");break;
    case 9: printf("Eight");break;
    case 10: printf("Nine");break;
    case 11: printf("Ten");break;
    case 12: printf("Elevem");break;
    case 13: printf("Twelve");break;
    case 14: printf("Thirteen");break;
 case 15: printf("Fourteen");break;
        case 16: printf("Fifteen");break;
    case 17: printf("Sixteen");break;
    case 18: printf("Seventeen");break;
    case 19: printf("Eighteen");break;
    case 20: printf("Ninteen");break;
}
}
 return 0;
}
