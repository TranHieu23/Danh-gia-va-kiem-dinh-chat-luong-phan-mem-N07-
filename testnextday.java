import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertArrayEquals;

public class testnextday {
    @Test
    public void testIsLeapYear() {
        assertEquals(true, testnextday;.isLeapYear(2000));
        assertEquals(false, testnextday.isLeapYear(1900));
        assertEquals(true, testnextday.isLeapYear(2004));
        assertEquals(false, testnextday.isLeapYear(2001));
    }

    private void assertEquals(boolean b, Object leapYear) {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'assertEquals'");
    }

    private static Object isLeapYear(int i) {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'isLeapYear'");
    }

    @Test
    public void testNextDate() {
        assertEquals(new int[]{2, 1, 2000}, testnextday.nextDate(1, 1, 2000));
        assertEquals(new int[]{1, 2, 2000}, testnextday.nextDate(31, 1, 2000));
        assertEquals(new int[]{1, 3, 2000}, testnextday.nextDate(29, 2, 2000));
        assertEquals(new int[]{1, 1, 2001}, testnextday.nextDate(31, 12, 2000));
    }

    private void assertEquals(int[] is, Object nextDate) {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'assertEquals'");
    }

    private static Object nextDate(int i, int j, int k) {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'nextDate'");
    }
}
