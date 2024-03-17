#include <iostream>
#include <list>
#include <string>

class Spreadsheet {
private:
    std::list<std::list<std::string>> data;

public:
    // Function to add a new row to the spreadsheet
    void addRow(const std::list<std::string>& rowData) {
        data.push_back(rowData);
    }

    // Function to delete a row from the spreadsheet
    void deleteRow(int rowIndex) {
        if (rowIndex >= 0 && rowIndex < data.size()) {
            auto it = data.begin();
            std::advance(it, rowIndex);
            data.erase(it);
        }
        else {
            std::cout << "Invalid row index." << std::endl;
        }
    }

    // Function to display the spreadsheet
    void display() const {
        for (const auto& row : data) {
            for (const std::string& cell : row) {
                std::cout << cell << "\t";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Spreadsheet spreadsheet;

    // Adding some rows to the spreadsheet
    spreadsheet.addRow({ "Name", "Age", "City" });
    spreadsheet.addRow({ "John", "30", "New York" });
    spreadsheet.addRow({ "Alice", "25", "London" });

    // Display the spreadsheet
    std::cout << "Spreadsheet:" << std::endl;
    spreadsheet.display();

    // Deleting a row from the spreadsheet
    spreadsheet.deleteRow(1); // Delete the second row (index 1)

    // Display the modified spreadsheet
    std::cout << "\nSpreadsheet after deleting a row:" << std::endl;
    spreadsheet.display();

    return 0;
}
