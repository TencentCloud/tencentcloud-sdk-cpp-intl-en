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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBECONCURRENTSUMMARYRESPONSE_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBECONCURRENTSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * DescribeConcurrentSummary response structure.
                */
                class DescribeConcurrentSummaryResponse : public AbstractModel
                {
                public:
                    DescribeConcurrentSummaryResponse();
                    ~DescribeConcurrentSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of prepaid (monthly subscription) concurrencies.
                     * @return PrepaidConcurrentTotal Total number of prepaid (monthly subscription) concurrencies.
                     * 
                     */
                    uint64_t GetPrepaidConcurrentTotal() const;

                    /**
                     * 判断参数 PrepaidConcurrentTotal 是否已赋值
                     * @return PrepaidConcurrentTotal 是否已赋值
                     * 
                     */
                    bool PrepaidConcurrentTotalHasBeenSet() const;

                    /**
                     * 获取Remaining duration of an hourly package.
                     * @return HourlyRemainDuration Remaining duration of an hourly package.
                     * 
                     */
                    std::string GetHourlyRemainDuration() const;

                    /**
                     * 判断参数 HourlyRemainDuration 是否已赋值
                     * @return HourlyRemainDuration 是否已赋值
                     * 
                     */
                    bool HourlyRemainDurationHasBeenSet() const;

                private:

                    /**
                     * Total number of prepaid (monthly subscription) concurrencies.
                     */
                    uint64_t m_prepaidConcurrentTotal;
                    bool m_prepaidConcurrentTotalHasBeenSet;

                    /**
                     * Remaining duration of an hourly package.
                     */
                    std::string m_hourlyRemainDuration;
                    bool m_hourlyRemainDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBECONCURRENTSUMMARYRESPONSE_H_
