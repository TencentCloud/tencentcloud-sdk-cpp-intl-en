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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_AMOUNT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_AMOUNT_H_

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
                * Amount
                */
                class Amount : public AbstractModel
                {
                public:
                    Amount();
                    ~Amount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Currency code</p><p>Parameter format: Compliant with the ISO 4217 standard</p>
                     * @return Currency <p>Currency code</p><p>Parameter format: Compliant with the ISO 4217 standard</p>
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置<p>Currency code</p><p>Parameter format: Compliant with the ISO 4217 standard</p>
                     * @param _currency <p>Currency code</p><p>Parameter format: Compliant with the ISO 4217 standard</p>
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取<p>Original amount in currency</p>
                     * @return OriginalAmount <p>Original amount in currency</p>
                     * 
                     */
                    double GetOriginalAmount() const;

                    /**
                     * 设置<p>Original amount in currency</p>
                     * @param _originalAmount <p>Original amount in currency</p>
                     * 
                     */
                    void SetOriginalAmount(const double& _originalAmount);

                    /**
                     * 判断参数 OriginalAmount 是否已赋值
                     * @return OriginalAmount 是否已赋值
                     * 
                     */
                    bool OriginalAmountHasBeenSet() const;

                    /**
                     * 获取<p>Current exchange rate of base currency converted to USD</p>
                     * @return ExchangeRateUSD <p>Current exchange rate of base currency converted to USD</p>
                     * 
                     */
                    double GetExchangeRateUSD() const;

                    /**
                     * 设置<p>Current exchange rate of base currency converted to USD</p>
                     * @param _exchangeRateUSD <p>Current exchange rate of base currency converted to USD</p>
                     * 
                     */
                    void SetExchangeRateUSD(const double& _exchangeRateUSD);

                    /**
                     * 判断参数 ExchangeRateUSD 是否已赋值
                     * @return ExchangeRateUSD 是否已赋值
                     * 
                     */
                    bool ExchangeRateUSDHasBeenSet() const;

                    /**
                     * 获取<p>Current exchange rate of base currency converted to CNY</p>
                     * @return ExchangeRateCNY <p>Current exchange rate of base currency converted to CNY</p>
                     * 
                     */
                    double GetExchangeRateCNY() const;

                    /**
                     * 设置<p>Current exchange rate of base currency converted to CNY</p>
                     * @param _exchangeRateCNY <p>Current exchange rate of base currency converted to CNY</p>
                     * 
                     */
                    void SetExchangeRateCNY(const double& _exchangeRateCNY);

                    /**
                     * 判断参数 ExchangeRateCNY 是否已赋值
                     * @return ExchangeRateCNY 是否已赋值
                     * 
                     */
                    bool ExchangeRateCNYHasBeenSet() const;

                private:

                    /**
                     * <p>Currency code</p><p>Parameter format: Compliant with the ISO 4217 standard</p>
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * <p>Original amount in currency</p>
                     */
                    double m_originalAmount;
                    bool m_originalAmountHasBeenSet;

                    /**
                     * <p>Current exchange rate of base currency converted to USD</p>
                     */
                    double m_exchangeRateUSD;
                    bool m_exchangeRateUSDHasBeenSet;

                    /**
                     * <p>Current exchange rate of base currency converted to CNY</p>
                     */
                    double m_exchangeRateCNY;
                    bool m_exchangeRateCNYHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_AMOUNT_H_
