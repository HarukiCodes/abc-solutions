#include <iostream>
#include <string>

enum class DayOfWeek {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

std::string dayToString(DayOfWeek day) {
    switch (day) {
        case DayOfWeek::Monday:
            return "Monday";
        case DayOfWeek::Tuesday:
            return "Tuesday";
        case DayOfWeek::Wednesday:
            return "Wednesday";
        case DayOfWeek::Thursday:
            return "Thursday";
        case DayOfWeek::Friday:
            return "Friday";
        case DayOfWeek::Saturday:
            return "Saturday";
        case DayOfWeek::Sunday:
            return "Sunday";
        default:
            return "Unknown";
    }
}

DayOfWeek nextDay(DayOfWeek day) {
    return static_cast<DayOfWeek>((static_cast<int>(day) + 1) % 7);
}

bool isSpringOrSummerHoliday(int month) {
    return (month == 2 || month == 3 || month == 8 || month == 9);
}

int daysInMonth(int month, int year) {
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    if (month == 2)
        return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    return 31;
}

int main() {
    int startYear = 2025;
    int startMonth = 2;
    int startDay = 4;
    DayOfWeek startDayOfWeek = DayOfWeek::Wednesday;
    int lastContestNumber = 386;
    int endContestNumber = 42;
    int upcomingContest = lastContestNumber + 1;
    int totalDays = 0;
    DayOfWeek currentDay = startDayOfWeek;
    int currentMonth = startMonth;
    int currentYear = startYear;

    int iterations = 2;  // 2èTï™ÇåvéZ

    for (int i = 0; i < iterations; ++i) {
        lastContestNumber = 386;                  // ÉäÉZÉbÉg
        endContestNumber = 42;                    // ÉäÉZÉbÉg
        upcomingContest = lastContestNumber + 1;  // ÉäÉZÉbÉg

        while (lastContestNumber >= endContestNumber) {
            std::cout << "Date: " << currentYear << "/" << currentMonth << "/" << startDay
                      << "\t(" << dayToString(currentDay) << ")\t- ";

            if (currentDay == DayOfWeek::Saturday) {
                if (isSpringOrSummerHoliday(currentMonth)) {
                    std::cout << "Solve Contest " << upcomingContest << "\tand Contest " << lastContestNumber
                              << "\tand Contest " << lastContestNumber - 1 << std::endl;
                    upcomingContest++;
                    lastContestNumber -= 2;  // ètãxÇ›ÅEâƒãxÇ›ÇÃìyójì˙ÇÕêVÇµÇ¢ÉRÉìÉeÉXÉg1âÒ + âﬂãéñ‚2âÒ
                } else {
                    std::cout << "Solve Contest " << upcomingContest << "\tand Contest " << lastContestNumber << std::endl;
                    upcomingContest++;
                    lastContestNumber -= 1;  // í èÌÇÃìyójì˙ÇÕêVÇµÇ¢ÉRÉìÉeÉXÉg1âÒ + âﬂãéñ‚1âÒ
                }
            } else if (currentDay == DayOfWeek::Sunday) {
                if (isSpringOrSummerHoliday(currentMonth)) {
                    std::cout << "Solve Contest " << lastContestNumber << "\tand Contest " << lastContestNumber - 1
                              << "\tand Contest " << lastContestNumber - 2 << std::endl;
                    lastContestNumber -= 3;  // ètãxÇ›ÅEâƒãxÇ›ÇÃì˙ójì˙ÇÕâﬂãéñ‚3âÒï™
                } else {
                    std::cout << "Solve Contest " << lastContestNumber << "\tand Contest " << lastContestNumber - 1 << std::endl;
                    lastContestNumber -= 2;  // í èÌÇÃì˙ójì˙ÇÕâﬂãéñ‚2âÒï™
                }
            } else if (isSpringOrSummerHoliday(currentMonth)) {
                std::cout << "Solve Contest " << lastContestNumber << "\tand Contest " << lastContestNumber - 1
                          << "\tand Contest " << lastContestNumber - 2 << std::endl;
                lastContestNumber -= 3;  // ètãxÇ›ÅEâƒãxÇ›ÇÃïΩì˙ÇÕâﬂãéñ‚3âÒï™
            } else {
                std::cout << "Solve Contest " << lastContestNumber << std::endl;
                lastContestNumber -= 1;  // í èÌÇÃïΩì˙ÇÕâﬂãéñ‚1âÒï™
            }

            totalDays++;
            currentDay = nextDay(currentDay);
            startDay++;

            // åéÇ∆îNÇÃçXêV
            if (startDay > daysInMonth(currentMonth, currentYear)) {
                startDay = 1;
                currentMonth++;
            }
            if (currentMonth > 12) {
                currentMonth = 1;
                currentYear++;
            }
        }
        std::cout << "/*========*/\n"
                  << i << "èTñ⁄èIóπì˙: "
                  << currentYear << "/"
                  << currentMonth << "/"
                  << startDay
                  << "\n/*========*/\n"
                  << std::endl;
    }
    return 0;
}