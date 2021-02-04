#include <iostream>
using namespace std;

int main(){
   int arr[3][3] = {{11, 22, 33}, {44, 55, 66},{12,34,56}};
   for(int i=0; i<3;i++){
      for(int j=0; j<3; j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
   }
   int trace=0;
   for(int i=0; i<3;i++){
      for(int j=0; j<3; j++){
      	if((i+j)==2)
        	trace+=arr[i][j];
      }
   }
   cout<<trace;
   return 0;
}
