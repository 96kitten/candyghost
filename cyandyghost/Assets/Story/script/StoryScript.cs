using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StoryScript : MonoBehaviour {

    public Text storyText;
    int chapnumber = 0;

    const string CHAP_NUM_KEY = "CHAP";
    int cheak;

	// Use this for initialization
	void Start () {
        chapnumber = 0;

        TextScript text = this.gameObject.GetComponent<TextScript>();

        cheak = PlayerPrefs.GetInt(CHAP_NUM_KEY, -1);
        //storyText.text = tex.chapter1[chapnumber];

		switch (cheak)
		{
		case 10:
			storyText.text = "Chapter10";
			break;
		case 9:
			storyText.text = "Chapter9";
			break;
		case 8:
			storyText.text = "Chapter8";
			break;
		case 7:
			storyText.text = "Chapter7";
			break;
		case 6:
			storyText.text = "Chapter6";
			break;
		case 5:
			storyText.text = "Chapter5";
			break;
		case 4:
			storyText.text = "Chapter4";
			break;
		case 3:
			storyText.text = "Chapter3";
			break;
		case 2:
			storyText.text = "Chapter2";
			break;
		case 1:
			storyText.text = "Chapter1";
			break;
		}
	}
	
	// Update is called once per frame
	void Update () {
        TextScript tex = this.gameObject.GetComponent<TextScript>();



		if(Input.GetMouseButtonDown(0)) {
            
            switch (cheak)
            {
			case 10:
				storyText.text = tex.chapter10[chapnumber];
				break;
			case 9:
				storyText.text = tex.chapter9[chapnumber];
				break;
			case 8:
				storyText.text = tex.chapter8[chapnumber];
				break;
			case 7:
				storyText.text = tex.chapter7[chapnumber];
				break;
			case 6:
				
				storyText.text = tex.chapter6[chapnumber];
				break;
			case 5:
				storyText.text = tex.chapter5[chapnumber];
				break;
			case 4:
				storyText.text = tex.chapter4[chapnumber];
				break;
			case 3:
				storyText.text = tex.chapter3[chapnumber];
				break;
			case 2:
				storyText.text = tex.chapter2[chapnumber];
				break;
            case 1:
                storyText.text = tex.chapter1[chapnumber];
                break;
            }

			chapnumber++;

        }
     }
}
