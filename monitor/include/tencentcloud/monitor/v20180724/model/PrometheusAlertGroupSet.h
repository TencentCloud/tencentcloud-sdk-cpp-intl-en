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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTGROUPSET_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTGROUPSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAlertCustomReceiver.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAlertGroupRuleSet.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus alert rule groups information.
                */
                class PrometheusAlertGroupSet : public AbstractModel
                {
                public:
                    PrometheusAlertGroupSet();
                    ~PrometheusAlertGroupSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alert group ID. must match the regular expression `alert-[a-z0-9]{8}`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupId Alert group ID. must match the regular expression `alert-[a-z0-9]{8}`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Alert group ID. must match the regular expression `alert-[a-z0-9]{8}`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _groupId Alert group ID. must match the regular expression `alert-[a-z0-9]{8}`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Alert group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupName Alert group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Alert group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _groupName Alert group name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Alert template ID of tencent cloud observability platform (tcop). returns the converted notice ID of the Alert template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AMPReceivers Alert template ID of tencent cloud observability platform (tcop). returns the converted notice ID of the Alert template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAMPReceivers() const;

                    /**
                     * 设置Alert template ID of tencent cloud observability platform (tcop). returns the converted notice ID of the Alert template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aMPReceivers Alert template ID of tencent cloud observability platform (tcop). returns the converted notice ID of the Alert template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAMPReceivers(const std::vector<std::string>& _aMPReceivers);

                    /**
                     * 判断参数 AMPReceivers 是否已赋值
                     * @return AMPReceivers 是否已赋值
                     * 
                     */
                    bool AMPReceiversHasBeenSet() const;

                    /**
                     * 获取Custom Alert template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CustomReceiver Custom Alert template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PrometheusAlertCustomReceiver GetCustomReceiver() const;

                    /**
                     * 设置Custom Alert template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _customReceiver Custom Alert template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCustomReceiver(const PrometheusAlertCustomReceiver& _customReceiver);

                    /**
                     * 判断参数 CustomReceiver 是否已赋值
                     * @return CustomReceiver 是否已赋值
                     * 
                     */
                    bool CustomReceiverHasBeenSet() const;

                    /**
                     * 获取Alert notification interval.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RepeatInterval Alert notification interval.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRepeatInterval() const;

                    /**
                     * 设置Alert notification interval.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _repeatInterval Alert notification interval.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRepeatInterval(const std::string& _repeatInterval);

                    /**
                     * 判断参数 RepeatInterval 是否已赋值
                     * @return RepeatInterval 是否已赋值
                     * 
                     */
                    bool RepeatIntervalHasBeenSet() const;

                    /**
                     * 获取If the Alert group is created via template, returns the template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TemplateId If the Alert group is created via template, returns the template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置If the Alert group is created via template, returns the template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _templateId If the Alert group is created via template, returns the template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Alert rule details within the group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Rules Alert rule details within the group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<PrometheusAlertGroupRuleSet> GetRules() const;

                    /**
                     * 设置Alert rule details within the group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rules Alert rule details within the group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRules(const std::vector<PrometheusAlertGroupRuleSet>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取Group creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatedAt Group creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Group creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createdAt Group creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Group update time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedAt Group update time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Group update time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updatedAt Group update time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * Alert group ID. must match the regular expression `alert-[a-z0-9]{8}`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Alert group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Alert template ID of tencent cloud observability platform (tcop). returns the converted notice ID of the Alert template.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_aMPReceivers;
                    bool m_aMPReceiversHasBeenSet;

                    /**
                     * Custom Alert template.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PrometheusAlertCustomReceiver m_customReceiver;
                    bool m_customReceiverHasBeenSet;

                    /**
                     * Alert notification interval.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_repeatInterval;
                    bool m_repeatIntervalHasBeenSet;

                    /**
                     * If the Alert group is created via template, returns the template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Alert rule details within the group.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusAlertGroupRuleSet> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * Group creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Group update time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSALERTGROUPSET_H_
