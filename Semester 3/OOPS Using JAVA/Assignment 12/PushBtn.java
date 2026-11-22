import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
class PushBtn extends JFrame implements ActionListener{
	JButton b1,b2,b3;
	PushBtn(){
		b1=new JButton("Red");
		b1.setBounds(50,50,80,40);
		b2=new JButton("Green");
		b2.setBounds(150,50,80,40);
		b3=new JButton("Blue");
		b3.setBounds(250,50,80,40);
	//Container c=new Container();
	//c=getContentPane();
	//c.add(b1);
	add(b1);
	add(b2);
	add(b3);
	//Activate the event handler
	b1.addActionListener(this);
	b2.addActionListener(this);
	b3.addActionListener(this);
	setSize(600,700);
	setLayout(null);
	setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	//Event Handler Code
	
	public void actionPerformed(ActionEvent ob){
		if (ob.getSource()==b1){
			getContentPane().setBackground(Color.RED);
		}
		else if (ob.getSource()==b2){
			getContentPane().setBackground(Color.GREEN);
		}
		else if (ob.getSource()==b3){
			getContentPane().setBackground(Color.BLUE);
		}
		else{
			getContentPane().setBackground(Color.WHITE);
		}
	}
	public static void main(String[] args){
		PushBtn p=new PushBtn();
		p.setTitle("Push Button ");
		p.setVisible(true);
	}
}