/// Knuth Morris Pratt (KMP)
/// find a string/pattern in another string/text

#include<bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> prefix_function(string p){
    int m=p.size()-1;
    vector<int>prefix(m+1);
    prefix[1]=0;
    int k=0;
    for(int q=2; q<=m; q++)
    {
        while(k>0 and p[k+1]!=p[q])
            k=prefix[k];
        if(p[k+1]==p[q])
            k++;
        prefix[q]=k;
    }
    return prefix;
}
vector<int> KMP(string t, string p){
    int n=t.size()-1;
    int m=p.size()-1;
    vector<int>prefix;
    prefix = prefix_function(p);
    vector<int>answer;
    int q=0;
    for(int i=1; i<=n; i++)
    {
        while(q>0 and p[q+1]!=t[i])
            q=prefix[q];
        if(p[q+1]==t[i])
            q++;
        if(q==m)
        {
            answer.pb(i-m);
            q=prefix[q];
        }
    }
    return answer;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    string t, p;    /// text and pattern
    cin>>t>>p;
    t='r'+t; p='r'+p;   /// for 1-base indexing
    vector<int>answer;
    answer = KMP(t,p);
    for(int i=0; i<answer.size(); i++)
        cout<<answer[i]+1<<" ";     /// for 1-base indexing
    cout<<endl;
    return 0;
}
