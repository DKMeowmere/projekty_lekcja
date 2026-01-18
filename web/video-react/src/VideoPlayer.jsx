import { useRef, useState } from "react";

function VideoPlayer() {
  const videoRef = useRef(null);
  const [isPlaying, setIsPlaying] = useState(false);
  const [volume, setVolume] = useState(1);
  const [currentTime, setCurrentTime] = useState(0);
  const [duration, setDuration] = useState(0);

  // Play / Pause
  const togglePlay = () => {
    if (!videoRef.current) return;
    if (isPlaying) {
      videoRef.current.pause();
    } else {
      videoRef.current.play();
    }
    setIsPlaying(!isPlaying);
  };

  // Update current time as video plays
  const handleTimeUpdate = () => {
    setCurrentTime(videoRef.current.currentTime);
  };

  // When metadata loaded (duration)
  const handleLoadedMetadata = () => {
    setDuration(videoRef.current.duration);
  };

  // Change volume
  const handleVolumeChange = (e) => {
    const vol = parseFloat(e.target.value);
    setVolume(vol);
    videoRef.current.volume = vol;
  };

  // Seek
  const handleSeek = (e) => {
    const time = parseFloat(e.target.value);
    videoRef.current.currentTime = time;
    setCurrentTime(time);
  };

  return (
    <div>
      <video
        ref={videoRef}
        width="600"
        onTimeUpdate={handleTimeUpdate}
        onLoadedMetadata={handleLoadedMetadata}
        src="/video.mp4"
        controls={true}
      ></video>

      <div>
        <button onClick={togglePlay}>{isPlaying ? "Pause" : "Play"}</button>
      </div>

      <div>
        <label>Volume: </label>
        <input
          type="range"
          min="0"
          max="1"
          step="0.01"
          value={volume}
          onChange={handleVolumeChange}
        />
      </div>

      <div>
        <label>Progress: </label>
        <input
          type="range"
          min="0"
          max={duration}
          step="0.1"
          value={currentTime}
          onChange={handleSeek}
        />
        <span>
          {Math.floor(currentTime)} / {Math.floor(duration)} sec
        </span>
      </div>
    </div>
  );
}

export default VideoPlayer;
