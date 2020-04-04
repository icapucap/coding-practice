#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,turns=0,p,q;
    cin>>a>>b;
    p=a;q=b;
    while(a>0&&b>0){
        turns++;
        if(a>=b&&a-2>0){
            a-=2;
            b+=1;
            continue;
        }
        else if(b>=a&&b-2>0){
            a+=1;
            b-=2;
            continue;
        }
        else{
            if(a==b&&a==1){
                turns--;
            }
            break;
        }
    }
    cout<<turns;
    return 0;
}

/*// 100 100
// 2   149    49
// 76    1    74
// 2   38     37
// 20    2    18
// 2     11   9
// 7      1    5
// 1      4    3
// 2      2    1
// 0      3    1*/