import java.util.ArrayList;

public class Playlist {
	public static void main(String[] args) {
		ArrayList<String> desertIslandPlaylist = new ArrayList<String>();
		
		desertIslandPlaylist.add("Blinding Lights");
		desertIslandPlaylist.add("Woke Up Late");
		desertIslandPlaylist.add("Way Down We Go");
		desertIslandPlaylist.add("Love and Hate It");
		desertIslandPlaylist.add("Those Eyes");
		desertIslandPlaylist.add("Mere Hi Liye");
		
		System.out.println(desertIslandPlaylist);
		System.out.println(desertIslandPlaylist.size());
		
		desertIslandPlaylist.remove("Love and Hate It");
		System.out.println(desertIslandPlaylist.size());
		System.out.println(desertIslandPlaylist);
		
		String a = desertIslandPlaylist.get(0);
		String b = desertIslandPlaylist.get(1);
		String c = a;
		desertIslandPlaylist.set(0, desertIslandPlaylist.get(1));
		desertIslandPlaylist.set(1, c);
		
		System.out.println(desertIslandPlaylist);
	}		
}