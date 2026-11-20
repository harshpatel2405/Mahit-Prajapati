
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file;

    // --------------------------------
    // 1. CREATE AND WRITE INTO FILE
    // --------------------------------

    file.open("student.txt", ios::out | ios::trunc);

    if (file.is_open())
    {
        file << "101 Harsh 85";

        file.put('\n');
        file << "This is second line.";

        cout << "File created successfully!" << endl;

        file.close();
    }

    // --------------------------------
    // 2. APPEND DATA INTO FILE
    // --------------------------------

    file.open("student.txt", ios::out | ios::app);

    file << "\nThis is appended data.";

    file.close();

    // --------------------------------
    // 3. READ USING FORMATTED INPUT >>
    // --------------------------------

    file.open("student.txt", ios::in);

    int id, marks;
    string name;

    file >> id >> name >> marks;

    cout << "\nStudent Details:" << endl;
    cout << "ID    : " << id << endl;
    cout << "Name  : " << name << endl;
    cout << "Marks : " << marks << endl;

    // --------------------------------
    // 4. READ USING GETLINE()
    // --------------------------------

    file.ignore();

    string line;

    getline(file, line);

    cout << "\nSecond Line: " << line << endl;

    // --------------------------------
    // 5. READ USING GET()
    // --------------------------------

    char ch;

    file.get(ch);

    cout << "\nCharacter: " << ch << endl;

    file.close();

    // --------------------------------
    // 6. READ COMPLETE FILE CHARACTER BY CHARACTER
    // --------------------------------

    file.open("student.txt", ios::in);

    cout << "\nComplete File Content:" << endl;

    while (file.get(ch))
    {
        cout << ch;
    }

    // --------------------------------
    // 7. CHECK FILE STATUS
    // --------------------------------

    cout << "\n\nFile Status:" << endl;

    cout << "Good : " << file.good() << endl;
    cout << "EOF  : " << file.eof() << endl;
    cout << "Fail : " << file.fail() << endl;
    cout << "Bad  : " << file.bad() << endl;

    file.clear();

    // --------------------------------
    // 8. FILE POINTER FUNCTIONS
    // --------------------------------

    file.seekg(0, ios::beg);

    cout << "\nRead Pointer Position: "
         << file.tellg() << endl;

    file.seekp(0, ios::end);

    cout << "Write Pointer Position: "
         << file.tellp() << endl;

    file.close();

    // --------------------------------
    // 9. BINARY FILE WRITE AND READ
    // --------------------------------

    int age = 22;

    file.open("student.dat", ios::out | ios::binary);

    file.write((char *)&age, sizeof(age));

    file.close();

    age = 0;

    file.open("student.dat", ios::in | ios::binary);

    file.read((char *)&age, sizeof(age));

    cout << "\nAge from Binary File: " << age << endl;

    file.close();

    return 0;
}
