#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/
int linearSearch(auto data, auto key)//prototype
{
	for(int i=0;i<data.size();i++)
	{
		if(data[i]==key)
		{
			return i;
		}//end if
	}//end for
	return -1;//element not found
}
void insertionSort(auto& data)
{
	int nextIndex,moveIndex,insertVal;
	for(nextIndex=1;nextIndex<data.size();nextIndex++)
	{
		insertVal=data[nextIndex];
		moveItem=nextItem;
		
		while(moveItem>0 && data[moveItem-1]>insertVal)
		{
			data[moveItem]=data[moveItem-1]
			moveItem--;
			
		}//end while
		data[moveItem]=insertVal;
		
	}//end for 
}//end function

int main()
{
  vector<string> inputs;
  string search_key, input;
  int result;

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
       
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
   cout<<endl<<"To end input type the #-character (followed by Enter)"<<endl<<endl;
  cout<<"Enter a value to search for: ";

   
   for(a=0;a<inputs.size();a++)
   {
	   cout<<inputs[a]<<" ";
   }
   

    return 0;
}
