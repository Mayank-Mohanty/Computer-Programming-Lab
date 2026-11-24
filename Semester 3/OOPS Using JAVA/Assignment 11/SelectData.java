//WAP to establish the database connection and fetch the records of the student from the database and display it.
import java.sql.*;
public class SelectData {
    public static void main(String[] args) {
        String driver = "org.postgresql.Driver";
        String url = "jdbc:postgresql://localhost:5432/postgres";
        String uname = "postgres";
        String pwd = "mayank1802";
        try {
            Class.forName(driver);
            Connection con = DriverManager.getConnection(url, uname, pwd);
            if (con != null) {
                System.out.println("Connected successfully\n");
            }
            String qry = "SELECT * FROM student";
            Statement stmt = con.createStatement();
            ResultSet rs = stmt.executeQuery(qry);
            System.out.println("Roll No\tName\t\tCGPA");
            System.out.println("--------------------------------");
            while (rs.next()) {
                int roll = rs.getInt("rollno");
                String name = rs.getString("name");
                double cgpa = rs.getDouble("cgpa");
                System.out.println(roll + "\t" + name + "\t" + cgpa);
            }
            rs.close();
            stmt.close();
            con.close();
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}
