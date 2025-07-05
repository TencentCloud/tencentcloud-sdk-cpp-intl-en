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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBECONCURRENCYUSAGERESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBECONCURRENCYUSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeConcurrencyUsage response structure.
                */
                class DescribeConcurrencyUsageResponse : public AbstractModel
                {
                public:
                    DescribeConcurrencyUsageResponse();
                    ~DescribeConcurrencyUsageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The upper limit of available concurrency.
                     * @return AvailableConcurrency The upper limit of available concurrency.
                     * 
                     */
                    uint64_t GetAvailableConcurrency() const;

                    /**
                     * 判断参数 AvailableConcurrency 是否已赋值
                     * @return AvailableConcurrency 是否已赋值
                     * 
                     */
                    bool AvailableConcurrencyHasBeenSet() const;

                    /**
                     * 获取Peak concurrent value.
                     * @return ConcurrencyPeak Peak concurrent value.
                     * 
                     */
                    uint64_t GetConcurrencyPeak() const;

                    /**
                     * 判断参数 ConcurrencyPeak 是否已赋值
                     * @return ConcurrencyPeak 是否已赋值
                     * 
                     */
                    bool ConcurrencyPeakHasBeenSet() const;

                    /**
                     * 获取The number of times exceeding the capacity limit of available concurrency.
                     * @return ExceedUsageTime The number of times exceeding the capacity limit of available concurrency.
                     * 
                     */
                    uint64_t GetExceedUsageTime() const;

                    /**
                     * 判断参数 ExceedUsageTime 是否已赋值
                     * @return ExceedUsageTime 是否已赋值
                     * 
                     */
                    bool ExceedUsageTimeHasBeenSet() const;

                private:

                    /**
                     * The upper limit of available concurrency.
                     */
                    uint64_t m_availableConcurrency;
                    bool m_availableConcurrencyHasBeenSet;

                    /**
                     * Peak concurrent value.
                     */
                    uint64_t m_concurrencyPeak;
                    bool m_concurrencyPeakHasBeenSet;

                    /**
                     * The number of times exceeding the capacity limit of available concurrency.
                     */
                    uint64_t m_exceedUsageTime;
                    bool m_exceedUsageTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBECONCURRENCYUSAGERESPONSE_H_
