// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;
class emp{
    public:
  int id;
  string name;
  int sal;
  void get(){
      cout<<"ID ="<< id << "   :  NAME = "<< name << " :: Salary = " << sal<<endl;
  }
};

void swp(emp a[] , int x , int y){
    emp t = a[x];
    a[x] = a[y];
    a[y] = t;
}

int part( emp a[] , int lo , int hi ){
    int i = lo-1;
    int p = a[hi].id;
    
    for(int j = lo ; j < hi ; j++ ){
        if(a[j].id < p){
            i++;
            swp(a , i , j);
        }
    }
    swp(a , i+1 , hi);
    return i+1;
}

void print(emp a[] , int n){
    for(int i = 0 ; i < n ; i++ ){
        a[i].get();
    }
}

void quick(emp a[] , int lo , int  hi){
    if( lo < hi ){
        int pi = part(a , lo , hi);
        quick(a , lo , pi - 1);
        quick(a , pi + 1 , hi);
    }
}
int main(){
    int n = 15;
    emp a[n] = {
        {5 , "Seb" , 50000},
        {14, "Alonso" , 20000},
        {7 , "MSC" , 70000},
        {99 , "Gio" , 45000},
        {77 , "Val" , 11000},
        {7 , "Kimi" , 10000},
        {45 , "jim" , 11000},
        {78 , "abc" , 18000},
        {12 , "Yuki" , 13000},
        {20 , "GAsly" , 19000},
        {3 , "Ricciardio" , 22000},
        {2 , "Logan" , 35000},
        {47 , "Mick" , 75000},
        {55 , "Sainz" , 85000},
        {8 , "patrese",88000},
        {89 , "Zonta" , 17000},
    };
    
   cout<<"Original Array"<<endl;
	print(a , n);
	
	quick(a , 0 , n);
	
	cout<<"After Sorting"<<endl;
	print(a , n);

    return 0;
}
