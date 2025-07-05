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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULLEVELSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULLEVELSUMMARYRESPONSE_H_

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
                * DescribeVulLevelSummary response structure.
                */
                class DescribeVulLevelSummaryResponse : public AbstractModel
                {
                public:
                    DescribeVulLevelSummaryResponse();
                    ~DescribeVulLevelSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of high-risk vulnerabilities
                     * @return HighLevelVulCount Number of high-risk vulnerabilities
                     * 
                     */
                    int64_t GetHighLevelVulCount() const;

                    /**
                     * 判断参数 HighLevelVulCount 是否已赋值
                     * @return HighLevelVulCount 是否已赋值
                     * 
                     */
                    bool HighLevelVulCountHasBeenSet() const;

                    /**
                     * 获取Number of medium-risk vulnerabilities
                     * @return MediumLevelVulCount Number of medium-risk vulnerabilities
                     * 
                     */
                    int64_t GetMediumLevelVulCount() const;

                    /**
                     * 判断参数 MediumLevelVulCount 是否已赋值
                     * @return MediumLevelVulCount 是否已赋值
                     * 
                     */
                    bool MediumLevelVulCountHasBeenSet() const;

                    /**
                     * 获取Number of low-risk vulnerabilities
                     * @return LowLevelVulCount Number of low-risk vulnerabilities
                     * 
                     */
                    int64_t GetLowLevelVulCount() const;

                    /**
                     * 判断参数 LowLevelVulCount 是否已赋值
                     * @return LowLevelVulCount 是否已赋值
                     * 
                     */
                    bool LowLevelVulCountHasBeenSet() const;

                    /**
                     * 获取Number of critical vulnerabilities
                     * @return CriticalLevelVulCount Number of critical vulnerabilities
                     * 
                     */
                    int64_t GetCriticalLevelVulCount() const;

                    /**
                     * 判断参数 CriticalLevelVulCount 是否已赋值
                     * @return CriticalLevelVulCount 是否已赋值
                     * 
                     */
                    bool CriticalLevelVulCountHasBeenSet() const;

                private:

                    /**
                     * Number of high-risk vulnerabilities
                     */
                    int64_t m_highLevelVulCount;
                    bool m_highLevelVulCountHasBeenSet;

                    /**
                     * Number of medium-risk vulnerabilities
                     */
                    int64_t m_mediumLevelVulCount;
                    bool m_mediumLevelVulCountHasBeenSet;

                    /**
                     * Number of low-risk vulnerabilities
                     */
                    int64_t m_lowLevelVulCount;
                    bool m_lowLevelVulCountHasBeenSet;

                    /**
                     * Number of critical vulnerabilities
                     */
                    int64_t m_criticalLevelVulCount;
                    bool m_criticalLevelVulCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULLEVELSUMMARYRESPONSE_H_
