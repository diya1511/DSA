#include <iostream>
#include <vector>
using namespace std ;
vector<int> reverse(vector<int>v,int N){
    int s = N+1;
    int e = v.size()-1;
        while(s<=e){
            swap(v[s],v[e]);
            s++;
            e--;
        }
    return v;
    
}
void print(vector<int> ans){
    for(int i = 0 ; i <= ans.size()-1 ;i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v ;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    int N;
    vector<int>ans =reverse(v,N);
    cin>>N;
    cout<<"reverse order is " ;
    print(ans);
    return 0 ;
}