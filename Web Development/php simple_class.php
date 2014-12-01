<?php

	session_start();

	class person
	{
		private $name;
		public function __construct($name)
		{
			$this->name = $name;
		}
		public function __destruct()
		{
			print "Goodbye";
		} 
		public function getName()
		{
			return $this->name;
		}

	} 

	class indian extends person
	{
		public function __construct($name)
		{
			parrent::__construct($name);
		}
	}


	$satbirSaini = new person("Satbir");
	echo $satbirSaini->getName();

?>
