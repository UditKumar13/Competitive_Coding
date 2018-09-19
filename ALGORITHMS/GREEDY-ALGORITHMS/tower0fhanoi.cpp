#include<iostream>
using namespace std ;

void towerofhanoi(int n , char from_rod, char to_rod,char aux_rod){
if (n==1){
cout<<"move disk 1 from "<< from_rod<<"to "<<to_rod;
cout<<endl;
return ;
}

towerofhanoi(int n-1,from_rod,aux_rod,to_rod);
cout<<"move disk "<<n<<"from rod "<<from_rod<<"to "<<to_rod;
towerofhanoi(int n-1,aux_rod,to_rod,from_rod);

}

int main(){
  int n;// no.of disk
  cin>>n;
  towerofhanoi(n,'A','B','C');// A,B AND C ARE NAMES OF THE RODS
  return 0;

}



}