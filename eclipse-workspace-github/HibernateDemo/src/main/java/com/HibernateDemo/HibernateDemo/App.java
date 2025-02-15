package com.HibernateDemo.HibernateDemo;

import org.hibernate.Session;
import org.hibernate.Transaction;

public class App {
    public static void main( String[] args ) {
    	
    	//Alien object
    	Alien alien = new Alien();
    	alien.setAid(1);
    	alien.setAname("Vyom");
    	alien.setAcolor("green");
    	
    	Session session = HibernateUtil.getSessionFactory().openSession();
    	Transaction transaction = session.beginTransaction();
    	
    	session.persist(alien);
    	
    	transaction.commit();
    	session.close();
    	
    	System.out.println("Alien details saved successfully");
    	
    	
    }
}
