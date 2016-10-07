#include<bits/stdc++.h>
using namespace std;
struct suffix{
    int rank[2];
    int pos;
};

int cmp(suffix a,suffix b)
{
     return a.rank[0]==b.rank[0] ?(a.rank[1]<b.rank[1] ?1: 0): (a.rank[0]<b.rank[0] ?1: 0);
}


void build(char str[10000])
{
    suffix sa[100001];
    int idx[100001];
    int prerank;
    for(int i=0;i<strlen(str)-1;i++)
    {
        sa[i].pos=i;
        sa[i].rank[0]=str[i]-'a';
        sa[i].rank[1]= str[i+1]-'a';
    }
    int n =strlen(str);
    sa[n-1].pos = n-1;
    sa[n-1].rank[0]=str[n-1]-'a';
    sa[n-1].rank[1]=str[0]-'a';

    for(int cnt=2;cnt<2*n;cnt+=cnt)
    {

        sort(sa,sa+n,cmp);
        prerank = sa[0].rank[0];
        sa[0].rank[0]=0;
        int n=strlen(str);
        for(int i=1;i<n;i++)
        {
            if(sa[i].rank[0]==prerank and sa[i].rank[1]==sa[i-1].rank[1])
            {
                sa[i].rank[0]=sa[i-1].rank[0];
            }
            else{
                prerank = sa[i].rank[0];
                sa[i].rank[0]=sa[i-1].rank[0]+1;
            }
        }
        for(int i=0;i<n;i++)
        idx[sa[i].pos]=i;

        for(int i=0;i<n;i++)
        {
            sa[i].rank[1] = sa[idx[(sa[i].pos + cnt) % n]].rank[0];
        }
    }

    //for(int i=0;i<str.length();i++)
        cout<<sa[0].pos+1<<endl;
}


int main()
{


  char* str = new char[100001];
    cin >> str;



   build(str);

}
