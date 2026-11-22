import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class Fact extends JFrame implements ActionListener{
	JLabel p1,p2;
	JTextField t1,t2;
	JButton b;
	Fact(){
		p1=new JLabel("Enter Number: ");
		p2=new JLabel("Factorial: ");
		p1.setBounds(60,60,120,40);
		p2.setBounds(60,130,120,40);
		add(p1);
		add(p2);
		t1=new JTextField("Number");
		t2=new JTextField();
		t1.setBounds(230,60,180,40);
		t2.setBounds(230,130,180,40);
		add(t1);
		add(t2);
		t2.setEditable(false);
		b=new JButton("Factorial");
		b.setBounds(230,200,100,40);
		add(b);
		b.addActionListener(this);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	public void actionPerformed(ActionEvent ob){
		String s1=t1.getText();
		int a=Integer.parseInt(s1);
		int fact=1;
		while (a!=0){
			fact*=a;
			a--;
		}
		String s2=String.valueOf(fact);
		t2.setText(s2);
	}
	public static void main(String[] args){
		Fact ob=new Fact();
		ob.setSize(400,500);
		ob.setLayout(null);
		ob.setVisible(true);
	}
}