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
                     * 获取Whether the rule takes effect. Valid values: `0` (no); `1` (yes).
                     * @return IsEnabled Whether the rule takes effect. Valid values: `0` (no); `1` (yes).
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
                     * 获取Scope. Valid values: `MANUAL` (specified servers); `ALL` (all images).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RangeType Scope. Valid values: `MANUAL` (specified servers); `ALL` (all images).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of servers when the scope is `MANUAL`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostCount Number of servers when the scope is `MANUAL`
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Maximum number of image licenses per day. `0`: Unlimited.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxDailyCount Maximum number of image licenses per day. `0`: Unlimited.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Rule ID, which is `0` if not specified.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleId Rule ID, which is `0` if not specified.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * Whether the rule takes effect. Valid values: `0` (no); `1` (yes).
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * Scope. Valid values: `MANUAL` (specified servers); `ALL` (all images).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_rangeType;
                    bool m_rangeTypeHasBeenSet;

                    /**
                     * Number of servers when the scope is `MANUAL`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * Maximum number of image licenses per day. `0`: Unlimited.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxDailyCount;
                    bool m_maxDailyCountHasBeenSet;

                    /**
                     * Rule ID, which is `0` if not specified.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTOAUTHORIZEDRULERESPONSE_H_
