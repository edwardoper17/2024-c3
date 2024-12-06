#include <stdio.h>  // Standard input/output library
#include <stdlib.h> // Utility functions library, such as malloc, free, etc.
#include <string.h> // String manipulation library

// Defining constants for the maximum lengths of strings
#define MAX_NAME_LEN 5      // Maximum length for the student's name
#define MAX_CAREER_LEN 5    // Maximum length for the career name
#define FILE_NAME_LEN 10    // Maximum length for the file name

// Definition of the Student structure
typedef struct {
    char name[MAX_NAME_LEN];  // Student's name
    float average;             // Student's average
    char career[MAX_CAREER_LEN]; // Student's career
} Student;  // Structure representing a student record

// Function prototypes
void newFile();  // Creates a new empty file
void openFile();  // Opens and displays the contents of a file
void saveFile(const char *fileName, Student *students, int totalStudents); // Saves a set of students to a file
void searchInFile(const char *fileName); // Searches for a student in the file by name
void addStudent(const char *fileName);  // Adds a new student to the file
int verifyFileExists(const char *fileName); // Checks if a file exists

// Main function
int main() {
    int option;  // Stores the option selected by the user in the menu
    char fileName[FILE_NAME_LEN];  // Variable for the file name

    // Main loop to show the menu until the user selects "exit"
    do {
        // Prints the menu
        printf("\n--- Menu ---\n");
        printf("1. New File\n");
        printf("2. Open File\n");
        printf("3. Save File\n");
        printf("4. Search in File\n");
        printf("5. Add New Student\n");
        printf("0. Exit\n");
        printf("Select an option: ");
        scanf("%d", &option);  // Reads the option selected by the user
        getchar();  // Consume the leftover newline

        // Flow control according to the selected option
        switch (option) {
            case 1:  // Create a new file
                newFile();
                break;
            case 2:  // Open and read an existing file
                printf("Enter the name of the file to open: ");
                fgets(fileName, FILE_NAME_LEN, stdin); // Reads the file name
                fileName[strcspn(fileName, "\n")] = 0; // Removes the newline character
                openFile(fileName);
                break;
            case 3:  // Save a file
                printf("Enter the name of the file to save: ");
                fgets(fileName, FILE_NAME_LEN, stdin); // Reads the file name
                fileName[strcspn(fileName, "\n")] = 0; // Removes the newline character
                // You can implement saveFile according to your logic here
                break;
            case 4:  // Search for a student in the file
                printf("Enter the name of the file to search in: ");
                fgets(fileName, FILE_NAME_LEN, stdin);
                fileName[strcspn(fileName, "\n")] = 0;
                searchInFile(fileName);
                break;
            case 5:  // Add a new student to the file
                printf("Enter the name of the file to add to: ");
                fgets(fileName, FILE_NAME_LEN, stdin);
                fileName[strcspn(fileName, "\n")] = 0;
                addStudent(fileName);
                break;
            case 0:  // Exit the program
                printf("Exiting the program.\n");
                break;
            default:  // Invalid option
                printf("Invalid option. Try again.\n");
        }
    } while (option != 0);  // Continue showing the menu while the option is not 0

    return 0;  // Indicate that the program finished successfully
}

// Function to create a new empty file
void newFile() {
    char fileName[FILE_NAME_LEN];  // Variable for the file name
    printf("Enter the name of the new file: ");
    fgets(fileName, FILE_NAME_LEN, stdin); // Reads the file name
    fileName[strcspn(fileName, "\n")] = 0; // Removes the newline character

    FILE *file = fopen(fileName, "wb");  // Opens the file in binary mode for writing
    if (file == NULL) {  // Checks if there was an error opening the file
        perror("Error creating the file");
        return;
    }

    printf("File '%s' created successfully.\n", fileName);
    fclose(file);  // Closes the file
}

// Function to open and display the contents of a file
void openFile(const char *fileName) {
    if (!verifyFileExists(fileName)) {  // Checks if the file exists
        printf("The file '%s' does not exist.\n", fileName);
        return;
    }

    FILE *file = fopen(fileName, "rb");  // Opens the file in binary mode for reading
    if (file == NULL) {  // Checks if there was an error opening the file
        perror("Error opening the file");
        return;
    }

    Student student;  // Variable to store a student record
    printf("Contents of the file '%s':\n", fileName);
    while (fread(&student, sizeof(Student), 1, file)) {  // Reads and displays records
        printf("Name: %s, Average: %.2f, Career: %s\n",
               student.name, student.average, student.career);
    }

    fclose(file);  // Closes the file
}


