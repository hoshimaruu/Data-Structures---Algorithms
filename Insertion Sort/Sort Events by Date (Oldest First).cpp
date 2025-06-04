#include <iostream>
#include <vector>

/*
    Problem Statement:
        Problem Statement:
        You’re given a vector of Event objects. 
        Each event has:
            name (std::string)
            year, month, day (int)
        Write an insertion sort function that sorts events by:
            Earliest date first (1)-----------

        If two events have the same date, ----
        sort alphabetically by name (2)-------

    example:
        Ascending order: 
            05/10/2025 - Event B
            05/14/2025 - Event A
            05/13/2025 - Event A
*/

struct Event {
    std::string name;
    int year, month, day;
};

bool comesAfter(const Event& a, const Event& b) {
    if (a.year != b.year) return a.year > b.year;
    if (a.month != b.month) return a.month > b.month;
    if (a.day != b.day) return a.day > b.day;
    return a.name > b.name;
}

void insertionSort(std::vector<Event>& events) {
    for (int i = 1; i < events.size(); ++i) {
        Event key = events[i];
        int j = i - 1;

        while (j >= 0 && comesAfter(events[j], key)) {
            events[j + 1] = events[j];
            j--;
        }
        events[j + 1] = key;
    }
}

int main() {
    std::vector<Event> event = {
        {"Event A", 2024, 12, 30},
        {"Event B", 2024, 8, 20},
        {"Event A", 2025, 4, 10},
        {"Event C", 2023, 4, 15}
    };

    insertionSort(event);

    for (const auto& e : event) { 
        std::cout << e.name << " " << e.year << " " << e.month << " " << e.day << '\n';
    }
}