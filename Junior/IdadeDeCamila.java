import java.util.Scanner;

public class IdadeDeCamila
{
	public static void main(String[] args) {
	    
		Scanner leia = new Scanner(System.in);
		
		int idade1 = leia.nextInt();
		int idade2 = leia.nextInt();
		int idade3 = leia.nextInt();
		
		int somaIdades = idade1 + idade2 + idade3;
		
		int maiorIdade = Math.max(idade1, Math.max(idade2, idade3)); //encontrar a maior idade entre as 3 idades
        int menorIdade = Math.min(idade1, Math.min(idade2, idade3)); //encontrar a menor idade entre as 3 idades
        
        int meio = somaIdades - (maiorIdade + menorIdade); //Idade de Camila
        
        System.out.println(meio);
        
	}
}