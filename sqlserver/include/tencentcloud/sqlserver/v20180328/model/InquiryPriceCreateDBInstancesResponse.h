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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICECREATEDBINSTANCESRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICECREATEDBINSTANCESRESPONSE_H_

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
                * InquiryPriceCreateDBInstances response structure.
                */
                class InquiryPriceCreateDBInstancesResponse : public AbstractModel
                {
                public:
                    InquiryPriceCreateDBInstancesResponse();
                    ~InquiryPriceCreateDBInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Price before discount. This value divided by 100 indicates the price; for example, 10010 means 100.10 USD
                     * @return OriginalPrice Price before discount. This value divided by 100 indicates the price; for example, 10010 means 100.10 USD
                     * 
                     */
                    int64_t GetOriginalPrice() const;

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取The actual price to be paid. This value divided by 100 indicates the price; for example, 10010 means 100.10 USD
                     * @return Price The actual price to be paid. This value divided by 100 indicates the price; for example, 10010 means 100.10 USD
                     * 
                     */
                    int64_t GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                private:

                    /**
                     * Price before discount. This value divided by 100 indicates the price; for example, 10010 means 100.10 USD
                     */
                    int64_t m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * The actual price to be paid. This value divided by 100 indicates the price; for example, 10010 means 100.10 USD
                     */
                    int64_t m_price;
                    bool m_priceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICECREATEDBINSTANCESRESPONSE_H_
