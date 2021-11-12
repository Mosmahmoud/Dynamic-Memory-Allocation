#include "MyArray.h"

template<class T>
MyArray<T>::MyArray(){
   size = 0;
   capacity = INITIAL_CAPACITY ;
   data = new T[capacity];
}
template<class T>
MyArray<T>::MyArray(T*arr ,int size){
    this->size = size;
    capacity = size;
    data = new T[capacity];
    for (int i = 0; i<size ;++i){
        data[i] = arr[i];
    } 
    
}
template<class T>
T MyArray<T>::get(int index){
    return nullptr;

}
template<class T>
void MyArray<T>::push(T element){
   if(size == capacity)
   {
       capacity *=2;
       T *temp = new T[capacity];
        for (int i = 0 ; i<size ;++i)
        {
           temp[i] = data[i];
        }
      delete []data;
      data = temp;
      }
   
   data[size] = element;
   size++;                  
}
template<class T>
T MyArray<T>::pop()
{   
  if(size >= 0)
  {  
  
   
     size--;
    if(size == capacity/4)
    {
       capacity /=2;
       T *temp = new T[capacity]
        for (int i = 0 ; i<size ;++i)
        {
           temp[i] = data[i];
        }
    }
    delete []data;
    data = temp;
  } 
  return -1;
}
template<class T>
void MyArray<T>::print(){
   
   for(int i =0; i<size ; ++i )
   {
      std::cout<<data[i]<<' ';
     
   }
  std::cout<<std::endl;
}
template<class T>
int MyArray<T>::get_capacity(){
    return capacity;
}
template<class T>
void MyArray<T>::insert(int index , T element)
{
      if(index < size)
      {
          data[size]=element;
      } 
    if(index == size)
    {
        push(element);
    }   
}
template<class T>
T MyArray<T>::remove(int index)
{
   for(int i=size ; i>index ;--i)
   {
       data[i-1]=data[i];
   }
}
template<class T>
int MyArray<T>::get_size()
{
    return size;
}

