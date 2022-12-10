// edit on: 30/10/2022-Real File Name: // edit on: 30/10/2022-Real File Name: // edit on: 29/11/2022-Real File Name: Polymorphism tricks and different approaches 06/10/2022 21:04
// class Animal {
//     public void makeSound() {
//         System.out.println("Grr...");
//     }
// }
// class Cat extends Animal {
//     public void makeSound() {
//         System.out.println("Meow");
//     }
// }
// class Dog extends Animal {
//     public void makeSound() {
//         System.out.println("Woof");
//     }
// }

// class Program {
//     public static void main(String args[ ]) {
//         Animal a = new Dog();
//         Animal b = new Cat();
        
//         a.makeSound();
//         b.makeSound();
//     }
// }



// =========================================================



// This is the another approach to write your code.
class Animal {
    public void makeSound() {
        System.out.println("Grr..."); } }

class Cat extends Animal {
    public void makeSound() {
        System.out.println("Meow"); } }

class Dog extends Animal {
    public void makeSound() {
        System.out.println("Woof"); } }

class Man extends Animal { }

class Program {
    public static void main(String args[ ]) {
        Animal a = new Dog();
        Animal b = new Cat();
        Animal c = new Man();
        
        a.makeSound();
        b.makeSound();
        c.makeSound(); 
        }
        }