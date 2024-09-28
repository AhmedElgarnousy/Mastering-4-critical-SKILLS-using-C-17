#include <iostream>
#include<algorithm>

using namespace std;

struct Queue {
    int arr[100];

    int len = 0; 
    Queue( int size){
    }

    Queue( ){
    }

   void add_end(int value){
    arr[len++] = value;
   } 

   void shift_right(int arr[]){
        for(int i =len; i >=0; i--)
        {
                arr[i+1] = arr[i];
        }
        len++;
   }

   void shift_left(int arr[]){
        for(int i =0; i <len; i++)
        {
                arr[i] = arr[i+1];
        }
        len--;
   }

   void add_front(int value){
       shift_right(arr);
       arr[0] =value;
   }

   int remove_front(){
    int value =  arr[0];;
       shift_left(arr);
       return value;
   }

   void print()
   {
        for(int i =0; i <len; i++)
            cout<<arr[i]<<" ";
        cout<<"\n";
   } 

};



int main()
{
    Queue my_queue;
    my_queue.add_end(10);
    my_queue.add_end(20);
    my_queue.add_end(30);
    
    my_queue.print();

    my_queue.add_front(1);
    my_queue.add_front(4);

    my_queue.print();

    cout<<my_queue.remove_front()<<"\n";
    my_queue.print();



    return 0;
}