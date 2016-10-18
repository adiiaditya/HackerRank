#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    int flag=0;
    scanf("%d %d",&n,&k);
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    int *friends = malloc(sizeof(int) * k);
    for(int friends_i = 0; friends_i < k; friends_i++){
       scanf("%d",&friends[friends_i]);
    }
    if(1<=k<=n<=1000)
        {
        for(int i=0; i<k; i++)
        {
            int id = friends[i];
            {
                if(s[id-1]== '0')
                    {
                    flag = 1;
                    break;
                break;
                }
                else
                {
                flag = 0;
            }
          }  
        }
    }
        if(flag == 0)
            printf("NO");
        else
            printf("YES");
    
    return 0;
}
