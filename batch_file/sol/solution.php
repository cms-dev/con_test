<?php
$fin = fopen("input.txt", "r");
$l = explode(" ", trim(fgets($fin)));
$a = $l[0];
$b = $l[1];
$sum = $a + $b;

$fout = fopen("output.txt", "w");
fwrite($fout, "$sum\n");
?>
