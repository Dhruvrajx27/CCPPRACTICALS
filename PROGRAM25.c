#include <stdio.h>
#include <string.h>

// Define a union called Library
union Library {
    int accessionNumber;
    char title[100];
    char author[100];
    float price;
    int issuedFlag;
};

int main() {
    // Declare a variable of union type Library
    union Library book;

    // Input data for the book
    printf("Enter the Accession Number: ");
    scanf("%d", &book.accessionNumber);

    // Clear the input buffer
    getchar(); // This clears the newline character left by scanf

    printf("Enter the Book Title: ");
    fgets(book.title, sizeof(book.title), stdin);
    // Remove the newline character from fgets input
    book.title[strcspn(book.title, "\n")] = '\0';

    printf("Enter the Author Name: ");
    fgets(book.author, sizeof(book.author), stdin);
    // Remove the newline character from fgets input
    book.author[strcspn(book.author, "\n")] = '\0';

    printf("Enter the Price of the Book: ");
    scanf("%f", &book.price);

    printf("Enter 1 if the book is issued, 0 if not: ");
    scanf("%d", &book.issuedFlag);

    // Display the book details
    printf("\nBook Details:\n");
    printf("Accession Number: %d\n", book.accessionNumber);
    printf("Book Title: %s\n", book.title);
    printf("Author Name: %s\n", book.author);
    printf("Price: %.2f\n", book.price);
    if (book.issuedFlag == 1)
        printf("Status: Book is Issued\n");
    else
        printf("Status: Book is Not Issued\n");

    // Print the required message
    printf("\n24CE019_DHRUVRAJ\n");

    return 0;
}
