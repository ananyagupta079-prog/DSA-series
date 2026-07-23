#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
vector<vector<int>> brute(vector<int>arr,int n){
    vector<vector<int>>ans;
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    vector<int>temp={arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    ans.assign(st.begin(), st.end());
    return ans;
}
vector<vector<int>>better(vector<int>arr,int n){
    vector<vector<int>>ans;
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        set<int>hashset;
        for(int j=i+1;j<n;j++){
            int third=-(arr[i]+arr[j]);
            if(hashset.find(third)!=hashset.end()){
                vector<int>temp={arr[i],arr[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }
    ans.assign(st.begin(),st.end());
    return ans;
}
vector<vector<int>>optimal(vector<int>arr,int n){
    vector<vector<int>>ans;
    vector<int>temp;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        int j=i+1;
        int k=n-1;
        while(j<k){
            int s=arr[i]+arr[j]+arr[k];
            if(s<0){
                j++;
            }
            else if(s>0){
                k--;
            }
            else{
                vector<int>temp={arr[i],arr[j],arr[k]};
            ans.push_back(temp);
            j++;
            k--;
            while(j<k && arr[j]==arr[j-1]){
                j++;
            }
            while(j<k && arr[k]==arr[k-1]){
                k--;
            }
        }
    }
}
return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>b=brute(arr,n);
    vector<vector<int>>ans=better(arr,n);
    vector<vector<int>>o=optimal(arr,n);
    for(auto &it:o){
        for(int x:it){
        cout<<x<<" ";
    }
}
}