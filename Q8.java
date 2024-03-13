import java.util.Scanner;


class Student {
    String studentName;
    String rollNo;
    float totalMarks;

    
    public Student(String studentName, String rollNo, float totalMarks) {
        this.studentName = studentName;
        this.rollNo = rollNo;
        this.totalMarks = totalMarks;
    }

    public void displayStudentData() {
        System.out.println("\nStudent Name: " + studentName);
        System.out.println("Roll Number: " + rollNo);
        System.out.println("Total Marks Obtained: " + totalMarks);
    }
}

public class Q8{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        System.out.print("Enter student name: ");
        String studentName = scanner.nextLine();

        System.out.print("Enter roll number: ");
        String rollNo = scanner.nextLine();

        System.out.print("Enter total marks obtained: ");
        float totalMarks = scanner.nextFloat();

        Student student = new Student(studentName, rollNo, totalMarks);

        
        System.out.println("\nStudent Details:");
        student.displayStudentData();

        scanner.close();
    }
}
