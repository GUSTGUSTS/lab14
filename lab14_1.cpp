#include <iostream>
using namespace std;

void swap(int d[],int x, int y){
int g = d[x];
d[x] = d[y];
d[y] = g;
}

void show(int d[],int N){
for(int i = 0; i < N; i++){
    cout  << d[i] << " ";
    }

}

void thin(int d[],int a){

	if(d[a] < d[a+1]) {
        swap(d,a,a+1);
        if(a>=1){
        thin(d,a-1);
        
    
    
    }
}
}

template <typename T>
void insertionSort(T d[],int N){
for(int end =0; end < 9; end++){
	thin(d,end);
    cout  << "Pass " << end+1 <<":";
	show(d,10);
	cout << "\n";
}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
