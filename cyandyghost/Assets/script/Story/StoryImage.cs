using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StoryImage : MonoBehaviour {

    //GameObjectに変更してImageをGetcomponetし代入する

    const string CHAP_NUM_KEY = "CHAP";

    public Image[] spriteAll = new Image[10];
    public int cheak;

    [Header("キャラの画像")]
    //ここ
    public Image L_Chara;
    public Image R_Chara;

	// Use this for initialization
	void Start () {
        cheak = PlayerPrefs.GetInt(CHAP_NUM_KEY, -1);

	}
	
	// Update is called once per frame
	void Update () {
        switch(cheak){
            case 1:
                //ここ
                L_Chara = spriteAll[0];
                R_Chara = spriteAll[1];
                break;
            case 2:
                //どんどん増やす
                break;
        }
	}
}
