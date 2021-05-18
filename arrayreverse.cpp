#include <bits/stdc++.h>
#include <vector>
using namespace std;
int temp;
vector<int> v;

vector<int> reverse(vector<int> v,int l,int r){
  
   if(r!=l)
   {
     
     swap(v[l],v[r]);
       //   temp=v[r];
    // v[r]=v[l];
    // v[l]=temp;
    reverse(v,++l,--r);
   }
  return v;
}
int main()
{
  
	// Assign vector
 	v.push_back(15);
	v.push_back(20);
    v.push_back(22);
    v.push_back(35);
    v.push_back(45);
     cout << "The vector elements are: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
  vector<int>v1=  reverse(v,0,4);
  cout<< "\nAfter Reverse";
  for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
  return 0;
  }
	
