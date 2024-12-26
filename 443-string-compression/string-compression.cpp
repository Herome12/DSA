class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0;  // Position to write in the array
        int read = 0;   // Position to read from the array

        while (read < chars.size()) {
            char current_char = chars[read];
            int count = 0;

            // Count how many times the current character repeats
            while (read < chars.size() && chars[read] == current_char) {
                read++;
                count++;
            }

            // Write the character itself
            chars[write++] = current_char;

            // If the character repeats, write the count
            if (count > 1) {
                for (char digit : to_string(count)) {
                    chars[write++] = digit;
                }
            }
        }

        return write;  // The new length after compression
    }
};
