#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cmath>


float array_new[101][101];
float array_old[101][101];
float delta_x=1/100;
float x=0.0;
float y=0.0;


int main(){
  for(int i=0; i<101; i++){
    for(int j=0; j<101; j++){
        
        if((40<i)&&(i<60)&&(j=40)){
          array_old[i][j]=100.0;
        }
        
        else if ((40<i)&&(i<60)&&(j=60)){
            array_old[i][j]=-100.0;
        }
        
        else{
            array_old[i][j]=0.0;
        }
    }
  }
    
    
    for (int i=1; i<100; i++){
       for (int j=1; j<100; j++){
           if((i<40)&&(i>60)&&(j=40)|(j=60)){
             x = (array_old[i+1][j]+array_old[i-1][j]-2*array_old[i][j])/(delta_x*delta_x);
             //y= (array_old[i][j+1]+array_old[i][j-1]-2*array_old[i][j])/(delta_x*delta_x);
             array_new[i][j]=x;
           }
       }
    }
    return array_new;
}
