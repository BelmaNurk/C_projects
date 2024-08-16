# Primeni Gaussian blur
blurred_img = cv2.GaussianBlur(img, (5, 5), 0)

# Prikaži zamućenu sliku
cv2.imshow('Blurred Image', blurred_img)
cv2.waitKey(0)
cv2.destroyAllWindows()
