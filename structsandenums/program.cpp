#include "splashkit.h"
#include <string>

using namespace std;

// Return a string of the input line from the terminal
string read_string(string prompt)
{
    string result;
    write(prompt);
    result = read_line();
    return result;
}

// As an integer, return the input line string from the terminal.
int read_integer(string prompt)
{
    string line;
    line = read_string(prompt);

    return convert_to_integer(line);
}

//Define a new type of structure called knight_data
struct knight_data
{
    string name;
    int age;
    int mob; // month of birth
    string gender;
};

//Recieve the user inputs for the knight structure, from the terminal
knight_data read_knight()
{
    knight_data result;

    result.name = read_string("Enter Name:");
    result.age = read_integer("Enter Age:");
    result.mob = read_integer("Enter Month of Birth (in digits):");
    result.gender = read_string("Enter Gender:");

    return result;
}

//Output to terminal the attributes of the my_knight structure
void write_knight(const knight_data &my_knight)
{
    write("Hello " + my_knight.name + ", aged " + to_string(my_knight.age));
    write_line(", born on month " + to_string(my_knight.mob) + ", and of gender " + my_knight.gender);
}

//Define the options in the Menu that define which attribute to update
enum knight_update_option
{
    UPDATE_NAME,
    UPDATE_AGE,
    UPDATE_MOB,
    UPDATE_GENDER,
    FINISH_UPDATE
};

//On terminal, display to user the different options for updating knight. Enable option selection.
knight_update_option read_knight_update_option()
{
    int result;
    write_line();
    write_line("== Update Knight ==");
    write_line();
    write_line("1: Update name");
    write_line("2: Update age");
    write_line("3: Update mob");
    write_line("4: Update gender");
    write_line("5: Finish update");
    result = read_integer("Select Option:");
    return static_cast<knight_update_option>(result - 1);
}

//Display menu, then enable user to input data for the relevant knight attribute in the case selected. 
void update_knight(knight_data &my_knight)
{
    knight_update_option option;
    do
    {
        option = read_knight_update_option();

        switch (option)
        {
        case UPDATE_NAME:
            my_knight.name = read_string("Enter a new name:");
            break;
        case UPDATE_AGE:
            my_knight.age = read_integer("Enter a new age:");
            break;
        case UPDATE_MOB:
            my_knight.mob = read_integer("Enter a new Month of Birth (in digits):");
            break;
        case UPDATE_GENDER:
            my_knight.gender = read_string("Enter a new Gender:");
            break;
        case FINISH_UPDATE:
            break;
        default:
            write_line("Invalid Input! - Please select a valid option!");
        }
    } while (option != FINISH_UPDATE);
}

//Create a knight, display it on terminal. Update it, then display again on terminal
int main()
{
    knight_data my_knight;

    my_knight = read_knight();

    write_knight(my_knight);

    update_knight(my_knight);
    write_line("knight has been updated, now we're back in main()");
    write_knight(my_knight);

    return 0;
}