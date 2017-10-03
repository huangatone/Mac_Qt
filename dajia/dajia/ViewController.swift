//
//  ViewController.swift
//  dajia
//
//  Created by Rong Huang on 9/27/17.
//  Copyright © 2017 Rong Huang. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var img1: UIImageView!
    var person_name :String?
    @IBOutlet weak var img2: UIImageView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        if let person_name = person_name {
            print ("+++++++++++++++++++++++person_name+++++++++++++++++++++")
            print(person_name)
            
        }
        img1.frame = CGRect(x: 0, y: 0, width: 100, height: 180)
        img1.contentMode = .scaleAspectFit
        
        img1.backgroundColor = UIColor(red: 0, green: 0, blue: 50, alpha: 0.2)

        img2.frame = CGRect(x: 0, y: 0, width: 100, height: 180)
        img2.contentMode = .scaleAspectFit
        
        img2.backgroundColor = UIColor(red: 0, green: 0, blue: 50, alpha: 0.2)

        
        img1.image =  UIImage(named: "New")
        img2.image =  UIImage(named: "Wiki")
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

