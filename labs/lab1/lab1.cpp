#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

cout << "Hello ";

for(int i = 0; i < argv.length; i++){

   cout << argv[i];

}

cout << "!\n";

return 0;
}
