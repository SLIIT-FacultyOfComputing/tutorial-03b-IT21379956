#include <iostream>
using namespace std;

struct Box
{
  int height;
  int width;
  int length;
};

int Volume(Box b);

int main() {
    struct Box b1;
    struct Box b2;

  int Volume(Box);
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> b1.height;
    cout << "Enter Box 1 Width : ";
    cin >> b1.width;
    cout << "Enter Box 1 Length : ";
    cin >> b1.length;
    
    cout << "Enter Box 2 Height : ";
    cin >> b2.height;
    cout << "Enter Box 2 Width : ";
    cin >> b2.width;
    cout << "Enter Box 2 Length : ";
    cin >> b2.length;
    
    // 5. Replace the coding below to pass the Box type structure
    int totalVolume;
    totalVolume = Volume(b1)
             + Volume(b2);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}
// Implement the functions here
int Volume(Box b)
{
  return b.height* b.width* b.length;
}