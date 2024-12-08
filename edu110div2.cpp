#include <bits/stdc++.h>
using namespace std;
void sol(){
int n;
cin>>n;    
vector <int> vec(n);
for(int i=0;i<n;i++){
    cin>>vec[i];
}

sort(vec.begin(), vec.end(), [](int a, int b) {
        return (a % 2 == 0) && (b % 2 != 0); // True if 'a' is even and 'b' is odd
    });
    //selective sorting so as to put even before odd
    //multiply 2 to those who need it the most
    //observed from DRY run if ai is 1 and aj is 2 then obviously it would have been better if they were on each other's place so that specifies the even odd
    //sort logic

int ans=0;

 for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (__gcd(vec[i], 2 * vec[j]) > 1) {
                ans++;
            }
        }
    }

    cout << ans << endl;

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
