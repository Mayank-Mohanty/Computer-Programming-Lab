import java.sql.*;
public class TestConnection {
    public static void main(String[] args) {
        String url = "jdbc:postgresql://localhost:5432/postgres";
        String user = "postgres";
        String password = "mayank1802";
        try (Connection conn = DriverManager.getConnection(url, user, password)) {
            System.out.println("Connected to PostgreSQL successfully!");
        }
        catch (SQLException e) {
            e.printStackTrace();
        }
    }
}
