from matplotlib import pyplot as plt
import numpy as np

x = [9, 10, 11, 12, 13, 14, 15, 16, 17]
h = [2, 1, 2, 2, 11, 5, 0, 0, 1]

t = np.arange(8, 18, 0.01)
y = 11.43042 * np.exp(-(t - 13.17844) ** 2 / (2 * 0.6381478 ** 2))

plt.plot(t, y,
         color='r', linewidth=2)
plt.bar(x, h,
        width=1, color='k', alpha=0.5, edgecolor='k', linewidth=2)
plt.xticks(x)
plt.show()