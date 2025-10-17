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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSALERTGROUPREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSALERTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UpdatePrometheusAlertGroup request structure.
                */
                class UpdatePrometheusAlertGroupRequest : public AbstractModel
                {
                public:
                    UpdatePrometheusAlertGroupRequest();
                    ~UpdatePrometheusAlertGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取prometheus instance ID.
                     * @return InstanceId prometheus instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置prometheus instance ID.
                     * @param _instanceId prometheus instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Alert group ID, such as alert-xxxx.
                     * @return GroupId Alert group ID, such as alert-xxxx.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Alert group ID, such as alert-xxxx.
                     * @param _groupId Alert group ID, such as alert-xxxx.
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
                     * 获取Alert group name. not allowed to have the same name as other alert groups.
                     * @return GroupName Alert group name. not allowed to have the same name as other alert groups.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Alert group name. not allowed to have the same name as other alert groups.
                     * @param _groupName Alert group name. not allowed to have the same name as other alert groups.
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
                     * 获取Alert group status.
2 - enable.
3 - disabled.
Specifies the Alert rule status under the `Rules` field to be overwritten when not empty.
                     * @return GroupState Alert group status.
2 - enable.
3 - disabled.
Specifies the Alert rule status under the `Rules` field to be overwritten when not empty.
                     * 
                     */
                    int64_t GetGroupState() const;

                    /**
                     * 设置Alert group status.
2 - enable.
3 - disabled.
Specifies the Alert rule status under the `Rules` field to be overwritten when not empty.
                     * @param _groupState Alert group status.
2 - enable.
3 - disabled.
Specifies the Alert rule status under the `Rules` field to be overwritten when not empty.
                     * 
                     */
                    void SetGroupState(const int64_t& _groupState);

                    /**
                     * 判断参数 GroupState 是否已赋值
                     * @return GroupState 是否已赋值
                     * 
                     */
                    bool GroupStateHasBeenSet() const;

                    /**
                     * 获取Alert notification template ID list of tencent cloud observability platform, such as Consumer-xxxx or notice-xxxx.
                     * @return AMPReceivers Alert notification template ID list of tencent cloud observability platform, such as Consumer-xxxx or notice-xxxx.
                     * 
                     */
                    std::vector<std::string> GetAMPReceivers() const;

                    /**
                     * 设置Alert notification template ID list of tencent cloud observability platform, such as Consumer-xxxx or notice-xxxx.
                     * @param _aMPReceivers Alert notification template ID list of tencent cloud observability platform, such as Consumer-xxxx or notice-xxxx.
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
                     * 获取Specifies the custom Alert notification template.
                     * @return CustomReceiver Specifies the custom Alert notification template.
                     * 
                     */
                    PrometheusAlertCustomReceiver GetCustomReceiver() const;

                    /**
                     * 设置Specifies the custom Alert notification template.
                     * @param _customReceiver Specifies the custom Alert notification template.
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
                     * 获取Alert notification cycle (convergence time). defaults to 1h if left empty.
                     * @return RepeatInterval Alert notification cycle (convergence time). defaults to 1h if left empty.
                     * 
                     */
                    std::string GetRepeatInterval() const;

                    /**
                     * 设置Alert notification cycle (convergence time). defaults to 1h if left empty.
                     * @param _repeatInterval Alert notification cycle (convergence time). defaults to 1h if left empty.
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
                     * 获取Specifies the Alert rule list to be created.
                     * @return Rules Specifies the Alert rule list to be created.
                     * 
                     */
                    std::vector<PrometheusAlertGroupRuleSet> GetRules() const;

                    /**
                     * 设置Specifies the Alert rule list to be created.
                     * @param _rules Specifies the Alert rule list to be created.
                     * 
                     */
                    void SetRules(const std::vector<PrometheusAlertGroupRuleSet>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * prometheus instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Alert group ID, such as alert-xxxx.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Alert group name. not allowed to have the same name as other alert groups.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Alert group status.
2 - enable.
3 - disabled.
Specifies the Alert rule status under the `Rules` field to be overwritten when not empty.
                     */
                    int64_t m_groupState;
                    bool m_groupStateHasBeenSet;

                    /**
                     * Alert notification template ID list of tencent cloud observability platform, such as Consumer-xxxx or notice-xxxx.
                     */
                    std::vector<std::string> m_aMPReceivers;
                    bool m_aMPReceiversHasBeenSet;

                    /**
                     * Specifies the custom Alert notification template.
                     */
                    PrometheusAlertCustomReceiver m_customReceiver;
                    bool m_customReceiverHasBeenSet;

                    /**
                     * Alert notification cycle (convergence time). defaults to 1h if left empty.
                     */
                    std::string m_repeatInterval;
                    bool m_repeatIntervalHasBeenSet;

                    /**
                     * Specifies the Alert rule list to be created.
                     */
                    std::vector<PrometheusAlertGroupRuleSet> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSALERTGROUPREQUEST_H_
