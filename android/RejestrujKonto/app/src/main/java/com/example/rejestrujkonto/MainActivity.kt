package com.example.rejestrujkonto

import android.os.Bundle
import android.widget.Button
import android.view.View
import android.widget.EditText
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

        val btn=findViewById<Button>(R.id.button)
        val mail=findViewById<EditText>(R.id.editTextTextEmailAddress)
        val password=findViewById<EditText>(R.id.editTextNumberPassword)
        val rePassword=findViewById<EditText>(R.id.editTextNumberPassword2)
        val alert=findViewById<TextView>(R.id.textView5)

        btn.setOnClickListener {
            if (mail.text.contains("@")){
//                alert.visibility=View.VISIBLE
                if (password.text.toString()==rePassword.text.toString()) {
                    alert.text="Witaj ${mail.text}"                }
                else{
                    alert.text="hasla sie roznia ${password.text} ${rePassword.text}"
                }

            }else{
                alert.text="Nieprawidłowy adres email"
            }


        }
    }
}