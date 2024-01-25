#include <stdio.h>

void printArr(char a[], int n)
{   
    int i;
    for(int i = 0; i < n; i++)
    {
        putchar(a[i]);
    }
}

void printReversed(int n)
{   int a, digit;
    while (n > 0)
    {
        a = n%10;
        digit = a + '0';
        putchar(digit);
        n = n/10;
    }
}

int convertInt (char a[], int n)
{   
    int ans;

    for(int i = n-1; i >= 0; i--)
    {
      
    }
    int T = ans/10;

    // printf("%d", T);
    printf("%d", ans);
}

int addReversedInt(char a[], int n, char b[], int m) 
{
    int firstNum = convertInt(a,n);
    int secondNum = convertInt(b,m);
    int ans;
    return ans = firstNum + secondNum;

}

int main()
{
    char a[] = {'H', 'e','l', 'l', 'o',' ', 'W','o','r','l','d'};
    int n = sizeof(a);

    // printArr(a,n);
    
    // printf("\n");

    // printReversed(321);

    // printf("\n");

    // printReversed(9072004);
    
    printf("\n");

    char intArray[] = {'3','2','1'};
    n = sizeof(intArray);
    
    convertInt(intArray, n);

    printf("\n");

    char intArray2[] = {'6','5','4'};
    int m = sizeof(intArray2);

    // addReversedInt(intArray,n,intArray2,m);




    
    printf("\n");

    return 0;
}