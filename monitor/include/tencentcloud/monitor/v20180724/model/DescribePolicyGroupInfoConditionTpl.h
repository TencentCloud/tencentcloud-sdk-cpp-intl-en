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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFOCONDITIONTPL_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFOCONDITIONTPL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Template-based policy group information output by the policy query
                */
                class DescribePolicyGroupInfoConditionTpl : public AbstractModel
                {
                public:
                    DescribePolicyGroupInfoConditionTpl();
                    ~DescribePolicyGroupInfoConditionTpl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy group ID.
                     * @return GroupId Policy group ID.
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置Policy group ID.
                     * @param _groupId Policy group ID.
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Policy group name.
                     * @return GroupName Policy group name.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Policy group name.
                     * @param _groupName Policy group name.
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
                     * 获取Policy type.
                     * @return ViewName Policy type.
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置Policy type.
                     * @param _viewName Policy type.
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
                     * 获取Policy group remarks.
                     * @return Remark Policy group remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Policy group remarks.
                     * @param _remark Policy group remarks.
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
                     * 获取Uin that was last edited.
                     * @return LastEditUin Uin that was last edited.
                     * 
                     */
                    std::string GetLastEditUin() const;

                    /**
                     * 设置Uin that was last edited.
                     * @param _lastEditUin Uin that was last edited.
                     * 
                     */
                    void SetLastEditUin(const std::string& _lastEditUin);

                    /**
                     * 判断参数 LastEditUin 是否已赋值
                     * @return LastEditUin 是否已赋值
                     * 
                     */
                    bool LastEditUinHasBeenSet() const;

                    /**
                     * 获取Update time.
Note: This field may return null, indicating that no valid value was found.
                     * @return UpdateTime Update time.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Update time.
Note: This field may return null, indicating that no valid value was found.
                     * @param _updateTime Update time.
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取Creation time.
Note: This field may return null, indicating that no valid value was found.
                     * @return InsertTime Creation time.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置Creation time.
Note: This field may return null, indicating that no valid value was found.
                     * @param _insertTime Creation time.
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取Whether the 'AND' rule is used.
Note: This field may return null, indicating that no valid value was found.
                     * @return IsUnionRule Whether the 'AND' rule is used.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetIsUnionRule() const;

                    /**
                     * 设置Whether the 'AND' rule is used.
Note: This field may return null, indicating that no valid value was found.
                     * @param _isUnionRule Whether the 'AND' rule is used.
Note: This field may return null, indicating that no valid value was found.
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
                     * Policy group ID.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Policy group name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Policy type.
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * Policy group remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Uin that was last edited.
                     */
                    std::string m_lastEditUin;
                    bool m_lastEditUinHasBeenSet;

                    /**
                     * Update time.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * Whether the 'AND' rule is used.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_isUnionRule;
                    bool m_isUnionRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFOCONDITIONTPL_H_
