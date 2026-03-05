#include <stdio.h>
#define MAX 100
int main() {
    int a[MAX];
    int n = 0;
    int choice, x;
    int i, j, pos;
    int found;
    do {
        printf("\n----- MENU -----\n");
        printf("1. Add a value\n");
        printf("2. Search a value\n");
        printf("3. Remove the first existence of a value\n");
        printf("4. Remove all existences of a value\n");
        printf("5. Print out the array\n");
        printf("6. Print array in ascending order\n");
        printf("7. Print array in descending order\n");
        printf("Others - Quit\n");
        printf("Choose: ");
        scanf("%d", &choice);
        switch(choice) {
        case 1:
            if(n >= MAX){
                printf("Array is full\n");
            } else {
                printf("Enter value: ");
                scanf("%d", &x);
                a[n] = x;
                n++;
            }
            break;
        case 2:
            printf("Enter value to search: ");
            scanf("%d", &x);
            found = 0;
            for(i = 0; i < n; i++){
                if(a[i] == x){
                    printf("Found at position %d\n", i);
                    found = 1;
                    break;
                }
            }
            if(!found){
                printf("Not found\n");
            }
            break;
        case 3:
            printf("Enter value to remove: ");
            scanf("%d", &x);
            pos = -1;
            for(i = 0; i < n; i++){
                if(a[i] == x){
                    pos = i;
                    break;
                }
            }
            if(pos == -1){
                printf("Not found\n");
            } else {
                for(i = pos; i < n-1; i++){
                    a[i] = a[i+1];
                }
                n--;
                printf("Removed\n");
            }
            break;
        case 4:
            printf("Enter value to remove: ");
            scanf("%d", &x);
            for(i = 0; i < n; i++){
                if(a[i] == x){
                    for(j = i; j < n-1; j++){
                        a[j] = a[j+1];
                    }
                    n--;
                    i--;
                }
            }
            printf("Done\n");
            break;
        case 5:
            if(n == 0){
                printf("Array is empty\n");
            } else {
                printf("Array: ");
                for(i = 0; i < n; i++){
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
            break;
        case 6:
            if(n == 0){
                printf("Array is empty\n");
            } else {
                printf("Ascending: ");
                for(i = 0; i < n-1; i++){
                    for(j = i+1; j < n; j++){
                        if(a[i] > a[j]){
                            int temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;
                        }
                    }
                }
                for(i = 0; i < n; i++){
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
            break;
        case 7:
            if(n == 0){
                printf("Array is empty\n");
            } else {
                printf("Descending: ");
                for(i = 0; i < n-1; i++){
                    for(j = i+1; j < n; j++){
                        if(a[i] < a[j]){
                            int temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;
                        }
                    }
                }
                for(i = 0; i < n; i++){
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
            break;
        default:
            printf("Exit program\n");
        }
    } while(choice >= 1 && choice <= 7);
    return 0;
}