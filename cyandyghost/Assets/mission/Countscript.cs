using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Countscript : MonoBehaviour {
	public static int candy;
	public static int bigcandy;
	public static int heart;
	public static int blueheart;
	public static int brakeheart;
	public static void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	void OnCollisionEnter2D (Collision2D other){
		if (other.gameObject.tag == "smallpoint") {
			candy += 1;
			if (candy >= 1000){
				candy = 1000;
			}
		}
		if (other.gameObject.tag == "bigpoint") {
			bigcandy += 1;
			if (bigcandy >= 500){
				bigcandy = 500;
			}
		}
		if (other.gameObject.tag == "hppuls") {
			heart += 1;
			if(heart >= 500) {
				heart = 500;
			}
		}
		if (other.gameObject.tag == "muteki") {
			blueheart += 1;
			if (blueheart >= 50){
				candy = 50;
			}
		}
		if (other.gameObject.tag == "hpminas") { 
			brakeheart += 1;
			if (brakeheart >= 50){
				brakeheart = 50;
			}
		}
	}
}
