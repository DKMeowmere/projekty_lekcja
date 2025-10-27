package com.example.sprawdzian

import android.os.Bundle
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import android.widget.*

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_main)

        val input = findViewById<EditText>(R.id.editText)
        val wynik = findViewById<TextView>(R.id.textView1)
        val btn = findViewById<Button>(R.id.button)

        btn.setOnClickListener {
            val string = input.text
            wynik.text = "liczba znaków: " + string.length
        }

    }
}