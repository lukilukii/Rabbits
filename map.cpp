#include <iostream>
#include "map.h"
#include "Field.h"

Map::Map(int width, int height){
this->width=width;
this->height=height;
for(int i=0; i<width; i++){
        for(int j=0; j<height; j++){
            board[i][j].hasRabbit=false;
            board[i][j].hasHunter=false;
            board[i][j].hasDog=false;
            board[i][j].hasCarrot=false;
            board[i][j].hasTrap=false;
            board[i][j].hasBurrow=false;
            board[i][j].hasBrush=false;
            board[i][j].hasTree=false;
        }
    }

};

void Map::debug_display() const
{
    for(int i=0; i<width; i++)
    {
        for(int j=0; j<height; j++)
        {
            std::cout<<"{";
            if(board[i][j].hasRabbit) {
                std::cout << "R";
            }
            else {
                std::cout<<".";
            }
            if(board[i][j].hasHunter){
                std::cout<<"H";
            }
            else {
                std::cout<<".";
            }
            if(board[i][j].hasDog){
                std::cout<<"D";
            }
            else {
                std::cout<<".";
            }
            std::cout<<"}";

            if(board[i][j].hasCarrot){
                std::cout<<"C";
            }
            else {
                std::cout<<".";
            }
            if(board[i][j].hasBurrow){
                std::cout<<"B";
            }
            else {
                std::cout<<".";
            }
            if(board[i][j].hasBrush){
                std::cout<<"b";
            }
            else {
                std::cout<<".";
            }
            if(board[i][j].hasTree){
                std::cout<<"T";
            }
            else {
                std::cout<<".";
            }
        }
        std::cout<<std::endl;
    }
}

void Map::collision(){
    
}

void Map::growcarrot(){
    
}
