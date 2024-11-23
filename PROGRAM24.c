#include <stdio.h>

// Define a structure to hold book details
struct BookDetail {
    char title[100];
    char author[100];
    float amount;
};

// Function to display book details
void displayBookDetails(struct BookDetail book) {
    printf("Book Title: %s\n", book.title);
    printf("Author Name: %s\n", book.author);
    printf("Amount: %.2f\n", book.amount);
}

int main() {
    // Declare and initialize a structure variable
    struct BookDetail book;

    // Taking user input for book details
    printf("Enter the Book Title: ");
    fgets(book.title, sizeof(book.title), stdin);
    // Remove the trailing newline character from fgets input
    book.title[strcspn(book.title, "\n")] = '\0';

    printf("Enter the Author Name: ");
    fgets(book.author, sizeof(book.author), stdin);
    // Remove the trailing newline character from fgets input
    book.author[strcspn(book.author, "\n")] = '\0';

    printf("Enter the Amount of the Book: ");
    scanf("%f", &book.amount);

    // Pass the structure to the function to display details
    displayBookDetails(book);

    // Print the required message at the end
    printf("\n24CE019_DHRUVRAJ");

    return 0;
}
