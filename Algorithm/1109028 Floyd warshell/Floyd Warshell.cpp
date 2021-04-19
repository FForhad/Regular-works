#include<bits/stdc++.h>
using namespace std;

#define nV   5
#define inf  1000000
#define INF  1000000
#define linf 100000

static int step = 0;

void printMatrix(int graph[nV][nV])
{
    for (int i = 0; i < nV; i++)
    {
        if(i==0)
        {
            cout<<"  D^(" << step++ << ") = |";
        }
        else
            cout<<"          |";
        for (int j = 0; j < nV; j++)
        {
            if (graph[i][j] == INF || graph[i][j] >= linf)
                printf("%6s", "INF");
            else
                printf("%6d", graph[i][j]);
        }
        printf(" |\n");
    }
}

void floydWarshall(int graph[nV][nV])
{
    for (int k = 0; k < nV; k++)
    {
        for (int i = 0; i < nV; i++)
        {
            for (int j = 0; j < nV; j++)
            {
                if (graph[i][k] + graph[k][j] < graph[i][j])
                    graph[i][j] = graph[i][k] + graph[k][j];
            }
        }
        cout << endl << endl;
        printMatrix(graph);
    }
}



int main()
{

    int graph[nV][nV];
    string s;
    freopen("Floyd Warshell input.txt","r",stdin);
    for(int i=0;i<nV;i++)
    {
        for(int j=0;j<nV;j++)
        {

            cin>>s;
            if(s=="e" || s=="inf")
            {
                graph[i][j]=inf;
            }
            else
            {
                stringstream push(s);
                push>>graph[i][j];
            }
        }
    }
    cout<<endl<<endl;

    printMatrix(graph);
    floydWarshall(graph);
}
