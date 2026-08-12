import java.util.ArrayList;
import java..util.List;

class Song {
    private String title;
    private String artist;

    public Song(String title, String artist) {
        this.title = title;
        this.artist = artist;
    }

    public String getTitle() { return title; }
    public String getArtist() { return artist; }
    
    @Override
    public String toString() {
        return title + " by " + artist;
    }
}

class IPod {
    private List<Song> playlist;
    private int currentIndex;
    private boolean isPlaying;

    public IPod() {
        playlist = new ArrayList<>();
        currentIndex = 0;
        isPlaying = false;
    }

    public void addSong(Song song) {
        playlist.add(song);
    }

    public void play() {
        if (playlist.isEmpty()) {
            System.out.println("Playlist is empty.");
            return;
        }
        isPlaying = true;
        System.out.println("Playing: " + playlist.get(currentIndex));
    }

    public void pause() {
        isPlaying = false;
        System.out.println("Playback paused.");
    }

    public void nextSong() {
        if (playlist.isEmpty()) return;
        currentIndex = (currentIndex + 1) % playlist.size();
        play();
    }

    public void previousSong() {
        if (playlist.isEmpty()) return;
        currentIndex = (currentIndex - 1 + playlist.size()) % playlist.size();
        play();
    }
}

public class Main {
    public static void main(String[] args) {
        IPod myIPod = new IPod();
        myIPod.addSong(new Song("Song One", "Artist A"));
        myIPod.addSong(new Song("Song Two", "Artist B"));

        myIPod.play();
        myIPod.nextSong();
    }
}
