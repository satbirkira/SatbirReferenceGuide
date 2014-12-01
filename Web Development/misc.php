<?php

//misc

require("name.php");

|| is or
&& is and

$fill_me = array();
for($i = 0; $i < 10; $i++)
{
	$fill_me[$i] = "Filled";
}

var_dump($fill_me);
unset($fill_me);

if (is_numeric(sizeof($fill_me)))
{
	echo intval(strlen("hurray"));
}

//Pre: string
//Post: nothing
//Purpose: Kill the cat
function example($cat)
{
	echo "I'm going to skin ". $cat;
}

$_POST['input_tag_name'];
$_GET['id']; //satbirkira.com/index.php?id=1&name=satbir
$_SESSION['timer'];

define("pie", 3.14)


?>