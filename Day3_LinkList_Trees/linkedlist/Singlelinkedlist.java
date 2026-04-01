import java.util.Scanner;
class Node{
    int value;
    Node link;
}
class Singlelinkedlist{
    static Node Start=null;
    static Scanner s1=new Scanner(System.in);
    public static Node creatNode(){
        return new Node();
    }
    public static void insertnode(){
        Node temp=creatNode();
        System.out.println("Enter any value:");
        temp.value=s1.nextInt();
        temp.link=null;
        if(Start==null){
            Start=temp;
            //System.out.println("");
        }else{
            Node t1=Start;
            while(t1.link!=null){
                t1=t1.link;
            }
            t1.link=temp;
        }
    }
}