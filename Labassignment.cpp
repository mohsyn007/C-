#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vc vector
#define pb push_back
#define ff first
#define ss second
#define umap unordered_map
 
int partition(vc<int> &v, int l, int h){
    int mxelement = *max_element(v.begin(), v.end());
    int mnelement = *min_element(v.begin(), v.end());

    int mid = (mxelement+mnelement)/2;
    int dif=INT_MAX, idx=0;
    for(int i=l; i<=h; i++){
        if(abs(v[i]-mid)<dif){
            dif=abs(v[i]-mid);
            idx=i;
        }
    }
    int mid_idx=h/2;
    swap(v[mid_idx], v[idx]);
    return mid_idx;
} 

void sort(vc<int> &v, int l, int h){
    int mid_idx=partition(v,l,h);
    for(int i=0; i<mid_idx; i++){
        for(int j=0; j<mid_idx-i-1; j++){
            if(v[j]>v[j+1])
                swap(v[j],v[j+1]);
        }
    }
    cout<<endl;
    int c=0;
    for(int i=mid_idx+1; i<h; i++){
        for(int j=mid_idx+1; j<h-c; j++){
            if(v[j]>v[j+1])
                swap(v[j],v[j+1]);
        }
        c++;
    }
}

void solve(){
    int n; cin>>n;
    vc<int> v;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        v.pb(x);
    }
    sort(v,0,n-1);
    cout<<" ";
    for(int i=0; i<n; i++) cout<<v[i]<<" ";
}
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
}