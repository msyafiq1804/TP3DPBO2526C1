public class Perawat extends TenagaMedis {
    private String shiftKerja;

    public Perawat(String id, String nama, double gajiPokok, String shiftKerja) {
        super(id, nama, gajiPokok);
        this.shiftKerja = shiftKerja;
    }

    public String getShiftKerja() { return shiftKerja; }
    public void setShiftKerja(String shiftKerja) { this.shiftKerja = shiftKerja; }

    @Override
    public void tampilkanInfo() {
        super.tampilkanInfo();
        System.out.println(" | Shift Kerja: " + shiftKerja + " [Peran: Perawat]");
    }
}