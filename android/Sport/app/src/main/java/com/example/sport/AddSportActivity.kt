package com.example.sport

import android.content.Intent
import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import androidx.appcompat.app.AppCompatActivity

class AddSportActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_add_sport)

        val editSportName = findViewById<EditText>(R.id.editSportName)
        val editDuration = findViewById<EditText>(R.id.editDuration)
        val buttonSubmit = findViewById<Button>(R.id.buttonSubmit)

        buttonSubmit.setOnClickListener {
            val sportName = editSportName.text.toString()
            val duration = editDuration.text.toString()

            // Można przekazać dane z powrotem do dashboard (opcjonalnie)
            val intent = Intent(this, DashboardActivity::class.java)
            intent.putExtra("SPORT_NAME", sportName)
            intent.putExtra("DURATION", duration)

            startActivity(intent)
            finish()
        }
    }
}
