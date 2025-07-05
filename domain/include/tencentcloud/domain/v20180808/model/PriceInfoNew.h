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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_PRICEINFONEW_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_PRICEINFONEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * The price information of the domains.
                */
                class PriceInfoNew : public AbstractModel
                {
                public:
                    PriceInfoNew();
                    ~PriceInfoNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The domain suffix, such as `.com`.
                     * @return Tld The domain suffix, such as `.com`.
                     * 
                     */
                    std::string GetTld() const;

                    /**
                     * 设置The domain suffix, such as `.com`.
                     * @param _tld The domain suffix, such as `.com`.
                     * 
                     */
                    void SetTld(const std::string& _tld);

                    /**
                     * 判断参数 Tld 是否已赋值
                     * @return Tld 是否已赋值
                     * 
                     */
                    bool TldHasBeenSet() const;

                    /**
                     * 获取The purchase years. Value range: [1-10]
                     * @return Year The purchase years. Value range: [1-10]
                     * 
                     */
                    uint64_t GetYear() const;

                    /**
                     * 设置The purchase years. Value range: [1-10]
                     * @param _year The purchase years. Value range: [1-10]
                     * 
                     */
                    void SetYear(const uint64_t& _year);

                    /**
                     * 判断参数 Year 是否已赋值
                     * @return Year 是否已赋值
                     * 
                     */
                    bool YearHasBeenSet() const;

                    /**
                     * 获取The original price of the domain.
                     * @return Price The original price of the domain.
                     * 
                     */
                    double GetPrice() const;

                    /**
                     * 设置The original price of the domain.
                     * @param _price The original price of the domain.
                     * 
                     */
                    void SetPrice(const double& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取The current price of the domain.
                     * @return RealPrice The current price of the domain.
                     * 
                     */
                    double GetRealPrice() const;

                    /**
                     * 设置The current price of the domain.
                     * @param _realPrice The current price of the domain.
                     * 
                     */
                    void SetRealPrice(const double& _realPrice);

                    /**
                     * 判断参数 RealPrice 是否已赋值
                     * @return RealPrice 是否已赋值
                     * 
                     */
                    bool RealPriceHasBeenSet() const;

                    /**
                     * 获取The domain purchase type. Valid values: `new`, `renew`, `redem` (redeem), `tran` (transfer in).
                     * @return Operation The domain purchase type. Valid values: `new`, `renew`, `redem` (redeem), `tran` (transfer in).
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置The domain purchase type. Valid values: `new`, `renew`, `redem` (redeem), `tran` (transfer in).
                     * @param _operation The domain purchase type. Valid values: `new`, `renew`, `redem` (redeem), `tran` (transfer in).
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取The title.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Title The title.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置The title.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _title The title.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                private:

                    /**
                     * The domain suffix, such as `.com`.
                     */
                    std::string m_tld;
                    bool m_tldHasBeenSet;

                    /**
                     * The purchase years. Value range: [1-10]
                     */
                    uint64_t m_year;
                    bool m_yearHasBeenSet;

                    /**
                     * The original price of the domain.
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * The current price of the domain.
                     */
                    double m_realPrice;
                    bool m_realPriceHasBeenSet;

                    /**
                     * The domain purchase type. Valid values: `new`, `renew`, `redem` (redeem), `tran` (transfer in).
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * The title.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_PRICEINFONEW_H_
