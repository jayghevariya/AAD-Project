#include "header.h"


void approximation()
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
    primMST();

}

int minKey(int key[], bool mstSet[])
{

	int min = INT16_MAX, min_index;

	for (int v = 0; v < city; v++)
		if (mstSet[v] == false && key[v] < min)
			min = key[v], min_index = v;

	return min_index;
}

void printMST(int parent[])
{
    int adj_list[city][city];
    for (int i = 0; i < city; i++)
    {
        for (int j = 0; j < city; j++)
        {
            adj_list[i][j]=-1;
        }
        
    }

    for (int i = 1; i < city; i++)
    {
        for (int j = 0; j < city; j++)
        {
            if (adj_list[parent[i]][j]==-1)
            {
                adj_list[parent[i]][j]=i;
                break;
            }
            
        }
        
    }
    
    int visit[city];

    for (int i = 0; i < city; i++)
    {
        visit[i]=-1;
    }
    indexs=0;
    path=(int*)malloc(sizeof(int)*city);
    dfs(adj_list,0,visit);
    int costss=0;
    for (int i = 0; i < city-1; i++)
    {
        costss += cost[path[i]][path[i+1]];
    }
    costss += cost[0][path[city-1]];
    printf("%d\n",costss);

    // for (int i = 0; i < city; i++)
    // {
    //     printf("%d ",path[i]);
    // }
    printf("\n");
    
    
    delay(10000);
}

void dfs(int adj_list[city][city],int start,int visit[city])
{
    visit[start]=1;
    path[indexs]=start;
    indexs++;


    for (int i = 0; i < city; i++)
    {
        if (adj_list[start][i]!=-1 && visit[adj_list[start][i]]==-1)
        {
            dfs(adj_list,adj_list[start][i],visit);
        }
        
    }
    
}

void primMST()
{
	int parent[city];
	int key[city];
	bool mstSet[city];

	for (int i = 0; i < city; i++)
		key[i] = INT16_MAX, mstSet[i] = false;

	key[0] = 0;
	parent[0] = -1; 

	for (int count = 0; count < city - 1; count++) {
		int u = minKey(key, mstSet);
		mstSet[u] = true;
		for (int v = 0; v < city; v++)
			if (cost[u][v] && mstSet[v] == false && cost[u][v] < key[v])
				parent[v] = u, key[v] = cost[u][v];
	}
    // printf("\n\n\n");
    // for (int i = 0; i < city; i++)
    // {
    //     printf("%d ",parent[i]);
    // }
    
    // printf("\n\n\n");


	printMST(parent);
}


