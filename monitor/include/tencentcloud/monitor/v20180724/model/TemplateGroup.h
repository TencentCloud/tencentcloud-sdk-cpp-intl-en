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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_TEMPLATEGROUP_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_TEMPLATEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Condition.h>
#include <tencentcloud/monitor/v20180724/model/EventCondition.h>
#include <tencentcloud/monitor/v20180724/model/PolicyGroup.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Template list
                */
                class TemplateGroup : public AbstractModel
                {
                public:
                    TemplateGroup();
                    ~TemplateGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metric alarm rules.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Conditions Metric alarm rules.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Condition> GetConditions() const;

                    /**
                     * 设置Metric alarm rules.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _conditions Metric alarm rules.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConditions(const std::vector<Condition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取Event alarm rules.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return EventConditions Event alarm rules.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<EventCondition> GetEventConditions() const;

                    /**
                     * 设置Event alarm rules.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _eventConditions Event alarm rules.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEventConditions(const std::vector<EventCondition>& _eventConditions);

                    /**
                     * 判断参数 EventConditions 是否已赋值
                     * @return EventConditions 是否已赋值
                     * 
                     */
                    bool EventConditionsHasBeenSet() const;

                    /**
                     * 获取The associated alarm policy groups.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return PolicyGroups The associated alarm policy groups.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PolicyGroup> GetPolicyGroups() const;

                    /**
                     * 设置The associated alarm policy groups.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _policyGroups The associated alarm policy groups.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicyGroups(const std::vector<PolicyGroup>& _policyGroups);

                    /**
                     * 判断参数 PolicyGroups 是否已赋值
                     * @return PolicyGroups 是否已赋值
                     * 
                     */
                    bool PolicyGroupsHasBeenSet() const;

                    /**
                     * 获取Template-based policy group ID.
                     * @return GroupID Template-based policy group ID.
                     * 
                     */
                    int64_t GetGroupID() const;

                    /**
                     * 设置Template-based policy group ID.
                     * @param _groupID Template-based policy group ID.
                     * 
                     */
                    void SetGroupID(const int64_t& _groupID);

                    /**
                     * 判断参数 GroupID 是否已赋值
                     * @return GroupID 是否已赋值
                     * 
                     */
                    bool GroupIDHasBeenSet() const;

                    /**
                     * 获取Template-based policy group name.
                     * @return GroupName Template-based policy group name.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Template-based policy group name.
                     * @param _groupName Template-based policy group name.
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return InsertTime Creation time.
                     * 
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置Creation time.
                     * @param _insertTime Creation time.
                     * 
                     */
                    void SetInsertTime(const int64_t& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取UIN of the last modifier.
                     * @return LastEditUin UIN of the last modifier.
                     * 
                     */
                    int64_t GetLastEditUin() const;

                    /**
                     * 设置UIN of the last modifier.
                     * @param _lastEditUin UIN of the last modifier.
                     * 
                     */
                    void SetLastEditUin(const int64_t& _lastEditUin);

                    /**
                     * 判断参数 LastEditUin 是否已赋值
                     * @return LastEditUin 是否已赋值
                     * 
                     */
                    bool LastEditUinHasBeenSet() const;

                    /**
                     * 获取Remarks.
                     * @return Remark Remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks.
                     * @param _remark Remarks.
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
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取View.
                     * @return ViewName View.
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置View.
                     * @param _viewName View.
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取Whether the logical relationship between rules is AND.
                     * @return IsUnionRule Whether the logical relationship between rules is AND.
                     * 
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置Whether the logical relationship between rules is AND.
                     * @param _isUnionRule Whether the logical relationship between rules is AND.
                     * 
                     */
                    void SetIsUnionRule(const int64_t& _isUnionRule);

                    /**
                     * 判断参数 IsUnionRule 是否已赋值
                     * @return IsUnionRule 是否已赋值
                     * 
                     */
                    bool IsUnionRuleHasBeenSet() const;

                private:

                    /**
                     * Metric alarm rules.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<Condition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * Event alarm rules.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<EventCondition> m_eventConditions;
                    bool m_eventConditionsHasBeenSet;

                    /**
                     * The associated alarm policy groups.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<PolicyGroup> m_policyGroups;
                    bool m_policyGroupsHasBeenSet;

                    /**
                     * Template-based policy group ID.
                     */
                    int64_t m_groupID;
                    bool m_groupIDHasBeenSet;

                    /**
                     * Template-based policy group name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Creation time.
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * UIN of the last modifier.
                     */
                    int64_t m_lastEditUin;
                    bool m_lastEditUinHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Update time.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * View.
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * Whether the logical relationship between rules is AND.
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_TEMPLATEGROUP_H_
