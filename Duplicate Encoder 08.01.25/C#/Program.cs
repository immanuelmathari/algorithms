using System;
using System.Linq;

public class Program {
    public static string DuplicateEncode(string word) {
        word = word.ToLower();
        return string.Concat(word.Select(c => word.Count(x => x == c) > 1 ? ')' : '('));
    }

    public static void Main() {
        // Test cases
        Console.WriteLine(DuplicateEncode("din"));      
        Console.WriteLine(DuplicateEncode("recede"));   
        Console.WriteLine(DuplicateEncode("Success"));  
        Console.WriteLine(DuplicateEncode("(( @")); 
    }
}
