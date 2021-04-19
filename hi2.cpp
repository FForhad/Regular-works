#include<iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Enter the number of Vertex: ";
    int x;
    cin >> x;
    int matrix[x+1][x+1];
    cout << "Enter the adjacency list:" << endl;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x;j++)
        {
            cin >> matrix[i][j];
        }
    }
    int visited[x+1]={0};
    queue < int > q;
    //q.clear():
    int m=1;
    visited[m]=1;
    vector<int> v;
    cout << endl << endl;
    while(1)
    {
        for(int l=1;l<=x;l++)
        {
            if(matrix[visited[m]][l]==1)
            {
                if(visited[l]==0)
                {
                    if(binary_search(v.begin(), v.end(), l))
                        ;
                    else
                    {
                        q.push(l);
                        v.push_back(l);
                    //cout << l ;
                    }

                }

            }
        }
    cout << visited[m] << " " << q.front() << " " << q.back() << endl;
        m++;
        if(m==x+1)
            break;
            visited[m]=q.front();
            q.pop();
    }
    for(int n=1;n<=x;n++)
    {
        cout << visited[n] << " ";
    }
    cout << endl;

}
