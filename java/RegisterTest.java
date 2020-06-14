public class RegisterTest {
    private int sum;

    public void calculateSum(int n) {
        for (int i = 0; i < n; i++) {
            sum += i;
        }
    }

    public static void main(String args[]) {
    	RegisterTest test = new RegisterTest();
    	test.calculateSum(1000000000);
    }

}