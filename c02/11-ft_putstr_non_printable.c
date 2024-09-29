//TODO • Create a function that displays a string of characters onscreen. If this string contains characters that aren’t printable,
 //! they’ll have to be displayed in the shape of hexadecimals (lowercase), preceeded by a "backslash". 
 //! Allowed functions : write
// • For example :
//*Coucou\ntu vas bien ?
// • The function should display :
//* Coucou\0atu vas bien ?
// • Here’s how it should be prototyped :
//* void ft_putstr_non_printable(char *str);

 #include <unistd.h>

void ft_putstr_non_printable(char *str) {
    while (*str) {
        if (*str < 32 || *str > 126) { // Check for non-printable characters
            // Print the backslash
            write(1, "\\", 1);
            // Convert to hexadecimal
            char hex[3]; // To hold the hexadecimal representation
            int value = (unsigned char)*str; // Get ASCII value
            
            // Create hex representation (2 digits)
            hex[0] = "0123456789abcdef"[value / 16]; // First hex digit
            hex[1] = "0123456789abcdef"[value % 16]; // Second hex digit
            hex[2] = '\0'; // Null-terminate the string

            // Write the hex representation
            write(1, hex, 2); 
        } else {
            // Print printable characters as they are
            write(1, str, 1);
        }
        str++; // Move to the next character
    }
}

int main() {
    char str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
    return 0;
}