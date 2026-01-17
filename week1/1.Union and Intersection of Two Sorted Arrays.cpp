#include<bits/stdc++.h>
using namespace std;
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        int i=0,j=0;
        int m=a.size(),n=b.size();
        vector<int> intersec;
        while(i<m && j<n){
            if(i>0 && a[i-1]==a[i]){
                i++;continue;
            }
            if(a[i]<b[j]){
                i++;
            }
            else if(a[i]>b[j]){
                j++;
            }
            else{
                intersec.push_back(a[i]);
                i++;j++;
               
            }
        }

        return intersec;
    }
vector<int> union1(vector<int>&arr1,vector<int>&arr2){
    int m=arr1.size();
    int n=arr2.size();
    int i=0,j=0;
    vector<int> ans;
    while(i<m && j<n){
        if(arr1[i]<=arr2[j]){
            ans.push_back(arr1[i++]);
        }
        else{
            ans.push_back(arr2[j++]);
        }
    }
    while(i<m){
        ans.push_back(arr1[i++]);
    }
    while(j<n){
        ans.push_back(arr2[j++]);
    }
    return ans;
}
int main(){
    vector<int> arr1={1,1,2,6,8};
    vector<int> arr2={1,3,4,9};
    vector<int> ans=union1(arr1,arr2);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}