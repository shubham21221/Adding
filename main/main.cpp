#include "bits/stdc++.h"
using namespace std;



int main(){
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);

    }

    AllSum(v);
    return 0;
}