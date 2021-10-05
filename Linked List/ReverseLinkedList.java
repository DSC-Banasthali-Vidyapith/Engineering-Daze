import java.io.*;

public class ReverseLinkedList {
    
    class Link{
        private int data;
        private Link prev;
        private Link nxt;
        public Link(int d){ data=d;}
    }
    Link first,last=null;
    public void in(int d){
        Link new_l= new Link(d);
        if (first==null)
         {first=new_l;
         last= new_l;
         first.prev=null;
         last.nxt=null;}
        else{
            last.nxt=new_l;
            new_l.prev=last;
            last=new_l;
            last.nxt=null;
        }
    }
    public void reverse(){
        Link current= first,temp=null;
        while(current!=null){
            temp=current.nxt;
            current.nxt=current.prev;
            current.prev=temp;
            current=current.prev;
        }
        temp=first;
        first=last;
        last=temp;
        System.out.println("The reversed list is:");
        display();
    }
    public void display(){
        Link current=first;
        if(current==null)
         {System.out.println("List is empty!!");
          return;}
        while(current!=null){
            System.out.println(current.data+"");
            current=current.nxt;
        }
    }
    public static void main(String[] args)throws IOException{
        InputStreamReader isr= new InputStreamReader(System.in);
        BufferedReader br= new BufferedReader(isr);
        ReverseLinkedList s=new ReverseLinkedList();

        System.out.println("Enter the no. of elements");
        String st= br.readLine();
        int n=Integer.parseInt(st);
        System.out.println("Enter the elements");
        for(int i=0; i<n; i++){
            String st1= br.readLine();
            int m=Integer.parseInt(st1);
            s.in(m);
        }
        System.out.println("The list is:");
        s.display();
        s.reverse();
    }
}
