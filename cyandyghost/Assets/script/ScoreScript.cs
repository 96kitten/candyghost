using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreScript : MonoBehaviour {
	public static int Point;
	public static int highscore = 0;
	public Text PointText;
	public Text Highpoint;
	void Start () {
		
	}

	void Update () {
		PointText.text = Point.ToString ();
		if (Point > highscore) {
			highscore = Point;
			Highpoint.text = highscore.ToString();
		}else if(Point <= highscore){
			Highpoint.text = highscore.ToString();
		}
	}
}
