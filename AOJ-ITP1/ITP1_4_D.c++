# include <bits/stdc++.h>
# include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long sum=0;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    long long min = *min_element(a.begin(),a.end());
    long long max = *max_element(a.begin(),a.end());
    
    printf("%lld %lld %lld\n",min,max,sum);


}