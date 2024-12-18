#include <stdio.h>

int main() {
    char name[100];
    printf("Please write your name: ");
    scanf("%s", name); 
    printf("Welcome %s\n", name);  // Karşılama mesajı
    /*
     * C de type komudu olmadığı için o kısmı yazmadım.
     */

    return 0;
}
