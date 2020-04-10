#include<bits/stdc++.h>
using namespace std;

int reverse1(int a){
    int c=0;
    c+=a%10;
    c*=10;
    a/=10;
    c+=a%10;
    return c;

}

int  main(){
    string time;
    cin>>time;
    int l=time.length();
    string h,m;
    int f=0,i=0;
    while(l>i){
        if(time[i]==':'){
            f=1;

        }
        else if(f==0){
            h.push_back(time[i]);
        }
        else if(f==1){
            m.push_back(time[i]);
        }
        i++;
    }
    int hour,min,rev;
    hour=stoi(h);
    min=stoi(m);
    reverse(h.begin(),h.end());
    rev = stoi(h);

    if(rev>min){
        if(rev>59){
            if(hour<10)
                {cout<<"10:01";exit(0);}
            if(hour>10)
                {cout<<"20:02";exit(0);}
        }
        printf("%2d:%2d",hour,rev);
    }
    if(hour==23&&min>=rev){
        cout<<"00:00";
        exit(0);
    }
    if(min>=rev){
        int temp=reverse1(hour+1);
        cout<<temp<<endl;;
        if(temp>59){
            if(hour<10)
                {cout<<"10:01";exit(0);}
            if(hour>10)
                {cout<<"20:02";exit(0);}
        }
        printf("%2d:%2d",hour+1,reverse1(hour+1));
    }
    
    return 0;
}

/* 01:10
02:20
03:30
04:40
05:50

10:01

11:11
12:21
13:31
14:41
15:51

20:02

21:12
22:22
23:32

00:00

*/