#include <Speaker.h>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;
using namespace Hello;

int main(int argc, char *argv[]) {
    // Initialize random seed
    srand(static_cast<unsigned int>(time(0)));

    // Array of random greetings
    const char* greetings[] = {
        "Hello!",
        "Hi there!",
        "Greetings!",
        "Salutations!",
        "Howdy!"
    };
    
    // Select a random greeting
    int randomIndex = rand() % (sizeof(greetings) / sizeof(greetings[0]));
    const char* randomGreeting = greetings[randomIndex];

    Speaker* speaker = new Speaker();

    // Use the random greeting in some way
    cout << randomGreeting << endl; // Print the random greeting
    speaker->sayHello(); // Call sayHello method

    delete speaker; // Clean up
    return 0;
}
