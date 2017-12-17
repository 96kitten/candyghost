using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveControl : MonoBehaviour {
	public GameObject ghost;
	bool Rmove = false;
	bool Lmove = false;
	public float speed = 4;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Rmove == true) {
			if (ghost.transform.position.x <= 2.2) {
				ghost.transform.position += new Vector3 (speed * Time.deltaTime, 0);
			}
		}
		if (Lmove == true) {
			if (ghost.transform.position.x >= -2.3) {
				ghost.transform.position += new Vector3 (-speed * Time.deltaTime, 0);
			}
		}
	}
	//右へ
	public void RightDown(){
		Rmove = true;
	}
	public void RightUp(){
		Rmove = false;
	}
	//左へ
	public void LeftDown(){
		Lmove = true;
	}
	public void LeftUp(){
		Lmove = false;
	}
}
