#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int i = 0, count = 0;
    while(s[i] != '\0'){
        if(s[i]>='A' && s[i]<='Z')
            {
            count++;
        }
        i++;
    }
    count++;
    printf("%d", count);
    return 0;
}
