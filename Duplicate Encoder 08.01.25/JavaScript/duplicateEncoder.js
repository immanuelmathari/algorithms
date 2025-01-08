function duplicateEncoder(word) {
    const lowerWord = word.toLowerCase();
    const charCount = {}; // this is an object declaration
    for (const char of lowerWord)
    {
        charCount[char] = (charCount[char] || 0) + 1;
    }
    return [...lowerWord].map(char => charCount[char] > 1 ? ')' : '(').join('');
}

console.log(duplicateEncoder('din'));
console.log(duplicateEncoder('recede'));
console.log(duplicateEncoder('Success'));
console.log(duplicateEncoder('(( @'));