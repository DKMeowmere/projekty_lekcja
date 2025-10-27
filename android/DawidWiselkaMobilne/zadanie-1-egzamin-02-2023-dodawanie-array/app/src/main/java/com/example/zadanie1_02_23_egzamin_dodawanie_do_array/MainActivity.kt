package com.example.zadanie1_02_23_egzamin_dodawanie_do_array

import android.os.Bundle
import android.widget.*
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

        val doZrobienia = arrayOf(
            "Zakupy: chleb, masło, ser",
            "Do zrobienia: zakupy, umyć podłogi",
            "Weekend: kino, spacer z psem"
        )

        val button1 = findViewById<Button>(R.id.button)
        val input1 = findViewById<EditText>(R.id.input1)
        val listView = findViewById<ListView>(R.id.listView)

        val items = ArrayList(doZrobienia.toList())
        val adapter = ArrayAdapter(this, android.R.layout.simple_list_item_1, items)
        listView.adapter = adapter

        button1.setOnClickListener {
            val newItem = input1.text.toString()
            if (newItem.isNotEmpty()) {
                items.add(newItem)
                adapter.notifyDataSetChanged()
                input1.text.clear()
            } else {
                Toast.makeText(this, "Wpisz coś!", Toast.LENGTH_SHORT).show()
            }
        }
    }
}
