# Abhiraj Pratap Singh

---


# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
- The goal of the code appears to be finding the maximum number of words in a sentence among a given vector of sentences.

---


# Approach
<!-- Describe your approach to solving the problem. -->
1. **Counting Words Function:**
    - The class defines a member function named countWord that takes a reference to a string (s) as input.
    - Initialize a variable count to 1, assuming there is at least one word in the string.
    - Iterate through each character in the string using a for loop
    - Increment the count whenever a space character (' ') is encountered.
    - Return the final count, representing the number of words in the input string.



2. **Finding Maximum Words Function:**
    - The class defines another member function named mostWordsFound that takes a vector of strings (sentences) as input.
    - Initialize a variable max_count to 0 to keep track of the maximum word count found.
    - Iterate through each sentence in the vector using a for loop.
    - For each sentence, use the countWord function to find the number of words.
    - Update max_count with the maximum of the current word count and the previous max_count.
    - After iterating through all sentences, return the final max_count, representing the maximum number of words found in any sentence.

---


# Complexity

---


- **Time complexity:**
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- The time complexity of the countWord function is O(n), where n is the total number of characters in the input string.
- The mostWordsFound function calls countWord for each sentence, resulting in a total time complexity of O(m⋅n), where m is the number of sentences.

---


- **Space complexity:**
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- The space complexity is O(1) as the code uses a constant amount of space regardless of the input size.

---

- **Note:** The approach assumes that words are separated by spaces and doesn't handle cases such as punctuation or consecutive spaces between words. Additionally, the count may include leading or trailing spaces, depending on the problem requirements.

---

