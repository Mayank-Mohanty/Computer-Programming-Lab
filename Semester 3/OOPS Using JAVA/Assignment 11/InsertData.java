import java.sql.*;
import java.util.Scanner;
public class InsertData {
    public static void main(String[] args) {
        String driver = "org.postgresql.Driver";
        String url = "jdbc:postgresql://localhost:5432/postgres";
        String uname = "postgres";
        String pwd = "mayank1802";
        Scanner sc = new Scanner(System.in);
        try {
            Class.forName(driver);
            Connection con = DriverManager.getConnection(url, uname, pwd);
            if (con != null) {
                System.out.println("Connected successfully");
            }
            // 1. Insert first record using Statement interface
            String stmtQuery = "INSERT INTO student (rollno, name, cgpa) VALUES (18, 'Mayank Mohanty', 9.55)";
            Statement stmt = con.createStatement();
            int rows1 = stmt.executeUpdate(stmtQuery);
            if (rows1 > 0) {
                System.out.println(rows1 + " row inserted using Statement.");
            }
            stmt.close();
            // 2. Insert second record using PreparedStatement interface
            String prepQuery = "INSERT INTO student (rollno, name, cgpa) VALUES (?, ?, ?)";
            PreparedStatement pstmt = con.prepareStatement(prepQuery);
            System.out.print("Enter rollno: ");
            int r = sc.nextInt();
            sc.nextLine(); // consume leftover newline
            System.out.print("Enter name: ");
            String n = sc.nextLine();
            System.out.print("Enter cgpa: ");
            double c = sc.nextDouble();
            pstmt.setInt(1, r);
            pstmt.setString(2, n);
            pstmt.setDouble(3, c);
            int rows2 = pstmt.executeUpdate();
            if (rows2 > 0) {
                System.out.println(rows2 + " row inserted using PreparedStatement.\n");
            }
            pstmt.close();
            // 3. Fetch and display all records
            String selectQuery = "SELECT * FROM student";
            Statement displayStmt = con.createStatement();
            ResultSet rs = displayStmt.executeQuery(selectQuery);
            System.out.println("Roll No\tName\t\tCGPA");
            System.out.println("--------------------------------");
            while (rs.next()) {
                System.out.println(rs.getInt("rollno") + "\t" + rs.getString("name") + "\t" + rs.getDouble("cgpa"));
            }
            rs.close();
            displayStmt.close();
            con.close();
        }
        catch (ClassNotFoundException e) {
            e.printStackTrace();
        }
        catch (SQLException e) {
            e.printStackTrace();
        }
    }
}
