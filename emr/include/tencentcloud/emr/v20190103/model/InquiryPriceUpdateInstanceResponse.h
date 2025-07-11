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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICEUPDATEINSTANCERESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICEUPDATEINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PriceDetail.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * InquiryPriceUpdateInstance response structure.
                */
                class InquiryPriceUpdateInstanceResponse : public AbstractModel
                {
                public:
                    InquiryPriceUpdateInstanceResponse();
                    ~InquiryPriceUpdateInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Original price.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OriginalCost Original price.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DiscountCost Discounted price.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Time unit of scaling. Valid values:
<li>s: seconds.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TimeUnit Time unit of scaling. Valid values:
<li>s: seconds.</li>
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Duration of scaling.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TimeSpan Duration of scaling.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Pricing details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PriceDetail Pricing details
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

                private:

                    /**
                     * Original price.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * Discounted price.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_discountCost;
                    bool m_discountCostHasBeenSet;

                    /**
                     * Time unit of scaling. Valid values:
<li>s: seconds.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Duration of scaling.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Pricing details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PriceDetail> m_priceDetail;
                    bool m_priceDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INQUIRYPRICEUPDATEINSTANCERESPONSE_H_
