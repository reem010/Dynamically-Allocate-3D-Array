#include iostream
using namespace std;
int main() {
    int x=1 ,y=2, z=3;
    int  array;
    array= new int[x];
    for(int i=0; ix ;i++){
        array[i]= new int[y];
        for(int j=0 ; jy; j++){
            array[i][j]= new int[z];
        }
    }
}
