import yfinance as yf
import pandas as pd
import matplotlib.pyplot as plt

tick=input("enter the ticker: ")
first=input("enter the start date: ")
last=input("enter the last date: ")
data=yf.download(tickers=[tick],start=first,end=last)
data["Close"][tick].plot(figsize=(12,6), label=f"{tick} Close", alpha=0.7)

# Add a 50-day and 200-day moving average for ticker
data["Close"][tick].rolling(window=50).mean().plot(label="50-day MA", linewidth=2)
data["Close"][tick].rolling(window=200).mean().plot(label="200-day MA", linewidth=2,color="black")

plt.show()


