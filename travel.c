#include "header.h"

void travel(int city)
{
    char array[city][20];
    printf("Please Enter City Names:\n");
    for (int i = 0; i < city; i++)
    {
        scanf("%s",array[i]);
    }
    cost=(int**)malloc(sizeof(int*)*city);
    for (int i = 0; i < city; i++)
    {
        cost[i]=(int*)malloc(sizeof(int)*city);
    }
    
    for (int i = 0; i < city; i++)
    {
        cost[i][i]=0;
    }
    for (int i = 0; i < city; i++)
    {
        for (int j = 0; j < city; j++)
        {
            if (i!=j)
            {
                printf("Enter Cost for %s to %s:",array[i],array[j]);
                scanf("%d",&cost[i][j]);
            }
            
        }
        
    }

    dp=(int**)malloc((1<<city)*sizeof(int*));
    int ALL_VISIT = (1<<city)-1;
    for (int i = 0; i < (1<<city); i++)
    {
        dp[i]=(int*)malloc(city*sizeof(int));
        for (int j = 0; j < city; j++)
        {
            dp[i][j]=-1;
        }
    }
    
    int ans=tsp(1,0,city,ALL_VISIT);
    printf("%d",ans);
    delay(3000);
    
    
    
    


}
int min(int a,int b)
{
    if (a<b)
    {
        return a;
    }else
    {
        return b;
    }
    
}
int tsp(int mask,int pos,int city,int ALL_VISIT)
{
    if (mask==ALL_VISIT)
    {
        return cost[pos][0];
    }
    if (dp[mask][pos]!=-1)
    {
        return dp[mask][pos];
    }
    
    int ans=INT16_MAX;
    for (int i = 0; i < city; i++)
    {
        if ((mask & (1<<i)) == 0)
        {
            int anss = cost[pos][i] + tsp((mask | (1<<i)), i , city , ALL_VISIT );
            ans = min(ans,anss);
        }
        
    }
    return dp[mask][pos]=ans;
    
    
}