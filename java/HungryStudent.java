public class HungryStudent extends Student {
  
  public HungryStudent(int id, String name) {
    super(id,name);
  }

  public void studyWith(Student another) {
    orderPizza();
    super.studyWith(another);
  }


  public void orderPizza() {
    System.out.println(name + " ordering pizza");
  }
}
