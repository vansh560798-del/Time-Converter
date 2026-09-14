#include <iostream>
using namespace std;

class TimeConverter
{
public:

    void secondsToTime()
    {
        int totalSeconds;

        cout << "Enter total seconds: ";
        cin >> totalSeconds;

        int hours = totalSeconds / 3600;
        int remainingSeconds = totalSeconds % 3600;

        int minutes = remainingSeconds / 60;
        int seconds = remainingSeconds % 60;

        cout << "HH:MM:SS => "
             << hours << ":"
             << minutes << ":"
             << seconds << endl;
    }
    void timeToSeconds()
    {
        int hours, minutes, seconds;

        cout << "Enter hours: ";
        cin >> hours;

        cout << "Enter minutes: ";
        cin >> minutes;

        cout << "Enter seconds: ";
        cin >> seconds;
\
        int totalSeconds = (hours * 3600) +
                           (minutes * 60) +
                           seconds;

        cout << "Total seconds: "
             << totalSeconds << endl;
    }
};

int main()
{
    TimeConverter converter;
    int choice;

    do
    {
        cout << "\n===== TIME CONVERTER =====" << endl;
        cout << "1. Seconds to HH:MM:SS" << endl;
        cout << "2. HH:MM:SS to Seconds" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                converter.secondsToTime();
                break;

            case 2:
                converter.timeToSeconds();
                break;

            case 3:
                cout << "Program ended." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(choice != 3);

    return 0;
}