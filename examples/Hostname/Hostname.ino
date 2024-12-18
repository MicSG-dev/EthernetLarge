#include <Arduino.h>
#include <SPI.h>
#include <EthernetLarge.h>

IPAddress ip(192, 168, 0, 1);
EthernetServer server(80);

void setup()
{
    Ethernet.init(w5500_cs);
    Serial.begin(115200);

    Ethernet.setHostname("Teste Pitty  aqui!! 123456789012456");

    Serial.print("DHCP:");
    if (Ethernet.begin(mac) == 0)
    {
        Serial.println(" falhado.");
    }
    else
    {
        Serial.println(" OK");
    }

    Serial.print("Módulo ethernet:");
    if (Ethernet.hardwareStatus() == EthernetNoHardware)
    {
        Serial.println(" Não encontrado. Não é possível continuar.");
        delay(5000);
        ESP.restart();
    }
    else
    {
        Serial.println(" OK");
    }

    Serial.print("Cabo ethernet:");
    if (Ethernet.linkStatus() == LinkOFF)
    {
        Serial.println(" Não está conectado.");
    }
    else
    {
        Serial.println(" OK");
    }

    server.begin();

    Serial.print("O servidor está em http://");
    Serial.println(Ethernet.localIP());
}

void loop()
{
    //...
    //...
    //...
}