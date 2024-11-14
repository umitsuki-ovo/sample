<?php
$stdin_num = fgets(STDIN);
echo $stdin_num;

$stdin_line_value = [];
for($i = 1; $i <= $stdin_num; $i++){
    $stdin = trim(fgets(STDIN));
    $stdin_array[] = explode(' ',$stdin);
}
print_r($stdin_array);
?>
