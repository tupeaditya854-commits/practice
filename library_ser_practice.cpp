#include <iostream>
using namespace std;
int main()
{
int book[5];int searchID;
bool found = false;

cout<<" Enter 5 book ID'S : \n";
for(int i=0;i<5;i++)
   cin>>book[i];
cout<<"\n Enter Book ID to search : ";
cin>>searchID;
for(int i=0;i<5;i++)
{
 if(book[i]==searchID)
    found=true;
}
if(found)
  cout<<"Book Found ✅";
else 
  cout<<"Book not found❌";

}