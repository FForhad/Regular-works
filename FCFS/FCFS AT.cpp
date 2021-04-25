/**
"FCFS with Different Arrival Time."
*/

#include<bits/stdc++.h>
using namespace std;

///Forhad_1109028

struct node
{
    string Process;
    int AT,BT;
};
bool cmp(node A,node B)
{
    if(A.AT < B.AT)return true;
    if(A.AT == B.AT)
    {
        if(A.BT < B.BT)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int input,e=0,CT;

    cout<<"number of process as input : ";
    cin>>input;
    node Pr[input+1];

    cout<<"Enter value of Process, AT and BT"<<endl;
    for(int i=0;i<input;i++)
    {
        cin>>Pr[i].Process>>Pr[i].AT>>Pr[i].BT;
    }
    sort(Pr,Pr+input,cmp);

    CT=Pr[0].AT + Pr[0].BT;

    cout<<endl<<"\n**Result**\n\nNo\tPr\tAT\tBT\tCT\tTAT\tWT"<<endl<<endl;

    cout<<"1\t"<<Pr[0].Process<<"\t"
    <<Pr[0].AT<<"\t"<<Pr[0].BT<<"\t"
    <<CT<<"\t"<<CT-Pr[0].AT<<"\t"
    <<(CT-Pr[0].AT)-Pr[0].BT<<endl;

    for(int i=1;i<input;i++)
    {
        cout<<i+1<<"\t"<<Pr[i].Process<<"\t"<<Pr[i].AT
        <<"\t"<<Pr[i].BT<<"\t"<<CT+Pr[i].BT<<"\t"
        <<(CT+Pr[i].BT)-Pr[i].AT<<"\t"
        <<((CT+Pr[i].BT)-Pr[i].AT)-Pr[i].BT<<endl;

        CT+=Pr[i].BT;
    }

return 0;
}
/**
#Sample input data set;

6
p1 4 3
p2 5 5
p3 3 2
p4 7 7
p5 1 4
p6 4 6

*/

