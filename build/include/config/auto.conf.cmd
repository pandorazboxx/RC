deps_config := \
	/home/mmigliaccio/esp/esp-idf/components/app_trace/Kconfig \
	/home/mmigliaccio/esp/esp-idf/components/aws_iot/Kconfig \
	/home/mmigliaccio/esp/esp-idf/components/bt/Kconfig \
	/home/mmigliaccio/esp/esp-idf/components/esp32/Kconfig \
	/home/mmigliaccio/esp/esp-idf/components/ethernet/Kconfig \
	/home/mmigliaccio/esp/esp-idf/components/fatfs/Kconfig \
	/home/mmigliaccio/esp/esp-idf/components/freertos/Kconfig \
	/home/mmigliaccio/esp/esp-idf/components/heap/Kconfig \
	/home/mmigliaccio/esp/esp-idf/components/libsodium/Kconfig \
	/home/mmigliaccio/esp/esp-idf/components/log/Kconfig \
	/home/mmigliaccio/esp/esp-idf/components/lwip/Kconfig \
	/home/mmigliaccio/esp/esp-idf/components/mbedtls/Kconfig \
	/home/mmigliaccio/esp/esp-idf/components/openssl/Kconfig \
	/home/mmigliaccio/esp/esp-idf/components/pthread/Kconfig \
	/home/mmigliaccio/esp/esp-idf/components/spi_flash/Kconfig \
	/home/mmigliaccio/esp/esp-idf/components/spiffs/Kconfig \
	/home/mmigliaccio/esp/esp-idf/components/tcpip_adapter/Kconfig \
	/home/mmigliaccio/esp/esp-idf/components/wear_levelling/Kconfig \
	/home/mmigliaccio/esp/esp-idf/components/bootloader/Kconfig.projbuild \
	/home/mmigliaccio/esp/esp-idf/components/esptool_py/Kconfig.projbuild \
	/home/mmigliaccio/esp/esp-idf/components/partition_table/Kconfig.projbuild \
	/home/mmigliaccio/esp/esp-idf/Kconfig

include/config/auto.conf: \
	$(deps_config)


$(deps_config): ;
