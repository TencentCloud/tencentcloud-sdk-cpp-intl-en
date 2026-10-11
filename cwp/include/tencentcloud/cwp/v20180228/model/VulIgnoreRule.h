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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULIGNORERULE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULIGNORERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Vulnerability ignore rule.
                */
                class VulIgnoreRule : public AbstractModel
                {
                public:
                    VulIgnoreRule();
                    ~VulIgnoreRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vulnerability rule ID.
                     * @return VulID Vulnerability rule ID.
                     * 
                     */
                    uint64_t GetVulID() const;

                    /**
                     * 设置Vulnerability rule ID.
                     * @param _vulID Vulnerability rule ID.
                     * 
                     */
                    void SetVulID(const uint64_t& _vulID);

                    /**
                     * 判断参数 VulID 是否已赋值
                     * @return VulID 是否已赋值
                     * 
                     */
                    bool VulIDHasBeenSet() const;

                    /**
                     * 获取<li>0: all hosts</li>
<li>1: Optional host</li>
                     * @return AssetScopeType <li>0: all hosts</li>
<li>1: Optional host</li>
                     * 
                     */
                    uint64_t GetAssetScopeType() const;

                    /**
                     * 设置<li>0: all hosts</li>
<li>1: Optional host</li>
                     * @param _assetScopeType <li>0: all hosts</li>
<li>1: Optional host</li>
                     * 
                     */
                    void SetAssetScopeType(const uint64_t& _assetScopeType);

                    /**
                     * 判断参数 AssetScopeType 是否已赋值
                     * @return AssetScopeType 是否已赋值
                     * 
                     */
                    bool AssetScopeTypeHasBeenSet() const;

                    /**
                     * 获取List of QUUIDs for custom-selected hosts when custom hosts are used.
                     * @return IncludeQuuidList List of QUUIDs for custom-selected hosts when custom hosts are used.
                     * 
                     */
                    std::vector<std::string> GetIncludeQuuidList() const;

                    /**
                     * 设置List of QUUIDs for custom-selected hosts when custom hosts are used.
                     * @param _includeQuuidList List of QUUIDs for custom-selected hosts when custom hosts are used.
                     * 
                     */
                    void SetIncludeQuuidList(const std::vector<std::string>& _includeQuuidList);

                    /**
                     * 判断参数 IncludeQuuidList 是否已赋值
                     * @return IncludeQuuidList 是否已赋值
                     * 
                     */
                    bool IncludeQuuidListHasBeenSet() const;

                    /**
                     * 获取Hosts excluded when all hosts are selected.
                     * @return ExcludeQuuidList Hosts excluded when all hosts are selected.
                     * 
                     */
                    std::vector<std::string> GetExcludeQuuidList() const;

                    /**
                     * 设置Hosts excluded when all hosts are selected.
                     * @param _excludeQuuidList Hosts excluded when all hosts are selected.
                     * 
                     */
                    void SetExcludeQuuidList(const std::vector<std::string>& _excludeQuuidList);

                    /**
                     * 判断参数 ExcludeQuuidList 是否已赋值
                     * @return ExcludeQuuidList 是否已赋值
                     * 
                     */
                    bool ExcludeQuuidListHasBeenSet() const;

                    /**
                     * 获取Reason for ignoring.
                     * @return Remark Reason for ignoring.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Reason for ignoring.
                     * @param _remark Reason for ignoring.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Number of configured hosts.
                     * @return ConfigHostCount Number of configured hosts.
                     * 
                     */
                    uint64_t GetConfigHostCount() const;

                    /**
                     * 设置Number of configured hosts.
                     * @param _configHostCount Number of configured hosts.
                     * 
                     */
                    void SetConfigHostCount(const uint64_t& _configHostCount);

                    /**
                     * 判断参数 ConfigHostCount 是否已赋值
                     * @return ConfigHostCount 是否已赋值
                     * 
                     */
                    bool ConfigHostCountHasBeenSet() const;

                    /**
                     * 获取Number of hosts actually affected.
                     * @return AffectedHostCount Number of hosts actually affected.
                     * 
                     */
                    uint64_t GetAffectedHostCount() const;

                    /**
                     * 设置Number of hosts actually affected.
                     * @param _affectedHostCount Number of hosts actually affected.
                     * 
                     */
                    void SetAffectedHostCount(const uint64_t& _affectedHostCount);

                    /**
                     * 判断参数 AffectedHostCount 是否已赋值
                     * @return AffectedHostCount 是否已赋值
                     * 
                     */
                    bool AffectedHostCountHasBeenSet() const;

                    /**
                     * 获取Vulnerability name.
                     * @return VulName Vulnerability name.
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置Vulnerability name.
                     * @param _vulName Vulnerability name.
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取Ignore rule ID.
                     * @return RuleID Ignore rule ID.
                     * 
                     */
                    uint64_t GetRuleID() const;

                    /**
                     * 设置Ignore rule ID.
                     * @param _ruleID Ignore rule ID.
                     * 
                     */
                    void SetRuleID(const uint64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取Latest update time
                     * @return ModifyTime Latest update time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Latest update time
                     * @param _modifyTime Latest update time
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Vulnerability rule ID.
                     */
                    uint64_t m_vulID;
                    bool m_vulIDHasBeenSet;

                    /**
                     * <li>0: all hosts</li>
<li>1: Optional host</li>
                     */
                    uint64_t m_assetScopeType;
                    bool m_assetScopeTypeHasBeenSet;

                    /**
                     * List of QUUIDs for custom-selected hosts when custom hosts are used.
                     */
                    std::vector<std::string> m_includeQuuidList;
                    bool m_includeQuuidListHasBeenSet;

                    /**
                     * Hosts excluded when all hosts are selected.
                     */
                    std::vector<std::string> m_excludeQuuidList;
                    bool m_excludeQuuidListHasBeenSet;

                    /**
                     * Reason for ignoring.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Number of configured hosts.
                     */
                    uint64_t m_configHostCount;
                    bool m_configHostCountHasBeenSet;

                    /**
                     * Number of hosts actually affected.
                     */
                    uint64_t m_affectedHostCount;
                    bool m_affectedHostCountHasBeenSet;

                    /**
                     * Vulnerability name.
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Ignore rule ID.
                     */
                    uint64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Latest update time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULIGNORERULE_H_
