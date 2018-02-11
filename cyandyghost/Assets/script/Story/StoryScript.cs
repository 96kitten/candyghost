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

        TextScript tex = this.gameObject.GetComponent<TextScript>();

        cheak = PlayerPrefs.GetInt(CHAP_NUM_KEY, -1);
        storyText.text = tex.chapter1[chapnumber];
	}
	
	// Update is called once per frame
	void Update () {
        TextScript tex = this.gameObject.GetComponent<TextScript>();



        if(Input.GetKeyDown(KeyCode.Space)) {
            chapnumber++;

            switch (cheak)
            {
                case 1:
                    storyText.text = tex.chapter1[chapnumber];
                    break;
                case 2:
                    //どんどん増やす
                    storyText.text = tex.chapter2[chapnumber];
                    break;
            }
        }
     }
}
