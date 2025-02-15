package com.EmployeeProject.Employee;

import org.hibernate.Session;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

public class EmployeeDao {
	public void insertEmployee(Employee employee) {
		Transaction trs = null;
		try(Session session = new Configuration().configure().buildSessionFactory().openSession()) {
			trs = session.beginTransaction();
			session.persist(employee);
			trs.commit();
		} catch (Exception e) {
			if(trs != null) {
				trs.rollback();
			}
			
			e.printStackTrace();
		}
	}
	
	public void updateEmployee(Employee employee) {
		Transaction trs = null;
		try(Session session = new Configuration().configure().buildSessionFactory().openSession()) {
			trs = session.beginTransaction();
			session.merge(employee);
			trs.commit();
		} catch (Exception e) {
			if(trs != null) {
				trs.rollback();
			}
			
			e.printStackTrace();
		}
	}
	
	public void deleteEmployee(int employeeId) {
		Transaction trs = null;
		try(Session session = new Configuration().configure().buildSessionFactory().openSession()) {
			trs = session.beginTransaction();
			Employee employee = session.get(Employee.class, employeeId);
			
			if(employee != null) {
				session.remove(employee);
				trs.commit();
			}
		} catch(Exception e) {
			if (trs != null) {
				trs.rollback();
			}
			
			e.printStackTrace();
		}
	}
}
