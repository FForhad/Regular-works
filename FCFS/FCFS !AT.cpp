/**
"FCFS with No Arrival Time."
*/

#include<bits/stdc++.h>
using namespace std;

///Forhad_1109028

int main()
{
    int AT[10000],BT[10000],TAT[10000],CT[10000],WT[10000];
    string Pr[10000];
    int input,e=0;

    cout<<"number of process as input :";
    cin>>input;

    cout<<"Enter value of Process, AT and BT"<<endl;
    for(int i=0;i<input;i++)
    {
        cin>>Pr[i]>>AT[i]>>BT[i];
    }
    e+=AT[0];
    for(int i=0;i<input;i++)
    {
        e+=BT[i];
        CT[i]=e;
        TAT[i]=CT[i]-AT[i];
        WT[i]=TAT[i]-BT[i];
    }

    cout<<endl<<"\n**Result**\n\nNo\tPr\tAT\tBT\tCT\tTAT\tWT"<<endl<<endl;

    for(int i=0;i<input;i++)
    {
        cout<<i+1<<"\t"<<Pr[i]<<"\t"
        <<AT[i]<<"\t"<<BT[i]<<"\t"
        <<CT[i]<<"\t"<<TAT[i]<<"\t"<<WT[i]<<endl;
    }

return 0;
}
/**
#Sample input data set;

6
p1 0 3
p2 0 5
p3 0 2
p4 0 7
p5 0 4
p6 0 6

6
p1 2 3
p2 2 5
p3 2 2
p4 2 7
p5 2 4
p6 2 6

*/
