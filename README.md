# Gestão ÁguaViva 💧

**Solução Algorítmica para Gestão de Consumo e Prevenção de Escassez**

Este projeto foi desenvolvido como parte do **Módulo 2 da Pós-Graduação em Desenvolvimento de Sistemas Web e Dispositivos Móveis (IFSP)**. O objetivo é aplicar conceitos de lógica de programação em C (estruturas sequenciais e condicionais) para resolver um problema real de impacto socio-comunitário.

## 🚀 Sobre o Projeto

O **Gestão ÁguaViva** é uma ferramenta de **Tecnologia Social** desenhada para auxiliar famílias e comunidades na gestão consciente dos recursos hídricos. O programa calcula o consumo médio diário por pessoa e emite alertas baseados nas recomendações da OMS para evitar o desperdício e o alto custo das tarifas.

### Fundamentação Teórica (Práxis Sociocomunitária)
Inspirado no artigo *"Tecnologias sociais e a educação para a práxis sociocomunitária"* de **Renato Kraide Soffner**, este software não é apenas um código, mas um instrumento de:
* **Emancipação Social:** Permite que o cidadão tenha autonomia sobre seus dados de consumo.
* **Práxis Tecnológica:** Une a teoria algorítmica à prática cotidiana (ação-reflexão-ação).
* **Inteligência Coletiva:** Publicado em regime de software livre para que outras comunidades possam adaptar e reconstruir o conhecimento.

## 🛠️ Funcionalidades

* Entrada do número de moradores da residência.
* Cálculo do consumo mensal total (m³) convertido para litros.
* Cálculo da média diária per capita.
* **Sistema de Alertas:**
    * 🟢 **Consumo Consciente:** Até 110 litros/dia.
    * 🟡 **Atenção:** Entre 110 e 170 litros/dia.
    * 🔴 **Desperdício Crítico:** Acima de 170 litros/dia.

## 💻 Como Executar

1. **Requisitos:** Ter um compilador C instalado (como o GCC via MinGW).
2. **Compilação:**
   ```bash
   gcc projeto_agua_viva.c -o projeto
   ./projeto
