import java.util.HashMap;

public class DuplicateEncoder {
    public static String duplicateEncoder(String word) {
        word = word.toLowerCase();
        HashMap<Character, Integer> charCount = new HashMap<>();

        // this loop populates the hashmap with character counts
        for (char ch : word.toCharArray()) {
            charCount.put(ch, charCount.getOrDefault(ch, 0) + 1); // Retrieves the value associated with the key c. If
                                                                  // the key doesn't exist, it returns the default value
                                                                  // (0).
        }

        StringBuilder result = new StringBuilder(); // A mutable object for building strings efficiently (better than
                                                    // concatenation in loops).

        for (char ch : word.toCharArray()) { // we want to retrieve the count of c and append ( or ) appropriately
            result.append(charCount.get(ch) > 1 ? ')' : '(');
        }

        return result.toString();
    }

    public static void main(String[] args) {
        System.out.println(duplicateEncoder("din"));
        System.out.println(duplicateEncoder("recede"));
        System.out.println(duplicateEncoder("Success"));
        System.out.println(duplicateEncoder("(( @"));
    }
}