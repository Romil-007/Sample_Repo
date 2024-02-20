// Doubly Linked List:
//      1.Music playlist creation
//          -Design a system to keep track of songs in a playlist
//          -Song details are represented by nodes in a doubly linked list.
//          -Navigate through previous and next song in the list
//          -Display the songs according to producer, singer and genre.
//          -Other customisations if you want to add

#include <iostream>
using namespace std;

class Node
{
    public:
        string name;
        string artist;
        string length;
        Node*prev;
        Node*next;


        Node(){
            name = "";
            artist = "";
            length = "";
            prev = NULL;
            next = NULL;
        }
};

class Playlist{
    
};

int main(){


    return 0;
}

