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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTOAUTHORIZEDRULERESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTOAUTHORIZEDRULERESPONSE_H_

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
                * DescribeImageAutoAuthorizedRule response structure.
                */
                class DescribeImageAutoAuthorizedRuleResponse : public AbstractModel
                {
                public:
                    DescribeImageAutoAuthorizedRuleResponse();
                    ~DescribeImageAutoAuthorizedRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the Rule Is Effective. 0: Not Effective; 1: Effective
                     * @return IsEnabled Whether the Rule Is Effective. 0: Not Effective; 1: Effective
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取Authorization Scope Category. MANUAL: Selected Host Nodes; ALL: All Images
                     * @return RangeType Authorization Scope Category. MANUAL: Selected Host Nodes; ALL: All Images
                     * 
                     */
                    std::string GetRangeType() const;

                    /**
                     * 判断参数 RangeType 是否已赋值
                     * @return RangeType 是否已赋值
                     * 
                     */
                    bool RangeTypeHasBeenSet() const;

                    /**
                     * 获取Number of Hosts When Authorization Scope Is Optional Host
                     * @return HostCount Number of Hosts When Authorization Scope Is Optional Host
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
                     * 获取Maximum Number of Authorized Mirrors Per Day. 0: Unlimited
                     * @return MaxDailyCount Maximum Number of Authorized Mirrors Per Day. 0: Unlimited
                     * 
                     */
                    int64_t GetMaxDailyCount() const;

                    /**
                     * 判断参数 MaxDailyCount 是否已赋值
                     * @return MaxDailyCount 是否已赋值
                     * 
                     */
                    bool MaxDailyCountHasBeenSet() const;

                    /**
                     * 获取Rule ID. Set it to 0 when it is not configured.
                     * @return RuleId Rule ID. Set it to 0 when it is not configured.
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Auto-Scan Switch. 0: Off; 1: On
                     * @return AutoScanEnabled Auto-Scan Switch. 0: Off; 1: On
                     * 
                     */
                    int64_t GetAutoScanEnabled() const;

                    /**
                     * 判断参数 AutoScanEnabled 是否已赋值
                     * @return AutoScanEnabled 是否已赋值
                     * 
                     */
                    bool AutoScanEnabledHasBeenSet() const;

                    /**
                     * 获取Auto-Scan Range
                     * @return ScanType Auto-Scan Range
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                private:

                    /**
                     * Whether the Rule Is Effective. 0: Not Effective; 1: Effective
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * Authorization Scope Category. MANUAL: Selected Host Nodes; ALL: All Images
                     */
                    std::string m_rangeType;
                    bool m_rangeTypeHasBeenSet;

                    /**
                     * Number of Hosts When Authorization Scope Is Optional Host
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * Maximum Number of Authorized Mirrors Per Day. 0: Unlimited
                     */
                    int64_t m_maxDailyCount;
                    bool m_maxDailyCountHasBeenSet;

                    /**
                     * Rule ID. Set it to 0 when it is not configured.
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Auto-Scan Switch. 0: Off; 1: On
                     */
                    int64_t m_autoScanEnabled;
                    bool m_autoScanEnabledHasBeenSet;

                    /**
                     * Auto-Scan Range
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTOAUTHORIZEDRULERESPONSE_H_
