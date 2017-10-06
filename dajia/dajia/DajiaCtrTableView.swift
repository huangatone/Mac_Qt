//
//  DajiaCtrTableView.swift
//  dajia
//
//  Created by Rong Huang on 9/27/17.
//  Copyright © 2017 Rong Huang. All rights reserved.
//

import UIKit
import os.log

class DajiaCtrTableView: UITableViewController {

    var group :String?
    
    let courses = [
        ["name":"Tom","pic":"cc_0_0.png","text":"Normal","recommand":"me","pic_rec":"cc_0_1.png","text_rec":"normal"],
        ["name":"Machel","pic":"linux_PNG48.png","text":"Normal","recommand":"me","pic_rec":"Wiki.png","text_rec":"normal"],
        ["name":"Steve","pic":"linux_PNG48","text":"Normal","recommand":"me","pic_rec":"Wiki.png","text_rec":"normal"],
        ["name":"Joone","pic":"linux_PNG48.png","text":"Normal","recommand":"me","pic_rec":"Wiki.png","text_rec":"normal"],
        ["name":"Cobel","pic":"swift.png","text":"Normal","recommand":"me","pic_rec":"Wiki.png","text_rec":"normal"],
        ["name":"Loly","pic":"xcode.png","text":"Normal","recommand":"me","pic_rec":"r.png","text_rec":"normal"],
        ["name":"Java","pic":"java.png","text":"Normal","recommand":"me","pic_rec":"r.png","text_rec":"normal"],
        ["name":"PHP","pic":"php.png","text":"Normal","recommand":"me","pic_rec":"r.png","text_rec":"normal"],
        ["name":"JS","pic":"js.png","text":"Normal","recommand":"me","pic_rec":"r.png","text_rec":"normal"],
        ["name":"React","pic":"react.png","text":"Normal","recommand":"me","pic_rec":"r.png","text_rec":"normal"],
        ["name":"Ruby","pic":"ruby.png","text":"Normal","recommand":"me","pic_rec":"r.png","text_rec":"normal"],
        ["name":"HTML","pic":"html.png","text":"Normal","recommand":"me","pic_rec":"r.png","text_rec":"normal"],
        ["name":"C#","pic":"c#.png","text":"Normal","recommand":"me","pic_rec":"r.png","text_rec":"normal"]
    ]

    
    override func viewDidLoad() {
        super.viewDidLoad()

        // Uncomment the following line to preserve selection between presentations
        // self.clearsSelectionOnViewWillAppear = false

        // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
        // self.navigationItem.rightBarButtonItem = self.editButtonItem()
        // Set up views if editing an existing Meal.
        if let group = group {
            print ("++++++++++++++++++++++++++++++++++++++++++++")
            print(group)
            
        }

        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    // MARK: - Table view data source

    override func numberOfSections(in tableView: UITableView) -> Int {
        // #warning Incomplete implementation, return the number of sections
        return 1
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        // #warning Incomplete implementation, return the number of rows
        return courses.count
    }

    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "DajiaCell", for: indexPath)as! DajiaTableViewCell


        // Configure the cell...
        cell.lb1.text =  courses[indexPath.item]["name"]
        cell.imgHead1.image = UIImage(named: courses[indexPath.item]["pic"]!)
        cell.lb2.text =  courses[indexPath.item]["text"]
        cell.imgHead2.image = UIImage(named: courses[indexPath.item]["pic_rec"]!)
        //cell.imgHead1.contentMode = .scaleAspectFit
        return cell
    }
    

    /*
    // Override to support conditional editing of the table view.
    override func tableView(_ tableView: UITableView, canEditRowAt indexPath: IndexPath) -> Bool {
        // Return false if you do not want the specified item to be editable.
        return true
    }
    */

    /*
    // Override to support editing the table view.
    override func tableView(_ tableView: UITableView, commit editingStyle: UITableViewCellEditingStyle, forRowAt indexPath: IndexPath) {
        if editingStyle == .delete {
            // Delete the row from the data source
            tableView.deleteRows(at: [indexPath], with: .fade)
        } else if editingStyle == .insert {
            // Create a new instance of the appropriate class, insert it into the array, and add a new row to the table view
        }    
    }
    */

    /*
    // Override to support rearranging the table view.
    override func tableView(_ tableView: UITableView, moveRowAt fromIndexPath: IndexPath, to: IndexPath) {

    }
    */

    /*
    // Override to support conditional rearranging of the table view.
    override func tableView(_ tableView: UITableView, canMoveRowAt indexPath: IndexPath) -> Bool {
        // Return false if you do not want the item to be re-orderable.
        return true
    }
    */

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

    @IBAction func goBack(_ sender: UIBarButtonItem) {
        //dismiss(animated: true, completion: nil)
        
        let isPresentingInAddMealMode = presentingViewController is UINavigationController
        
        if isPresentingInAddMealMode {
            dismiss(animated: true, completion: nil)
        }
        else if let owningNavigationController = navigationController{
            owningNavigationController.popViewController(animated: true)
        }
        else {
            fatalError("The MealViewController is not inside a navigation controller.")
        }

    }
    
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        
        super.prepare(for: segue, sender: sender)
        
        switch(segue.identifier ?? "") {
            
        case "AddItem":
            os_log("Adding a new meal.", log: OSLog.default, type: .debug)
            
        case "ShowDetail":
            guard let ctr = segue.destination as? ViewController else {
                fatalError("Unexpected destination: \(segue.destination)")
            }
            
            guard let selectedCell = sender as? DajiaTableViewCell else {
                fatalError("Unexpected sender: \(sender)")
            }
            
            guard let indexPath = tableView.indexPath(for: selectedCell) else {
                fatalError("The selected cell is not being displayed by the table")
            }

            
            let person_name = courses[indexPath.item]["name"]
            ctr.person_name = person_name
            
        default:
            fatalError("Unexpected Segue Identifier; \(segue.identifier)")
        }
    }
    
}
