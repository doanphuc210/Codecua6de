class Singleton {
public:
  static Singleton& getInstance() {
    static Singleton instance;
    return instance;
  }

private:
  Singleton() {}
  ~Singleton() {}
};
