#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>>brute(vector<int>arr,int n){
    vector<vector<int>>ans;
    set<vector<int>>set;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    long long sum=arr[i]+arr[j]+arr[k]+arr[l];
                    vector<int>temp={arr[i],arr[j],arr[k],arr[l]};
                    sort(temp.begin(),temp.end());
                    set.insert(temp);
                }
            }
        }
    }
    ans.assign(set.begin(),set.end());
    return ans;
}
vector<vector<int>>better(vector<int>arr,int n,int t){
    vector<vector<int>>ans;
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            set<long long>hashset;
            for(int k=j+1;k<n;k++){

                long long sum=arr[i]+arr[j]+arr[k];
                int fourth=t-(sum);
                if(hashset.find(fourth)!=hashset.end()){
                    vector<int>temp={arr[i],arr[j],arr[k],fourth};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);

                }
                hashset.insert(arr[k]);
            }
        }
    }
    ans.assign(st.begin(),st.end());
    return ans;
}
vector<vector<int>>optimal(vector<int>arr,int n,int target){
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        for(int j=i+1;j<n;j++){
        if(j>0 && arr[j]==arr[j-1]){
            continue;
        }
        int k=j+1;
        int l=n-1;
        while(k<l){
            long long sum=arr[i]+arr[j]+arr[k]+arr[l];
            if(sum==target){
                vector<int>temp={arr[i],arr[j],arr[k],arr[l]};
                ans.push_back(temp);
                k++;
                l--;
                while(arr[k]==arr[k-1]){
                    k++;
                }
                while(arr[l]==arr[l-1]){
                    l--;
                }
            }else if(sum<target){
                k++;
            }
            else{
                l--;
            }
        }
    }
    }
    return ans;
}
int main(){
    int n,t;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter target";
    cin>>t;
    //vector<vector<int>>b=brute(arr,n);
    //vector<vector<int>>be=better(arr,n,t);
    vector<vector<int>>o=optimal(arr,n,t);
    for(auto &it:o){
        for(int x:it){
            cout<<x<<" ";
        }
    }
}