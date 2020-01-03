#include<iostream>

using namespace std;

//Write function findDistance() here
float findDistance(float u , float a , float t){
  return u*t + 0.5*a*t*t;
}

int main(){

  //Calling findDistance() using test cases
  float x ,y,z;
  cout << "Enter u : ";
  cin >> x ;
  cout << "Enter a : ";
  cin >> y;
  cout << "Enter t : ";
  cin >> z;
  cout << "Distance : " << findDistance(x,y,z);
  return 0;
}
