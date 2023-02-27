//static array inilization and declaration 

#include<iostream>
using namespace std ;
int main(){
// array Declaration 

//int arr[7];
//cout<<"Array created successfully"<<endl;
//to check the base address directly
//cout<<arr<<endl;
// to check the base address with the and & reference opperator 
//cout<<&arr<<endl;
//array declaration homework question 
/*int arr[53];
char arr[106];
bool arr[23];*/
//Initilization 
//int arr[4] = {1,3,5,7};
//used simgle inverted comas for character 
//char cha[10] = {'a','b','c'};

/*
//now we will learn how will we access the elemets in a array 
int arr[]={1,3,5,7,9};
//printing all the values 
for (int i = 0; i < 5; i++)
{
    cout<<arr[i]<<endl;
}*/
//taking input from the user and filling a array 
int arr[10];

cout<<"Enter the value in the array : "<<endl;
//for loop for taking input 
for (int i = 0; i < 10; i++)
{
    cin>>arr[i];

}
cout<<"Input saved printing the array"<<endl;
//for loop for showing the saved elemets in the array
for (int i = 0; i < 10; i++)
{
    cout<<arr[i]<<endl;
}







return 0;
}