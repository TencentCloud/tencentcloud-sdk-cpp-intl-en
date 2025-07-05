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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_GETCLUSTERLEVELPRICERESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_GETCLUSTERLEVELPRICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * GetClusterLevelPrice response structure.
                */
                class GetClusterLevelPriceResponse : public AbstractModel
                {
                public:
                    GetClusterLevelPriceResponse();
                    ~GetClusterLevelPriceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Discount price (unit: US cent)
                     * @return Cost Discount price (unit: US cent)
                     * 
                     */
                    uint64_t GetCost() const;

                    /**
                     * 判断参数 Cost 是否已赋值
                     * @return Cost 是否已赋值
                     * 
                     */
                    bool CostHasBeenSet() const;

                    /**
                     * 获取Original price (unit: US cent)
                     * @return TotalCost Original price (unit: US cent)
                     * 
                     */
                    uint64_t GetTotalCost() const;

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取Total discount. 100 means 100% no discount.
                     * @return Policy Total discount. 100 means 100% no discount.
                     * 
                     */
                    double GetPolicy() const;

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                private:

                    /**
                     * Discount price (unit: US cent)
                     */
                    uint64_t m_cost;
                    bool m_costHasBeenSet;

                    /**
                     * Original price (unit: US cent)
                     */
                    uint64_t m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * Total discount. 100 means 100% no discount.
                     */
                    double m_policy;
                    bool m_policyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_GETCLUSTERLEVELPRICERESPONSE_H_
