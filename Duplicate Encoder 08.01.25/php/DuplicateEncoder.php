<?php

function duplicateEncoder($word)
{
    $word = strtolower($word);
    $charCount = array_count_values(str_split($word));
    $result = "";
    foreach (str_split($word) as $char)
    {
        $result .= $charCount[$char] > 1 ? ")" : "(" ; 
    }
    return $result;
}

echo duplicateEncoder("din") . "\n";       
echo duplicateEncoder("recede") . "\n";    
echo duplicateEncoder("Success") . "\n";   
echo duplicateEncoder("(( @") . "\n"; 

?>