#include <iostream> // Include the iostream library for input and output operations

//.2. Namespace declaration to avoid prefixing standard library names => su dung cac ten thu vien chuan ma khong can them tien to std:: vi du nhu std::cout => cout, std::endl => endl
using namespace std;

//3. Main function where the program excution begins
int main() {

    //4. Declare a variable to store the distance
    double distance = 50.0;

    //5. Output the distance to the console
    cout << "Distance: " << distance << " km" << endl;

    //6. Return 0 to indicate successful execution of the program
    return 0;
}