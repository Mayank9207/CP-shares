#include <bits/stdc++.h>
using namespace std;

void sol(){
long long a,b;
cin>>a>>b;
long long xk,xq,yk,yq;
cin>>xk>>yk;
cin>>xq>>yq;
set <pair<int,int>> l1;
set <pair<int,int>> l2;

l1.insert({xk+a,yk+b});
l1.insert({xk+b,yk+a});
l1.insert({xk+a,yk-b});
l1.insert({xk-a,yk-b});
l1.insert({xk-b,yk-a});
l1.insert({xk+b,yk-a});
l1.insert({xk-b,yk+a});
l1.insert({xk-a,yk+b});

l2.insert({xq+a,yq+b});
l2.insert({xq+b,yq+a});
l2.insert({xq+a,yq-b});
l2.insert({xq-a,yq-b});
l2.insert({xq-b,yq-a});
l2.insert({xq+b,yq-a});
l2.insert({xq-b,yq+a});
l2.insert({xq-a,yq+b});
int count=0;
  for (const auto& it: l1) {
        if (l2.find(it) != l2.end()) {
            ++count;
        }
    }
cout<<count<<endl;

}

int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
sol();
}
}
