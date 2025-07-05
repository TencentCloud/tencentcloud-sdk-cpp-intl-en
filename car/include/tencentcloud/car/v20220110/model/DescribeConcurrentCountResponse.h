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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBECONCURRENTCOUNTRESPONSE_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBECONCURRENTCOUNTRESPONSE_H_

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
                * DescribeConcurrentCount response structure.
                */
                class DescribeConcurrentCountResponse : public AbstractModel
                {
                public:
                    DescribeConcurrentCountResponse();
                    ~DescribeConcurrentCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of concurrencies.
                     * @return Total Total number of concurrencies.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取The number of concurrent executions, including all non-idle concurrent executions such as those in prelaunch, connected, waiting for reconnection, and to be cleaned up or recovered. Therefore, refreshing projects or disconnecting user connections with concurrency packages will affect this value.
                     * @return Running The number of concurrent executions, including all non-idle concurrent executions such as those in prelaunch, connected, waiting for reconnection, and to be cleaned up or recovered. Therefore, refreshing projects or disconnecting user connections with concurrency packages will affect this value.
                     * 
                     */
                    uint64_t GetRunning() const;

                    /**
                     * 判断参数 Running 是否已赋值
                     * @return Running 是否已赋值
                     * 
                     */
                    bool RunningHasBeenSet() const;

                private:

                    /**
                     * Total number of concurrencies.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * The number of concurrent executions, including all non-idle concurrent executions such as those in prelaunch, connected, waiting for reconnection, and to be cleaned up or recovered. Therefore, refreshing projects or disconnecting user connections with concurrency packages will affect this value.
                     */
                    uint64_t m_running;
                    bool m_runningHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBECONCURRENTCOUNTRESPONSE_H_
