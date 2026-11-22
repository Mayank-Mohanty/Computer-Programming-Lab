import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class Calc extends JFrame implements ActionListener{
	JLabel p1,p2,p3,p4;
	JTextField t1,t2,t3;
	JButton b;
	Calc(){
		p1=new JLabel("Enter 1st Number: ");
		p2=new JLabel("Enter 2nd Number: ");
		p3=new JLabel("Result: ");
		p4=new JLabel("-");
		p1.setBounds(60,60,120,40);
		p2.setBounds(60,130,120,40);
		p3.setBounds(60,190,120,40);
		p4.setBounds(310,95,120,40);
		p4.setFont(p4.getFont().deriveFont(30f));
		add(p1);
		add(p2);
		add(p3);
		add(p4);
		t1=new JTextField("Number 1");
		t2=new JTextField("Number 2");
		t3=new JTextField();
		t1.setBounds(230,60,180,40);
		t2.setBounds(230,130,180,40);
		t3.setBounds(230,190,180,40);
		add(t1);
		add(t2);
		add(t3);
		t3.setEditable(false);
		b=new JButton("Subtract");
		b.setBounds(230,250,100,40);
		add(b);
		b.addActionListener(this);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	public void actionPerformed(ActionEvent ob){
		String s1=t1.getText();
		String s2=t2.getText();
		int a=Integer.parseInt(s1);
		int b=Integer.parseInt(s2);
		int c=a-b;
		String s3=String.valueOf(c);
		t3.setText(s3); // t3.setText(Integer.toString(c)
	}
	public static void main(String[] args){
		Calc ob=new Calc();
		ob.setSize(400,500);
		ob.setLayout(null);
		ob.setVisible(true);
	}
}