package com.example.turystyka

import android.os.Bundle
import android.widget.*
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_main)

        var ilosc = 0
        val button1 = findViewById<Button>(R.id.button1)
        val button2 = findViewById<Button>(R.id.button2)
        val textView2 = findViewById<TextView>(R.id.textView2)

        button1.setOnClickListener {
            ilosc++
            textView2.text = "liczba polubień: " + ilosc
        }

        button2.setOnClickListener {
            if(ilosc > 0){
                ilosc--
            }
            textView2.text = "liczba polubień: " + ilosc
        }

    }
}