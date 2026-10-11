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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEDETECTOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEDETECTOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBaselineDetectOverview response structure.
                */
                class DescribeBaselineDetectOverviewResponse : public AbstractModel
                {
                public:
                    DescribeBaselineDetectOverviewResponse();
                    ~DescribeBaselineDetectOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of detected servers
                     * @return HostCount Number of detected servers
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取Detection item
                     * @return ItemCount Detection item
                     * 
                     */
                    int64_t GetItemCount() const;

                    /**
                     * 判断参数 ItemCount 是否已赋值
                     * @return ItemCount 是否已赋值
                     * 
                     */
                    bool ItemCountHasBeenSet() const;

                    /**
                     * 获取Detection policy item
                     * @return PolicyCount Detection policy item
                     * 
                     */
                    int64_t GetPolicyCount() const;

                    /**
                     * 判断参数 PolicyCount 是否已赋值
                     * @return PolicyCount 是否已赋值
                     * 
                     */
                    bool PolicyCountHasBeenSet() const;

                    /**
                     * 获取Pass rate * 100%
                     * @return PassRate Pass rate * 100%
                     * 
                     */
                    int64_t GetPassRate() const;

                    /**
                     * 判断参数 PassRate 是否已赋值
                     * @return PassRate 是否已赋值
                     * 
                     */
                    bool PassRateHasBeenSet() const;

                    /**
                     * 获取Number of Passed Tasks in the Most Recent Detection
                     * @return LatestPassCount Number of Passed Tasks in the Most Recent Detection
                     * 
                     */
                    int64_t GetLatestPassCount() const;

                    /**
                     * 判断参数 LatestPassCount 是否已赋值
                     * @return LatestPassCount 是否已赋值
                     * 
                     */
                    bool LatestPassCountHasBeenSet() const;

                    /**
                     * 获取Number of Recent Detections Not Passed
                     * @return LatestNotPassCount Number of Recent Detections Not Passed
                     * 
                     */
                    int64_t GetLatestNotPassCount() const;

                    /**
                     * 判断参数 LatestNotPassCount 是否已赋值
                     * @return LatestNotPassCount 是否已赋值
                     * 
                     */
                    bool LatestNotPassCountHasBeenSet() const;

                private:

                    /**
                     * Number of detected servers
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * Detection item
                     */
                    int64_t m_itemCount;
                    bool m_itemCountHasBeenSet;

                    /**
                     * Detection policy item
                     */
                    int64_t m_policyCount;
                    bool m_policyCountHasBeenSet;

                    /**
                     * Pass rate * 100%
                     */
                    int64_t m_passRate;
                    bool m_passRateHasBeenSet;

                    /**
                     * Number of Passed Tasks in the Most Recent Detection
                     */
                    int64_t m_latestPassCount;
                    bool m_latestPassCountHasBeenSet;

                    /**
                     * Number of Recent Detections Not Passed
                     */
                    int64_t m_latestNotPassCount;
                    bool m_latestNotPassCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEDETECTOVERVIEWRESPONSE_H_
