#include <iostream>
#include<string>

using namespace std;
class sv5{
    public:
  int top;
  int top2;
  int size = 10;
  
  string stk[10];
  string stk2[10];
 sv5(){
     top = -1;
     top2 = -1;
 }
 
  bool isempty(){
      if(top >= 0 || top2 >= 0){
          return 1 == 0;
      }else if(top == -1 && top2 == -1){
          return 1 == 1;
      }
      return 2 == 3;
  }
  void visited(){
      if(top >= size){
          cout<<"Satck Overflow MAte"<<endl;
      }else{
      string url;
      cout<<"Enter value to be pushed:"<<endl;
      cin>>url;
      top++;
      stk[top] = url ;
      }
  }
 
  void navigate(){
      if(isempty()){
          cout<<"History Empty "<<endl;
      }else{
          top--;
          cout<<"Previously viusited Website  :: " <<stk[top]<<endl;
          top2++;
          stk2[top2] = stk[top];
      }
  }
 
  void current(){
      cout<<"Current PAge :: "<<stk[top]<<endl;
  }
 
};
int main() {
   int ch;
   string url;
   sv5 obj;
   cout<<"1) Add Visited "<<endl;
   cout<<"2) Navigate to previous "<<endl;
   cout<<"3) Display Current URL "<<endl;
   cout<<"4) Exit "<<endl;
   
   do{
        cout<<"Enter choice: "<<endl;
        cin>>ch;
       
        switch(ch){
            case 1:
            obj.visited();
            break;
           
            case 2:
            obj.navigate();
            break;
           
            case 3:
            obj.current();
            break;
           
            case 4:
            cout<<"Exiting !!! "<<endl;
            break;
           
            default:
            cout<<"Invalid Choice"<<endl;
        }
   }while(ch != 4);

    return 0;
}
