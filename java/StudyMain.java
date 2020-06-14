public class StudyMain { 
	public static void main(String[] args) {
	    Student s1 = new HungryStudent(1,"Anna");
	    Student s2 = new Student(2,"Elsa");
	    s1.studyWith(s2);
	  }
}