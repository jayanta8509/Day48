//Write Program to remove duplicate elements in an array
#include <iostream>
using namespace std;
void remove_duplicate(int arr[],int size){
  int k=0;
  for(int i=0;i<size-1;i++){  //3 index 
    for(int j=i+1;j<size;j++){  //4 index
      if(arr[i]==arr[j]){
        for(k=j;k<size;k++){
          arr[k]=arr[k+1];
        }
        size--;
        j--;
      }
    }
  }
  for(int i=0;i<size;i++){
    cout<<arr[i]<<"\t";
    }
  }


int main() {
  //std::cout << "Hello World!\n";
  int arr[]={35,35,45,60,60};
  int size=5;
  remove_duplicate(arr,size);
}