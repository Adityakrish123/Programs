#include <stdio.h>
int main()
{
    int firstDigit, secondDigit ,thirdDigit;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &firstDigit,&secondDigit,&thirdDigit);
    printf("You have entered: ");
    switch (firstDigit)
    {
    switch (thirdDigit)
    {
    case 1:
        printf("hundred");
        break;
    case 2:
        printf("two-hundred");
        break;
    case 3:
        printf("three-hundred");
        break;
    case 4:
        printf("four-hundred");
        break;
    case 5:
        printf("five-hundred");
        break;
    case 6:
        printf("six-hundred");
        break;
    case 7:
        printf("seven-hundred");
        break;
    case 8:
        printf("eight-hundred");
        break;
    case 9:
        printf("nine-hundred");
        break;
    }
    case 2:
        switch (secondDigit)
        {
        case 0:
            printf("ten");
            return 0;
        case 1:
            printf("eleven");
            return 0;
        case 2:
            printf("twelve");
            return 0;
        case 3:
            printf("thirteen");
            return 0;
        case 4:
            printf("fourteen");
            return 0;
        case 5:
            printf("fifteen");
            return 0;
        case 6:
            printf("sixteen");
            return 0;
        case 7:
            printf("seventeen");
            return 0;
        case 8:
            printf("eigthteen");
            return 0;
        case 9:
            printf("nineteen");
          
        }
    case 2:
        printf("twenty");
        break;
    case 3:
        printf("thirty");
        break;
    case 4:
        printf("forty");
        break;
    case 5:
        printf("fifty");
        break;
    case 6:
        printf("sixty");
        break;
    case 7:
        printf("seventy");
        break;
    case 8:
        printf("eighty");
        break;
    case 9:
        printf("ninety");
        break;
    }
   
    switch (secondDigit)
    {
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    case 5:
        printf("five");
        break;
    case 6:
        printf("six");
        break;
    case 7:
        printf("seven");
        break;
    case 8:
        printf("eight");
        break;
    case 9:
        printf("nine");
        break;
    }
     
    return 0;
}
