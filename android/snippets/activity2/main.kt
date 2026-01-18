package com.example.activity2

import android.content.Intent
import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import androidx.appcompat.app.AppCompatActivity
import android.widget.Toast

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val textInput = findViewById<EditText>(R.id.addText)
        val button = findViewById<Button>(R.id.buttonAdd)

        val prefs = getSharedPreferences("MyAppPrefs", MODE_PRIVATE)
        val isFirstRun = prefs.getBoolean("isFirstRun", true)

        if (isFirstRun) {
            if (prefs.contains("MESSAGES")) {
                prefs.edit().remove("MESSAGES").apply()
            }
            prefs.edit().putBoolean("isFirstRun", false).apply()
        }


        button.setOnClickListener {
            val message = textInput.text.toString()

            if (message.isNotBlank()) {
                val saved = prefs.getString("MESSAGES", "") ?: ""
                val currentList = saved.split("|||").filter { it.isNotBlank() }.toMutableList()

                currentList.add(message)

                if (currentList.size > 10) {
                    currentList.removeAt(0)
                }

                val updated = currentList.joinToString("|||")
                prefs.edit().putString("MESSAGES", updated).apply()
                val intent = Intent(this, MainActivity2::class.java)
                startActivity(intent)
            } else {
                Toast.makeText(this, "Wpisz coś", Toast.LENGTH_SHORT).show()
            }
        }

    }
}