fun duplicateEncode(word: String) : String {
    val loweredWord = word.lowercase()
    val charCount = loweredWord.groupingBy { it }.eachCount()
    return loweredWord.map { if (charCount[it]!! > 1) ')' else '(' }.joinToString("")
}

fun main() {
    println(duplicateEncode("din"))       // Output: (((
    println(duplicateEncode("recede"))    // Output: ()()()
    println(duplicateEncode("Success"))   // Output: )())())
    println(duplicateEncode("(( @"))      // Output: ))((
}