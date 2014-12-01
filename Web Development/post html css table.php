<?php

 session_start();

 if($_POST)
 {
 	var_dump($_POST);
 	if(isset($_POST['input_id']) && isset($_POST['input_name']))
 	{
 		echo "The id given is " .$_POST['input_id'];
 		echo "The name given is " .$_POST['input_name'];
 	}
 }

?>
<!DOCTYPE>
<html>
	<head>

	<script src="//ajax.googleapis.com/ajax/libs/jquery/1.4.3/jquery.min.js"></script>
	<link rel="stylesheet" type="text/css" href="mystyle.css">

	<style type="text/css">
	/* block element: take up all the same, new line
	   inline element: take as much as needed, no new line, set height & width ignored*/
	label
	{
		font-size: 10 px;
	}
	label:hover 
	{ 
		font-size: 20 px; 
	}
	.container
	{
		padding: 0px;
	}
	@media all and (max-width : 400px)
	{
		.container
		{
			display:none;
		}
	}
	</style>

	</head>
	
	
	
	
	
	
	
	
	<body>
		<div class='container'>
		<form method="post">

		<table>
		<tr>
			<td><label>ID: </label></td>
			<td><input type="text" id="id" name='input_id'></td>
		</tr>
		<tr>
			<td><label>Name: </label></td>
			<td><input type="text" id="name" name='input_name'></td>
		</tr>
		<tr>
			<td><label>Password: </label></td>
			<td><input type="password" id="name" name='input_name'></td>
		</tr>
		</table>

		<label>Gender: </label></br>
		<input type="radio" name="sex" value="male">Male</br>
		<input type="radio" name="sex" value="female">Female</br>
		<label>Type: </label></br>
		<select name="type">
			<option value="indian"> Indian </option>
			<option value="nigerian"> Nigerian </option>
		</select></br>
		<input type="checkbox" name="agreed" value="Agree">I agree<br>
		<input type="submit" id="sub" name='submitted' value="Click to submit">
		</form>
		</div>
	</body>
</html>