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
			
			expressao[0] = String.valueOf(t.charAt(ultimoCharIndex));
			expressao[1] = t.substring(0, ultimoCharIndex);
			

			int potencia = Integer.parseInt(expressao[0]);
			int num = Integer.parseInt(expressao[1]);
			
			double valor = Math.pow(num, potencia);
			
			soma += valor;
		}
		
		System.out.println(soma);
		
		scan.close();

	}

}
