#include<bits/stdc++.h>
using namespace std;
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int>v;
    int maxii=0;
    int minii=0;
    for(int i=1;i<n;i++){
       if(a[i]>a[maxii]){
           maxii=i;
       }
       if(a[i]<a[minii]){
           minii=i;
       }
    }
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(i!=maxii){
            if(a[i]>maxi){
                maxi=a[i];
            }
            
        }
        if(i!=minii){
            if(a[i]<mini){
                mini=a[i];
            }
        }
    }
    v.push_back(maxi);
    v.push_back(mini);
    return v;

}
