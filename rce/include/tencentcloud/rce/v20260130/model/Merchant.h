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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_MERCHANT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_MERCHANT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Address.h>
#include <tencentcloud/rce/v20260130/model/Amount.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * The details of the merchant
                */
                class Merchant : public AbstractModel
                {
                public:
                    Merchant();
                    ~Merchant() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The ID of the merchant</p>
                     * @return MerchantId <p>The ID of the merchant</p>
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置<p>The ID of the merchant</p>
                     * @param _merchantId <p>The ID of the merchant</p>
                     * 
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     * 
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取<p>The name of the merchant</p>
                     * @return Name <p>The name of the merchant</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>The name of the merchant</p>
                     * @param _name <p>The name of the merchant</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Merchant registration time</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601</p>
                     * @return RegisterTime <p>Merchant registration time</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601</p>
                     * 
                     */
                    std::string GetRegisterTime() const;

                    /**
                     * 设置<p>Merchant registration time</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601</p>
                     * @param _registerTime <p>Merchant registration time</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601</p>
                     * 
                     */
                    void SetRegisterTime(const std::string& _registerTime);

                    /**
                     * 判断参数 RegisterTime 是否已赋值
                     * @return RegisterTime 是否已赋值
                     * 
                     */
                    bool RegisterTimeHasBeenSet() const;

                    /**
                     * 获取<p>Merchant category code</p><p>Parameter format: 4-digit No. compliant with ISO 18245</p>
                     * @return Category <p>Merchant category code</p><p>Parameter format: 4-digit No. compliant with ISO 18245</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>Merchant category code</p><p>Parameter format: 4-digit No. compliant with ISO 18245</p>
                     * @param _category <p>Merchant category code</p><p>Parameter format: 4-digit No. compliant with ISO 18245</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>The phone number of the merchant</p><p>parameter format: format with "+", region code, and number that complies with the E.164 standard</p>
                     * @return Phone <p>The phone number of the merchant</p><p>parameter format: format with "+", region code, and number that complies with the E.164 standard</p>
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置<p>The phone number of the merchant</p><p>parameter format: format with "+", region code, and number that complies with the E.164 standard</p>
                     * @param _phone <p>The phone number of the merchant</p><p>parameter format: format with "+", region code, and number that complies with the E.164 standard</p>
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取<p>The email of the merchant</p>
                     * @return Email <p>The email of the merchant</p>
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置<p>The email of the merchant</p>
                     * @param _email <p>The email of the merchant</p>
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取<p>The url of the merchant shop on the website</p>
                     * @return URL <p>The url of the merchant shop on the website</p>
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置<p>The url of the merchant shop on the website</p>
                     * @param _uRL <p>The url of the merchant shop on the website</p>
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取<p>The address of the merchant</p>
                     * @return Address <p>The address of the merchant</p>
                     * 
                     */
                    Address GetAddress() const;

                    /**
                     * 设置<p>The address of the merchant</p>
                     * @param _address <p>The address of the merchant</p>
                     * 
                     */
                    void SetAddress(const Address& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取<p>The level of the merchant</p>
                     * @return Level <p>The level of the merchant</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>The level of the merchant</p>
                     * @param _level <p>The level of the merchant</p>
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
                     * 获取<p>The type of the merchant</p><p>Enumeration value:</p><ul><li>person: Person</li><li>company: Company</li></ul>
                     * @return BusinessType <p>The type of the merchant</p><p>Enumeration value:</p><ul><li>person: Person</li><li>company: Company</li></ul>
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置<p>The type of the merchant</p><p>Enumeration value:</p><ul><li>person: Person</li><li>company: Company</li></ul>
                     * @param _businessType <p>The type of the merchant</p><p>Enumeration value:</p><ul><li>person: Person</li><li>company: Company</li></ul>
                     * 
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取<p>The volume of goods on sale of the merchant</p>
                     * @return GoodsQuantity <p>The volume of goods on sale of the merchant</p>
                     * 
                     */
                    int64_t GetGoodsQuantity() const;

                    /**
                     * 设置<p>The volume of goods on sale of the merchant</p>
                     * @param _goodsQuantity <p>The volume of goods on sale of the merchant</p>
                     * 
                     */
                    void SetGoodsQuantity(const int64_t& _goodsQuantity);

                    /**
                     * 判断参数 GoodsQuantity 是否已赋值
                     * @return GoodsQuantity 是否已赋值
                     * 
                     */
                    bool GoodsQuantityHasBeenSet() const;

                    /**
                     * 获取<p>The historical sales volume of the merchant</p>
                     * @return HistoricSalesQuantity <p>The historical sales volume of the merchant</p>
                     * 
                     */
                    int64_t GetHistoricSalesQuantity() const;

                    /**
                     * 设置<p>The historical sales volume of the merchant</p>
                     * @param _historicSalesQuantity <p>The historical sales volume of the merchant</p>
                     * 
                     */
                    void SetHistoricSalesQuantity(const int64_t& _historicSalesQuantity);

                    /**
                     * 判断参数 HistoricSalesQuantity 是否已赋值
                     * @return HistoricSalesQuantity 是否已赋值
                     * 
                     */
                    bool HistoricSalesQuantityHasBeenSet() const;

                    /**
                     * 获取<p>The historical sales amount of the merchant</p>
                     * @return HistoricSalesAmount <p>The historical sales amount of the merchant</p>
                     * 
                     */
                    Amount GetHistoricSalesAmount() const;

                    /**
                     * 设置<p>The historical sales amount of the merchant</p>
                     * @param _historicSalesAmount <p>The historical sales amount of the merchant</p>
                     * 
                     */
                    void SetHistoricSalesAmount(const Amount& _historicSalesAmount);

                    /**
                     * 判断参数 HistoricSalesAmount 是否已赋值
                     * @return HistoricSalesAmount 是否已赋值
                     * 
                     */
                    bool HistoricSalesAmountHasBeenSet() const;

                private:

                    /**
                     * <p>The ID of the merchant</p>
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * <p>The name of the merchant</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Merchant registration time</p><p>Parameter format: Millisecond-level time with UTC time zone compliant with ISO 8601</p>
                     */
                    std::string m_registerTime;
                    bool m_registerTimeHasBeenSet;

                    /**
                     * <p>Merchant category code</p><p>Parameter format: 4-digit No. compliant with ISO 18245</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>The phone number of the merchant</p><p>parameter format: format with "+", region code, and number that complies with the E.164 standard</p>
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * <p>The email of the merchant</p>
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * <p>The url of the merchant shop on the website</p>
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * <p>The address of the merchant</p>
                     */
                    Address m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>The level of the merchant</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>The type of the merchant</p><p>Enumeration value:</p><ul><li>person: Person</li><li>company: Company</li></ul>
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * <p>The volume of goods on sale of the merchant</p>
                     */
                    int64_t m_goodsQuantity;
                    bool m_goodsQuantityHasBeenSet;

                    /**
                     * <p>The historical sales volume of the merchant</p>
                     */
                    int64_t m_historicSalesQuantity;
                    bool m_historicSalesQuantityHasBeenSet;

                    /**
                     * <p>The historical sales amount of the merchant</p>
                     */
                    Amount m_historicSalesAmount;
                    bool m_historicSalesAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_MERCHANT_H_
