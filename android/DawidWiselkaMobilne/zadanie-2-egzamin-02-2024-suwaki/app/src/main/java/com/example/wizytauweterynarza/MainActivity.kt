package com.example.wizytauweterynarza

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

        val animals = arrayOf("Pies", "Kot", "Świnka morska")
        val animalList = findViewById<ListView>(R.id.animalList)

        val adapter = ArrayAdapter(
            this,
            android.R.layout.simple_list_item_1,
            animals
        )
        animalList.adapter = adapter

        val ownerNameInput = findViewById<EditText>(R.id.ownerNameInput)
        val ageValueText = findViewById<TextView>(R.id.ageValueText)
        val ageSeekBar = findViewById<SeekBar>(R.id.ageSeekBar)
        val purposeInput = findViewById<EditText>(R.id.purposeInput)
        val timeInput = findViewById<EditText>(R.id.timeInput)
        val okButton = findViewById<Button>(R.id.okButton)
        val resultText = findViewById<TextView>(R.id.resultText)
        var selectedAnimal = "Kot"

        timeInput.setText("16:00")
        ageSeekBar.progress = 0
        ageValueText.text = "0"

        ageSeekBar.setOnSeekBarChangeListener(object : SeekBar.OnSeekBarChangeListener {
            override fun onProgressChanged(seekBar: SeekBar?, progress: Int, fromUser: Boolean) {
                ageValueText.text = progress.toString()
            }

            override fun onStartTrackingTouch(seekBar: SeekBar?) {}
            override fun onStopTrackingTouch(seekBar: SeekBar?) {}
        })


        fun updateSeekBarMax(animal: String) {
            val max = when (animal) {
                "Pies" -> 18
                "Kot" -> 20
                "Świnka morska" -> 9
                else -> 20
            }
            ageSeekBar.max = max
            ageSeekBar.progress = 0
            ageValueText.text = "0"
        }

        animalList.setOnItemClickListener { _, _, position, _ ->
            selectedAnimal = animals[position]
            updateSeekBarMax(selectedAnimal)
        }

        okButton.setOnClickListener {
            val ownerName = ownerNameInput.text.toString()
            val age = ageValueText.text.toString()
            val purpose = purposeInput.text.toString()
            val time = timeInput.text.toString()

            val result = "$ownerName, $selectedAnimal, $age, $purpose, $time"
            resultText.text = result
        }
    }
}