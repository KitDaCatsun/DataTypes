#pragma once

template <int N>
class vec {
public:
	int size = N;

	vec() {
		data_ = new double[N];
		std::fill_n(data_, N, 0);
	}

	~vec() {
		delete[] data_;
	}

	double get(const int n) const {
		return data_[n];
	}

	void set(const int n, const double v) const {
		data_[n] = v;
	}

	double operator[](const int n) const { return get(n); }
	double& operator[](const int n) { return data_[n]; }

private:
	double* data_{};
};