/**********************************************************************
                            * PRACTICE  *
**********************************************************************/
#include <iostream>
#include <algorithm>
using namespace std;


/******************************************************************
                      * Our own queue  * 
******************************************************************/

// an array supports the following operations
 const int size = 100;
struct Queue1
{
  int arr[size] ={0};
   int arr_len = 0;

  // add to the front of this array
  void add_end(int value)
  {
      arr[arr_len] = value;
      arr_len ++;
  }
  // add to the end of the current array
  void add_front(int value)
  {
      for(int i = arr_len-1; i >= 0; i--)
          arr[i+1] = arr[i] ; 
      
      arr_len ++;   
      arr[0] = value;
  }
  // remove the front value from the array, and then return that value
  int remove_front()
  {
    int removed_val =  arr[0] ;
          for(int i = 0; i < arr_len ; i++)
      {
          arr[i] = arr[i+1] ; 
      } 
      arr_len --; 
      return removed_val;
  }
  // print the array
  void print()
  {
    for(int i = 0; i< arr_len; i++)
      cout<<arr[i]<<" ";

    cout<<"\n";
  }

};


int main()
{
  Queue1 our_queue;

  our_queue.add_end(10);
  our_queue.add_end(20);
  our_queue.add_end(30);
  our_queue.print();

  our_queue.add_front(1);
  our_queue.add_front(4);
  our_queue.print();

  cout<<our_queue.remove_front();
  cout<<"\n";

  our_queue.print();

  return 0;
}