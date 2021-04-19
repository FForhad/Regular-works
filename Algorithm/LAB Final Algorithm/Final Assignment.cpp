#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;
#define nV   5
#define inf  1000000
#define INF  1000000
#define linf 100000
#define V 6
ll graph[100][100];

ll Merge(ll a[],ll s,ll m,ll e)
{

    ll x1,x2,i,j,k;
    x1=m-s+1;
    x2=e-m;
    ll A[x1],B[x2];
    for(i=0; i<x1; i++)
    {
        A[i]=a[s+i];
    }
    for(j=0; j<x2; j++)
    {
        B[j]=a[m+j+1];
    }
    i=0,j=0;
    for(k=s; i<x1&&j<x2; k++)
    {
        if(A[i]<B[j])
        {
            a[k]=A[i++];
        }
        else
        {
            a[k]=B[j++];
        }
    }
    while(i<x1)
    {
        a[k++]=A[i++];
    }
    while(j<x2)
    {
        a[k++]=B[j++];
    }
}

ll MergeSort(ll a[],ll s,ll e)
{
    ll m;
    if(s<e)
    {
        m=(s+e)/2;
        MergeSort(a,s,m);
        MergeSort(a,m+1,e);
        Merge(a,s,m,e);
    }
}

ll Partition(ll a[],ll s,ll e)
{
    ll pivot=a[e];
    ll i;
    for(i=s; i<e; i++)
    {
        if(a[i]<=pivot)
        {
            swap(a[i],a[s]);
            s++;
        }
    }
    swap(a[i],a[s]);
    return s;
}

void QuickSort(ll a[],ll s,ll e)
{
    if(s<e)
    {
        ll x=Partition(a,s,e);
        QuickSort(a,s,x-1);
        QuickSort(a,x+1,e);
    }
}

