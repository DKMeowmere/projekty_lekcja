package com.example.pralka

import android.widget.*
import android.os.Bundle
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_main)
        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main)) { v, insets ->
            val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
            insets
        }

        val pralkaBtn = findViewById<Button>(R.id.submitBtn)
        val odkurzaczBtn = findViewById<Button>(R.id.switchBtn)
        val input = findViewById<EditText>(R.id.editTextInput)
        val nrPraniaView = findViewById<TextView>(R.id.nrPraniaView)
        val isTurnedOnView = findViewById<TextView>(R.id.isTurnedOnView)
        var isTurnedOn = false

        pralkaBtn.setOnClickListener {
            val text =  input.text.toString()

            if(!text.isEmpty() && text.toIntOrNull() != null){
                if(text.toInt()  > 0 && text.toInt() < 13){
                    nrPraniaView.text = "Numer prania: $text "
                }
            }
        }

        odkurzaczBtn.setOnClickListener {
            if(!isTurnedOn){
                isTurnedOnView.text = "Odkurzacz włączony"
                odkurzaczBtn.text = "Wyłącz"
                isTurnedOn = true
            } else {
                isTurnedOnView.text = "Odkurzacz wyłączony"
                odkurzaczBtn.text = "Włącz"
                isTurnedOn = false
            }
        }
    }
}