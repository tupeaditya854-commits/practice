
#include <iostream>
using namespace std;

int main()
 {
int bookID[5];
cout<<" Enter 5 book ID'S : \n";
for(int i=0;i<5;i++)
   cin>>bookID[i];
   for(int i=0;i<4;i++)
   {
    for(int j=0;j<4-i;j++)
    {
        if(bookID[j]>bookID[j+1])
        {
        int temp= bookID[j];
        bookID[j] = bookID[j+1];
        bookID[j+1]=temp;

        }

    }

   }    
   cout<<" \n Book ID'S in Ascending Order :: ";
  for(int i=0;i<5;i++)
  {
    cout<<bookID[i]<<" ";

  }
  cout<<endl;
  
  return 0;


}