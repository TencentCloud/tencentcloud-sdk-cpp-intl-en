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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULHOSTCOUNTSCANTIMERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULHOSTCOUNTSCANTIMERESPONSE_H_

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
                * DescribeVulHostCountScanTime response structure.
                */
                class DescribeVulHostCountScanTimeResponse : public AbstractModel
                {
                public:
                    DescribeVulHostCountScanTimeResponse();
                    ~DescribeVulHostCountScanTimeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of vulnerabilities
                     * @return TotalVulCount Total number of vulnerabilities
                     * 
                     */
                    uint64_t GetTotalVulCount() const;

                    /**
                     * 判断参数 TotalVulCount 是否已赋值
                     * @return TotalVulCount 是否已赋值
                     * 
                     */
                    bool TotalVulCountHasBeenSet() const;

                    /**
                     * 获取Number of hosts affected by vulnerabilities
                     * @return VulHostCount Number of hosts affected by vulnerabilities
                     * 
                     */
                    uint64_t GetVulHostCount() const;

                    /**
                     * 判断参数 VulHostCount 是否已赋值
                     * @return VulHostCount 是否已赋值
                     * 
                     */
                    bool VulHostCountHasBeenSet() const;

                    /**
                     * 获取Scan time
                     * @return ScanTime Scan time
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取Whether the detection is carried out for the first time
                     * @return IfFirstScan Whether the detection is carried out for the first time
                     * 
                     */
                    bool GetIfFirstScan() const;

                    /**
                     * 判断参数 IfFirstScan 是否已赋值
                     * @return IfFirstScan 是否已赋值
                     * 
                     */
                    bool IfFirstScanHasBeenSet() const;

                    /**
                     * 获取ID of the ongoing task. The value is 0 if no such task exists.
                     * @return TaskId ID of the ongoing task. The value is 0 if no such task exists.
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Last vulnerability fixing time
                     * @return LastFixTime Last vulnerability fixing time
                     * 
                     */
                    std::string GetLastFixTime() const;

                    /**
                     * 判断参数 LastFixTime 是否已赋值
                     * @return LastFixTime 是否已赋值
                     * 
                     */
                    bool LastFixTimeHasBeenSet() const;

                    /**
                     * 获取Whether vulnerabilities supporting automatic fixing exist
                     * @return hadAutoFixVul Whether vulnerabilities supporting automatic fixing exist
                     * 
                     */
                    bool GethadAutoFixVul() const;

                    /**
                     * 判断参数 hadAutoFixVul 是否已赋值
                     * @return hadAutoFixVul 是否已赋值
                     * 
                     */
                    bool hadAutoFixVulHasBeenSet() const;

                private:

                    /**
                     * Total number of vulnerabilities
                     */
                    uint64_t m_totalVulCount;
                    bool m_totalVulCountHasBeenSet;

                    /**
                     * Number of hosts affected by vulnerabilities
                     */
                    uint64_t m_vulHostCount;
                    bool m_vulHostCountHasBeenSet;

                    /**
                     * Scan time
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * Whether the detection is carried out for the first time
                     */
                    bool m_ifFirstScan;
                    bool m_ifFirstScanHasBeenSet;

                    /**
                     * ID of the ongoing task. The value is 0 if no such task exists.
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Last vulnerability fixing time
                     */
                    std::string m_lastFixTime;
                    bool m_lastFixTimeHasBeenSet;

                    /**
                     * Whether vulnerabilities supporting automatic fixing exist
                     */
                    bool m_hadAutoFixVul;
                    bool m_hadAutoFixVulHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULHOSTCOUNTSCANTIMERESPONSE_H_
