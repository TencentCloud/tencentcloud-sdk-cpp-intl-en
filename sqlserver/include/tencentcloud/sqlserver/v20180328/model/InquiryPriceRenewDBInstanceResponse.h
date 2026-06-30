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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICERENEWDBINSTANCERESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICERENEWDBINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * InquiryPriceRenewDBInstance response structure.
                */
                class InquiryPriceRenewDBInstanceResponse : public AbstractModel
                {
                public:
                    InquiryPriceRenewDBInstanceResponse();
                    ~InquiryPriceRenewDBInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Original price before discount. You can obtain the original price by dividing the value by 100. For example, if the value is 10094, the price is CNY100.94.
                     * @return OriginalPrice Original price before discount. You can obtain the original price by dividing the value by 100. For example, if the value is 10094, the price is CNY100.94.
                     * 
                     */
                    uint64_t GetOriginalPrice() const;

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取Actual payment price. You can obtain the actual payment price by dividing the value by 100. For example, if the value is 10094, the price is CNY100.94.
                     * @return Price Actual payment price. You can obtain the actual payment price by dividing the value by 100. For example, if the value is 10094, the price is CNY100.94.
                     * 
                     */
                    uint64_t GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                private:

                    /**
                     * Original price before discount. You can obtain the original price by dividing the value by 100. For example, if the value is 10094, the price is CNY100.94.
                     */
                    uint64_t m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Actual payment price. You can obtain the actual payment price by dividing the value by 100. For example, if the value is 10094, the price is CNY100.94.
                     */
                    uint64_t m_price;
                    bool m_priceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICERENEWDBINSTANCERESPONSE_H_
