import java.util.ArrayList;
import java.util.List;

public class RumahSakit {
    private String namaRumahSakit;
    private List<Dokter> daftarDokter;
    private List<Perawat> daftarPerawat;

    public RumahSakit(String namaRumahSakit) {
        this.namaRumahSakit = namaRumahSakit;
        this.daftarDokter = new ArrayList<>();
        this.daftarPerawat = new ArrayList<>();
    }

    public String getNamaRumahSakit() { return namaRumahSakit; }
    public void setNamaRumahSakit(String namaRumahSakit) { this.namaRumahSakit = namaRumahSakit; }

    public void tambahDokter(Dokter d) {
        daftarDokter.add(d);
    }

    public void tambahPerawat(Perawat p) {
        daftarPerawat.add(p);
    }

    public void tampilkanSemuaStaf() {
        System.out.println("==================================================================================");
        System.out.println("                       SISTEM MANAJEMEN: " + namaRumahSakit);
        System.out.println("==================================================================================");
        
        System.out.println("\n[ DAFTAR DOKTER ]");
        System.out.println("----------------------------------------------------------------------------------");
        if (daftarDokter.isEmpty()) {
            System.out.println("  (Belum ada data dokter)");
        } else {
            for (Dokter d : daftarDokter) {
                System.out.print("  ");
                d.tampilkanInfo();
            }
        }

        System.out.println("\n[ DAFTAR PERAWAT ]");
        System.out.println("----------------------------------------------------------------------------------");
        if (daftarPerawat.isEmpty()) {
            System.out.println("  (Belum ada data perawat)");
        } else {
            for (Perawat p : daftarPerawat) {
                System.out.print("  ");
                p.tampilkanInfo();
            }
        }
        System.out.println("==================================================================================\n");
    }
} 