void Print(ll a[],ll v,ll k)
{
    for(ll i=v; i<k; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int mindistance(ll distance[], bool past[], ll v)
{
    ll minn = INT_MAX, min_index;

    for (ll i = 0; i < v; i++)
        if (past[i] == 0 && distance[i] <= minn)
            minn = distance[i], min_index = i;
    return min_index;
}

void printSolution(ll distance[], ll v)
{
    for (ll i = 0; i < v; i++)
        cout<<i<<" "<<distance[i]<<endl;
}

void dijkstra(ll graph[][100], ll src, ll v)
{
    ll distance[v];
    bool past[v];
    for (ll i = 0; i < v; i++)
        distance[i] = INT_MAX, past[i] = 0;
    distance[src] = 0;

    for (ll i = 0; i < v - 1; i++)
    {
        ll u = mindistance(distance, past, v);

        past[u] = 1;
        for (ll i = 0; i < v; i++)
            if (!past[i] && graph[u][i] && distance[u] != INT_MAX && distance[u] + graph[u][i] < distance[i])
            {
                distance[i] = distance[u] + graph[u][i];
            }
    }
    printSolution(distance, v);
}

ld x[101],y[101],z[101];
void FKnapsack(ll n,ll b)///n item and b=bag size;
{
    for(ll i=1; i<n; i++)
    {
        ll mx=i;
        for(ll j=i+1; j<=n; j++)
        {
            if(x[j]/y[j] > x[mx]/y[mx])
            {
                mx=j;
            }
        }
        swap(x[mx],x[i]);
        swap(y[mx],y[i]);
    }
    ll bag=b;
    ll i;
    for(i=1; i<=n; i++)
    {
        if(y[i]>bag) break;
        z[i]=1;
        bag-=y[i];
    }
    if(i<=n)
    {
        z[i]=bag/y[i];
    }
}

void profit(ll n)
{
    ld e=0;
    for(ll i=1; i<=n; i++)
    {
        e+=x[i]*z[i];
    }
    cout<<e<<endl;
}

void LCS(string s,string t)
{


    //cout<<"Enter 2 strings to get LCS :";

    //cin>>s>>t;
    ////freopen("LCSinput.txt","r",stdin);
    if(s.size()<t.size())swap(s,t);

    string p;
    ll e=0;
    ll k=0,f=0;
    for(ll i=0; i<s.size(); i++)
    {
        for(ll j=0; j<t.size(); j++)
        {
            if(s[i]==t[j])
            {
                i++;
                e++;
            }
        }
    }
    cout<<"LCS : "<<e<<endl;
}

ll Knapsack(ll b,ll y[],ll x[], ll n)
{
    //"X" for profit & "Y" for weight
    if(n==0 || b==0)
    {
        return 0;
    }
    if(y[n-1]>b)
    {
        return Knapsack(b,y,x,n-1);
    }
    else
    {
        return max(x[n-1]+Knapsack(b-y[n-1],y,x,n-1),Knapsack(b,y,x,n-1));
    }
}

static int step=0;
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
        for (ll j = 0; j < nV; j++)
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

void Prims(ll n,ll cost[100][100])
{
    ll a,b,u,v,i,j,ne=1;
    ll visited[10]= {0},minn,mincost=0;
    visited[1]=1;
    while(ne < n)
    {
        for(i=0,minn=INF; i<n; i++)
            for(j=0; j<n; j++)
                if(cost[i][j]< minn)
                    if(visited[i]!=0)
                    {
                        minn=cost[i][j];
                        a=u=i;
                        b=v=j;
                    }
        if(visited[u]==0 || visited[v]==0)
        {
            cout<<"Edge"<<ne++<<" :("<<a<<" "<<b<<")"<<"cost: "<<minn<<endl;
            mincost+=minn;
            visited[b]=1;
        }
        cost[a][b]=cost[b][a]=INF;
    }
    cout<<"Minimum cost is : "<<mincost<<endl<<endl;
}

ll ii,jj,k,xx,bx,u,v,n,nee=1;
ll minnx,mincost=0,cost[100][100],parent[9];
int find(ll ii)
{
    while(parent[ii])
        ii=parent[ii];
    return ii;
}
int uni(ll ii,ll jj)
{
    if(ii!=jj)
    {
        parent[jj]=ii;
        return 1;
    }
    return 0;
}

void Kruskal(ll cost[][100], ll n)
{
    while(nee < n)
    {
        for(ii=0,minnx=INT_MAX; ii<n; ii++)
        {
            for(jj=0; jj <n; jj++)
            {
                if(cost[ii][jj] < minnx)
                {
                    minnx=cost[ii][jj];
                    xx=u=ii;
                    bx=v=jj;
                }
            }
        }
        u=find(u);
        v=find(v);
        if(uni(u,v))
        {
            cout<<"Edge"<<nee++<<" :("<<xx<<" "<<bx<<")"<<"cost: "<<minnx<<endl;
            mincost +=minnx;
        }
        cost[xx][bx]=cost[bx][xx]=INF;
    }
    cout << "Minimum cost is : " << mincost << endl;
}

///..................................................................///
///''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''///

int main()
{
    while(1)
    {
        fstream file;
        ll choose,k,a[10000];
        cout<< "Choose your task:" << endl
            << "1. Sorting" << endl
            << "2. Greedy Programming" << endl
            << "3. Dynamic Programming" << endl;

        cin >> choose;
        if(choose==1)
        {
            ///Sorting



            cout<< "Choose your operation:" << endl
                << "1. Merge Sort" << endl
                << "2. Quick Sort" << endl
                << "3. Both" << endl;
            cin >> choose;
            if(choose==1)
            {
                ///MergeSort
                //freopen("sortinput.txt","r",stdin);
                //file.open("output.txt",ios::out);
                //freopen("output.txt","w",stdout);
                //cout<<"Enter the size of array: ";
                cin>>k;
                //cout<<"Enter all elements: ";
                for(ll i=0; i<k; i++)
                {
                    cin>>a[i];
                }

                cout<<"MergeSingleArray"<<endl;
                MergeSort(a,0,k-1);
                Print(a,0,k);

                break;
            }
            else if(choose==2)
            {
                ///QuickSort
                //freopen("sortinput.txt","r",stdin);
                //file.open("output.txt",ios::out);
                //freopen("output.txt","w",stdout);
                //cout<<"Enter the size of array: ";
                cin>>k;
                //cout<<"Enter all elements: ";
                for(ll i=0; i<k; i++)
                {
                    cin>>a[i];
                }

                QuickSort(a,0,k-1);
                cout<<"QuickSort"<<endl;
                Print(a,0,k);

                break;
            }
            else if(choose==3)
            {
                //freopen("sortinput.txt","r",stdin);
                //file.open("output.txt",ios::out);
                //freopen("output.txt","w",stdout);
                //cout<<"Enter the size of array: ";
                cin>>k;
                //cout<<"Enter all elements: ";
                for(ll i=0; i<k; i++)
                {
                    cin>>a[i];
                }
                MergeSort(a,0,k-1);
                cout<<"MergeSort"<<endl;
                Print(a,0,k);
                cout<<endl;
                QuickSort(a,0,k-1);
                cout<<"QuickSort"<<endl;
                Print(a,0,k);


                break;
            }
        }
        else if(choose==2)
        {
            cout<< "Choose your operation:" << endl
                << "1. Dijkstra Algorithm" << endl
                << "2. Minimum Spanning Tree(Prims & Krushkal)" << endl
                << "3. Fractional Knapsack" << endl;
            cin >> choose;
            if(choose==1)
            {
                ///Dijkstra

                /*int graph[V][V]= { { 0, 5, 4, 0, 0, 11},   A------>F-------->D
                			{ 0, 0, 0, 6, 13, 0},            |                 |
                			{ 0, 8, 0, 0, 12, 0},            |                 |
                			{ 0, 0, 0, 0, 0, 0},             |                 |
                			{ 0, 0, 0, 1, 0, 0},             |                 |
                			{ 0, 0, 0, 17, 0, 0}};*          B---------------->E */
                /**
                0 5 4 0 0 11
                0 0 0 6 13 0
                0 8 0 0 12 0
                0 0 0 0 0 0
                0 0 0 1 0 0
                0 0 0 17 0 0
                */
                ll v,source;
                //freopen("Dijkstrainput.txt","r",stdin);
                //file.open("output.txt",ios::out);
                //freopen("output.txt","w",stdout);
                cin >> v;
                for(ll i=0; i<v; i++)
                {
                    for(ll j=0; j<v; j++)
                    {
                        cin >> graph[i][j];
                    }
                }
                cin >> source;
                dijkstra(graph, source, v);

                break;
            }
            else if(choose==2)
            {
                cout<< "Choose your operation:" << endl
                    << "1. Prims" << endl
                    << "2. Kruskal" << endl;

                ////freopen("output.txt","w",stdout);

                cin>>choose;
                if(choose==1)
                {
                    ///prims;
                    ll n;
                    ll cost[100][100];
                    //cout<<"\nEnter the number of nodes:";
                     //freopen("primskruskal.txt","r",stdin);
                     //file.open("output.txt",ios::out);
                     //freopen("output.txt","w",stdout);
                    cin>>n;
                    //cout<<"\nEnter the adjacency matrix:\n";
                    for(ll i=0; i<n; i++)
                    {
                        for(ll j=0; j<n; j++)
                        {
                            scanf("%d",&cost[i][j]);
                            if(cost[i][j]==0)
                            {
                                cost[i][j]=INF;
                            }
                        }
                    }
                    Prims(n,cost);
                    /**
                    0 3 1 6 0 0
                    3 0 5 0 3 0
                    1 5 0 5 6 4
                    6 0 5 0 0 2
                    0 3 6 0 0 6
                    0 0 4 2 6 0
                    */

                    break;
                }
                else if(choose==2)
                {
                    ///kruskal;
                    //cout << "Enter the number of nodes:";
                    //freopen("primskruskal.txt","r",stdin);
                    //file.open("output.txt",ios::out);
                    //freopen("output.txt","w",stdout);
                    cin >> n;
                    //cout << "Enter the adjacency matrix:" << endl;
                    for(ii=0; ii<n; ii++)
                    {
                        for(jj=0; jj<n; jj++)
                        {
                            cin >> cost[ii][jj];
                            if(cost[ii][jj]==0)
                                cost[ii][jj]=INF;
                        }
                    }
                    Kruskal(cost, n);

                    break;
                }
            }
            else if(choose==3)
            {
                ///fractional Knapsack
                /**
                7 15

                12 3
                5 1
                16 4
                7 2
                9 9
                11 4
                6 3
                */

                ll n,b;
                //cout<<"Enter the value of item and capcity : ";

                //freopen("01knapsack_input.txt","r",stdin);
                //file.open("output.txt",ios::out);
                //freopen("output.txt","w",stdout);
                cin>>n>>b;
                //cout<<endl;
                //cout<<"Enter profit and weight: "<<endl;
                for(ll i=1; i<=n; i++)
                {
                    cin>>x[i]>>y[i];
                }
                FKnapsack(n,b);
                cout<<"the maximum profit is :";
                profit(n);



                break;
            }
        }
        else if(choose==3)
        {
            cout<< "Choose your operation:" << endl
                << "1. Floyd Warshall Algorithm" << endl
                << "2. Longest Common Subsequence" << endl
                << "3. 0/1 Knapsack" << endl;
            cin >> choose;
            if(choose==1)
            {
                ///Floyd Warshell
                /**
                0 3 8 e -4
                e 0 e 1 7
                e 4 0 e e
                2 e -5 0 e
                e e e 6 0
                */
                int graph[nV][nV];

                ////freopen("Floyd Warshell input.txt","r",stdin);
                //freopen("inputFloyd.txt","r",stdin);
                //file.open("output.txt",ios::out);
                //freopen("output.txt","w",stdout);
                for(int i=0; i<nV; i++)
                {
                    for(int j=0; j<nV; j++)
                    {
                        string s;
                        cin>>s;
                        if(s=="e" || s=="inf")
                        {
                            graph[i][j]=inf;
                        }
                        else
                        {
                            stringstream push(s);
                            push>>graph[i][j];//
                        }
                    }
                }
                cout<<endl<<endl;
                printMatrix(graph);
                floydWarshall(graph);
                cout<<endl;

                break;
            }
            else if(choose==2)
            {
                ///LCS;

                string s,t;
                //freopen("LCSinput.txt","r",stdin);
                //file.open("output.txt",ios::out);
                //freopen("output.txt","w",stdout);
                cin>>s>>t;
                LCS(s,t);

                break;
            }
            else if(choose==3)
            {
                ///Knapsack
                /**
                7 15

                12 3
                5 1
                16 4
                7 2
                9 9
                11 4
                6 3
                */

                ll n,b;
                //cout<<"Enter the value of item and capcity : ";
                //freopen("01knapsack_input.txt","r",stdin);
                //file.open("output.txt",ios::out);
                //freopen("output.txt","w",stdout);
                cin>>n>>b;
                //cout<<endl;
                cout<<"Enter profit and weight: "<<endl;
                ll xr[n],yr[n];

                for(ll i=0; i<n; i++)
                {
                    cin>>xr[i]>>yr[i];///profit and weight input;
                }
                cout<<Knapsack(b,yr,xr,n)<<endl;

                break;
            }
        }
        else
            cout<<"No option was chosen"<<endl;


    }
    return 0;
}

