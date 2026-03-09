#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
    system("cls");
    printf("INPUT:\n");
    //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int n;
    if(scanf("%d",&n)!=1 || n<=0){
        printf("OUTPUT:\n");
        printf("Invalid input\n");
        system("pause");
        return 0;
    }
    int a[100];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // Fixed Do not edit anything here.
    printf("OUTPUT:\n");
    int found = 0;
    for(int i=0;i<n;i++){
        if(a[i] % 2 == 0){

            int counted = 0;
            for(int k=0;k<i;k++){
                if(a[k] == a[i]){
                    counted = 1;
                    break;
                }
            }
            if(counted==0){
                int freq = 0;
                for(int j=0;j<n;j++){
                    if(a[j] == a[i]){
                        freq++;
                    }
                }
                printf("%d-%d\n",freq,a[i]);
                found = 1;
            }
        }
    }
    if(found==0){
        printf("Not found\n");
    }
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    system ("pause");
    return(0);
}