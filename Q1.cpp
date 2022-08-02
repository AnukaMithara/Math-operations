#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,d,length,midpoint1,midpoint2;
    char op;

    cout<<"Input first cordinate"<<endl;
    cout<<"x component\t: ";
    cin>>a;
    cout<<"y component\t: ";
    cin>>b;

    cout<<"Input second cordinate"<<endl;
    cout<<"x component\t: ";
    cin>>c;
    cout<<"y component\t: ";
    cin>>d;

    cout<<"Input opperator\t: ";
    cin>>op;

    if (op == 'L')
    {
        length = sqrt(pow((a-c),2) + pow((b-d),2));
        cout<<"Answer\t:"<<length<<endl;

    }
    else if (op == 'M')
      {
        midpoint1 = ((a+c)/2);
        midpoint2 = ((b+d)/2);
        cout<<"Answer\t:"<<" ("<<midpoint1<<","<<midpoint2<<")"<<endl;

    }
    else
    {
        cout<<"Incorrect opperator process terminated"<<endl;

    }
return 0;

}
