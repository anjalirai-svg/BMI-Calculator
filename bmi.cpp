#include<iostream>
using namespace std;
//A BMI calculator
float BMI_Metric(float weight,float height){
    //Weight in kg,height in meters
    float resultOfMetric=(weight/(height*height));//Formula of BMI Metric
    return resultOfMetric;
}

float BMI_Imperial(float weight,float height){
    float weight2=(weight*0.453592);//In pound
    float height2=(height*0.0254);//In inches

    float resultOfImperial= (weight2/(height2*height2));//Formula for BMI imperial
    return resultOfImperial;
}

//For checking the BMI category
string getBMICategory(float BMI){
    if(BMI<18.5){
        return "You are in Underweight maintain your health";
    }
    else if(BMI>=18.5 && BMI<24.5){
        return "Your health is normal and you are fit";
    }
    else{
        return "You are in Overweight reduce your weight";
    }
    
}


//For displaying the BMI
void displayBMIResult(float BMI,string category){
    cout<<"Your BMI is:"<<BMI<<endl;
    cout<<category<<endl;
}

int main(){
    int choice;
    float weight,height,BMI;
    string category;
    cout<<"Enter your choice"<<endl;
    cout<<"1.For Metric(kg,pound)"<<endl;
    cout<<"2.For imperial(meter,inches)"<<endl;
    cin>>choice;
    //Input for weight and height
    if(choice==1){
    cout<<"Enter the weight in kg:"<<endl;
    cin>>weight;
    cout<<"Enter the height in meter:"<<endl;
    cin>>height;
    BMI=BMI_Metric(weight,height);
    }
    else if(choice==2){
    cout<<"Enter the weight in pound:"<<endl;
    cin>>weight;
    
    cout<<"Enter the height in inches:"<<endl;
    cin>>height;
    BMI=BMI_Imperial(weight,height);
    }
    else{
        cout<<"Invalid choice"<<endl;
    }
    category=getBMICategory(BMI);
    displayBMIResult(BMI,category);
    return 0;
}

