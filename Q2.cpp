#include<iostream>

using namespace std;
int main()
{
    double ds,dm,sf,gs,rds,rdm,rsf,rgs;
    int cds,cdm,csf,cgs,mini;

    cout<<"Input amount of dairy-free spread available in grams    \t:";
    cin>>ds;
    cout<<"Input amount of dairy-free milk available in millilitres \t:";
    cin>>dm;
    cout<<"Input amount of self-raising flour available in grams    \t:";
    cin>>sf;
    cout<<"Input amount of golden caster sugar available in grams    \t:";
    cin>>gs;

     cds = ds/150;
     cdm = dm/300;
     csf = sf/300;
     cgs = gs/200;

    if((cds<=cdm)&& (cds<=csf)&&(cds<=cgs))
    {
        mini = cds;
    }
    else if ((cdm<=cds)&& (cdm<=csf)&&(cdm<=cgs))
    {
        mini = cdm;
    }
    else if ((csf<=cds)&& (csf<=cdm)&&(csf<=cgs))
    {
        mini = csf;
    }
    else
    {
        mini = cgs;
    }

    cout<<"number of cakes that can be made: "<<mini<<endl;
    cout<<"It will need "<<mini*150<<" grams of dairy-free spread and "<<(ds-(mini*150))<<" grams will remain"<<endl;
    cout<<"It will need "<<mini*300<<" millilitres of dairy-free milk and "<<(dm-(mini*300))<<" grams will remain"<<endl;
    cout<<"It will need "<<mini*300<<" grams of self-raising flour and "<<(sf-(mini*300))<<" grams will remain"<<endl;
    cout<<"It will need "<<mini*200<<" grams of golden caster sugar and "<<(gs-(mini*200))<<" grams will remain"<<endl;
    cout<<"\n"<<endl;
    cout<<"The following items will be required if one more cake is to be made:"<<endl;

    rds = ((mini +1) * 150)-ds;
    rdm = ((mini +1) * 300)-dm;
    rsf = ((mini +1) * 300)-sf;
    rgs = ((mini +1) * 200)-gs;

    if (rds>0)
    {
        cout<<rds<<" grams of dairy-free spread"<<endl;
    }
    if (rdm>0)
    {
        cout<<rdm<<" millilitres of dairy-free milk"<<endl;
    }
    if (rsf>0)
    {
        cout<<rsf<<" grams of self-raising flour"<<endl;
    }
    if (rgs>0)
    {
        cout<<rgs<<" grams of golden caster sugar"<<endl;
    }
    return 0;
}
