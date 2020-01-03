#include<iostream>

using namespace std;

//Write function findDistance() here
float findDistance(float u , float a , float t){
  return u*t + 0.5*a*t*t;
}

int main(){

  //Calling findDistance() using test cases
  float x ,y,z;
  cin >> x >> y >> z;
  cout << findDistance(x,y,z);
  return 0;
}
