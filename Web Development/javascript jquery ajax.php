<?php

 session_start();

?>

<!DOCTYPE>
<html>
	<head>
	<script src="//ajax.googleapis.com/ajax/libs/jquery/1.4.3/jquery.min.js"></script>
	<link rel="stylesheet" type="text/css" href="mystyle.css">
	</head>
	<body>
		<a herf='satbirkira.com'></a>
		<script>
			//javascript variable
			var lookatthefill = new Array();
			var counter = 0;

			//javascript function
			function halfme(number)
			{
				return number/2;
			}

			//javascript listener

			//jquery selector
			$("#input_id_label").val("changed");
			$("#input_id_label").text("I Changed!");
			var theID = $(".container").attr('id');
			theID = $(".container").attr('id', 'newID');

			//jquery listener
			$("#input_id_label").on("click", function()
				{
					alert('clicked');
				});

			//on document reacdy
			$(document).ready(function() 
			{

			});

			//ajax fetch data from file
			$.ajaxSetup ({
					// Disable caching of AJAX responses
					cache: false
				});

				
				
				
			//create ajax database function to fetch markers
			function ajaxDatabase(lat, lng)
			{
				$("#loading").html("Loading...");
				$.ajax(
				{
					url: '//foundmap.com/getMarkers.php?lat='+lat+'&lng='+lng,
					success: function (data) 
					{
						//Add data
						$('#markers').html("");
						$('#markers').html(data);
						$("#loading").html("");
					}
				});
			}

		</script>
	</body>
</html>