#include<iostream>
#include<map> //for map class//map STL
#include<string>
#include <typeinfo> 

using namespace std;

int main()
{
     
     //map stores data as self balancing BST
     //It is ordered

    map<string,int> mymap; // map created.. it stores data in key value pair
    
    //lets insert some data into the map

    mymap["apple"]=2; //one store

    mymap.insert(make_pair("banana", 20));

    //other way insert object of pair class

    pair<string, int>p;
    p.first="mango";
    p.second=30;


    mymap.insert(p);

//How to iterate through map:--

   for(auto it: mymap) //for each loop for traversing the map
  {
        cout<<it.first<<" and its value is: "<<it.second<<endl;
  }
//other way to iterate:

for(auto it=mymap.begin();it!=mymap.end();it++)
{
   cout<<it->first<<" And its value is: "<<it->second<<endl;
}

cout<<endl<<endl;
//find function..it returns iterator

auto it=mymap.find("banana");

if(it!=mymap.end())
{
    cout<<it->first<<" and "<<it->second<<endl;

    }

    //other way to find

    if(mymap.count("orange"))
    {
        cout<<"Banana is present and its value is "<<mymap["banana"];
    }
    {
        cout<<"key does not present";
    }


}