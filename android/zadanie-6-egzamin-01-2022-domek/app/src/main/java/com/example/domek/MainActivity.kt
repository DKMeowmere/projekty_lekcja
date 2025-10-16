package com.example.domek

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
        val likeBtn = findViewById<Button>(R.id.likeBtn)
        val deleteBtn = findViewById<Button>(R.id.deleteBtn)
        val likeCountText = findViewById<TextView>(R.id.likeCountText)
        var likeCount = 0

        likeBtn.setOnClickListener {
            likeCount++
            likeCountText.text = "$likeCount polubień"
        }

        deleteBtn.setOnClickListener {
            if(likeCount > 0) likeCount--
            likeCountText.text = "$likeCount polubień"
        }
    }
}