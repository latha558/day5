# include<iostream>
# include<string>
using namespace std;
bool ispal(char s[],int l,int r){
if(l==r) return true;
if (s[l]!=s[r]) return false;
if(r!=l)
ispal(s,++l,--r);

}
int main(){
int q;
char s[]="madam";
cin>>q;
while(q--)
{
cin>>s;
if(ispal(s,0,strlen(s)-1))
cout<<s<<"\t palendrom";
else
cout<<s<<"\t not palindron";
}
return 0;
}

    