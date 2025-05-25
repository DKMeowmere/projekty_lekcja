package com.example.domek

import android.os.Bundle
import android.widget.Button
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
        var totalLikes=0
        val likes=findViewById<TextView>(R.id.polubienia)
        val polub=findViewById<Button>(R.id.button1)
        val usun=findViewById<Button>(R.id.button2)
        polub.setOnClickListener {
            totalLikes=totalLikes+1
            likes.text="${totalLikes} polubień"
        }
        usun.setOnClickListener {
            if (totalLikes!=0){
                totalLikes=totalLikes-1
                likes.text="${totalLikes} polubień"
            }
        }
    }
}