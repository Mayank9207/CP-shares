#include <bits/stdc++.h>
using namespace std;
void sol(){
int n;
cin>>n;    
vector <int> vec(n);
for(int i=0;i<n;i++){
    cin>>vec[i];
}

sort(vec.begin(),vec.end());
reverse(vec.begin(),vec.end());
int l=0;
int r=0;
int ans=0;
for(l=0;l<n;l++){
    int ai=vec[l];
    for(r=l+1;r<n;r++){
        int aj=vec[r];
        if(__gcd(ai,2*aj)>1){
            ans++;
        }
    }

}
cout<<ans<<endl;

}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        sol();
    }
    return 0;
}