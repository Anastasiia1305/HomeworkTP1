
#include <iostream>
#include <math.h>
using namespace std;
//problem1
const double Pi = 3.14;
double circle(double d){
    double a_circle = Pi * d/2 * d/2;
    double p_circle = Pi  * d;
     cout << "Value of area circle = "<< a_circle << endl;
     cout << "Value of perimeter circle = "<< p_circle <<endl;
    return 0;
}
//double perimeter_circle(double r){
  //  double p_circle = Pi * 2 * r;
    //std:: cout << "Value of perimeter circle = "<< p_circle << std::endl;
   // return p_circle;
//}
//problem2


int minmax(){

    int arr[] = { 13, 200, -1, 0, 46, 99,5000,-100000 };
     int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    int min=arr[0];
    for (int i=0; i<n; i++){
        if (max<arr[i])
            max=arr[i];
        if (min>arr[i])
            min=arr[i];
    }

    //cout<< max<<endl;
    cout<<"Maxim_element "<<max<<endl;
    //cout<<min<<endl;
    cout<<"Minim_element "<<min<<endl;
    return 0;
    }



//problem3
 int fibonacci(int n)

    {
       if (n <= 1)
          return n;
       return fibonacci(n-1) + fibonacci(n-2);

}
 int fibonacci_result(){
     int n=10;

        cout << "\nFibonnaci Series : "<<endl;

        for (int i=0; i<=n;i++) {
           cout << " " << fibonacci(i);
        }
        return 0;
        cout<<"\n"<<endl;
 }
 //problem4

 int multiplication() {
    int m=9, i;

    cout<<"\nThe multiplication table for "<< m << endl;
    for (i = 1; i <= 10; i++)
       cout << m << " * " << i << " = " << m * i << endl;
    return 0;
 }

//problem5
 //and
 int operator_and()
 {
     int a,b,c;
     bool d;
     cout<<"\nOperator and"<<endl;
 for(a=0;a<=1;a++){
     for(b=0;b<=1;b++){

         for(c=0;c<=1;c++){
             d= a&&b&&c;


             cout<<a<<b<<c<<d<<endl;
         }
         }
     }
 }
 int operator_or(){
     int a,b,c;
 bool d;
 cout<<"\nOperator or"<<endl;
 for(a=0;a<=1;a++){
     for(b=0;b<=1;b++){

         for(c=0;c<=1;c++){
             d= a||b||c;


             cout<<a<<b<<c<<d<<endl;
         }

 }

   }
}



int main(){
    circle (10);
    minmax();
   fibonacci_result();
   multiplication();
   operator_and();
   operator_or();
    return 0;
  }

