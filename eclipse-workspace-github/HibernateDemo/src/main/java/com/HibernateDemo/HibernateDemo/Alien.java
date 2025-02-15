package com.HibernateDemo.HibernateDemo;

import jakarta.persistence.*;

@Entity
public class Alien {
	
	@Id
	private int aid;
	
	private String aname;
	private String acolor;
	
	//Constructors
	public Alien() {
		super();
		// TODO Auto-generated constructor stub
	}

	public Alien(int aid, String aname, String acolor) {
		super();
		this.aid = aid;
		this.aname = aname;
		this.acolor = acolor;
	}
	
	
	//Setters and Getters
	public int getAid() {
		return aid;
	}

	public void setAid(int aid) {
		this.aid = aid;
	}

	public String getAname() {
		return aname;
	}

	public void setAname(String aname) {
		this.aname = aname;
	}

	public String getAcolor() {
		return acolor;
	}

	public void setAcolor(String acolor) {
		this.acolor = acolor;
	}
	
	
	
	
}
