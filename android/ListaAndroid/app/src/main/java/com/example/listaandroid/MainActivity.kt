package com.example.listaandroid

import android.os.Bundle
import android.widget.ArrayAdapter
import android.widget.Button
import android.widget.EditText
import android.widget.ListView
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity


class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_main)
        val list=findViewById<ListView>(R.id.listView)
        val btn=findViewById<Button>(R.id.button)
        val element=findViewById<EditText>(R.id.editTextText)
        val elements=mutableListOf<String>(
            "Zakupy: chleb, masło, ser",
            "Do zrobienia: obiad, umyć podłogi",
            "weekend: kino, spacer z psem"
        )
        val adapter = ArrayAdapter(
            this,
            R.layout.my_custom_text_item, // Twój niestandardowy layout
            R.id.custom_item_text_view,elements)
        list.adapter=adapter
        btn.setOnClickListener {
            elements.add(element.text.toString())
            list.adapter=adapter
        }
    }
}