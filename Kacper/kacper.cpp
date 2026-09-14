
#include <iostream>

int main()
{ 
    int tab[6] = {0},
    
    fov(int i=0, i<6; i++){
        fov(int j=0, j<5; j++ ){
            if(tab[j] > tab[j++]) {
                int temp = tab [j];
                tab[j] = tab[j+1];
                tab[j+1]= temp;
            }
        }
    }
 

    return 0;
}