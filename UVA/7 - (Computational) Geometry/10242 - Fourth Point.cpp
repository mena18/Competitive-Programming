#include<bits/stdc++.h>
using namespace std;


struct point{
    double x;double y;
};

int equal(point a,point b){return a.x==b.x && a.y==b.y;}
void swap(point& a,point& b){double z=a.x;a.x=b.x;b.x=z;  z=a.y;a.y=b.y;b.y=z;}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("read.txt","r",stdin);
    freopen("write.txt","w",stdout);
    #endif // ONLINE_JUDGE

    point a,b,c,d;

    while(cin>>a.x && cin>>a.y){
        cin>>b.x>>b.y>>c.x>>c.y>>d.x>>d.y;
        
        // the idea is to make the point c is the common point and both (a,b) be the other two different point
        if(equal(a,c)){swap(d,a);}
        if(equal(a,d)){swap(a,c);}
        if(equal(b,c)){swap(d,b);}
        if(equal(b,d)){swap(c,b);}

        // 
        printf("%.3lf %.3lf\n",a.x+b.x-c.x,a.y+b.y-c.y);


    }


    return 0;
}
