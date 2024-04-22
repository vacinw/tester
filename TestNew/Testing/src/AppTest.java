import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;

import org.junit.Test;

public class AppTest {
    @Test
    public void testHello(){
        assertEquals("Haha", App.sayHello());
    }

    @Test
    public void testPrimeNumber() {
        assertTrue(App.checkPrime(17));
    }

    @Test
    public void testNotPrimeNumber() {
        assertFalse(App.checkPrime(10));
    }

    @Test
    public void testLessThanTwo() {
        assertFalse(App.checkPrime(1));
        assertFalse(App.checkPrime(0));
        assertFalse(App.checkPrime(-5));
    }
}