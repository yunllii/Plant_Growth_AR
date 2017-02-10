using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Control_Plant : Photon.MonoBehaviour {


	// called by InputToEvent.
	// we use a short timeout to detect double clicks.
	// on double click, the networked object gets destroyed (on all clients).
	public void Update()
	{
//		if (!this.photonView.isMine)
//		{
//			// this networkView (provided by Photon.MonoBehaviour) says the object is not ours.
//			// so this client can't destroy it.
//			return;
//		}

		if (Input.GetKeyDown ("d")) {
		
			print("d was pressed");
			transform.localScale += new Vector3(0.25F, 0.25F, 0.25F);
		
		}

		if (Input.GetKeyDown ("a")) {

			print("d was pressed");
			transform.localScale -= new Vector3(0.25F, 0.25F, 0.25F);

		}
			

//		if (Time.time - this.timeOfLastClick < ClickDeltaForDoubleclick)
//		{
//			// double click => destory in network
//			PhotonNetwork.Destroy(gameObject);
//		}
//		else
//		{
//			this.timeOfLastClick = Time.time;
//		}
	}
}
