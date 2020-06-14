public class Student {
  int id;
  String name;

  public Student(int id, String name) {
    this.id = id;
    this.name = name;
  }

  public void studyWith(Student another) {
    System.out.println(name + " studying with " + another);
    // do some studying
  }

  public static void main(String[] args) {
    Student s1 = new Student(1,"Anna");
    Student s2 = new Student(2,"Elza");
    s1.studyWith(s2);
  }

  public String toString() {
    return name;
  }


}
