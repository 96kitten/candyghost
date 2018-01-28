using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreScript : MonoBehaviour {
	public static int Point;
	public Text PointText;
	void Start () {
		
	}

	void Update () {
		PointText.text = Point.ToString ();
	}
}
