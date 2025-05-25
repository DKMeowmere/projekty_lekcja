package com.example.kolor

import android.os.Bundle
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import android.widget.Button
import android.widget.TextView
import android.graphics.Color


class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_main)
        val button1 = findViewById<Button>(R.id.button1)
        val textView1 = findViewById<TextView>(R.id.textView)

        // Ustaw listener kliknięcia
        button1.setOnClickListener {
            textView1.text = "Tekst został zmieniony!"
            textView1.setTextColor(Color.parseColor("#FF0000"))
        }


    }
}