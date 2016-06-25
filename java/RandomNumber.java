import java.security.SecureRandom;
class RandomNumber {
	public static void main(String ...args) {    
    SecureRandom randomNumbers = new SecureRandom();
    for(int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        System.out.print(1 + randomNumbers.nextInt(6) + " ");
      }
      System.out.println();
    }
  }
}