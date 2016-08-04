#include<iostream>
#include <sstream>

#define TOSTR( x ) dynamic_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

using namespace std;
int mat[10][10];
int dest_x,dest_y;
int cnt;
void findPath(int x,int y,string path){
    if(x==dest_x){
        for(int i = y; i <= dest_y; i++){
            path+=" "+TOSTR(mat[i][x]);
        }
       // cout<<path<<endl;
        path="";
        cnt++;
        return;
    }
    else if(y==dest_y){
        for(int i = x; i <= dest_x; i++){
            path+=" "+TOSTR(mat[y][i]);
        }
        //cout<<path<<endl;
        path="";
        cnt++;
        return;
    }
    else{
        path+=" "+TOSTR(mat[y][x]);
        findPath(x+1,y,path);
        findPath(x,y+1,path);
        return;
    }
}
int main(){
    string path;
    int col,row;
    cout<<"\nEnter Order of maze : ";
    cin>>row>>col;
    dest_x=col-1;
    dest_y=row-1;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            mat[i][j]=i*col+j+1;
        }
    }
    cout<<"All paths from start to end of maze of "<<row<<" x "<<col<<" : "<<endl;
    findPath(0,0,path);
    cout<<cnt;
    return 0;

}
