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
                     * 获取<p>Whether uninstall protection is enabled <li>0: No</li> <li>1: Yes</li> <li>9: Not set, equivalent to 0 (disabled)</li></p>
                     * @return Enable <p>Whether uninstall protection is enabled <li>0: No</li> <li>1: Yes</li> <li>9: Not set, equivalent to 0 (disabled)</li></p>
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
                     * 获取<p>Scope <li>0: Selected hosts</li> <li>1: All hosts</li></p>
                     * @return Scope <p>Scope <li>0: Selected hosts</li> <li>1: All hosts</li></p>
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
                     * 获取<p>Number of selected host configurations</p>
                     * @return IncludeHostCount <p>Number of selected host configurations</p>
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
                     * 获取<p>Number of excluded host configurations</p>
                     * @return ExcludeHostCount <p>Number of excluded host configurations</p>
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
                     * 获取<p>List of selected QUUID configurations</p>
                     * @return IncludeQuuid <p>List of selected QUUID configurations</p>
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
                     * 获取<p>List of excluded QUUID configurations</p>
                     * @return ExcludeQuuid <p>List of excluded QUUID configurations</p>
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
                     * 获取<p>Number of enabled machines</p>
                     * @return EnableCount <p>Number of enabled machines</p>
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
                     * 获取<p>Number of disabled machines</p>
                     * @return DisableCount <p>Number of disabled machines</p>
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
                     * <p>Whether uninstall protection is enabled <li>0: No</li> <li>1: Yes</li> <li>9: Not set, equivalent to 0 (disabled)</li></p>
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Scope <li>0: Selected hosts</li> <li>1: All hosts</li></p>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Number of selected host configurations</p>
                     */
                    uint64_t m_includeHostCount;
                    bool m_includeHostCountHasBeenSet;

                    /**
                     * <p>Number of excluded host configurations</p>
                     */
                    uint64_t m_excludeHostCount;
                    bool m_excludeHostCountHasBeenSet;

                    /**
                     * <p>List of selected QUUID configurations</p>
                     */
                    std::vector<std::string> m_includeQuuid;
                    bool m_includeQuuidHasBeenSet;

                    /**
                     * <p>List of excluded QUUID configurations</p>
                     */
                    std::vector<std::string> m_excludeQuuid;
                    bool m_excludeQuuidHasBeenSet;

                    /**
                     * <p>Number of enabled machines</p>
                     */
                    uint64_t m_enableCount;
                    bool m_enableCountHasBeenSet;

                    /**
                     * <p>Number of disabled machines</p>
                     */
                    uint64_t m_disableCount;
                    bool m_disableCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINTYPEGLOBALCONFRESPONSE_H_
