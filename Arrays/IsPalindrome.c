#include <stdio.h>

void main(){
    int n , i ,j, chk=1;
    printf("Enter the no. of elements");
    scanf("%d", n);
    int arr[n];
    for(i=0, j=n; i<n/2; i++,j--)
    if (arr[i] != arr[j]){
        chk =0;
        break;
    }
    if(chk == 1)
    printf("Is palindrome");
    else
    printf("Is palindrome");
}