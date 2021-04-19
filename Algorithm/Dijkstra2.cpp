#include<bits/stdc++.h>
using namespace std;

int graph[100][100];
int mindistance(int distance[], bool past[], int v)
{
	int minn = INT_MAX, min_index;

	for (int i = 0; i < v; i++)
		if (past[i] == 0 && distance[i] <= minn)
			minn = distance[i], min_index = i;
	return min_index;
}

void printSolution(int distance[], int v)
{
	for (int i = 0; i < v; i++)
		cout<<i<<" "<<distance[i]<<endl;
}

void dijkstra(int graph[][100], int src, int v)
{
	int distance[v];
	bool past[v];
	for (int i = 0; i < v; i++)
		distance[i] = INT_MAX, past[i] = 0;
	distance[src] = 0;

	for (int i = 0; i < v - 1; i++) {
		int u = mindistance(distance, past, v);

		past[u] = 1;
		for (int i = 0; i < v; i++)
			if (!past[i] && graph[u][i] && distance[u] != INT_MAX && distance[u] + graph[u][i] < distance[i])
				{
				    distance[i] = distance[u] + graph[u][i];
				}
	}
	printSolution(distance, v);
}

int main()
{
    int v,source;
    cin >> v;
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cin >> graph[i][j];
        }
    }
    cin >> source;
	dijkstra(graph, source, v);

	return 0;
}
