# Import the necessary libraries
import pandas as pd
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score
import matplotlib.pyplot as plt

# Load the dataset
data = pd.read_csv('diabetes.csv')

# Split the dataset into features and target
X = data.drop('Outcome', axis=1)
y = data['Outcome']

# Split the dataset into training and testing sets
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Create the logistic regression model
lr = LogisticRegression()

# Train the model
lr.fit(X_train, y_train)

# Evaluate the model
y_pred = lr.predict(X_test)
accuracy = accuracy_score(y_test, y_pred)
print('Accuracy:', accuracy)

# Plot the confusion matrix
from sklearn.metrics import plot_confusion_matrix
plot_confusion_matrix(lr, X_test, y_test)
plt.title('Confusion Matrix')
plt.show()

# Plot the ROC curve
from sklearn.metrics import plot_roc_curve
plot_roc_curve(lr, X_test, y_test)
plt.title('ROC Curve')
plt.show()
