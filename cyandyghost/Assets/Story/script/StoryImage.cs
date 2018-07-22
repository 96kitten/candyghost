using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StoryImage : MonoBehaviour {

    //GameObjectに変更してImageをGetcomponetし代入する

    const string CHAP_NUM_KEY = "CHAP";

	public Sprite[] spriteAll = new Sprite[10];
    public int check;

    [Header("キャラの画像")]
    //ここ
    public Image L_Chara;
    //public Image R_Chara;

	// Use this for initialization
	void Start () {
        check = PlayerPrefs.GetInt(CHAP_NUM_KEY, -1);
	}
	
	// Update is called once per frame
	void Update () {
		
        switch(check){
		case 10:
			L_Chara.sprite = spriteAll[0];
			//R_Chara.sprite = spriteAll[1];
			break;
		case 9:
			L_Chara.sprite = spriteAll[1];
			//R_Chara.sprite = spriteAll[1];
			break;
        case 8:
			L_Chara.sprite = spriteAll[2];
			//R_Chara.sprite = spriteAll[1];
                break;
        case 7:
			L_Chara.sprite = spriteAll[0];
			//R_Chara.sprite = spriteAll[1];
                break;
		case 6:
			L_Chara.sprite = spriteAll[0];
			//R_Chara.sprite = spriteAll[1];
			break;
		case 5:
			L_Chara.sprite = spriteAll[0];
			//R_Chara.sprite = spriteAll[1];
			break;
		case 4:
			L_Chara.sprite = spriteAll[0];
			//R_Chara.sprite = spriteAll[1];
			break;
		case 3:
			L_Chara.sprite = spriteAll[4];
			//R_Chara.sprite = spriteAll[5];
			break;
		case 2:
			L_Chara.sprite = spriteAll[2];
			//R_Chara.sprite = spriteAll[3];
			break;
		case 1:
			L_Chara.sprite = spriteAll[0];
			//R_Chara.sprite = spriteAll[1];
			break;
        }
	}
}
