#include <iostream>

using namespace  std;


class Dynamicarray{

private:
    int* arr;
    int capacity;
    int size;

    void resize(){

        capacity*=2;

        int* new_arr=new int[capacity];

        for (int i=0;i<size;i++){
            new_arr[i]=arr[i];
        }

        delete[] arr;
        arr=new_arr;
        
    }

public:

    Dynamicarray(){
        

        capacity=2;
        size=0;
        arr=new int[capacity];
    }

    ~Dynamicarray(){
        delete[] arr;
    }

    void add_value(int y){
        if (size==capacity){
            resize();
        }
        arr[size]=y;
        size++;
    }
    void reduce(){
        if (size>0){
            size--;
        }
    }
    void show(){
        cout<<size<<capacity<<"\n";
        for (int i=0;i<size;i++){
            cout<<arr[i]<<"\n";
        }
    }

};

int main(){

    Dynamicarray db;

    db.add_value(10);
    db.add_value(11);
    db.add_value(12);
    db.add_value(13);
    db.add_value(14);

    db.show();
    db.add_value(15);
    db.reduce();
    db.show();


}