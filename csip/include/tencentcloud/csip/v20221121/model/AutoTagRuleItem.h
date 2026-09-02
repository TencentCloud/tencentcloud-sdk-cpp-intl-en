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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AUTOTAGRULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AUTOTAGRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Cloud boundary analysis automatic tagging item
                */
                class AutoTagRuleItem : public AbstractModel
                {
                public:
                    AutoTagRuleItem();
                    ~AutoTagRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Rule ID.</p>
                     * @return RuleID <p>Rule ID.</p>
                     * 
                     */
                    uint64_t GetRuleID() const;

                    /**
                     * 设置<p>Rule ID.</p>
                     * @param _ruleID <p>Rule ID.</p>
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
                     * 获取<p>rule name</p>
                     * @return RuleName <p>rule name</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>rule name</p>
                     * @param _ruleName <p>rule name</p>
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取<p>Tag.</p>
                     * @return Tag <p>Tag.</p>
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置<p>Tag.</p>
                     * @param _tag <p>Tag.</p>
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Switch status</p>
                     * @return Enable <p>Switch status</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>Switch status</p>
                     * @param _enable <p>Switch status</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>Asset type</p>
                     * @return AssetTypes <p>Asset type</p>
                     * 
                     */
                    std::vector<std::string> GetAssetTypes() const;

                    /**
                     * 设置<p>Asset type</p>
                     * @param _assetTypes <p>Asset type</p>
                     * 
                     */
                    void SetAssetTypes(const std::vector<std::string>& _assetTypes);

                    /**
                     * 判断参数 AssetTypes 是否已赋值
                     * @return AssetTypes 是否已赋值
                     * 
                     */
                    bool AssetTypesHasBeenSet() const;

                    /**
                     * 获取<p>Port</p>
                     * @return Ports <p>Port</p>
                     * 
                     */
                    std::vector<std::string> GetPorts() const;

                    /**
                     * 设置<p>Port</p>
                     * @param _ports <p>Port</p>
                     * 
                     */
                    void SetPorts(const std::vector<std::string>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取<p>Open status</p>
                     * @return OpenStatuses <p>Open status</p>
                     * 
                     */
                    std::vector<std::string> GetOpenStatuses() const;

                    /**
                     * 设置<p>Open status</p>
                     * @param _openStatuses <p>Open status</p>
                     * 
                     */
                    void SetOpenStatuses(const std::vector<std::string>& _openStatuses);

                    /**
                     * 判断参数 OpenStatuses 是否已赋值
                     * @return OpenStatuses 是否已赋值
                     * 
                     */
                    bool OpenStatusesHasBeenSet() const;

                    /**
                     * 获取<p>Rule priority</p>
                     * @return Priority <p>Rule priority</p>
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置<p>Rule priority</p>
                     * @param _priority <p>Rule priority</p>
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
                     * @return UpdateTime <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updateTime <p>Update time.</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Rule ID.</p>
                     */
                    uint64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>rule name</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>Tag.</p>
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Switch status</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Asset type</p>
                     */
                    std::vector<std::string> m_assetTypes;
                    bool m_assetTypesHasBeenSet;

                    /**
                     * <p>Port</p>
                     */
                    std::vector<std::string> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * <p>Open status</p>
                     */
                    std::vector<std::string> m_openStatuses;
                    bool m_openStatusesHasBeenSet;

                    /**
                     * <p>Rule priority</p>
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AUTOTAGRULEITEM_H_
