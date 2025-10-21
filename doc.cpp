
#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

class Student {
    private:
        int rollno, age;
        string name;

    public:
        Student(int stdId, string stdName, int stdAge) {
            rollno = stdId;
            name = stdName;
            age = stdAge;
        }		

        void setRollno(int stdId) {
            rollno = stdId;
        }
        int getRollno() {
            return rollno;
        }
        void setName(string stdName) {
            name = stdName;
        }
        string getName() {
            return name;
        }
        void setAge(int stdAge) {
            age = stdAge;
        }
        int getAge() {
            return age;
        }
        void displayStudent() {
            cout << "Roll No : " << rollno << endl;
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
        }		
};

void updateStudent(vector<Student>& students) {
    // function remains the same
}

void SearchStudent(vector<Student>& students) {
    int rollno;
    string name;
    bool found = false;

    cout << "\t\tSearch by Rollno (1) or Name (2)? ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "\t\tEnter Rollno :";
        cin >> rollno;
        for (int i = 0; i < students.size(); i++) {
            if (students[i].getRollno() == rollno) {
                cout << "\t\t--------Student Found ------------" << endl;
                students[i].displayStudent();
                found = true;
                break;
            }
        }
    } else if (choice == 2) {
        cout << "\t\tEnter Name :";
        cin.ignore();
        getline(cin, name);
        for (int i = 0; i < students.size(); i++) {
            if (students[i].getName() == name) {
                cout << "\t\t--------Student Found ------------" << endl;
                students[i].displayStudent();
                found = true;
                break;
            }
        }
    }

    if (!found) {
        cout << "\t\tNo Student Found." << endl;
    }
}

void DisplayAllStudent(vector<Student>& students) {
    if (students.empty()) {
        cout << "\t\t No Student Found " << endl;
        return;
    }
    for (int i = 0; i < students.size(); i++) {
        students[i].displayStudent();
        cout << endl;
    }
}

void addNewStudent(vector<Student> &students) {
    int rollno, age;
    string name;
    cout << "Enter Rollno :";
    cin >> rollno;

    // check if student already exists
    for (int i = 0; i < students.size(); i++) {
        if (students[i].getRollno() == rollno) {
            cout << "\t\tStudent Already Exists" << endl;
            return;
        }
    }

    cout << "Enter Name : ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Age : ";
    cin >> age;

    if (age <= 0) {
        cout << "\t\tInvalid Age." << endl;
        return;
    }

    Student newStudent(rollno, name, age);
    students.push_back(newStudent);
}

void deleteStudent(vector<Student>& students) {
    string name;
    cout << "Enter Name to Delete :";
    cin.ignore();
    getline(cin, name);

    for (int i = 0; i < students.size(); i++) {
        if (students[i].getName() == name) {
            students.erase((students.begin()+i));
            cout << "\t\tStudent Removed Successfully" << endl;
            return;
        }
    }

    cout << "\t\tStudent Not Found" << endl;
}

void sortStudents(vector<Student>& students) {
    cout << "\t\tSort by Rollno (1) or Name (2)? ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        sort(students.begin(), students.end(), [](Student &a, Student &b) {
            return a.getRollno() < b.getRollno();
        });
    } else if (choice == 2) {
        sort(students.begin(), students.end(), [](Student &a, Student &b) {
            return a.getName() < b.getName();
        });
    }
    cout << "\t\tStudents Sorted Successfully." << endl;
}

void saveToFile(vector<Student>& students) {
    ofstream file("students.txt");
    if (file.is_open()) {
        for (int i = 0; i < students.size(); i++) {
            file << "Roll No: " << students[i].getRollno() << "\n";
            file << "Name: " << students[i].getName() << "\n";
            file << "Age: " << students[i].getAge() << "\n";
            file << "---------------------\n";
        }
        file.close();
        cout << "\t\tStudent Data Saved Successfully." << endl;
    } else {
        cout << "\t\tError Saving File." << endl;
    }
}

int main() {
    vector<Student> students;
    students.push_back(Student(1, "Ali", 35));
    char choice;

    do {
        system("cls");
        int op;
        cout << "\n\t\t--------------------------------";
        cout << "\n\t\t*** Student Management System ***";
        cout << "\n\t\t--------------------------------";
        cout << "\n\t\t 1. Add New Student" << endl;
        cout << "\t\t 2. Display All Students " << endl;
        cout << "\t\t 3. Search Student" << endl;
        cout << "\t\t 4. Update Student" << endl;
        cout << "\t\t 5. Delete Student " << endl;
        cout << "\t\t 6. Sort Students" << endl;
        cout << "\t\t 7. Save Students to File" << endl;
        cout << "\t\t 8. Exit" << endl;
        cout << "\t\t Enter Your Choice : ";
        cin >> op;

        switch(op) {
            case 1:
                addNewStudent(students);
                break;
            case 2:
                DisplayAllStudent(students);
                break;
            case 3:
                SearchStudent(students);
                break;	
            case 4:
                updateStudent(students);
                break;	
            case 5:
                deleteStudent(students);
                break;	
            case 6:
                sortStudents(students);
                break;
            case 7:
                saveToFile(students);
                break;
            case 8:
                cout << "\t\tExiting the Program..." << endl;
                return 0; // Exit the program
            default:
                cout << "\t\tInvalid Number " << endl;		
        }
        cout << "\t\tDo You Want to Continue [Yes/No]? :";
        cin >> choice;
    } while(choice == 'y' || choice == 'Y');	
    return 0;
}
