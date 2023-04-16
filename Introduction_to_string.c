//------------------- String Input part 2 ---------------------------

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    gets(str);

    printf("%s",str);
    
    return 0;
}


// //------------------- String Input ---------------------------

// #include<stdio.h>
// int main()
// {
//     char str[6];// size ek besi nite hbe input er cheye
//     // scanf("%s",str); // rahat
//     scanf("%s",&str); // rahat //space er ag prjnto input nibe
//     printf("%s",str); // rahat
    
//     return 0;
// }




// //--------------- string initialize and print ----------------------

// #include <stdio.h>
// int main()
// {
//     // char s[6] = {'r','a','h','a','t','\0'};
//     // char s[] = "Rahat\0";
//     // printf("%d\n",sizeof(s));

//     char s[6] = "Rahat";//size ek besi nite hbe, karon last a ora nijera ekta null bosay dibe
//     // null character means end of a string
//     printf("%s\n", s);

//     /*   for (int i = 0; i < 5; i++)
//         {
//             printf("%c\n",s[i]);
//         }    */

//     return 0;
// }

//--------------------------SIze of an array or a string(array of characters)--------------------------------

// #include<stdio.h>
// int main()
// {
//     int a[5];
//     char s[5];

//     printf("Showing size in byte: \n");
//     printf("%d\n",sizeof(a));
//     printf("%d\n",sizeof(int));

//     printf("Size of the array: %d\n",sizeof(a)/sizeof(int)); //sizeof(int) = 4;

//     int size = sizeof(s)/sizeof(char);
//     printf("Size of the string: %d\n",size); //sizeof(char) = 1;
// }

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