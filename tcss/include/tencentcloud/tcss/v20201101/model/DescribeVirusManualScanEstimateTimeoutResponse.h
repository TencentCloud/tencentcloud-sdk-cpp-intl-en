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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSMANUALSCANESTIMATETIMEOUTRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSMANUALSCANESTIMATETIMEOUTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVirusManualScanEstimateTimeout response structure.
                */
                class DescribeVirusManualScanEstimateTimeoutResponse : public AbstractModel
                {
                public:
                    DescribeVirusManualScanEstimateTimeoutResponse();
                    ~DescribeVirusManualScanEstimateTimeoutResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Estimated timeout period (hour)
                     * @return Timeout Estimated timeout period (hour)
                     * 
                     */
                    double GetTimeout() const;

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Number of containers scanned in parallel on a single server
                     * @return ContainerScanConcurrencyCount Number of containers scanned in parallel on a single server
                     * 
                     */
                    uint64_t GetContainerScanConcurrencyCount() const;

                    /**
                     * 判断参数 ContainerScanConcurrencyCount 是否已赋值
                     * @return ContainerScanConcurrencyCount 是否已赋值
                     * 
                     */
                    bool ContainerScanConcurrencyCountHasBeenSet() const;

                private:

                    /**
                     * Estimated timeout period (hour)
                     */
                    double m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Number of containers scanned in parallel on a single server
                     */
                    uint64_t m_containerScanConcurrencyCount;
                    bool m_containerScanConcurrencyCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSMANUALSCANESTIMATETIMEOUTRESPONSE_H_
