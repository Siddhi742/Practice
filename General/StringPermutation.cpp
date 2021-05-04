using namespace std;
vector<string>callp(string s)
{   vector<string>s1;
    vector<string>ans;
if(s.length()==1)
    {
    ans.push_back(s);
    return ans;
    }
else
    {   for(int i=0;i<s.length();i++)
        {   string s2="";
            for(int j=0;j<s.length();j++)
            {
                if(i!=j)
                    s2+=s[j];
            }
            s1=callp(s2);
            for(int k=0;k<s1.size();k++)
            {
                ans.push_back(s[i]+s1[k]);
            }
        }
        return ans;
    }

}
int main()
{
    string inp;
    cin>>inp;
    vector<string>ans;
    ans=callp(inp);
    for(int k=0;k<ans.size();k++)
            {
                cout<<ans[k]<<endl;
            }
    return 0;
}
