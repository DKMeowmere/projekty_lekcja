package com.example.urzadzeniadomowe

import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.TextView
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_main)
        val input=findViewById<EditText>(R.id.editTextText)
        val btn=findViewById<Button>(R.id.button)
        val btn2=findViewById<Button>(R.id.button2)
        val nr=findViewById<TextView>(R.id.textView6)
        val odkurzacz=findViewById<TextView>(R.id.textView8)
        btn.setOnClickListener {
            val inputText = input.text.toString()
            val enteredNumber: Int? = inputText.toIntOrNull()
            if (enteredNumber != null) {
                if (enteredNumber > 0 && enteredNumber < 13) {
                    nr.text ="Numer prania: ${enteredNumber}"
                }
                else{
                    nr.text="Numer prania: nie podano"
                }
            }
        }
        val btnText=arrayOf("Włącz","Wyłącz")
        val odkurzaczText=arrayOf("wyłączony","włączony")
        var index=0
        btn2.setOnClickListener {
            index=(index+1)%2
            btn2.text=btnText[index]
            odkurzacz.text="Odkurzacz: ${odkurzaczText[index]}"
        }
    }
}