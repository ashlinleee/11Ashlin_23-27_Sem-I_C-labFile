


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
    string studentName;
    vector<int> grades;

public:
    Student(const string& name) : studentName(name) {
    }

    ~Student() {
    }

    void addGrade(int grade) {
        grades.push_back(grade);
    }

    double calculateAverageGrade() {
        if (grades.empty()) {
            return 0.0; 
        }

        int sum = 0;
        for (int grade : grades) {
            sum += grade;
        }

        return static_cast<double>(sum) / grades.size();
    }

    void displayStudentInfo() {
        cout << "Student Name: " << studentName << endl;
        cout << "Grades: ";
        for (int grade : grades) {
            cout << grade << " ";
        }
        cout << endl;
        cout << "Average Grade: " << calculateAverageGrade() << endl;
    }
};

int main() {
    string name;
    cout << "Enter student name: ";
    getline(cin, name);

    Student student(name);

    int numOfGrades;
    cout << "Enter the number of grades: ";
    cin >> numOfGrades;

    for (int i = 0; i < numOfGrades; ++i) {
        int grade;
        cout << "Enter grade " << i + 1 << ": ";
        cin >> grade;
        student.addGrade(grade);
    }

    cout << "\nStudent Information:\n";
    student.displayStudentInfo();

    return 0;
}
