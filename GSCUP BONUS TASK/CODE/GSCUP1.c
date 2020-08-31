#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int x, y;
    printf("Enter x and y before swapping\n");
    cin>>x;
    cin>>y;
    x = x + y; 
    y = x - y; 
    x = x - y;
    cout <<"After Swapping: x = "<<x<<", y = "<<y<<endl; 
    return 0;
} 
