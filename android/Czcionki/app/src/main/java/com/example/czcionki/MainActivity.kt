package com.example.czcionki

import android.os.Bundle
import android.widget.Button
import android.widget.SeekBar
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
//        val size=findViewById<TextView>(R.id.textView2)
        val language=findViewById<TextView>(R.id.textView3)
        val btn=findViewById<Button>(R.id.button)
        val slider=findViewById<SeekBar>(R.id.seekBar)

        var languages = listOf<String>(
            "Dzień dobry",
            "Good morning",
            "Buenos dias"
        )
        var index=0
        btn.setOnClickListener {
            index=(index+1)%languages.size
            language.text=languages[index]
            language.textSize=slider.progress.toFloat()
        }
    }
}