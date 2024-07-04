#include<iostream>
#include<stdlib.h>
using namespace std;
#define capacity 5
int arr[capacity],n,front=0,rear=-1,totalitem=0;

bool isFull(){
  if(totalitem>capacity-1) return true;

  return false;
}

bool isEmpty(){
  if(totalitem == 0) return true;

  return false;
}

void enqueue(int item){
  if(isFull()){
      cout<<"Array is full \n";
      return;
  }
    rear = (rear + 1)%capacity;
    arr[rear] = item;
    totalitem++;
}

void dequeue(){
  if(isEmpty()){
    cout<<"Array is empty \n";
    return;
  }
  arr[front]=-1;
  front = (front+1)%capacity;
  totalitem--;

}

void print(){
  for(int i=0;i<capacity;i++)
    cout<<arr[i]<<" ";

  cout<<endl;
}

int main(){
 enqueue(10);
 enqueue(20);
 enqueue(30);
 enqueue(40);
  enqueue(50);
 enqueue(60);
print();
 dequeue();
print();
 enqueue(50);
 enqueue(60);
print();
 dequeue();
 dequeue();
 dequeue();
 dequeue();
 dequeue();
  dequeue();

print();

return 0;
}
