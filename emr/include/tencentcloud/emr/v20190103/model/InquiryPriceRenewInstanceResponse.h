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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICERENEWINSTANCERESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICERENEWINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PriceDetail.h>
#include <tencentcloud/emr/v20190103/model/NodeRenewPriceDetail.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * InquiryPriceRenewInstance response structure.
                */
                class InquiryPriceRenewInstanceResponse : public AbstractModel
                {
                public:
                    InquiryPriceRenewInstanceResponse();
                    ~InquiryPriceRenewInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Original price.
                     * @return OriginalCost Original price.
                     * 
                     */
                    double GetOriginalCost() const;

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     * 
                     */
                    bool OriginalCostHasBeenSet() const;

                    /**
                     * 获取Discounted price.
                     * @return DiscountCost Discounted price.
                     * 
                     */
                    double GetDiscountCost() const;

                    /**
                     * 判断参数 DiscountCost 是否已赋值
                     * @return DiscountCost 是否已赋值
                     * 
                     */
                    bool DiscountCostHasBeenSet() const;

                    /**
                     * 获取Time unit for instance renewal.
                     * @return TimeUnit Time unit for instance renewal.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Duration of instance renewal.
                     * @return TimeSpan Duration of instance renewal.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Price details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PriceDetail Price details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PriceDetail> GetPriceDetail() const;

                    /**
                     * 判断参数 PriceDetail 是否已赋值
                     * @return PriceDetail 是否已赋值
                     * 
                     */
                    bool PriceDetailHasBeenSet() const;

                    /**
                     * 获取Node renewal pricing list.
                     * @return NodeRenewPriceDetails Node renewal pricing list.
                     * 
                     */
                    std::vector<NodeRenewPriceDetail> GetNodeRenewPriceDetails() const;

                    /**
                     * 判断参数 NodeRenewPriceDetails 是否已赋值
                     * @return NodeRenewPriceDetails 是否已赋值
                     * 
                     */
                    bool NodeRenewPriceDetailsHasBeenSet() const;

                private:

                    /**
                     * Original price.
                     */
                    double m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * Discounted price.
                     */
                    double m_discountCost;
                    bool m_discountCostHasBeenSet;

                    /**
                     * Time unit for instance renewal.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Duration of instance renewal.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Price details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PriceDetail> m_priceDetail;
                    bool m_priceDetailHasBeenSet;

                    /**
                     * Node renewal pricing list.
                     */
                    std::vector<NodeRenewPriceDetail> m_nodeRenewPriceDetails;
                    bool m_nodeRenewPriceDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICERENEWINSTANCERESPONSE_H_
