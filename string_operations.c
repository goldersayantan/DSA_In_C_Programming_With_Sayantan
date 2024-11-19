#include <stdio.h>
#include <string.h>

// Function to access a character by index
char accessCharacterByIndex(char str[], int index) {
    return str[index];
}

// Function to compare two strings
int compareStrings(char str1[], char str2[]) {
    return strcmp(str1, str2); // Returns 0 if strings are equal, non-zero otherwise
}

// Function to find index of a substring
int findSubstringIndex(char str[], char substr[]) {
    char *ptr = strstr(str, substr); // Finds the first occurrence of substring
    if (ptr != NULL) {
        return ptr - str; // Returns the index of the substring
    }
    return -1; // Substring not found
}

// Function to concatenate two strings
void concatenateStrings(char str1[], char str2[], char result[]) {
    strcpy(result, str1);  // Copy the first string to result
    strcat(result, str2);  // Concatenate the second string to result
}

// Function to find a substring (check if substr is present in str)
int findSubstring(char str[], char substr[]) {
    return strstr(str, substr) != NULL; // Returns 1 if substring is found, 0 otherwise
}

int main() {
    char str1[100], str2[100], substr[100], result[200];
    int index, comparisonResult, subStringIndex;

    // Taking inputs for string operations
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline character

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove trailing newline character

    printf("Enter a substring to search for: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = '\0'; // Remove trailing newline character

    // Indexing: Access a character by index
    printf("Enter an index to access in first string: ");
    scanf("%d", &index);
    if (index >= 0 && index < strlen(str1)) {
        printf("Character at index %d of first string: %c\n", index, accessCharacterByIndex(str1, index));
    } else {
        printf("Invalid index!\n");
    }

    // Comparing two strings
    comparisonResult = compareStrings(str1, str2);
    if (comparisonResult == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    // Find the index of a substring
    subStringIndex = findSubstringIndex(str1, substr);
    if (subStringIndex != -1) {
        printf("Substring found at index %d in the first string.\n", subStringIndex);
    } else {
        printf("Substring not found in the first string.\n");
    }

    // Concatenate two strings
    concatenateStrings(str1, str2, result);
    printf("Concatenated string: %s\n", result);

    // Find if substring exists in string
    if (findSubstring(str1, substr)) {
        printf("The substring exists in the first string.\n");
    } else {
        printf("The substring does not exist in the first string.\n");
    }

    return 0;
}
