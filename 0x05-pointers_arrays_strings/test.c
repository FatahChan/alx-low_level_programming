#include <stdio.h>
int main(){
    char *s = "Hello";
    int i;
    for (i = 0; s[i] != '\0';)
    {
        i++;
    }

    printf("%d", i);
}