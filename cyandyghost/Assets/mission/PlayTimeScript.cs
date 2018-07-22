using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayTimeScript : MonoBehaviour {
	public static int counttime = 0;
	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	public void Playtimecount() {
		counttime = counttime + 1;
		if (counttime >= 30){
			counttime = 30;
		}
	}
}
