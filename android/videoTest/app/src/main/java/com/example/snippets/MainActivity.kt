package com.example.snippets

import android.os.Bundle
import android.widget.*
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import kotlin.random.Random
import android.util.Log
import android.net.Uri

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

         lateinit var adapter: ArrayAdapter<String>
         val items = mutableListOf("1", "2")


        val listView = findViewById<ListView>(R.id.listView)
        adapter = ArrayAdapter(this, android.R.layout.simple_list_item_1, items)
        listView.adapter = adapter
        //---
        val btn = findViewById<Button>(R.id.button)

        btn.setOnClickListener {
            val liczba = Random.nextInt(1, 101) // 1–100

            // konsola (Logcat)
            Log.d("LOSOWANIE", "Wylosowana liczba: $liczba")

            items.add(liczba.toString())
            adapter.notifyDataSetChanged()
            // Toast
            Toast.makeText(
                this,
                "Wylosowana liczba: $liczba",
                Toast.LENGTH_SHORT
            ).show()
        }

        // ------
        val videoView = findViewById<VideoView>(R.id.videoView)

        val mediaController = MediaController(this)
        mediaController.setAnchorView(videoView)

        val videoUri = Uri.parse(
            "android.resource://${packageName}/${R.raw.video}"
        )

        videoView.setMediaController(mediaController)
        videoView.setVideoURI(videoUri)
        videoView.start()

        // ----
    }
}