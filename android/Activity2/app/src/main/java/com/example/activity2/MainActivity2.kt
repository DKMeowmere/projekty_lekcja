package com.example.activity2

import android.content.Intent
import android.os.Bundle
import android.widget.Button
import androidx.appcompat.app.AppCompatActivity
import android.widget.ListView
import android.widget.ArrayAdapter


class MainActivity2 : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main2)

        val button = findViewById<Button>(R.id.button)
        val lista=findViewById<ListView>(R.id.listView)
        val sharedPref = getSharedPreferences("MyAppPrefs", MODE_PRIVATE)
        val texts = sharedPref.getStringSet("TEXTS", setOf("Pusto"))
        val array = listOf(texts)

        val adapter = ArrayAdapter(this, android.R.layout.simple_list_item_1, array)
        lista.adapter=adapter

        button.setOnClickListener {
            val intent = Intent(this, MainActivity::class.java)
            startActivity(intent)
        }
    }
}