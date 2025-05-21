package com.example.kalkulator

import android.os.Bundle
import android.widget.*
import androidx.appcompat.app.AppCompatActivity

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)


        val liczba1 = findViewById<EditText>(R.id.editTextNumberSigned)
        val liczba2 = findViewById<EditText>(R.id.editTextNumberSigned2)
        val wynik = findViewById<TextView>(R.id.textView3)

        val plus = findViewById<Button>(R.id.button)
        val minus = findViewById<Button>(R.id.button2)
        val razy = findViewById<Button>(R.id.button3)
        val dziel = findViewById<Button>(R.id.button4)


        plus.setOnClickListener {
            val a = liczba1.text.toString().toDouble()
            val b = liczba2.text.toString().toDouble()
            wynik.text = (a + b).toString()
        }


        minus.setOnClickListener {
            val a = liczba1.text.toString().toDouble()
            val b = liczba2.text.toString().toDouble()
            wynik.text = (a - b).toString()
        }


        razy.setOnClickListener {
            val a = liczba1.text.toString().toDouble()
            val b = liczba2.text.toString().toDouble()
            wynik.text = (a * b).toString()
        }


        dziel.setOnClickListener {
            val a = liczba1.text.toString().toDouble()
            val b = liczba2.text.toString().toDouble()
            if (b != 0.0) {
                wynik.text = (a / b).toString()
            } else {
                wynik.text = "Nie dziel przez 0!"
            }
        }
    }
}