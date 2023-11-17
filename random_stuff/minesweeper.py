import pyautogui
import time

board_topright = (845,245)
board_bottomleft = (305,725)
board_bottomright = (845,725)
board_topleft = (305,245)


def get_screenshot():
  # screenshot the board
  screenshot = pyautogui.screenshot(region=(845,245,540,480))
  screenshot.save('screenshot.png')


input = input("Press enter to take a screenshot")
# wait 2 seconds
time.sleep(2)
get_screenshot()
