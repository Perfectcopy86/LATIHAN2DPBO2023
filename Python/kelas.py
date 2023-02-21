#deklarasi kelas human
class Human:
    # private atribut
    __NIK= ""
    __nama = ""
    __gender = ""

    # konstruktor
    def __init__(self, NIK="", nama="", gender="", fakultas=""):
        self.__NIK = NIK
        self.__nama = nama
        self.__prodi = gender
        
    # setter dan getter
    def setNIK(self, NIK):
        self.__NIK = NIK

    def setNama(self, nama):
        self.__nama = nama

    def setGender(self, gender):
        self.__gender = gender

    def getNIK(self):
        return self.__NIK

    def getNama(self):
        return self.__nama

    def getGender(self):
        return self.__gender

#deklarasi kelas sivitas turunan human
class Sivitasakademi(Human):
    # private atribut
    __asal= ""
    __email = ""

    # konstruktor
    def __init__(self, asal="", email=""):
        self.__asal = asal
        self.__email = email
    
    # setter dan getter
    def setAsal(self, asal):
        self.__asal = asal

    def setEmail(self, email):
        self.__email = email

    def getAsal(self):
        return self.__asal

    def getEmail(self):
        return self.__email

#deklarasi kelas mahasiswa turunan sivitas
class Mahasiswa(Sivitasakademi):
    # private atribut
    __NIM= ""
    __prodi = ""
    __fakultas = ""

    # konstruktor
    def __init__(self, NIM="", prodi="", fakultas=""):
        self.__NIM = NIM
        self.__prodi = prodi
        self.__fakultas =fakultas

    # setter dan getter
    def setNIM(self, NIM):
        self.__NIM = NIM

    def setProdi(self, prodi):
        self.__prodi = prodi

    def setFakultas(self, fakultas):
        self.__fakultas = fakultas

    def getNIM(self):
        return self.__NIM

    def getProdi(self):
        return self.__prodi

    def getFakultas(self):
        return self.__fakultas