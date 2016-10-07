#include<bits/stdc++.h>
using namespace std;
int main()
{
    //cin.get();
    while(true)
    {
        int n;
        cin>>n;
        if(n==0)
            break;
        string str;
        getchar();
        getline(cin,str);

        map<char,int> m;
        set<char> s;
        int i;
        int ans=0;
        for(i=0;i<n;i++)
        {
            if(m.find(str[i])==m.end())
            {
                m[str[i]]=1;
                s.insert(str[i]);
            }else
                m[str[i]]++;


        }

        int j=0;         ans=i-j;
        for(;i<str.length();)
        {
            s.insert(str[i]);
            m[str[i]]++;
            if(s.size()>n)
            {
                while(m[str[j]]>1)
                    m[str[j++]]--;
                m[str[j]]=0;
                s.erase(str[j++]);
            }
            i++;
            ans = max(ans,i-j);
    }
    cout<<ans<<endl;
    }
}
