package com.EmployeeProject.Employee;

import java.awt.BorderLayout;
import java.awt.GridBagConstraints;
import java.awt.GridLayout;
import java.awt.Insets;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;

public class App extends JFrame{
    private JTextField nameField, designationField, salaryField, idField;
    private JButton addButton, updateButton, deleteButton;
    private EmployeeDao empDao = new EmployeeDao();
    
    public App() {
    	setTitle("Employee Management System");
    	setSize(500,500);
    	setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    	setLayout(new BorderLayout(10, 10));
    	
    	//Panel for Emp details input
    	JPanel detailsPanel = new JPanel(new GridLayout());
    	GridBagConstraints gbc = new GridBagConstraints();
    	gbc.insets = new Insets(5, 5, 5, 5);
    	
    	JLabel idLabel = new JLabel("Employee ID:");
    	gbc.gridx = 0; gbc.gridy = 0;
    	detailsPanel.add(idLabel, gbc);
    	
    	idField = new JTextField(10);
        gbc.gridx = 1; gbc.gridy = 0;
        detailsPanel.add(idField, gbc);
    	
    	JLabel nameLabel = new JLabel("Name:");
        gbc.gridx = 0; gbc.gridy = 1;
        detailsPanel.add(nameLabel, gbc);

        nameField = new JTextField(10);
        gbc.gridx = 1; gbc.gridy = 1;
        detailsPanel.add(nameField, gbc);

        JLabel designationLabel = new JLabel("Designation:");
        gbc.gridx = 0; gbc.gridy = 2;
        detailsPanel.add(designationLabel, gbc);

        designationField = new JTextField(10);
        gbc.gridx = 1; gbc.gridy = 2;
        detailsPanel.add(designationField, gbc);

        JLabel salaryLabel = new JLabel("Salary:");
        gbc.gridx = 0; gbc.gridy = 3;
        detailsPanel.add(salaryLabel, gbc);

        salaryField = new JTextField(10);
        gbc.gridx = 1; gbc.gridy = 3;
        detailsPanel.add(salaryField, gbc);

        add(detailsPanel, BorderLayout.CENTER);
        
        
    	//Panel for action buttons
        JPanel buttonPanel = new JPanel();
        addButton = new JButton("Add Employee");
        updateButton = new JButton("Update Employee");
        deleteButton = new JButton("Delete Employee");

        buttonPanel.add(addButton);
        buttonPanel.add(updateButton);
        buttonPanel.add(deleteButton);
        add(buttonPanel, BorderLayout.SOUTH);
        

        // Add Button Actions
        addButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
            	addEmployee();
            }
        });
        
        updateButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                updateEmployee();
            }
        });

        deleteButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                deleteEmployee();
            }
        });
    }
    
    private void addEmployee() {
    	String name = nameField.getText();
    	String designation = designationField.getText();
        double salary = Double.parseDouble(salaryField.getText());
        Employee employee = new Employee();
        employee.seteName(name);
        employee.seteDesignation(designation);
        employee.seteSalary(salary);
        empDao.insertEmployee(employee);
        JOptionPane.showMessageDialog(this, "Employee added successfully!");
        clearFields();
    }
    
    private void updateEmployee() {
        int id = Integer.parseInt(idField.getText());
        String name = nameField.getText();
        String designation = designationField.getText();
        double salary = Double.parseDouble(salaryField.getText());

        Employee employee = new Employee();
        employee.seteId(id);
        employee.seteName(name);
        employee.seteDesignation(designation);
        employee.seteSalary(salary);
        empDao.updateEmployee(employee);
        JOptionPane.showMessageDialog(this, "Employee updated successfully!");
        clearFields();
    }

    private void deleteEmployee() {
        int id = Integer.parseInt(idField.getText());
        empDao.deleteEmployee(id);
        JOptionPane.showMessageDialog(this, "Employee deleted successfully!");
        clearFields();
    }

    private void clearFields() {
        idField.setText("");
        nameField.setText("");
        designationField.setText("");
        salaryField.setText("");
    }
    
    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            App gui = new App();
            gui.setVisible(true);
        });

    }

}
