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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTDETAILRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/CostDetail.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeCostDetail response structure.
                */
                class DescribeCostDetailResponse : public AbstractModel
                {
                public:
                    DescribeCostDetailResponse();
                    ~DescribeCostDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Consumption details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DetailSet Consumption details
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CostDetail> GetDetailSet() const;

                    /**
                     * 判断参数 DetailSet 是否已赋值
                     * @return DetailSet 是否已赋值
                     * 
                     */
                    bool DetailSetHasBeenSet() const;

                    /**
                     * 获取Record countNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Total Record countNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Consumption details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CostDetail> m_detailSet;
                    bool m_detailSetHasBeenSet;

                    /**
                     * Record countNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBECOSTDETAILRESPONSE_H_
