#include <iostream>
using namespace std;

class DB; // Forward declaration of class DB

class DM
{
private:
    int meters;
    float centimeters;

public:
    void getDistance()
    {
        cout << "Enter distance in meters: ";
        cin >> meters;
        cout << "Enter distance in centimeters: ";
        cin >> centimeters;
    }

    void displayDistance() const
    {
        cout << "Distance: " << meters << " meters and " << centimeters << " centimeters." << endl;
    }

    friend void addDistance(const DM &dm, const DB &db);
};

class DB
{
private:
    int feet;
    float inches;

public:
    void getDistance()
    {
        cout << "Enter distance in feet: ";
        cin >> feet;
        cout << "Enter distance in inches: ";
        cin >> inches;
    }

    void displayDistance() const
    {
        cout << "Distance: " << feet << " feet and " << inches << " inches." << endl;
    }

    friend void addDistance(const DM &dm, const DB &db);
};

void addDistance(const DM &dm, const DB &db)
{
    // Convert DM to inches
    float dmInches = dm.meters * 39.37 + dm.centimeters * 0.39;

    // Add DM inches to DB inches
    float totalInches = dmInches + db.feet * 12 + db.inches;

    // Convert total inches to DM meters and centimeters
    int totalMeters = totalInches / 39.37;
    float totalCentimeters = (totalInches - totalMeters * 39.37) / 0.39;

    // Create a new DM object to store the result
    DM result;
    result.meters = totalMeters;
    result.centimeters = totalCentimeters;

    // Display the result
    result.displayDistance();
}

int main()
{
    DM dm;
    DB db;

    cout << "Enter distances in DM:" << endl;
    dm.getDistance();

    cout << "Enter distances in DB:" << endl;
    db.getDistance();

    cout << "Adding distances:" << endl;
    addDistance(dm, db);

    return 0;
}
