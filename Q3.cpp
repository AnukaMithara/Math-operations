#include<iostream>

using namespace std;
int main()
{

    float fs,h,du,nu,dh,nh,T,nc,dc,tc;

    cout<<"What is the size of your download file in GigaBytes?"<<endl;
    cin>>fs;
    cout<<"When did the download begin in 24 hour format?"<<endl;
    cin>>h;

    T = fs *(8192)*(1.05)/3600;


    if ((h>0)&&(h<=8))
    {

        if ((h+T)<=8)
            {

           nh = T;
           nu = nh /8192*3600;
           nc = nu * 1024 *0.022;
           du = 0;
           dc = 0;
            }
        else if (((h+T)>=8) && ((h+T)<=24))
            {
            nh = (8 - h);
            nu = nh /8192*3600;
            nc = nu * 1024 *0.022;
            dh = T - nh;
            du = dh/8192*3600;
            dc = du * 1024 * 0.15;
        }
         else
            {
         nh = T-16;
         nu = nh /8192*3600;
         nc = nu * 1024 *0.022;
         dh = T - nh;
         du = dh/8192*3600;
         dc = du * 1024 * 0.15;
            }
    }
    else
    {
        if ((h+T)<=24)
            {
            dh = T;
            du = dh/8192*3600;
            dc = du * 1024 * 0.15;
            nh = 0;
            nu = 0;
            nc= 0;

            }
        else if (((h+T)<=32))
            {

            dh = (24-h);
            du = dh/8192*3600;
            dc = du * 1024 * 0.15;
            nh = T-dh;
            nu = nh /8192*3600;
            nc= nu * 1024 *0.022;
            }

        else
            {
            dh = T-8;
            du = dh/8192*3600;
            dc = du * 1024 * 0.15;
            nh = T-dh;
            nu = nh /8192*3600;
            nc= nu * 1024 *0.022;
            }

}

    tc = dc+nc;
    cout<<"Day time data usage is   \t: "<<du<<" Gigabytes"<<endl;
    cout<<"Night time data usage is \t: "<<nu<<" Gigabytes"<<endl;
    cout<<"Total cost is   \t\t: "<<tc<<" rupees"<<endl;

    return 0;
}
