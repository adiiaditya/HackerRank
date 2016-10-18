#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct trades
    {
    int t1;
    int t2;
    int t3;
};

int main() {
    
    int i,n, maximum;
    scanf("%d",&n);
    struct trades trades[n];
    int dayHighest[n];
    for(i=0; i<n; i++)
        {
        scanf("%d %d %d", &trades[i].t1, &trades[i].t2, &trades[i].t3);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    for(i=0; i<n; i++)
        {
        if(trades[i].t1 >= trades[i].t2)
            {
            if(trades[i].t2 >= trades[i].t3)
                {
                dayHighest[i] = trades[i].t1+trades[i].t2;
            }
            else
                {
                dayHighest[i] = trades[i].t1+trades[i].t3;
            }
        }
            else if(trades[i].t1 <= trades[i].t2)
            {
            if(trades[i].t1 >= trades[i].t3)
                {
                dayHighest[i] = trades[i].t1+trades[i].t2;
            }
            else
                {
                dayHighest[i] = trades[i].t2+trades[i].t3;
            }
        }
    }
          
      maximum = dayHighest[0];
    for (i = 0; i<n ; i++)
    {
    if (dayHighest[i] > maximum)
    {
       maximum  = dayHighest[i];
    }
  }
    printf("%d", maximum);
    return 0;
}
