weight = 41.5

#Ground Shipping
if weight <= 2:
    cost_ground = (weight * 1.50) + 20
elif weight > 2 and weight <= 6:
    cost_ground = (weight * 3) + 20
elif weight > 6 and weight <= 10:
    cost_ground = (weight * 4) + 20
else:
    cost_ground = (weight * 4.75) + 20

print("Cost for ground shipping $" + str(cost_ground))

cost_ground_premium = 105
print("Cost for ground shipping premium $" + str(cost_ground + cost_ground_premium))

#Drone shipping
if weight <= 2:
    cost_drone = (weight * 4.50)
elif weight > 2 and weight <= 6:
    cost_drone = (weight * 9)
elif weight > 6 and weight <= 10:
    cost_drone = (weight * 12)
else:
    cost_drone = (weight * 14.25)
print("Cost for drone shipping $" + str(cost_drone))

