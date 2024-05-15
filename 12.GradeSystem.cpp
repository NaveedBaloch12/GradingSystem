#include <iostream>
using namespace std;

// User defined functions...
void gradingStudents(int Marks[], int Length)
{
    int Round;
    for (int i = 0; i < Length; i++)
    {
        if (Marks[i] % 5 == 0)
            continue;
        else if (Marks[i] <= 37)
            continue;
        else
        {
            Round = 5 - (Marks[i] % 5);
            if (Round < 3)
            {
                Marks[i] = Marks[i] + Round;
            }
        }
    }
}

int main() // Main function
{
    int NumStd;
    cin >> NumStd;

    int Marks[NumStd];

    if (NumStd < 1 && NumStd > 60)
    {
        return 0;
    }
    for (int i = 0; i < NumStd; i++)
    {
        cin >> Marks[i];
        if (Marks[i] < 0 && Marks[i] > 100)
        {
            return 0;
        }
    }

    // Calling the function...
    gradingStudents(Marks, NumStd);

    for (int i = 0; i < NumStd; i++)
    {
        cout << Marks[i] << endl;
    }
    return 0;
}