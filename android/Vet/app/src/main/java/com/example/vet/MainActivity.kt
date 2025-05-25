package com.example.vet

import android.os.Bundle
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import android.widget.ArrayAdapter
import android.widget.Button
import android.widget.EditText
import android.widget.ListView
import android.widget.SeekBar
import android.widget.TextView
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_main)
        val imie=findViewById<EditText>(R.id.editTextText)
        val lista=findViewById<ListView>(R.id.listView)
        val progres=findViewById<TextView>(R.id.textView5)
        val slider=findViewById<SeekBar>(R.id.seekBar2)
        val cel=findViewById<EditText>(R.id.editTextText4)
        val time=findViewById<EditText>(R.id.editTextDate)
        val btn=findViewById<Button>(R.id.button)
        val wizyta=findViewById<TextView>(R.id.textView7)
        val gatunek=listOf<String>(
            "Pies",
            "Kot",
            "Świnka morska"

        )

            progres.text=slider.progress.toString()

        val adapter = ArrayAdapter(this, android.R.layout.simple_list_item_1, gatunek)
        lista.adapter=adapter
        var clickedItem=""
        slider.setOnSeekBarChangeListener(object : SeekBar.OnSeekBarChangeListener {
            override fun onProgressChanged(seekBar: SeekBar?, progress: Int, fromUser: Boolean) {
                progres.text=progress.toString()
            }
            override fun onStartTrackingTouch(seekBar: SeekBar?) {
            }

            override fun onStopTrackingTouch(seekBar: SeekBar?) {
            }
        })
        lista.setOnItemClickListener { parent, view, position, id ->
            clickedItem = gatunek[position]
        }
        btn.setOnClickListener {
            wizyta.text="${imie.text}, ${clickedItem}, ${progres.text}, ${cel.text}, ${time.text}"
        }

    }
}