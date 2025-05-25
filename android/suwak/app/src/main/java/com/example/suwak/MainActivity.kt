package com.example.suwak

import android.os.Bundle
import android.widget.Button
import android.widget.SeekBar
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

        val cytaty = arrayOf("Dzień dobry", "Good morning", "Buenos dias")
        val button1 = findViewById<Button>(R.id.button)
        val textView3 = findViewById<TextView>(R.id.textView3)
        val suwak = findViewById<SeekBar>(R.id.seekBar)
        var licznik = 0;

        button1.setOnClickListener(){
            licznik++
            textView3.text = cytaty[licznik % 3]
        }

        suwak.setOnSeekBarChangeListener(object : SeekBar.OnSeekBarChangeListener {
            override fun onProgressChanged(seekBar: SeekBar?, progress: Int, fromUser: Boolean) {
                textView3.textSize = progress.coerceAtLeast(8).toFloat()  // minimalnie 8sp
            }

            override fun onStartTrackingTouch(seekBar: SeekBar?) {}
            override fun onStopTrackingTouch(seekBar: SeekBar?) {}
        })
    }
}