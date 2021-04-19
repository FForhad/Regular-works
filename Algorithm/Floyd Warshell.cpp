#include<bits/stdc++.h>
using namespace std;

#define nV   5
#define inf  1000000
#define INF  1000000
#define linf 100000

static int step = 0;

void printMatrix(int matrix[][nV])
{
    for (int i = 0; i < nV; i++)
    {
        if(i==0)
        {
            cout << "  D^(" << step++ << ") = |";
        }
        else
            cout << "          |";
        for (int j = 0; j < nV; j++)
        {
            if (matrix[i][j] == INF  || matrix[i][j] >= linf)
                printf("%6s", "INF");
            else
                printf("%6d", matrix[i][j]);
        }
        printf(" |\n");
    }
}

void floydWarshall(int graph[][nV])
{
    int matrix[nV][nV], i, j, k;

    for (i = 0; i < nV; i++)
        for (j = 0; j < nV; j++)
            matrix[i][j] = graph[i][j];

    for (k = 0; k < nV; k++)
    {
        for (i = 0; i < nV; i++)
        {
            for (j = 0; j < nV; j++)
            {
                if (matrix[i][k] + matrix[k][j] < matrix[i][j])
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
            }
        }
        cout << endl << endl;
        printMatrix(matrix);
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
    cout << endl << endl;

    printMatrix(graph);
    floydWarshall(graph);
}
