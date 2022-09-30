#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
    int n=26;
    int hsh[26];
    while (t--)
    {
        string pat;
        cin>>pat;
        string text;
        cin>>text;
        int flag=0;
        for (int i = 0; i < n; i++)
        {
            hsh[i]=0;
        }
        
        for (int i = 0; i < text.size(); i++)
        {
            hsh[text[i]-'a']++;
        }
        for (int i = 0; i < pat.size(); i++)
        {
            
            if (hsh[pat[i]-'a']==0)
            {
                flag=1;
                break;
            }
            else{
                hsh[pat[i]-'a']--;  
                // cout<<hsh[pat[i]-'a']<<endl;
            }
        }
        if (flag==1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
        
    }
    
}
