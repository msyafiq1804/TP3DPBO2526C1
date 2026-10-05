public class Dokter extends TenagaMedis {
    private String spesialisasi;

    public Dokter(String id, String nama, double gajiPokok, String spesialisasi) {
        super(id, nama, gajiPokok);
        this.spesialisasi = spesialisasi;
    }

    public String getSpesialisasi() { return spesialisasi; }
    public void setSpesialisasi(String spesialisasi) { this.spesialisasi = spesialisasi; }

    @Override
    public void tampilkanInfo() {
        super.tampilkanInfo();
        System.out.println(" | Spesialisasi: " + spesialisasi + " [Peran: Dokter]");
    }
}