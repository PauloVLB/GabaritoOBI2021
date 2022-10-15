import java.util.Scanner;

public class potencia {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int n = scan.nextInt();
		int soma = 0;
		
		for (int i = 0; i < n; i++) {
			String t = scan.next();

			String[] expressao = new String[2];

			int ultimoCharIndex = t.length() - 1;

			// Pega o último char de t, convertido em String
			expressao[0] = String.valueOf(t.charAt(ultimoCharIndex));

			// Copia toda a expressão (t), com exceção do último char 
			expressao[1] = t.substring(0, ultimoCharIndex);

			// Converte os valor em int
			int potencia = Integer.parseInt(expressao[0]);
			int num = Integer.parseInt(expressao[1]);

			// Realiza a operação de potência
			double valor = Math.pow(num, potencia);

			// Soma as potências
			soma += valor;
		}
		
		System.out.println(soma);
		
		scan.close();

	}

}
