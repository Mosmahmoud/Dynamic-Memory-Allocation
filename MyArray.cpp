#include "MyArray.h"
#include <iostream>
using namespace std;
template<class T> 
MyArray<T>::MyArray(){
        size = 0 ;
        capacity = INITIAL_CAPACITY;
        data = new T [capacity];
    
}


template<class T> MyArray<T>::MyArray(T *array, int size_array){
    size = size_array;
    if (size_array >= capacity){
        capacity *= 2;
    }
    
    data = new T[capacity];
        for (int i=0; i<size_array;i++){
                data[i]= array[i];
           }
}




template<class T> T MyArray<T>::get(int index){
if (index <size)
return data[index];
else {
    return -1;
}
}




template<class T> void MyArray<T>::push(T element){
    if (size == capacity ){
        capacity *=2;
        T *temp = new T[capacity];
        for (int i = 0;i<size;i++)
        temp[i] = data[i];
    
delete data;
data = temp;
}

data [size] = element;
size++;

}




template<class T> T MyArray<T>::pop(){
    if (size ==0){
        return -1;
    }
T j = data [size -1 ];
    size -- ;

if (size == capacity/4){
    capacity/=2;
      T *temp = new T[capacity];
        for (int i = 0;i<size;i++)
        temp[i] = data[i];
    
delete []data;
data = temp;
}
return j;
}



template<class T> void MyArray<T>::insert(int index, T element){
    if (index == capacity){
        capacity *=2;
        push(element);
    }
    else {
        if (index == capacity);
        capacity *= 2;
        T *temp = new T[capacity];
        for (int i = 0; i < size; i++) {
            temp[i] = data[i];
        }
        data = temp;
    }
    for (int i = (size+1);i>=index;i--){
        data[i]=data[i-1];
    }
    data [index]=element;
    size++;
}



template<class T> T MyArray<T>::remove(int index){
   T *tep = new T [capacity];
   int j=0;
    T x=data[index];
    if (index >= size){
        return -1 ;
    }
    if (index < size){
    for (int i = 0 ;i<size;i++){
        if (i==index){
            j++;

         }
         else{
             tep[i-j]=data[i];
         }
    }
delete[] data;
data = tep;
size--;
if (size == capacity/4){
    capacity/=2;
      T *temp = new T[capacity];
        for (int i = 0;i<size;i++)
        temp[i] = data[i];
    
delete [] data;
data = temp;
}
return x;}
    else {
        return -1;
    }
}
template<class T> void MyArray<T>::print(){
for (int i=0 ; i <size; i++){
    cout<< data[i]<< ' ' ;
}
cout<<endl;
}
template<class T> int MyArray<T>::get_size(){
    return size;

}
template<class T> int MyArray<T>::get_capacity(){
return capacity;
}