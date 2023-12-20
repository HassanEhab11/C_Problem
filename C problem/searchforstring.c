/**
 * ----------------------------------------------------------------------------
 * Filename   : searchforstring.c
 * Author     : Hassan Ehab
 * Created on : Tuesday, December 19, 2023
 * Last edited: Tuesday, December 19, 2023
 * Description: C function to search for a specific string in a stream of data..
 * ----------------------------------------------------------------------------
 */

#include<stdio.h>
#include<string.h>

int searchforstring(const char *stream, const char *str);

int main() {
    const char *stream = "hassan aladgham ehab";
    const char *str = "ehab";

    int result = searchforstring(stream, str);

    if (result != -1) {
        printf("String found at index %d\n", result);
    } else {
        printf("String not found in the stream.\n");
    }

    return 0;
}

int searchforstring(const char *stream, const char *str) {
    int i = 0, j = 0;
    int strlength = strlen(str);
    int streamLength = strlen(stream);

    for (i = 0; i < streamLength; i++) {
        if (stream[i] == str[j]) {
            if (j == strlength - 1) {
                return i - strlength + 1;
            }
            j++;
        } else {
            j = 0;
        }
    }

    return -1;
}

/********************************************************************/
/************************ Other Solution ****************************/
/********************************************************************/

#include <stdio.h>
#include <string.h>

int searchInStream(const char *stream, size_t streamLength, const char *target) {
    size_t targetLength = strlen(target);

    // Iterate through the stream
    for (size_t i = 0; i <= streamLength - targetLength; ++i) {
        // Check if the substring of stream starting at position i matches the target
        if (strncmp(&stream[i], target, targetLength) == 0) {
            // Target string found, return the position
            return i;
        }
    }

    // Target string not found
    return -1;
}

int main() {
    const char *stream = "This is a sample stream of data.";
    const char *target = "sample";

    size_t streamLength = strlen(stream);

    int position = searchInStream(stream, streamLength, target);

    if (position != -1) {
        printf("Target string found at position: %d\n", position);
    } else {
        printf("Target string not found in the stream.\n");
    }

    return 0;
}
