#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int noOranges = 0, noApples = 0;
    int s; 
    int t; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    scanf("%d %d",&a,&b);
    int m; 
    int n; 
    scanf("%d %d",&m,&n);
    int *apple = malloc(sizeof(int) * m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       scanf("%d",&apple[apple_i]);
    }
    for(int apple_i = 0; apple_i < m; apple_i++){
       int distance = a + apple[apple_i];
        if (distance>=s && distance<=t)
            {
            noApples++;
        }
    }
    int *orange = malloc(sizeof(int) * n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       scanf("%d",&orange[orange_i]);
    }
    for(int orange_i = 0; orange_i < n; orange_i++){
       int distance = b + orange[orange_i];
        if (distance>=s && distance<=t)
            {
            noOranges++;
        }
    }
    
    printf("%d\n", noApples);
    printf("%d", noOranges);
    return 0;
}
