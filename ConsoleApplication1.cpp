#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <fstream.h>
typedef struct _STUDENT
{
    char fio[20];
    char group[10];
    unsigned int grant;
}STUDENT, * PSTUDENT;

char path[] = "students.dat";
STUDENT st;

void main()
{

    char choice.
        fstream file.
        unsigned int num.

        do
        {
            clrscr();
            cout << "1-add new record\n";
            cout << "2-search record\n";
            switch (choice = getch())
            {
            case '1':
            {
                file.open(path, ios::app);
                if (!file)
                {
                    cout << "File could not be opened!!!\n";
                }
                else
                {
                    cout << "fio=«; cin>>st.fio.
                        cout << "group=«; cin>>st. group.
                        cout << "grant=«; cin>>st. grant;
                        file.write((char*)&st, sizeof(STUDENT));
                    file.close();
                }
                getch().
                    break.
            }
            case '2':
            {
                file.open(path, ios::in);
                if (!file)
                {
                    cout << "File could not be opened!!!\n";
                }
                else
                {
                    cout << "Enter number of record:"; cin >> num;
                    file.seekp(num * sizeof(STUDENT));
                    file.read((char*)&st, sizeof(STUDENT));
                    file.close();
                    cout << "fio=" << st.fio << endl;
                    cout << "group=" << st.group << endl;
                    cout << "grant=" << st.grant << endl;
                }
                getch();
                break;
            }
            }
        } while (choice != 27);
}
