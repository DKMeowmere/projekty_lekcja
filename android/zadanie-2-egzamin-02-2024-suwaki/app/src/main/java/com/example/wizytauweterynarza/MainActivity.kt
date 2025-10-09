package com.example.wizytauweterynarza

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

        val animals = arrayOf("Pies", "Kot", "Świnka morska")
        val animalList = findViewById<ListView>(R.id.animalList)

        val adapter = ArrayAdapter(
            this,
            android.R.layout.simple_list_item_1,
            animals
        )
        animalList.adapter = adapter
    }
}