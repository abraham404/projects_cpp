#include<iostream>
#include<unistd.h>


using namespace std;

void matriz();

int main(){

    matriz();

    return 0;
}

void matriz(){

    int cel[30][50];


     for(int i=0; i<30; i++){
    
        for(int j=0; j< 50; j++){

            cel[i][j]=0;
        }

     }

    cel[10][20]=1;
    cel[11][20]=1;
    cel[9][20]=1;
    cel[10][21]=1;
    cel[10][19]=1;
    cel[11][21]=1;
    cel[9][19]=1;
    cel[9][21]=1;
    cel[11][19]=1;
    
    while(true){    

        sleep(1);

        for(int i=0; i<30; i++){

            for(int j=0; j<50; j++){
                

                 if (cel[i][j]==0){
                    
                    cout<<"⬛";

                }else if(cel[i][j]==1){

                    cout<<"⬜";
                }

                    

                if(cel[i][j]==1 && cel[i+1][j]==1 && cel[i-1][j]==1 && cel[i][j+1]==1 && cel[i][j-1]==1 && 
                    cel[i+1][j+1]==1 && cel[i-1][j-1]==1 && cel[i-1][j+1]==1 && cel[i+1][j-1]==1){

                    cel[i][j]=0;

                }else if (cel[i][j]==0 && cel[i+1][j]==1 && cel[i-1][j]==1 && cel[i][j-1]==1 && cel[i][j+1]==0){

                    cel[i][j]==1;

                } else if (cel[i][j]==0 && cel[i+1][j]==1 && cel[i-1][j]==1 && cel[i][j+1]==1 && cel[i][j-1]==0){

                    cel[i][j]==1;

                }else if(cel[i][j]==0 && cel[i][j+1]==1 && cel[i][j-1]==1 && cel[i-1][j]==1 && cel[i+1][j]==0){

                    cel[i][j]==1;

                }else if (cel[i][j]==0 && cel[i][j+1]==1 && cel[i][j-1]==1 && cel[i+1][j]==1 && cel[i-1][j]==0){

                    cel[i][j]==1;
                    
                }else if (cel[i][j]==1 && cel[i][j+1]==1 && cel[i][j-1]==1 && cel[i+1][j] == 0 && cel[i-1][j] == 0 ){

                    cel[i][j]=1; 

                }else if (cel[i][j]==1 && cel[i+1][j]==1 && cel[i-1][j]==1 && cel[i][j+1] == 0 && cel[i][j-1] == 0){

                    cel[i][j]=1; 

                }else if (cel[i][j]==1 && cel[i][j-1]==1 && cel[i][j+1]==0 && cel[i+1][j]== 0 && cel[i-1][j] == 0){

                    cel[i][j]=0;

                }else if(cel[i][j]==1 && cel[i][j-1]==0 && cel[i][j+1]==1 && cel[i+1][j]== 0 && cel[i-1][j] == 0){

                    cel[i][j]=0;

                }else if (cel[i][j]==1 && cel[i][j-1]==0 && cel[i][j+1]==0 && cel[i+1][j]== 1 && cel[i-1][j] == 0){

                    cel[i][j]=0;

                }else if (cel[i][j]==1 && cel[i][j-1]==0 && cel[i][j+1]==0 && cel[i+1][j]== 0 && cel[i-1][j] == 1){

                    cel[i][j]=0;

                }
                

               
            
            }
            

        cout<<endl;    

        }
}

}