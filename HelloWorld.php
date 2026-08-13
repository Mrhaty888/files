<?php
    //Ex 1
	echo "Marco Antônio Sancho Sant'Ana dos Santos", PHP_EOL;
	print "Tenho 18 anos";
	echo "Moro em Marília";
	//Ex 2
	$nome = "Marco";
	$profissao = "estudante";
	$hobby = "ouvir música,jogar e tocar piano";
	echo"Meu nome é $nome, sou $profissao e gosto de $hobby.";
	//Ex 3
	$num1 = readline("Digite um número: ");
	$num2 = readline("Digite outro número: ");
	echo "Soma: ".$num1 + $num2;
	print  "Subtração: ".$num1 - $num2;
	echo  "Multiplicação: ".$num1 * $num2;
	print "Divisão: ".$num1 / $num2;
	echo "Módulo: ".$num1 % $num2;
	//Ex 4
	$idade=readline("Informe sua idade: ");
	if($idade>=18){
		echo "Você é maior de idade.";
	}
	else{
		echo "Você é menor de idade.";
	}
	//Ex 5
	$nota = readline("Informe sua nota de 0 a 10: ");

	while (($nota < 0 or $nota > 10) or !is_int($nota)) {
		echo "Nota inválida, informe outra" . PHP_EOL;
		$nota = readline("Informe sua nota de 0 a 10: ");
	}

	if ($nota >= 7) {
		print "Aprovado";
	} elseif ($nota >=5) {
		print "Recuperação";
	} else {
		print "Reprovado";
	}
    //Ex 6
	$num2 = readline("Digite um número");
	$contador = 1;
	print "Tabuada do $num2: ".PHP_EOL;
	while ($contador <= 10) {
		$mul = $num2*$contador;
		echo "$num2 x $contador = $mul", PHP_EOL;
		$contador++;

?>
