#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

double pound2Kg(double *i);//define a double function
void manyPound2Kg(double poundData[], double kgData[], int size);
void printPound(double pdata[], int size);
void printKg(double kdata[], int size);
int main()
{
 double pound;
 double kg;
 double poundData[5];
 double kgData[5];
 // cout<<"please enter a double value for pound:";// tell user enter a double value
 // cin>>pound; // input value
 // cout<<"pound="<<pound<< ",kg="<<kg<<endl; //print the original value
 //call 'pound2Kg' function
 // kg=pound2Kg(&pound); //a value conversion
 // cout<<"pound="<<pound<< ",kg="<<kg<<endl; //print the convered value
 // cout<<sizeof(poundData)<<";" <<sizeof(poundData)/sizeof(poundData[0])<<endl;
 
 cout<<"please enter 5 double values for array: ";
 for (int i=0;i<5 ; ++i)
   {
     cin>>poundData[i];
   }
 
 //cout<<sizeof(poundData)<<";" <<sizeof(poundData)/sizeof(poundData[0])<<endl;
 //call manyPound2Kg
  manyPound2Kg(poundData, kgData, sizeof(poundData)/sizeof(poundData[0]));

 printPound (poundData, sizeof(poundData)/sizeof(poundData[0]));
 printKg (kgData, sizeof(kgData)/sizeof(kgData[0]));
 return EXIT_SUCCESS;
}

  double pound2Kg (double *i)
{
  double j;
 j=0.45359237*  *i;
 //cout <<"i="<<*i <<", j="<<j<<endl;
 return j;
}

void manyPound2Kg(double poundData[], double kgData[], int size)
{
  // cout<<"size="<<size<<endl;
  for (int i=0; i<5; ++i){
    kgData[i]=pound2Kg(&poundData[i]);
    // cout<<"kgData["<<i<<"]="<<kgData[i]<<endl;
  }
   for (int i=0; i<5; ++i){
     // cout<<"kgData["<<i<<"]="<<kgData[i]<<endl;
     ;
  }
  return ;
}
void printPound (double pData[], int size)
{
  cout<<"[";
  for(int i=0; i<size; ++i){
    if (i<size-1)
      cout<<fixed<<setprecision(1)<< pData[i]<<"lb, ";
    else
      cout<<fixed<<setprecision(1)<< pData[i]<<"lb ";
  }
  cout<<"]"<<endl;
  return;
}
void printKg (double kData[], int size)
{
  cout<<"[";
  for(int i=0; i<size; ++i){
    if (i<size-1)
      cout<<fixed<<setprecision(1)<< kData[i]<<"kg, ";
    else
      cout<<fixed<<setprecision(1)<< kData[i]<<"kg ";
  }
  cout<<"]"<<endl;
  return;
}
