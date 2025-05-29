package com.example.sport

import android.os.Bundle
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import android.widget.*
import android.content.Intent
import androidx.activity.result.contract.ActivityResultContracts

class DashboardActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_dashboard)

        val sharedPref = getSharedPreferences("MyAppPrefs", MODE_PRIVATE)
        val email = sharedPref.getString("EMAIL", "Nieznany")
        val loginDataText = findViewById<TextView>(R.id.loginData)
        val buttonLogout = findViewById<Button>(R.id.buttonLogout)
        val buttonAddSport = findViewById<Button>(R.id.buttonAddSport)

        val prefs = getSharedPreferences("MyAppPrefs", MODE_PRIVATE)
        val savedText = prefs.getString("ALL_ACTIVITIES", "") ?: ""
        val textView = findViewById<TextView>(R.id.textAllActivities)
        textView.text = savedText

        val newName = intent.getStringExtra("SPORT_NAME")
        val newDuration = intent.getStringExtra("DURATION")

        if (!newName.isNullOrBlank() && !newDuration.isNullOrBlank()) {
            val textView = findViewById<TextView>(R.id.textAllActivities)

            // Pobierz obecny tekst i doklej nowy wpis
            val currentText = textView.text.toString()
            val newText = "$currentText$newName – $newDuration min\n"

            textView.text = newText

            val prefs = getSharedPreferences("MyAppPrefs", MODE_PRIVATE)
            val editor = prefs.edit()
            editor.putString("ALL_ACTIVITIES", newText)
            editor.apply()
        }


        loginDataText.text = "Jesteś zalogowany jako: $email"

        buttonLogout.setOnClickListener {
            val textView = findViewById<TextView>(R.id.textAllActivities)
            textView.text = ""
            val intent = Intent(this, MainActivity::class.java)

            // Czyszczenie stosu, aby nie wracać przyciskiem "wstecz" do Dashboard
            intent.flags = Intent.FLAG_ACTIVITY_NEW_TASK or Intent.FLAG_ACTIVITY_CLEAR_TASK

            val sharedPref = getSharedPreferences("MyAppPrefs", MODE_PRIVATE)
            sharedPref.edit().clear().apply()

            startActivity(intent)
            finish() // kończy DashboardActivity
        }

        buttonAddSport.setOnClickListener {
            val intent = Intent(this, AddSportActivity::class.java)
            startActivity(intent)
        }

    }
}