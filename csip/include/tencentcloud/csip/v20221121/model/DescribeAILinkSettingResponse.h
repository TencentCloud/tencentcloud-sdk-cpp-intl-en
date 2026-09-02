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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAILINKSETTINGRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAILINKSETTINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAILinkSetting response structure.
                */
                class DescribeAILinkSettingResponse : public AbstractModel
                {
                public:
                    DescribeAILinkSettingResponse();
                    ~DescribeAILinkSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>0: Turn off the AI-Link engine, 1: Turn on the AI-Link engine</p>
                     * @return AILinkEnable <p>0: Turn off the AI-Link engine, 1: Turn on the AI-Link engine</p>
                     * 
                     */
                    uint64_t GetAILinkEnable() const;

                    /**
                     * 判断参数 AILinkEnable 是否已赋值
                     * @return AILinkEnable 是否已赋值
                     * 
                     */
                    bool AILinkEnableHasBeenSet() const;

                    /**
                     * 获取<p>Deep mode: 0 - off, 1 - on</p>
                     * @return RuleScopeDeep <p>Deep mode: 0 - off, 1 - on</p>
                     * 
                     */
                    uint64_t GetRuleScopeDeep() const;

                    /**
                     * 判断参数 RuleScopeDeep 是否已赋值
                     * @return RuleScopeDeep 是否已赋值
                     * 
                     */
                    bool RuleScopeDeepHasBeenSet() const;

                    /**
                     * 获取<p>Balanced mode. 0: disabled; 1: enabled</p>
                     * @return RuleScopeBalanced <p>Balanced mode. 0: disabled; 1: enabled</p>
                     * 
                     */
                    uint64_t GetRuleScopeBalanced() const;

                    /**
                     * 判断参数 RuleScopeBalanced 是否已赋值
                     * @return RuleScopeBalanced 是否已赋值
                     * 
                     */
                    bool RuleScopeBalancedHasBeenSet() const;

                    /**
                     * 获取<p>Precision mode. 0: off; 1: on</p>
                     * @return RuleScopePrecise <p>Precision mode. 0: off; 1: on</p>
                     * 
                     */
                    uint64_t GetRuleScopePrecise() const;

                    /**
                     * 判断参数 RuleScopePrecise 是否已赋值
                     * @return RuleScopePrecise 是否已赋值
                     * 
                     */
                    bool RuleScopePreciseHasBeenSet() const;

                    /**
                     * 获取<p>1 - All Professional/Flagship edition hosts; 0 - list of hosts with Quuids</p>
                     * @return Scope <p>1 - All Professional/Flagship edition hosts; 0 - list of hosts with Quuids</p>
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
                     * 获取<p>Selected host Quuid list</p>
                     * @return Quuids <p>Selected host Quuid list</p>
                     * @deprecated
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * @deprecated
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取<p>Host Quuid list exclusion</p>
                     * @return ExcludeQuuids <p>Host Quuid list exclusion</p>
                     * @deprecated
                     */
                    std::vector<std::string> GetExcludeQuuids() const;

                    /**
                     * 判断参数 ExcludeQuuids 是否已赋值
                     * @return ExcludeQuuids 是否已赋值
                     * @deprecated
                     */
                    bool ExcludeQuuidsHasBeenSet() const;

                    /**
                     * 获取<p>Automatic inclusion of new assets: 0 exclude, 1 include</p>
                     * @return AutoInclude <p>Automatic inclusion of new assets: 0 exclude, 1 include</p>
                     * 
                     */
                    uint64_t GetAutoInclude() const;

                    /**
                     * 判断参数 AutoInclude 是否已赋值
                     * @return AutoInclude 是否已赋值
                     * 
                     */
                    bool AutoIncludeHasBeenSet() const;

                    /**
                     * 获取<p>Tag.</p>
                     * @return TagIDs <p>Tag.</p>
                     * 
                     */
                    std::vector<std::string> GetTagIDs() const;

                    /**
                     * 判断参数 TagIDs 是否已赋值
                     * @return TagIDs 是否已赋值
                     * 
                     */
                    bool TagIDsHasBeenSet() const;

                    /**
                     * 获取<p>0, 1</p><p>Enumeration values:</p><ul><li>0: Partial</li><li>1: All</li></ul>
                     * @return TCSSScope <p>0, 1</p><p>Enumeration values:</p><ul><li>0: Partial</li><li>1: All</li></ul>
                     * 
                     */
                    uint64_t GetTCSSScope() const;

                    /**
                     * 判断参数 TCSSScope 是否已赋值
                     * @return TCSSScope 是否已赋值
                     * 
                     */
                    bool TCSSScopeHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterIDs <p>Cluster ID.</p>
                     * 
                     */
                    std::vector<std::string> GetClusterIDs() const;

                    /**
                     * 判断参数 ClusterIDs 是否已赋值
                     * @return ClusterIDs 是否已赋值
                     * 
                     */
                    bool ClusterIDsHasBeenSet() const;

                    /**
                     * 获取<p>Exclusion of Cluster ID</p>
                     * @return ExcludeClusterIDs <p>Exclusion of Cluster ID</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeClusterIDs() const;

                    /**
                     * 判断参数 ExcludeClusterIDs 是否已赋值
                     * @return ExcludeClusterIDs 是否已赋值
                     * 
                     */
                    bool ExcludeClusterIDsHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceIds <p>Instance ID.</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>Exclude instance ID</p>
                     * @return ExcludeInstanceIds <p>Exclude instance ID</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIds() const;

                    /**
                     * 判断参数 ExcludeInstanceIds 是否已赋值
                     * @return ExcludeInstanceIds 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIdsHasBeenSet() const;

                private:

                    /**
                     * <p>0: Turn off the AI-Link engine, 1: Turn on the AI-Link engine</p>
                     */
                    uint64_t m_aILinkEnable;
                    bool m_aILinkEnableHasBeenSet;

                    /**
                     * <p>Deep mode: 0 - off, 1 - on</p>
                     */
                    uint64_t m_ruleScopeDeep;
                    bool m_ruleScopeDeepHasBeenSet;

                    /**
                     * <p>Balanced mode. 0: disabled; 1: enabled</p>
                     */
                    uint64_t m_ruleScopeBalanced;
                    bool m_ruleScopeBalancedHasBeenSet;

                    /**
                     * <p>Precision mode. 0: off; 1: on</p>
                     */
                    uint64_t m_ruleScopePrecise;
                    bool m_ruleScopePreciseHasBeenSet;

                    /**
                     * <p>1 - All Professional/Flagship edition hosts; 0 - list of hosts with Quuids</p>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Selected host Quuid list</p>
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * <p>Host Quuid list exclusion</p>
                     */
                    std::vector<std::string> m_excludeQuuids;
                    bool m_excludeQuuidsHasBeenSet;

                    /**
                     * <p>Automatic inclusion of new assets: 0 exclude, 1 include</p>
                     */
                    uint64_t m_autoInclude;
                    bool m_autoIncludeHasBeenSet;

                    /**
                     * <p>Tag.</p>
                     */
                    std::vector<std::string> m_tagIDs;
                    bool m_tagIDsHasBeenSet;

                    /**
                     * <p>0, 1</p><p>Enumeration values:</p><ul><li>0: Partial</li><li>1: All</li></ul>
                     */
                    uint64_t m_tCSSScope;
                    bool m_tCSSScopeHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::vector<std::string> m_clusterIDs;
                    bool m_clusterIDsHasBeenSet;

                    /**
                     * <p>Exclusion of Cluster ID</p>
                     */
                    std::vector<std::string> m_excludeClusterIDs;
                    bool m_excludeClusterIDsHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>Exclude instance ID</p>
                     */
                    std::vector<std::string> m_excludeInstanceIds;
                    bool m_excludeInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAILINKSETTINGRESPONSE_H_
