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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAILINKSETTINGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAILINKSETTINGREQUEST_H_

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
                * ModifyAILinkSetting request structure.
                */
                class ModifyAILinkSettingRequest : public AbstractModel
                {
                public:
                    ModifyAILinkSettingRequest();
                    ~ModifyAILinkSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>0: Turn off the AI-Link engine, 1: Turn on the AI-Link engine</p>
                     * @return AILinkEnable <p>0: Turn off the AI-Link engine, 1: Turn on the AI-Link engine</p>
                     * 
                     */
                    uint64_t GetAILinkEnable() const;

                    /**
                     * 设置<p>0: Turn off the AI-Link engine, 1: Turn on the AI-Link engine</p>
                     * @param _aILinkEnable <p>0: Turn off the AI-Link engine, 1: Turn on the AI-Link engine</p>
                     * 
                     */
                    void SetAILinkEnable(const uint64_t& _aILinkEnable);

                    /**
                     * 判断参数 AILinkEnable 是否已赋值
                     * @return AILinkEnable 是否已赋值
                     * 
                     */
                    bool AILinkEnableHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Deep mode 0-Off 1-On</p>
                     * @return RuleScopeDeep <p>Deep mode 0-Off 1-On</p>
                     * 
                     */
                    uint64_t GetRuleScopeDeep() const;

                    /**
                     * 设置<p>Deep mode 0-Off 1-On</p>
                     * @param _ruleScopeDeep <p>Deep mode 0-Off 1-On</p>
                     * 
                     */
                    void SetRuleScopeDeep(const uint64_t& _ruleScopeDeep);

                    /**
                     * 判断参数 RuleScopeDeep 是否已赋值
                     * @return RuleScopeDeep 是否已赋值
                     * 
                     */
                    bool RuleScopeDeepHasBeenSet() const;

                    /**
                     * 获取<p>Balanced mode. 0: off; 1: on</p>
                     * @return RuleScopeBalanced <p>Balanced mode. 0: off; 1: on</p>
                     * 
                     */
                    uint64_t GetRuleScopeBalanced() const;

                    /**
                     * 设置<p>Balanced mode. 0: off; 1: on</p>
                     * @param _ruleScopeBalanced <p>Balanced mode. 0: off; 1: on</p>
                     * 
                     */
                    void SetRuleScopeBalanced(const uint64_t& _ruleScopeBalanced);

                    /**
                     * 判断参数 RuleScopeBalanced 是否已赋值
                     * @return RuleScopeBalanced 是否已赋值
                     * 
                     */
                    bool RuleScopeBalancedHasBeenSet() const;

                    /**
                     * 获取<p>Precision mode 0-Disable 1-Enable</p>
                     * @return RuleScopePrecise <p>Precision mode 0-Disable 1-Enable</p>
                     * 
                     */
                    uint64_t GetRuleScopePrecise() const;

                    /**
                     * 设置<p>Precision mode 0-Disable 1-Enable</p>
                     * @param _ruleScopePrecise <p>Precision mode 0-Disable 1-Enable</p>
                     * 
                     */
                    void SetRuleScopePrecise(const uint64_t& _ruleScopePrecise);

                    /**
                     * 判断参数 RuleScopePrecise 是否已赋值
                     * @return RuleScopePrecise 是否已赋值
                     * 
                     */
                    bool RuleScopePreciseHasBeenSet() const;

                    /**
                     * 获取<p>1 for all professional/flagship edition hosts, 0 for the selected host list</p>
                     * @return Scope <p>1 for all professional/flagship edition hosts, 0 for the selected host list</p>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置<p>1 for all professional/flagship edition hosts, 0 for the selected host list</p>
                     * @param _scope <p>1 for all professional/flagship edition hosts, 0 for the selected host list</p>
                     * 
                     */
                    void SetScope(const uint64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>Selected host Quuid list (required when Scope=0)</p>
                     * @return Quuids <p>Selected host Quuid list (required when Scope=0)</p>
                     * @deprecated
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置<p>Selected host Quuid list (required when Scope=0)</p>
                     * @param _quuids <p>Selected host Quuid list (required when Scope=0)</p>
                     * @deprecated
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * @deprecated
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取<p>Exclusion host Quuid list (this parameter is valid only when Scope=1)</p>
                     * @return ExcludeQuuids <p>Exclusion host Quuid list (this parameter is valid only when Scope=1)</p>
                     * @deprecated
                     */
                    std::vector<std::string> GetExcludeQuuids() const;

                    /**
                     * 设置<p>Exclusion host Quuid list (this parameter is valid only when Scope=1)</p>
                     * @param _excludeQuuids <p>Exclusion host Quuid list (this parameter is valid only when Scope=1)</p>
                     * @deprecated
                     */
                    void SetExcludeQuuids(const std::vector<std::string>& _excludeQuuids);

                    /**
                     * 判断参数 ExcludeQuuids 是否已赋值
                     * @return ExcludeQuuids 是否已赋值
                     * @deprecated
                     */
                    bool ExcludeQuuidsHasBeenSet() const;

                    /**
                     * 获取<p>Automatic inclusion of new assets: 0 excludes, 1 includes</p>
                     * @return AutoInclude <p>Automatic inclusion of new assets: 0 excludes, 1 includes</p>
                     * 
                     */
                    uint64_t GetAutoInclude() const;

                    /**
                     * 设置<p>Automatic inclusion of new assets: 0 excludes, 1 includes</p>
                     * @param _autoInclude <p>Automatic inclusion of new assets: 0 excludes, 1 includes</p>
                     * 
                     */
                    void SetAutoInclude(const uint64_t& _autoInclude);

                    /**
                     * 判断参数 AutoInclude 是否已赋值
                     * @return AutoInclude 是否已赋值
                     * 
                     */
                    bool AutoIncludeHasBeenSet() const;

                    /**
                     * 获取<p>Tag ID</p>
                     * @return TagIDs <p>Tag ID</p>
                     * 
                     */
                    std::vector<std::string> GetTagIDs() const;

                    /**
                     * 设置<p>Tag ID</p>
                     * @param _tagIDs <p>Tag ID</p>
                     * 
                     */
                    void SetTagIDs(const std::vector<std::string>& _tagIDs);

                    /**
                     * 判断参数 TagIDs 是否已赋值
                     * @return TagIDs 是否已赋值
                     * 
                     */
                    bool TagIDsHasBeenSet() const;

                    /**
                     * 获取<p>0,1</p><p>Enumeration values:</p><ul><li>0: Partial</li><li>1: All</li></ul>
                     * @return TCSSScope <p>0,1</p><p>Enumeration values:</p><ul><li>0: Partial</li><li>1: All</li></ul>
                     * 
                     */
                    uint64_t GetTCSSScope() const;

                    /**
                     * 设置<p>0,1</p><p>Enumeration values:</p><ul><li>0: Partial</li><li>1: All</li></ul>
                     * @param _tCSSScope <p>0,1</p><p>Enumeration values:</p><ul><li>0: Partial</li><li>1: All</li></ul>
                     * 
                     */
                    void SetTCSSScope(const uint64_t& _tCSSScope);

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
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterIDs <p>Cluster ID.</p>
                     * 
                     */
                    void SetClusterIDs(const std::vector<std::string>& _clusterIDs);

                    /**
                     * 判断参数 ClusterIDs 是否已赋值
                     * @return ClusterIDs 是否已赋值
                     * 
                     */
                    bool ClusterIDsHasBeenSet() const;

                    /**
                     * 获取<p>Exclude Cluster ID</p>
                     * @return ExcludeClusterIDs <p>Exclude Cluster ID</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeClusterIDs() const;

                    /**
                     * 设置<p>Exclude Cluster ID</p>
                     * @param _excludeClusterIDs <p>Exclude Cluster ID</p>
                     * 
                     */
                    void SetExcludeClusterIDs(const std::vector<std::string>& _excludeClusterIDs);

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
                     * 设置<p>Instance ID.</p>
                     * @param _instanceIds <p>Instance ID.</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID exclusion</p>
                     * @return ExcludeInstanceIds <p>Instance ID exclusion</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIds() const;

                    /**
                     * 设置<p>Instance ID exclusion</p>
                     * @param _excludeInstanceIds <p>Instance ID exclusion</p>
                     * 
                     */
                    void SetExcludeInstanceIds(const std::vector<std::string>& _excludeInstanceIds);

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
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Deep mode 0-Off 1-On</p>
                     */
                    uint64_t m_ruleScopeDeep;
                    bool m_ruleScopeDeepHasBeenSet;

                    /**
                     * <p>Balanced mode. 0: off; 1: on</p>
                     */
                    uint64_t m_ruleScopeBalanced;
                    bool m_ruleScopeBalancedHasBeenSet;

                    /**
                     * <p>Precision mode 0-Disable 1-Enable</p>
                     */
                    uint64_t m_ruleScopePrecise;
                    bool m_ruleScopePreciseHasBeenSet;

                    /**
                     * <p>1 for all professional/flagship edition hosts, 0 for the selected host list</p>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Selected host Quuid list (required when Scope=0)</p>
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * <p>Exclusion host Quuid list (this parameter is valid only when Scope=1)</p>
                     */
                    std::vector<std::string> m_excludeQuuids;
                    bool m_excludeQuuidsHasBeenSet;

                    /**
                     * <p>Automatic inclusion of new assets: 0 excludes, 1 includes</p>
                     */
                    uint64_t m_autoInclude;
                    bool m_autoIncludeHasBeenSet;

                    /**
                     * <p>Tag ID</p>
                     */
                    std::vector<std::string> m_tagIDs;
                    bool m_tagIDsHasBeenSet;

                    /**
                     * <p>0,1</p><p>Enumeration values:</p><ul><li>0: Partial</li><li>1: All</li></ul>
                     */
                    uint64_t m_tCSSScope;
                    bool m_tCSSScopeHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::vector<std::string> m_clusterIDs;
                    bool m_clusterIDsHasBeenSet;

                    /**
                     * <p>Exclude Cluster ID</p>
                     */
                    std::vector<std::string> m_excludeClusterIDs;
                    bool m_excludeClusterIDsHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>Instance ID exclusion</p>
                     */
                    std::vector<std::string> m_excludeInstanceIds;
                    bool m_excludeInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYAILINKSETTINGREQUEST_H_
