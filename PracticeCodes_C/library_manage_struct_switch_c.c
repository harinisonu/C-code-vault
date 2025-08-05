#include <stdio.h>
#include <stdlib.h>

struct books {
    char title[10];
    char author[10];
    int ibsn;
    char publication[10];
    int year;
};

struct books* add_new_books(struct books *book_list, int *current_size, int *total_size) {
    int num = 0;
    printf("\nNew book register");
    printf("\nEnter number of books entry: ");
    scanf("%d", &num);
    *total_size = (*total_size) + num;
    printf("total_size: %d\n", *total_size);

    book_list = (struct books*)realloc(book_list, *total_size * sizeof(struct books));

    for (int i = *current_size; i < *total_size; i++) {
        printf("\nEnter Details:");
        printf("\nEnter book title: ");
        scanf("%s", (book_list + i)->title);
        printf("Enter book author: ");
        scanf("%s", (book_list + i)->author);
        printf("Enter book id: ");
        scanf("%d", &(book_list + i)->ibsn);
        printf("Enter book publication: ");
        scanf("%s", (book_list + i)->publication);
        printf("Enter year: ");
        scanf("%d", &(book_list + i)->year);
        printf("Book details added: %s, %s, %d, %s, %d\n",
               (book_list + i)->title, (book_list + i)->author, (book_list + i)->ibsn, (book_list + i)->publication, (book_list + i)->year);
    }

    *current_size = *total_size;
    return book_list;
}

void display(struct books *book_list, int current_size) {
    printf("Display Book register\n");
    if (current_size == 0) {
        printf("No books\n");
    } else {
        for (int i = 0; i < current_size; i++) {
            printf("All Book details: %s, %s, %d, %s, %d\n",
                   (book_list + i)->title, (book_list + i)->author, (book_list + i)->ibsn, (book_list + i)->publication, (book_list + i)->year);
        }
    }
}

void search_book(struct books *book_list, int current_size) {
    int num = 0;
    printf("Search Book register\n");
    printf("Enter ibsn number: ");
    scanf("%d", &num);
    for (int i = 0; i < current_size; i++) {
        if ((book_list + i)->ibsn == num) {
            printf("All Book details with ibsn %d: %s, %s, %s, %d\n",
                   (book_list + i)->ibsn, (book_list + i)->title, (book_list + i)->author, (book_list + i)->publication, (book_list + i)->year);
            return;
        }
    }
    printf("Book not in library\n");
}

void year_search(struct books *book_list, int current_size) {
    int year = 0;
    printf("Search Books by year\n");
    printf("Enter year: ");
    scanf("%d", &year);
    int found = 0;
    for (int i = 0; i < current_size; i++) {
        if ((book_list + i)->year == year) {
            printf("All Book details in year %d: %s, %s, %d, %s\n",
                   (book_list + i)->year, (book_list + i)->title, (book_list + i)->author, (book_list + i)->ibsn, (book_list + i)->publication);
            found = 1;
        }
    }
    if (!found) {
        printf("Year %d Book not in library\n", year);
    }
}

struct books* delete_book(struct books *book_list, int *current_size, int isbn) {
    int found = 0;
    for (int i = 0; i < *current_size; i++) {
        if (book_list[i].ibsn == isbn) {
            found = 1;
            for (int j = i; j < *current_size - 1; j++) {
                book_list[j] = book_list[j + 1]; // Shift elements left
            }
            (*current_size)--;
            book_list = (struct books*)realloc(book_list, *current_size * sizeof(struct books));
            printf("Book with ISBN %d deleted.\n", isbn);
            break;
        }
    }
    if (!found) {
        printf("Book with ISBN %d not found.\n", isbn);
    }
    return book_list;
}

struct books* resize(struct books *book_list, int *total_size) {
    int new_size = 0;
    printf("Enter new size for the book list: ");
    scanf("%d", &new_size);
    if (new_size <= 0) {
        printf("Invalid size. Size must be greater than 0.\n");
        return book_list;
    }
    book_list = (struct books*)realloc(book_list, new_size * sizeof(struct books));
    *total_size = new_size;
    printf("Resized the book list to %d entries.\n", *total_size);
    return book_list;
}

int main() {
    int option = 0;
    int current_size = 0;
    int total_size = 0;
    struct books *book_list = NULL;

    do {
        printf("Enter choice 1-6: ");
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("Case 1\n");
                book_list = add_new_books(book_list, &current_size, &total_size);
                printf("Print entire book list:\n");
                display(book_list, current_size);
                break;
            case 2:
                display(book_list, current_size);
                break;
            case 3:
                search_book(book_list, current_size);
                break;
            case 4:
                year_search(book_list, current_size);
                break;
            case 5: {
                int isbn = 0;
                printf("Enter ISBN to delete: ");
                scanf("%d", &isbn);
                book_list = delete_book(book_list, &current_size, isbn);
                break;
            }
            case 6:
                book_list = resize(book_list, &total_size);
                break;
            default:
                free(book_list);
                printf("Exit\n");
        }
    } while (option <= 6);

    return 0;
}
