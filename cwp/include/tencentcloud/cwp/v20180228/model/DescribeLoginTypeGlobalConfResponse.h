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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINTYPEGLOBALCONFRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINTYPEGLOBALCONFRESPONSE_H_

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
                * DescribeLoginTypeGlobalConf response structure.
                */
                class DescribeLoginTypeGlobalConfResponse : public AbstractModel
                {
                public:
                    DescribeLoginTypeGlobalConfResponse();
                    ~DescribeLoginTypeGlobalConfResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether anti-uninstall is enabled <li>0 No</li> <li>1 Yes</li> <li>9 Not set, same as 0 means not enabled</li>
                     * @return Enable Whether anti-uninstall is enabled <li>0 No</li> <li>1 Yes</li> <li>9 Not set, same as 0 means not enabled</li>
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Scope <li>0 Selected host</li> <li>1 All hosts</li>
                     * @return Scope Scope <li>0 Selected host</li> <li>1 All hosts</li>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取Selected host configuration count
                     * @return IncludeHostCount Selected host configuration count
                     * 
                     */
                    uint64_t GetIncludeHostCount() const;

                    /**
                     * 判断参数 IncludeHostCount 是否已赋值
                     * @return IncludeHostCount 是否已赋值
                     * 
                     */
                    bool IncludeHostCountHasBeenSet() const;

                    /**
                     * 获取Deselect host configuration count
                     * @return ExcludeHostCount Deselect host configuration count
                     * 
                     */
                    uint64_t GetExcludeHostCount() const;

                    /**
                     * 判断参数 ExcludeHostCount 是否已赋值
                     * @return ExcludeHostCount 是否已赋值
                     * 
                     */
                    bool ExcludeHostCountHasBeenSet() const;

                    /**
                     * 获取Select quuid configuration list
                     * @return IncludeQuuid Select quuid configuration list
                     * 
                     */
                    std::vector<std::string> GetIncludeQuuid() const;

                    /**
                     * 判断参数 IncludeQuuid 是否已赋值
                     * @return IncludeQuuid 是否已赋值
                     * 
                     */
                    bool IncludeQuuidHasBeenSet() const;

                    /**
                     * 获取Exclude quuid configuration list
                     * @return ExcludeQuuid Exclude quuid configuration list
                     * 
                     */
                    std::vector<std::string> GetExcludeQuuid() const;

                    /**
                     * 判断参数 ExcludeQuuid 是否已赋值
                     * @return ExcludeQuuid 是否已赋值
                     * 
                     */
                    bool ExcludeQuuidHasBeenSet() const;

                    /**
                     * 获取Number of Machines Enabled
                     * @return EnableCount Number of Machines Enabled
                     * 
                     */
                    uint64_t GetEnableCount() const;

                    /**
                     * 判断参数 EnableCount 是否已赋值
                     * @return EnableCount 是否已赋值
                     * 
                     */
                    bool EnableCountHasBeenSet() const;

                    /**
                     * 获取Number of inactive machines
                     * @return DisableCount Number of inactive machines
                     * 
                     */
                    uint64_t GetDisableCount() const;

                    /**
                     * 判断参数 DisableCount 是否已赋值
                     * @return DisableCount 是否已赋值
                     * 
                     */
                    bool DisableCountHasBeenSet() const;

                private:

                    /**
                     * Whether anti-uninstall is enabled <li>0 No</li> <li>1 Yes</li> <li>9 Not set, same as 0 means not enabled</li>
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Scope <li>0 Selected host</li> <li>1 All hosts</li>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * Selected host configuration count
                     */
                    uint64_t m_includeHostCount;
                    bool m_includeHostCountHasBeenSet;

                    /**
                     * Deselect host configuration count
                     */
                    uint64_t m_excludeHostCount;
                    bool m_excludeHostCountHasBeenSet;

                    /**
                     * Select quuid configuration list
                     */
                    std::vector<std::string> m_includeQuuid;
                    bool m_includeQuuidHasBeenSet;

                    /**
                     * Exclude quuid configuration list
                     */
                    std::vector<std::string> m_excludeQuuid;
                    bool m_excludeQuuidHasBeenSet;

                    /**
                     * Number of Machines Enabled
                     */
                    uint64_t m_enableCount;
                    bool m_enableCountHasBeenSet;

                    /**
                     * Number of inactive machines
                     */
                    uint64_t m_disableCount;
                    bool m_disableCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINTYPEGLOBALCONFRESPONSE_H_
