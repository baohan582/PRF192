#include <stdio.h>
#include <string.h>
int isVowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
       c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        return 1;
    return 0;
}
int countVowel(char str[]){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(isVowel(str[i]))
            count++;
    }
    return count;
}
int main(){
    char input[100];
    printf("Nhap vao chuoi: ");
    gets(input);
    int kq = countVowel(input);
    printf("So nguyen am: %d", kq);
    return 0;
}