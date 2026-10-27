/* 

MARIPET KERETO 
CT101/G/26655/25
COMPUTER SCIENCE

*/


#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    int admissionNo;
    float feeBalance;

public:
    // Function to input student details
    void inputStudentData() {
        cout << "Enter name of the student: ";
        getline(cin >> ws, studentName); // ws discards leading whitespaces
        
        cout << "Enter admission number: ";
        cin >> admissionNo;
        
        cout << "Enter current fee balance: ";
        cin >> feeBalance;
    }

    // Function to reduce the fee balance when a payment is made
    void makePayment(float paymentMade) {
        if (paymentMade > 0) {
            feeBalance -= paymentMade;
            cout << "\nPayment of $" << paymentMade << " successfully processed." << endl;
        } else {
            cout << "\nInvalid payment amount." << endl;
        }
    }

    // Function to show student details and remaining balance
    void displayStatus() {
        cout << "\n---- STUDENT DETAIL ----" << endl;
        cout << "Student name: " << studentName << endl;
        cout << "Admission number: " << admissionNo << endl;
        cout << "Remaining Fee balance: $" << feeBalance << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    // i) Create an object of the class
    Student student1; 
    
    // ii) Input student details
    student1.inputStudentData(); 
    
    // iii) Display initial status before payment
    student1.displayStatus();
    
    // iv) Process a fee payment
    float payment;
    cout << "\nEnter amount to pay: ";
    cin >> payment;
    student1.makePayment(payment); 
    
    // v) Display updated status
    student1.displayStatus(); 
    
    return 0;
}
