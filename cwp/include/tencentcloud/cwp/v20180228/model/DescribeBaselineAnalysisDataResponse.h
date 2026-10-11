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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEANALYSISDATARESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEANALYSISDATARESPONSE_H_

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
                * DescribeBaselineAnalysisData response structure.
                */
                class DescribeBaselineAnalysisDataResponse : public AbstractModel
                {
                public:
                    DescribeBaselineAnalysisDataResponse();
                    ~DescribeBaselineAnalysisDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Last detection time
                     * @return LatestScanTime Last detection time
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取Whether all servers are scanned: 1: yes; 0: no
                     * @return IsGlobal Whether all servers are scanned: 1: yes; 0: no
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取Total number of servers
                     * @return ScanHostCount Total number of servers
                     * 
                     */
                    uint64_t GetScanHostCount() const;

                    /**
                     * 判断参数 ScanHostCount 是否已赋值
                     * @return ScanHostCount 是否已赋值
                     * 
                     */
                    bool ScanHostCountHasBeenSet() const;

                    /**
                     * 获取Total Number of Detection Items
                     * @return ScanRuleCount Total Number of Detection Items
                     * 
                     */
                    uint64_t GetScanRuleCount() const;

                    /**
                     * 判断参数 ScanRuleCount 是否已赋值
                     * @return ScanRuleCount 是否已赋值
                     * 
                     */
                    bool ScanRuleCountHasBeenSet() const;

                    /**
                     * 获取Whether it is the first detection. 1: yes, 0: no
                     * @return IfFirstScan Whether it is the first detection. 1: yes, 0: no
                     * 
                     */
                    uint64_t GetIfFirstScan() const;

                    /**
                     * 判断参数 IfFirstScan 是否已赋值
                     * @return IfFirstScan 是否已赋值
                     * 
                     */
                    bool IfFirstScanHasBeenSet() const;

                private:

                    /**
                     * Last detection time
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * Whether all servers are scanned: 1: yes; 0: no
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Total number of servers
                     */
                    uint64_t m_scanHostCount;
                    bool m_scanHostCountHasBeenSet;

                    /**
                     * Total Number of Detection Items
                     */
                    uint64_t m_scanRuleCount;
                    bool m_scanRuleCountHasBeenSet;

                    /**
                     * Whether it is the first detection. 1: yes, 0: no
                     */
                    uint64_t m_ifFirstScan;
                    bool m_ifFirstScanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEANALYSISDATARESPONSE_H_
