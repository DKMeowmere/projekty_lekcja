package com.example.activity2

import android.content.Intent
import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import androidx.appcompat.app.AppCompatActivity

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val editEmail = findViewById<EditText>(R.id.addText)
        val button = findViewById<Button>(R.id.buttonAdd)
        val texts = setOf("Pies2",
            "Kot",
            "Świnka morska")

        button.setOnClickListener {
            val email = editEmail.text.toString()

            val intent = Intent(this, MainActivity2::class.java)
            val sharedPref = getSharedPreferences("MyAppPrefs", MODE_PRIVATE)
            sharedPref.edit().putStringSet("TEXTS", texts).apply()
            startActivity(intent)
        }

    }
}