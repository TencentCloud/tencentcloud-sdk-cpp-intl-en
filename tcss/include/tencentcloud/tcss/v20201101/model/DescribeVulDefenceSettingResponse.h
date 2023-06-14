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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDEFENCESETTINGRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDEFENCESETTINGRESPONSE_H_

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
                * DescribeVulDefenceSetting response structure.
                */
                class DescribeVulDefenceSettingResponse : public AbstractModel
                {
                public:
                    DescribeVulDefenceSettingResponse();
                    ~DescribeVulDefenceSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether it is enabled. Valid values: `0` (disabled); `1` (enabled).
                     * @return IsEnabled Whether it is enabled. Valid values: `0` (disabled); `1` (enabled).
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
                     * 获取Scope of servers with exploit prevention enabled. Valid values: `0` (specified servers); `1` (all servers).
                     * @return Scope Scope of servers with exploit prevention enabled. Valid values: `0` (specified servers); `1` (all servers).
                     * 
                     */
                    int64_t GetScope() const;

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取Number of servers with exploit prevention enabled
                     * @return HostCount Number of servers with exploit prevention enabled
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
                     * 获取Number of abnormal servers with exploit prevention enabled
                     * @return ExceptionHostCount Number of abnormal servers with exploit prevention enabled
                     * 
                     */
                    int64_t GetExceptionHostCount() const;

                    /**
                     * 判断参数 ExceptionHostCount 是否已赋值
                     * @return ExceptionHostCount 是否已赋值
                     * 
                     */
                    bool ExceptionHostCountHasBeenSet() const;

                    /**
                     * 获取Specified servers with exploit prevention enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostIDs Specified servers with exploit prevention enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetHostIDs() const;

                    /**
                     * 判断参数 HostIDs 是否已赋值
                     * @return HostIDs 是否已赋值
                     * 
                     */
                    bool HostIDsHasBeenSet() const;

                    /**
                     * 获取Total number of servers with TCSS activated
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostTotalCount Total number of servers with TCSS activated
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHostTotalCount() const;

                    /**
                     * 判断参数 HostTotalCount 是否已赋值
                     * @return HostTotalCount 是否已赋值
                     * 
                     */
                    bool HostTotalCountHasBeenSet() const;

                    /**
                     * 获取Number of vulnerabilities that can be prevented
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SupportDefenseVulCount Number of vulnerabilities that can be prevented
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSupportDefenseVulCount() const;

                    /**
                     * 判断参数 SupportDefenseVulCount 是否已赋值
                     * @return SupportDefenseVulCount 是否已赋值
                     * 
                     */
                    bool SupportDefenseVulCountHasBeenSet() const;

                private:

                    /**
                     * Whether it is enabled. Valid values: `0` (disabled); `1` (enabled).
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * Scope of servers with exploit prevention enabled. Valid values: `0` (specified servers); `1` (all servers).
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * Number of servers with exploit prevention enabled
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * Number of abnormal servers with exploit prevention enabled
                     */
                    int64_t m_exceptionHostCount;
                    bool m_exceptionHostCountHasBeenSet;

                    /**
                     * Specified servers with exploit prevention enabled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_hostIDs;
                    bool m_hostIDsHasBeenSet;

                    /**
                     * Total number of servers with TCSS activated
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_hostTotalCount;
                    bool m_hostTotalCountHasBeenSet;

                    /**
                     * Number of vulnerabilities that can be prevented
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_supportDefenseVulCount;
                    bool m_supportDefenseVulCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDEFENCESETTINGRESPONSE_H_
