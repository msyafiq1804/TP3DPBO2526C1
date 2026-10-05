public class TenagaMedis {
    protected String id;
    protected String nama;
    protected double gajiPokok;

    public TenagaMedis(String id, String nama, double gajiPokok) {
        this.id = id;
        this.nama = nama;
        this.gajiPokok = gajiPokok;
    }

    public String getId() { return id; }
    public String getNama() { return nama; }
    public double getGajiPokok() { return gajiPokok; }

    public void setId(String id) { this.id = id; }
    public void setNama(String nama) { this.nama = nama; }
    public void setGajiPokok(double gajiPokok) { this.gajiPokok = gajiPokok; }

    public void tampilkanInfo() {
        System.out.print("ID: " + id + " | Nama: " + nama + " | Gaji Pokok: Rp " + String.format("%.0f", gajiPokok));
    }
}