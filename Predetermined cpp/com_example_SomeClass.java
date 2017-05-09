public class com_example_SomeClass {
    static {
        System.loadLibrary("com_example_SomeClass");
    }

    public static native void test();

    public static void main(String[] args) {
        test();
    }
}