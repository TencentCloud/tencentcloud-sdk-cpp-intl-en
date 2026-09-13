/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_CARD_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_CARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * The details of the card
                */
                class Card : public AbstractModel
                {
                public:
                    Card();
                    ~Card() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Bank identification number.The first six or eight digits of the card number</p><p>Parameter format: Compliant with the ISO 13616-1 standard</p>
                     * @return CardBin <p>Bank identification number.The first six or eight digits of the card number</p><p>Parameter format: Compliant with the ISO 13616-1 standard</p>
                     * 
                     */
                    std::string GetCardBin() const;

                    /**
                     * 设置<p>Bank identification number.The first six or eight digits of the card number</p><p>Parameter format: Compliant with the ISO 13616-1 standard</p>
                     * @param _cardBin <p>Bank identification number.The first six or eight digits of the card number</p><p>Parameter format: Compliant with the ISO 13616-1 standard</p>
                     * 
                     */
                    void SetCardBin(const std::string& _cardBin);

                    /**
                     * 判断参数 CardBin 是否已赋值
                     * @return CardBin 是否已赋值
                     * 
                     */
                    bool CardBinHasBeenSet() const;

                    /**
                     * 获取<p>The last four digits of the card number</p><p>Parameter format: Compliant with ISO 13616-1 standard</p>
                     * @return LastFourDigits <p>The last four digits of the card number</p><p>Parameter format: Compliant with ISO 13616-1 standard</p>
                     * 
                     */
                    std::string GetLastFourDigits() const;

                    /**
                     * 设置<p>The last four digits of the card number</p><p>Parameter format: Compliant with ISO 13616-1 standard</p>
                     * @param _lastFourDigits <p>The last four digits of the card number</p><p>Parameter format: Compliant with ISO 13616-1 standard</p>
                     * 
                     */
                    void SetLastFourDigits(const std::string& _lastFourDigits);

                    /**
                     * 判断参数 LastFourDigits 是否已赋值
                     * @return LastFourDigits 是否已赋值
                     * 
                     */
                    bool LastFourDigitsHasBeenSet() const;

                    /**
                     * 获取<p>The country where the card issued</p>
                     * @return Country <p>The country where the card issued</p>
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置<p>The country where the card issued</p>
                     * @param _country <p>The country where the card issued</p>
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取<p>The bank that issued card</p>
                     * @return Bank <p>The bank that issued card</p>
                     * 
                     */
                    std::string GetBank() const;

                    /**
                     * 设置<p>The bank that issued card</p>
                     * @param _bank <p>The bank that issued card</p>
                     * 
                     */
                    void SetBank(const std::string& _bank);

                    /**
                     * 判断参数 Bank 是否已赋值
                     * @return Bank 是否已赋值
                     * 
                     */
                    bool BankHasBeenSet() const;

                    /**
                     * 获取<p>the type of the card</p><p>Enumeration value:</p><ul><li>credit: Credit card</li><li>debit: Debit card</li><li>charge: Charge card</li></ul>
                     * @return Type <p>the type of the card</p><p>Enumeration value:</p><ul><li>credit: Credit card</li><li>debit: Debit card</li><li>charge: Charge card</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>the type of the card</p><p>Enumeration value:</p><ul><li>credit: Credit card</li><li>debit: Debit card</li><li>charge: Charge card</li></ul>
                     * @param _type <p>the type of the card</p><p>Enumeration value:</p><ul><li>credit: Credit card</li><li>debit: Debit card</li><li>charge: Charge card</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>The brand of the card</p>
                     * @return Brand <p>The brand of the card</p>
                     * 
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置<p>The brand of the card</p>
                     * @param _brand <p>The brand of the card</p>
                     * 
                     */
                    void SetBrand(const std::string& _brand);

                    /**
                     * 判断参数 Brand 是否已赋值
                     * @return Brand 是否已赋值
                     * 
                     */
                    bool BrandHasBeenSet() const;

                    /**
                     * 获取<p>The level of the card that the bank defined</p>
                     * @return Level <p>The level of the card that the bank defined</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>The level of the card that the bank defined</p>
                     * @param _level <p>The level of the card that the bank defined</p>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>The full name of the person who hold the card</p>
                     * @return HolderName <p>The full name of the person who hold the card</p>
                     * 
                     */
                    std::string GetHolderName() const;

                    /**
                     * 设置<p>The full name of the person who hold the card</p>
                     * @param _holderName <p>The full name of the person who hold the card</p>
                     * 
                     */
                    void SetHolderName(const std::string& _holderName);

                    /**
                     * 判断参数 HolderName 是否已赋值
                     * @return HolderName 是否已赋值
                     * 
                     */
                    bool HolderNameHasBeenSet() const;

                    /**
                     * 获取<p>The expiration date of the card</p><p>Parameter format: YYYY-MM-DD.</p>
                     * @return ExpireTime <p>The expiration date of the card</p><p>Parameter format: YYYY-MM-DD.</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>The expiration date of the card</p><p>Parameter format: YYYY-MM-DD.</p>
                     * @param _expireTime <p>The expiration date of the card</p><p>Parameter format: YYYY-MM-DD.</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Bank identification number.The first six or eight digits of the card number</p><p>Parameter format: Compliant with the ISO 13616-1 standard</p>
                     */
                    std::string m_cardBin;
                    bool m_cardBinHasBeenSet;

                    /**
                     * <p>The last four digits of the card number</p><p>Parameter format: Compliant with ISO 13616-1 standard</p>
                     */
                    std::string m_lastFourDigits;
                    bool m_lastFourDigitsHasBeenSet;

                    /**
                     * <p>The country where the card issued</p>
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * <p>The bank that issued card</p>
                     */
                    std::string m_bank;
                    bool m_bankHasBeenSet;

                    /**
                     * <p>the type of the card</p><p>Enumeration value:</p><ul><li>credit: Credit card</li><li>debit: Debit card</li><li>charge: Charge card</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>The brand of the card</p>
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * <p>The level of the card that the bank defined</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>The full name of the person who hold the card</p>
                     */
                    std::string m_holderName;
                    bool m_holderNameHasBeenSet;

                    /**
                     * <p>The expiration date of the card</p><p>Parameter format: YYYY-MM-DD.</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_CARD_H_
