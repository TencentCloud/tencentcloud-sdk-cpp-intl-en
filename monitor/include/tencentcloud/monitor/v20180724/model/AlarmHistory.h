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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMHISTORY_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/InstanceGroups.h>
#include <tencentcloud/monitor/v20180724/model/AlarmHistoryMetric.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Alarm record data
                */
                class AlarmHistory : public AbstractModel
                {
                public:
                    AlarmHistory();
                    ~AlarmHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm record ID
                     * @return AlarmId Alarm record ID
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置Alarm record ID
                     * @param _alarmId Alarm record ID
                     * 
                     */
                    void SetAlarmId(const std::string& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     * 
                     */
                    bool AlarmIdHasBeenSet() const;

                    /**
                     * 获取Monitor type
                     * @return MonitorType Monitor type
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置Monitor type
                     * @param _monitorType Monitor type
                     * 
                     */
                    void SetMonitorType(const std::string& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取Policy type
                     * @return Namespace Policy type
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Policy type
                     * @param _namespace Policy type
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Alarm object
                     * @return AlarmObject Alarm object
                     * 
                     */
                    std::string GetAlarmObject() const;

                    /**
                     * 设置Alarm object
                     * @param _alarmObject Alarm object
                     * 
                     */
                    void SetAlarmObject(const std::string& _alarmObject);

                    /**
                     * 判断参数 AlarmObject 是否已赋值
                     * @return AlarmObject 是否已赋值
                     * 
                     */
                    bool AlarmObjectHasBeenSet() const;

                    /**
                     * 获取Alarm content
                     * @return Content Alarm content
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Alarm content
                     * @param _content Alarm content
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Timestamp of the first occurrence
                     * @return FirstOccurTime Timestamp of the first occurrence
                     * 
                     */
                    int64_t GetFirstOccurTime() const;

                    /**
                     * 设置Timestamp of the first occurrence
                     * @param _firstOccurTime Timestamp of the first occurrence
                     * 
                     */
                    void SetFirstOccurTime(const int64_t& _firstOccurTime);

                    /**
                     * 判断参数 FirstOccurTime 是否已赋值
                     * @return FirstOccurTime 是否已赋值
                     * 
                     */
                    bool FirstOccurTimeHasBeenSet() const;

                    /**
                     * 获取Timestamp of the last occurrence
                     * @return LastOccurTime Timestamp of the last occurrence
                     * 
                     */
                    int64_t GetLastOccurTime() const;

                    /**
                     * 设置Timestamp of the last occurrence
                     * @param _lastOccurTime Timestamp of the last occurrence
                     * 
                     */
                    void SetLastOccurTime(const int64_t& _lastOccurTime);

                    /**
                     * 判断参数 LastOccurTime 是否已赋值
                     * @return LastOccurTime 是否已赋值
                     * 
                     */
                    bool LastOccurTimeHasBeenSet() const;

                    /**
                     * 获取Alarm status. Valid values: ALARM (not resolved), OK (resolved), NO_CONF (expired), NO_DATA (insufficient data)
                     * @return AlarmStatus Alarm status. Valid values: ALARM (not resolved), OK (resolved), NO_CONF (expired), NO_DATA (insufficient data)
                     * 
                     */
                    std::string GetAlarmStatus() const;

                    /**
                     * 设置Alarm status. Valid values: ALARM (not resolved), OK (resolved), NO_CONF (expired), NO_DATA (insufficient data)
                     * @param _alarmStatus Alarm status. Valid values: ALARM (not resolved), OK (resolved), NO_CONF (expired), NO_DATA (insufficient data)
                     * 
                     */
                    void SetAlarmStatus(const std::string& _alarmStatus);

                    /**
                     * 判断参数 AlarmStatus 是否已赋值
                     * @return AlarmStatus 是否已赋值
                     * 
                     */
                    bool AlarmStatusHasBeenSet() const;

                    /**
                     * 获取Alarm policy ID
                     * @return PolicyId Alarm policy ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Alarm policy ID
                     * @param _policyId Alarm policy ID
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Policy name
                     * @return PolicyName Policy name
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name
                     * @param _policyName Policy name
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取VPC of alarm object for basic product alarm
                     * @return VPC VPC of alarm object for basic product alarm
                     * 
                     */
                    std::string GetVPC() const;

                    /**
                     * 设置VPC of alarm object for basic product alarm
                     * @param _vPC VPC of alarm object for basic product alarm
                     * 
                     */
                    void SetVPC(const std::string& _vPC);

                    /**
                     * 判断参数 VPC 是否已赋值
                     * @return VPC 是否已赋值
                     * 
                     */
                    bool VPCHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Project name
                     * @return ProjectName Project name
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name
                     * @param _projectName Project name
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Instance group of alarm object
                     * @return InstanceGroup Instance group of alarm object
                     * 
                     */
                    std::vector<InstanceGroups> GetInstanceGroup() const;

                    /**
                     * 设置Instance group of alarm object
                     * @param _instanceGroup Instance group of alarm object
                     * 
                     */
                    void SetInstanceGroup(const std::vector<InstanceGroups>& _instanceGroup);

                    /**
                     * 判断参数 InstanceGroup 是否已赋值
                     * @return InstanceGroup 是否已赋值
                     * 
                     */
                    bool InstanceGroupHasBeenSet() const;

                    /**
                     * 获取Recipient list
                     * @return ReceiverUids Recipient list
                     * 
                     */
                    std::vector<int64_t> GetReceiverUids() const;

                    /**
                     * 设置Recipient list
                     * @param _receiverUids Recipient list
                     * 
                     */
                    void SetReceiverUids(const std::vector<int64_t>& _receiverUids);

                    /**
                     * 判断参数 ReceiverUids 是否已赋值
                     * @return ReceiverUids 是否已赋值
                     * 
                     */
                    bool ReceiverUidsHasBeenSet() const;

                    /**
                     * 获取Recipient group list
                     * @return ReceiverGroups Recipient group list
                     * 
                     */
                    std::vector<int64_t> GetReceiverGroups() const;

                    /**
                     * 设置Recipient group list
                     * @param _receiverGroups Recipient group list
                     * 
                     */
                    void SetReceiverGroups(const std::vector<int64_t>& _receiverGroups);

                    /**
                     * 判断参数 ReceiverGroups 是否已赋值
                     * @return ReceiverGroups 是否已赋值
                     * 
                     */
                    bool ReceiverGroupsHasBeenSet() const;

                    /**
                     * 获取Alarm channel list. Valid values: SMS (SMS), EMAIL (email), CALL (phone), WECHAT (WeChat)
                     * @return NoticeWays Alarm channel list. Valid values: SMS (SMS), EMAIL (email), CALL (phone), WECHAT (WeChat)
                     * 
                     */
                    std::vector<std::string> GetNoticeWays() const;

                    /**
                     * 设置Alarm channel list. Valid values: SMS (SMS), EMAIL (email), CALL (phone), WECHAT (WeChat)
                     * @param _noticeWays Alarm channel list. Valid values: SMS (SMS), EMAIL (email), CALL (phone), WECHAT (WeChat)
                     * 
                     */
                    void SetNoticeWays(const std::vector<std::string>& _noticeWays);

                    /**
                     * 判断参数 NoticeWays 是否已赋值
                     * @return NoticeWays 是否已赋值
                     * 
                     */
                    bool NoticeWaysHasBeenSet() const;

                    /**
                     * 获取Alarm policy ID, which can be used when you call APIs ([BindingPolicyObject](https://intl.cloud.tencent.com/document/product/248/40421?from_cn_redirect=1), [UnBindingAllPolicyObject](https://intl.cloud.tencent.com/document/product/248/40568?from_cn_redirect=1), [UnBindingPolicyObject](https://intl.cloud.tencent.com/document/product/248/40567?from_cn_redirect=1)) to bind/unbind instances or instance groups to/from an alarm policy
                     * @return OriginId Alarm policy ID, which can be used when you call APIs ([BindingPolicyObject](https://intl.cloud.tencent.com/document/product/248/40421?from_cn_redirect=1), [UnBindingAllPolicyObject](https://intl.cloud.tencent.com/document/product/248/40568?from_cn_redirect=1), [UnBindingPolicyObject](https://intl.cloud.tencent.com/document/product/248/40567?from_cn_redirect=1)) to bind/unbind instances or instance groups to/from an alarm policy
                     * 
                     */
                    std::string GetOriginId() const;

                    /**
                     * 设置Alarm policy ID, which can be used when you call APIs ([BindingPolicyObject](https://intl.cloud.tencent.com/document/product/248/40421?from_cn_redirect=1), [UnBindingAllPolicyObject](https://intl.cloud.tencent.com/document/product/248/40568?from_cn_redirect=1), [UnBindingPolicyObject](https://intl.cloud.tencent.com/document/product/248/40567?from_cn_redirect=1)) to bind/unbind instances or instance groups to/from an alarm policy
                     * @param _originId Alarm policy ID, which can be used when you call APIs ([BindingPolicyObject](https://intl.cloud.tencent.com/document/product/248/40421?from_cn_redirect=1), [UnBindingAllPolicyObject](https://intl.cloud.tencent.com/document/product/248/40568?from_cn_redirect=1), [UnBindingPolicyObject](https://intl.cloud.tencent.com/document/product/248/40567?from_cn_redirect=1)) to bind/unbind instances or instance groups to/from an alarm policy
                     * 
                     */
                    void SetOriginId(const std::string& _originId);

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     * 
                     */
                    bool OriginIdHasBeenSet() const;

                    /**
                     * 获取Alarm type
                     * @return AlarmType Alarm type
                     * 
                     */
                    std::string GetAlarmType() const;

                    /**
                     * 设置Alarm type
                     * @param _alarmType Alarm type
                     * 
                     */
                    void SetAlarmType(const std::string& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取Event ID
                     * @return EventId Event ID
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置Event ID
                     * @param _eventId Event ID
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Whether the policy exists. Valid values: 0 (no), 1 (yes)
                     * @return PolicyExists Whether the policy exists. Valid values: 0 (no), 1 (yes)
                     * 
                     */
                    int64_t GetPolicyExists() const;

                    /**
                     * 设置Whether the policy exists. Valid values: 0 (no), 1 (yes)
                     * @param _policyExists Whether the policy exists. Valid values: 0 (no), 1 (yes)
                     * 
                     */
                    void SetPolicyExists(const int64_t& _policyExists);

                    /**
                     * 判断参数 PolicyExists 是否已赋值
                     * @return PolicyExists 是否已赋值
                     * 
                     */
                    bool PolicyExistsHasBeenSet() const;

                    /**
                     * 获取Metric information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MetricsInfo Metric information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AlarmHistoryMetric> GetMetricsInfo() const;

                    /**
                     * 设置Metric information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _metricsInfo Metric information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMetricsInfo(const std::vector<AlarmHistoryMetric>& _metricsInfo);

                    /**
                     * 判断参数 MetricsInfo 是否已赋值
                     * @return MetricsInfo 是否已赋值
                     * 
                     */
                    bool MetricsInfoHasBeenSet() const;

                    /**
                     * 获取Dimension information of an instance that triggered alarms.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Dimensions Dimension information of an instance that triggered alarms.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置Dimension information of an instance that triggered alarms.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _dimensions Dimension information of an instance that triggered alarms.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDimensions(const std::string& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                private:

                    /**
                     * Alarm record ID
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * Monitor type
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * Policy type
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Alarm object
                     */
                    std::string m_alarmObject;
                    bool m_alarmObjectHasBeenSet;

                    /**
                     * Alarm content
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Timestamp of the first occurrence
                     */
                    int64_t m_firstOccurTime;
                    bool m_firstOccurTimeHasBeenSet;

                    /**
                     * Timestamp of the last occurrence
                     */
                    int64_t m_lastOccurTime;
                    bool m_lastOccurTimeHasBeenSet;

                    /**
                     * Alarm status. Valid values: ALARM (not resolved), OK (resolved), NO_CONF (expired), NO_DATA (insufficient data)
                     */
                    std::string m_alarmStatus;
                    bool m_alarmStatusHasBeenSet;

                    /**
                     * Alarm policy ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * VPC of alarm object for basic product alarm
                     */
                    std::string m_vPC;
                    bool m_vPCHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project name
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Instance group of alarm object
                     */
                    std::vector<InstanceGroups> m_instanceGroup;
                    bool m_instanceGroupHasBeenSet;

                    /**
                     * Recipient list
                     */
                    std::vector<int64_t> m_receiverUids;
                    bool m_receiverUidsHasBeenSet;

                    /**
                     * Recipient group list
                     */
                    std::vector<int64_t> m_receiverGroups;
                    bool m_receiverGroupsHasBeenSet;

                    /**
                     * Alarm channel list. Valid values: SMS (SMS), EMAIL (email), CALL (phone), WECHAT (WeChat)
                     */
                    std::vector<std::string> m_noticeWays;
                    bool m_noticeWaysHasBeenSet;

                    /**
                     * Alarm policy ID, which can be used when you call APIs ([BindingPolicyObject](https://intl.cloud.tencent.com/document/product/248/40421?from_cn_redirect=1), [UnBindingAllPolicyObject](https://intl.cloud.tencent.com/document/product/248/40568?from_cn_redirect=1), [UnBindingPolicyObject](https://intl.cloud.tencent.com/document/product/248/40567?from_cn_redirect=1)) to bind/unbind instances or instance groups to/from an alarm policy
                     */
                    std::string m_originId;
                    bool m_originIdHasBeenSet;

                    /**
                     * Alarm type
                     */
                    std::string m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * Event ID
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Whether the policy exists. Valid values: 0 (no), 1 (yes)
                     */
                    int64_t m_policyExists;
                    bool m_policyExistsHasBeenSet;

                    /**
                     * Metric information
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<AlarmHistoryMetric> m_metricsInfo;
                    bool m_metricsInfoHasBeenSet;

                    /**
                     * Dimension information of an instance that triggered alarms.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMHISTORY_H_
