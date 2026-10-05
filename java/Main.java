public class Main {
    public static void main(String[] args) {
        RumahSakit rs = new RumahSakit("RS Harapan Sehat");

        System.out.println("\n>>> STATUS: DATA AWAL (KOSONG) <<<");
        rs.tampilkanSemuaStaf();

        rs.tambahDokter(new Dokter("DOC01", "dr. Andi Setiawan", 15000000, "Spesialis Jantung"));
        rs.tambahPerawat(new Perawat("NRS01", "Zahra Cahya", 6000000, "Pagi"));

        System.out.println(">>> STATUS: SETELAH PENAMBAHAN AWAL <<<");
        rs.tampilkanSemuaStaf();

        rs.tambahDokter(new Dokter("DOC02", "dr. Wowo Dodo", 18000000, "Spesialis Anak"));
        rs.tambahPerawat(new Perawat("NRS02", "Priyanka", 6500000, "Malam"));

        System.out.println(">>> STATUS: SETELAH PENAMBAHAN LANJUTAN <<<");
        rs.tampilkanSemuaStaf();
    }
}