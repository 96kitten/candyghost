using UnityEngine;
using System.Collections;
using System.IO;
using System;
using NCMB;
using System.Collections.Generic;
//using UnityEditor;
using UnityEngine.UI;

public class Ranking : MonoBehaviour {

	public Text[] Ranking_text;

	public bool check;

	private int count = 0;

	void Start () {
		NCMBQuery<NCMBObject> query = new NCMBQuery<NCMBObject> ("test");

		query.OrderByDescending ("Score");

		query.Limit = 4;

		query.FindAsync ((List<NCMBObject> objList ,NCMBException e) => {
			if (e != null) {

				Debug.Log(e.ToString());
				return;
			} else {

				foreach (NCMBObject ncbObject in objList) {

					Ranking_text[count].text = ncbObject["Score"].ToString();
					Debug.Log ("message : "  + ncbObject ["Score"]);
					count += 1;
				}
			}
		});

	}


	void Update () {




	}
}


