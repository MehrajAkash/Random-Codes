#include<iostream>
#include<stdbool.h>
using namespace std;
#define capacity 5
int queue[capacity];
int totalitem=0,front=0,rear=-1;

bool isfull(){
  if(totalitem==capacity){
    return true;
  }
  return false;
}

bool isempty(){
 if(totalitem==0){
    return true;
 }
 return false;
}

void enqueue(int a){
    if(isfull()){
        cout<<"sorry queue is full"<<endl;
    }
    else{
        rear = (rear+1)%capacity;
       queue[rear]=a;
       totalitem++;
    }

}

int dequeue(){
   if(isempty()){
     cout<<"queue is empty"<<endl;
   }
   else{
     queue[front]=-1;
     front=(front+1)%capacity;
     totalitem--;
     return -1;
   }

}

void printqueue(){
  cout<<"queue: ";
  for(int i=0;i<capacity;i++)
    cout<<queue[i]<<" ";
    cout<<endl;
}

int main(){
 printqueue();
 enqueue(10);
 printqueue();
 enqueue(20);
 printqueue();
 enqueue(30);
 printqueue();
 enqueue(40);
 printqueue();
 enqueue(50);
 printqueue();
 enqueue(60);
 printqueue();
 dequeue();
  printqueue();
   enqueue(60);
   printqueue();
   enqueue(70);
   printqueue();
   dequeue();
   enqueue(70);
   printqueue();

   dequeue();
   enqueue(80);
   printqueue();
   dequeue();
   enqueue(90);
   printqueue();
   dequeue();
   enqueue(100);
   printqueue();
   dequeue();
   enqueue(110);
   printqueue();

return 0;
}
