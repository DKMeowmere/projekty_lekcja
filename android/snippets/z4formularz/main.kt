package com.example.egzamin_formularz

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

        val emailInput = findViewById<EditText>(R.id.emailInput)
        val passwordInput1 = findViewById<EditText>(R.id.passwordInput)
        val passwordInput2 = findViewById<EditText>(R.id.passwordInput2)
        val resultText = findViewById<TextView>(R.id.resultText)
        val submitBtn = findViewById<Button>(R.id.submit)

        submitBtn.setOnClickListener {
            val email = emailInput.text.toString()
            val pass1 = passwordInput1.text.toString()
            val pass2 = passwordInput2.text.toString()

            if (!email.contains("@")) {
                resultText.text = "Nieprawidłowy adres e-mail"
            }
            else if (pass1 != pass2) {
                resultText.text = "Hasła się różnią"
            }
            else {
                resultText.text = "Witaj $email"
            }
        }
    }
}