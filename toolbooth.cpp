#include <iostream>
using namespace std;

class TollBooth {
private:
	
    unsigned int totalCars;
    double totalCash;

public:
    TollBooth() : totalCars(0), totalCash(0.0) {}

    void addPayingCar() {
        totalCars++;
        totalCash += 0.50;
    }

    void addNonPayingCar() {
        totalCars++;
    }

    void display() const {
        cout << "Total Cars: " << totalCars << endl;
        cout << "Total Cash: $" << totalCash << endl;
    }

    // These are the Getters
    unsigned int getTotalCars() const {
        return totalCars;
    }

    double getTotalCash() const {
        return totalCash;
    }

    // These are the Setters
    void setTotalCars(unsigned int cars) {
        totalCars = cars;
    }

    void setTotalCash(double cash) {
        totalCash = cash;
    }
};

int main() {
    TollBooth booth;

    char key;
    while (true) {
        cout << "Press 'P' to count a paying car, 'N' to count a non-paying car, or 'X' to exit: ";
        cin >> key;

        switch (key) {
            case 'p':
                booth.addPayingCar();
                cout << "Paying car counted." << endl;
                break;
            case 'n':
                booth.addNonPayingCar();
                cout << "Non-paying car counted." << endl;
                break;
            case 'x':
                cout << "Exiting..." << endl;
                 // Total Cars And Cash 
				booth.display(); 
                return 0;
            default:
                cout << "Invalid input. Please try again." << endl;
                break;
        }
    }
    
return 0;
}
