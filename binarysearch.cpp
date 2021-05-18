#include <bits/stdc++.h>
#include <vector>
using namespace std;
int m=-1;
void  bsort(vector<int>v, int l,int r,int search){
  int mid;
       if (r>l) {

       mid=(l+(r-1))/2;
         if (v[mid]==search) { cout<< v[mid] ;m=v[mid];}
    
     if(v[mid] >search) bsort(v,l,mid-1,search);
  		else
          bsort(v,mid+1,r,search);
              }
  
}
int main()
{
	// Assign vector
	vector<int> v;
 	v.push_back(15);
	v.push_back(20);
    v.push_back(22);
    v.push_back(35);
    v.push_back(45);
     cout << "The vector elements are: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
  int q,search;
  cin>>q;
  while(q--)
  {
  m=-1;
  cin>>search;
   bsort(v, 0,4,search);
 cout<< "searching element"<< m;
  }
  return 0;
  }
	
