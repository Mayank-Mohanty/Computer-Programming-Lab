import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class Count extends JFrame implements ActionListener{
	JLabel p1;
	JTextField t1;
	JButton b1,b2;
	Count(){
		p1=new JLabel("Counter: ");
		p1.setBounds(60,60,120,40);
		add(p1);
		t1=new JTextField("0");
		t1.setBounds(230,60,180,40);
		add(t1);
		t1.setEditable(false);
		b1=new JButton("Reset");
		b2=new JButton("Count");
		b1.setBounds(230,150,100,40);
		b2.setBounds(460,60,100,40);
		add(b1);
		add(b2);
		b1.addActionListener(this);
		b2.addActionListener(this);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	public void actionPerformed(ActionEvent ob){
		String s1=t1.getText();
		int a=Integer.parseInt(s1);
		int res=0;
		if (ob.getSource()==b1){
		}
		else if (ob.getSource()==b2){
			res=++a;
		}
		String s2=String.valueOf(res);
		t1.setText(s2);
	}
	public static void main(String[] args){
		Count ob=new Count();
		ob.setSize(400,500);
		ob.setLayout(null);
		ob.setVisible(true);
	}
}