using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Buttonclick : MonoBehaviour {
	public Button story1;
	public Button story2;
	public Button story3;
	public Button story4;
	public Button story5;
	public Button story6;
	public Button story7;
	public Button story8;
	public Button story9;
	public Button story10;

	public Text startext;

	int starcount = 0;

	// Use this for initialization
	void Start () {
		starcount = MIssionstarScript.star;
		story1.interactable = false;
		story2.interactable = false;
		story3.interactable = false;
		story4.interactable = false;
		story5.interactable = false;
		story6.interactable = false;
		story7.interactable = false;
		story8.interactable = false;
		story9.interactable = false;
		story10.interactable = false;
	}


	// Update is called once per frame
	void Update () {
		startext.text = starcount.ToString();

		starcount = MIssionstarScript.LoadStarnumber();

		if (starcount >= 1) {
			if (starcount >= 2) {
				if (starcount >= 4) {
					if (starcount >= 6) {
						if (starcount >= 9) {
							if (starcount >= 12) {
								if (starcount >= 16) {
									if (starcount >= 20) {
										if (starcount >= 25) {
											if (starcount >= 30) {
												story10.interactable = true;
											}
											story9.interactable = true;
										}
										story8.interactable = true;
									}
									story7.interactable = true;
								}
								story6.interactable = true;
							}
							story5.interactable = true;
						}
						story4.interactable = true;
					}
					story3.interactable = true;
				}
				story2.interactable = true;
			}
			story1.interactable = true;
		}
	}
}
