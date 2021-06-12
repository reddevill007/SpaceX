#include <iostream>
using namespace std;



class Box {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box
      double volume();
      void input();
};

inline double Box :: volume(){
    return length*breadth*height;
}
inline void Box :: input(){
        cout<<"Enter The length ";
        cin>>length;
        cout<<"Enter The breadth ";
        cin>>breadth;
        cout<<"Enter The height ";
        cin>>height;
}

int main() {
   Box Box1;        // Declare Box1 of type Box
   Box Box2;        // Declare Box2 of type Box
   double volume = 0.0;     // Store the volume of a box here

 

   // box 1 specification

   Box1.input();
    cout<<"The volume of Box1 is"<< Box1.volume()<<"\n";


   // box 2 specification

   Box2.input();
    cout<<"The volume of Box1 is"<< Box2.volume()<<"\n";

   return 0;

}