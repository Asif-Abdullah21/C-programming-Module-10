#include<stdio.h>
int main()
{
    int a[5];
    char s[5];

    printf("Showing size in byte: \n");
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(int));
    
    printf("Size of the array: %d\n",sizeof(a)/sizeof(int)); //sizeof(int) = 4;

    int size = sizeof(s)/sizeof(char);
    printf("Size of the string: %d\n",size); //sizeof(char) = 1;
}

//------------------------------------------------------------

// #include<stdio.h>
// int main()
// {
//     char a[5];

//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%c",&a[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%c\n",a[i]);
//     }
    
    
//     return 0;
// }