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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBERESERVEDINSTANCEUTILIZATIONRATERESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBERESERVEDINSTANCEUTILIZATIONRATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ReservedInstanceUtilizationRate.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeReservedInstanceUtilizationRate response structure.
                */
                class DescribeReservedInstanceUtilizationRateResponse : public AbstractModel
                {
                public:
                    DescribeReservedInstanceUtilizationRateResponse();
                    ~DescribeReservedInstanceUtilizationRateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Usage Rate of Reserved Coupons 
                     * @return UtilizationRateSet Usage Rate of Reserved Coupons 
                     * 
                     */
                    std::vector<ReservedInstanceUtilizationRate> GetUtilizationRateSet() const;

                    /**
                     * 判断参数 UtilizationRateSet 是否已赋值
                     * @return UtilizationRateSet 是否已赋值
                     * 
                     */
                    bool UtilizationRateSetHasBeenSet() const;

                    /**
                     * 获取Total number of pay-as-you-go Pods
                     * @return PodNum Total number of pay-as-you-go Pods
                     * 
                     */
                    uint64_t GetPodNum() const;

                    /**
                     * 判断参数 PodNum 是否已赋值
                     * @return PodNum 是否已赋值
                     * 
                     */
                    bool PodNumHasBeenSet() const;

                    /**
                     * 获取 Pod Deduction Rate by Reserved Coupons
                     * @return PodRate  Pod Deduction Rate by Reserved Coupons
                     * 
                     */
                    double GetPodRate() const;

                    /**
                     * 判断参数 PodRate 是否已赋值
                     * @return PodRate 是否已赋值
                     * 
                     */
                    bool PodRateHasBeenSet() const;

                private:

                    /**
                     * Usage Rate of Reserved Coupons 
                     */
                    std::vector<ReservedInstanceUtilizationRate> m_utilizationRateSet;
                    bool m_utilizationRateSetHasBeenSet;

                    /**
                     * Total number of pay-as-you-go Pods
                     */
                    uint64_t m_podNum;
                    bool m_podNumHasBeenSet;

                    /**
                     *  Pod Deduction Rate by Reserved Coupons
                     */
                    double m_podRate;
                    bool m_podRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBERESERVEDINSTANCEUTILIZATIONRATERESPONSE_H_
