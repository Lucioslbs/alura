from selenium import webdriver
from time import sleep

URL = 'https://statusinvest.com.br/acoes/busca-avancada'

print('Fazendo requisição')
driver = webdriver.firefox()
driver.get(URL)
sleep(1)

print('Buscando Elemento')
button_buscar = driver.find_element_by_xpath('//div/button[contains(@class, "find")]')

button_buscar.click()
sleep(2)

print('Fechando anúncio')
button_fechar = driver.find_element_by_class_name('btn-close')
sleep(1)

print('Baixando dados...')
button_doenload = driver.find_element_by_xpath('//div/a[contains(@class, "btn-download")]')

button_download.click()
