/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_CHECKINTLDOMAINNEWRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_CHECKINTLDOMAINNEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * CheckIntlDomainNew response structure.
                */
                class CheckIntlDomainNewResponse : public AbstractModel
                {
                public:
                    CheckIntlDomainNewResponse();
                    ~CheckIntlDomainNewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The name of the domain checked.
                     * @return DomainName The name of the domain checked.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Whether the domain is available for registration.
                     * @return Available Whether the domain is available for registration.
                     * 
                     */
                    bool GetAvailable() const;

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取The reason why the domain cannot be registered.
                     * @return Reason The reason why the domain cannot be registered.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取Whether the domain is a premium one.
                     * @return Premium Whether the domain is a premium one.
                     * 
                     */
                    bool GetPremium() const;

                    /**
                     * 判断参数 Premium 是否已赋值
                     * @return Premium 是否已赋值
                     * 
                     */
                    bool PremiumHasBeenSet() const;

                    /**
                     * 获取The domain price.
                     * @return Price The domain price.
                     * 
                     */
                    double GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取Whether the domain name involves restricted words.
                     * @return BlackWord Whether the domain name involves restricted words.
                     * 
                     */
                    bool GetBlackWord() const;

                    /**
                     * 判断参数 BlackWord 是否已赋值
                     * @return BlackWord 是否已赋值
                     * 
                     */
                    bool BlackWordHasBeenSet() const;

                    /**
                     * 获取The premium domain description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Describe The premium domain description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取The price for renewing the premium domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FeeRenew The price for renewing the premium domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetFeeRenew() const;

                    /**
                     * 判断参数 FeeRenew 是否已赋值
                     * @return FeeRenew 是否已赋值
                     * 
                     */
                    bool FeeRenewHasBeenSet() const;

                    /**
                     * 获取The real price of the domain. For a premium domain, its price varies depending on the period. For a non-premium domain, the price is the 1-year price.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealPrice The real price of the domain. For a premium domain, its price varies depending on the period. For a non-premium domain, the price is the 1-year price.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetRealPrice() const;

                    /**
                     * 判断参数 RealPrice 是否已赋值
                     * @return RealPrice 是否已赋值
                     * 
                     */
                    bool RealPriceHasBeenSet() const;

                    /**
                     * 获取The price for transferring a premium domain in.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FeeTransfer The price for transferring a premium domain in.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetFeeTransfer() const;

                    /**
                     * 判断参数 FeeTransfer 是否已赋值
                     * @return FeeTransfer 是否已赋值
                     * 
                     */
                    bool FeeTransferHasBeenSet() const;

                    /**
                     * 获取The price for redeeming a premium domain.
                     * @return FeeRestore The price for redeeming a premium domain.
                     * 
                     */
                    double GetFeeRestore() const;

                    /**
                     * 判断参数 FeeRestore 是否已赋值
                     * @return FeeRestore 是否已赋值
                     * 
                     */
                    bool FeeRestoreHasBeenSet() const;

                    /**
                     * 获取The period (in years) of the domain.
                     * @return Period The period (in years) of the domain.
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取The reason why the domain cannot be registered, expressed in Chinese.
                     * @return ReasonZh The reason why the domain cannot be registered, expressed in Chinese.
                     * 
                     */
                    std::string GetReasonZh() const;

                    /**
                     * 判断参数 ReasonZh 是否已赋值
                     * @return ReasonZh 是否已赋值
                     * 
                     */
                    bool ReasonZhHasBeenSet() const;

                    /**
                     * 获取The internal error code.
                     * @return ResCode The internal error code.
                     * 
                     */
                    std::string GetResCode() const;

                    /**
                     * 判断参数 ResCode 是否已赋值
                     * @return ResCode 是否已赋值
                     * 
                     */
                    bool ResCodeHasBeenSet() const;

                private:

                    /**
                     * The name of the domain checked.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Whether the domain is available for registration.
                     */
                    bool m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * The reason why the domain cannot be registered.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Whether the domain is a premium one.
                     */
                    bool m_premium;
                    bool m_premiumHasBeenSet;

                    /**
                     * The domain price.
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * Whether the domain name involves restricted words.
                     */
                    bool m_blackWord;
                    bool m_blackWordHasBeenSet;

                    /**
                     * The premium domain description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * The price for renewing the premium domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_feeRenew;
                    bool m_feeRenewHasBeenSet;

                    /**
                     * The real price of the domain. For a premium domain, its price varies depending on the period. For a non-premium domain, the price is the 1-year price.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_realPrice;
                    bool m_realPriceHasBeenSet;

                    /**
                     * The price for transferring a premium domain in.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_feeTransfer;
                    bool m_feeTransferHasBeenSet;

                    /**
                     * The price for redeeming a premium domain.
                     */
                    double m_feeRestore;
                    bool m_feeRestoreHasBeenSet;

                    /**
                     * The period (in years) of the domain.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * The reason why the domain cannot be registered, expressed in Chinese.
                     */
                    std::string m_reasonZh;
                    bool m_reasonZhHasBeenSet;

                    /**
                     * The internal error code.
                     */
                    std::string m_resCode;
                    bool m_resCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_CHECKINTLDOMAINNEWRESPONSE_H_
