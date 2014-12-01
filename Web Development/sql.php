<?php

	session_start();

	$link = mysql_connect('localhost', 'root', 'password');
	if (!$link) die("Could not connect: ". mysql_error());

	mysql_select_db('playground', $link);

	//drop table
	$query = "drop table if exists person";
	$result = mysql_query($query, $link);
	if(!$result)
	{
		echo "Could not execute query:" . mysql_error();
	}

	//create table
	$query = "create table person(id int NOT NULL, name text NOT NULL,
	primary key (id))";
	$result = mysql_query($query, $link);
	
	//add satbir
	$query = "insert into person (id, name) values (1, 'satbir')";
	$result = mysql_query($query, $link);

	//select
	$query = "select * from person";
	$result = mysql_query($query, $link);

	while ($record = mysql_fetch_assoc ($result))
    {
    	echo $record['id'];
    	echo trim($record['name']);
    }

?>
