//finding an element in array
#include <iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i = 0;i<size;i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[8] = {5,7,-2,10,20,-12,-15,100};
    int key;
    cin >> key;
    
    bool found =  search(arr,8,key);
    if(found){
        cout<< "key is present";
        
    }
    else{
        cout<< "key is not present";
    }
    

   
}