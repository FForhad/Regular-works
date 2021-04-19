#include<bits\stdc++.h>
#define err(s,x) {perror(s);exit(x);}
using namespace std;
int  main()
{
    here:

    int hour=0,fen=0;
    cout<<"Enter time in 24-hour notation :"<<endl;
    cin>>hour>>fen;

    if(hour>=24 || hour<0)
      err("hour",1);
    if(fen<0 || fen>=60)
      err("fen",2);
    if(hour>12&&hour<24)
    {
        cout<<"That is the same as:"<<endl<<hour-12<<":"<<fen<<" PM"<<endl;
    }
    else
    {
        cout<<"That is the same as:"<<endl<<hour<<":"<<fen<<" AM"<<endl;
    }


    string a;
    cout<<"Again?(y/n)"<<endl;
    cin>>a;
    if(a=="y")
    {
       ;
    }
    else
    {
        cout<<"End of file"<<endl;
    }

    int ch=1;

}
