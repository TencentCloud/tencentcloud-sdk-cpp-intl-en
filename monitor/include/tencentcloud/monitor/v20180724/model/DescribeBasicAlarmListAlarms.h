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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASICALARMLISTALARMS_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASICALARMLISTALARMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/InstanceGroup.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Alarms returned by DescribeBasicAlarmList
                */
                class DescribeBasicAlarmListAlarms : public AbstractModel
                {
                public:
                    DescribeBasicAlarmListAlarms();
                    ~DescribeBasicAlarmListAlarms() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm ID.
                     * @return Id Alarm ID.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Alarm ID.
                     * @param _id Alarm ID.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Project ID.
Note: This field may return null, indicating that no valid value was found.
                     * @return ProjectId Project ID.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
Note: This field may return null, indicating that no valid value was found.
                     * @param _projectId Project ID.
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取Project name.
Note: This field may return null, indicating that no valid value was found.
                     * @return ProjectName Project name.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name.
Note: This field may return null, indicating that no valid value was found.
                     * @param _projectName Project name.
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取Alarm status ID. Valid values: 0 (not resolved), 1 (resolved), 2/3/5 (insufficient data), 4 (expired)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status Alarm status ID. Valid values: 0 (not resolved), 1 (resolved), 2/3/5 (insufficient data), 4 (expired)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Alarm status ID. Valid values: 0 (not resolved), 1 (resolved), 2/3/5 (insufficient data), 4 (expired)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _status Alarm status ID. Valid values: 0 (not resolved), 1 (resolved), 2/3/5 (insufficient data), 4 (expired)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Alarm status. Valid values: ALARM (not resolved), OK (resolved), NO_DATA (insufficient data), NO_CONF (expired)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AlarmStatus Alarm status. Valid values: ALARM (not resolved), OK (resolved), NO_DATA (insufficient data), NO_CONF (expired)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAlarmStatus() const;

                    /**
                     * 设置Alarm status. Valid values: ALARM (not resolved), OK (resolved), NO_DATA (insufficient data), NO_CONF (expired)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _alarmStatus Alarm status. Valid values: ALARM (not resolved), OK (resolved), NO_DATA (insufficient data), NO_CONF (expired)
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Policy group ID.
Note: This field may return null, indicating that no valid value was found.
                     * @return GroupId Policy group ID.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置Policy group ID.
Note: This field may return null, indicating that no valid value was found.
                     * @param _groupId Policy group ID.
Note: This field may return null, indicating that no valid value was found.
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
Note: This field may return null, indicating that no valid value was found.
                     * @return GroupName Policy group name.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Policy group name.
Note: This field may return null, indicating that no valid value was found.
                     * @param _groupName Policy group name.
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取Occurrence time.
Note: This field may return null, indicating that no valid value was found.
                     * @return FirstOccurTime Occurrence time.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetFirstOccurTime() const;

                    /**
                     * 设置Occurrence time.
Note: This field may return null, indicating that no valid value was found.
                     * @param _firstOccurTime Occurrence time.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetFirstOccurTime(const std::string& _firstOccurTime);

                    /**
                     * 判断参数 FirstOccurTime 是否已赋值
                     * @return FirstOccurTime 是否已赋值
                     * 
                     */
                    bool FirstOccurTimeHasBeenSet() const;

                    /**
                     * 获取Duration in seconds.
Note: This field may return null, indicating that no valid value was found.
                     * @return Duration Duration in seconds.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Duration in seconds.
Note: This field may return null, indicating that no valid value was found.
                     * @param _duration Duration in seconds.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取End time.
Note: This field may return null, indicating that no valid value was found.
                     * @return LastOccurTime End time.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetLastOccurTime() const;

                    /**
                     * 设置End time.
Note: This field may return null, indicating that no valid value was found.
                     * @param _lastOccurTime End time.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetLastOccurTime(const std::string& _lastOccurTime);

                    /**
                     * 判断参数 LastOccurTime 是否已赋值
                     * @return LastOccurTime 是否已赋值
                     * 
                     */
                    bool LastOccurTimeHasBeenSet() const;

                    /**
                     * 获取Alarm content.
Note: This field may return null, indicating that no valid value was found.
                     * @return Content Alarm content.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Alarm content.
Note: This field may return null, indicating that no valid value was found.
                     * @param _content Alarm content.
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取Alarm object.
Note: This field may return null, indicating that no valid value was found.
                     * @return ObjName Alarm object.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetObjName() const;

                    /**
                     * 设置Alarm object.
Note: This field may return null, indicating that no valid value was found.
                     * @param _objName Alarm object.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetObjName(const std::string& _objName);

                    /**
                     * 判断参数 ObjName 是否已赋值
                     * @return ObjName 是否已赋值
                     * 
                     */
                    bool ObjNameHasBeenSet() const;

                    /**
                     * 获取Alarm object ID.
Note: This field may return null, indicating that no valid value was found.
                     * @return ObjId Alarm object ID.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetObjId() const;

                    /**
                     * 设置Alarm object ID.
Note: This field may return null, indicating that no valid value was found.
                     * @param _objId Alarm object ID.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetObjId(const std::string& _objId);

                    /**
                     * 判断参数 ObjId 是否已赋值
                     * @return ObjId 是否已赋值
                     * 
                     */
                    bool ObjIdHasBeenSet() const;

                    /**
                     * 获取Policy type.
Note: This field may return null, indicating that no valid value was found.
                     * @return ViewName Policy type.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置Policy type.
Note: This field may return null, indicating that no valid value was found.
                     * @param _viewName Policy type.
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取VPC, which is unique to CVM.
Note: This field may return null, indicating that no valid value was found.
                     * @return Vpc VPC, which is unique to CVM.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetVpc() const;

                    /**
                     * 设置VPC, which is unique to CVM.
Note: This field may return null, indicating that no valid value was found.
                     * @param _vpc VPC, which is unique to CVM.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetVpc(const std::string& _vpc);

                    /**
                     * 判断参数 Vpc 是否已赋值
                     * @return Vpc 是否已赋值
                     * 
                     */
                    bool VpcHasBeenSet() const;

                    /**
                     * 获取Metric ID.
Note: This field may return null, indicating that no valid value was found.
                     * @return MetricId Metric ID.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetMetricId() const;

                    /**
                     * 设置Metric ID.
Note: This field may return null, indicating that no valid value was found.
                     * @param _metricId Metric ID.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetMetricId(const int64_t& _metricId);

                    /**
                     * 判断参数 MetricId 是否已赋值
                     * @return MetricId 是否已赋值
                     * 
                     */
                    bool MetricIdHasBeenSet() const;

                    /**
                     * 获取Metric name.
Note: This field may return null, indicating that no valid value was found.
                     * @return MetricName Metric name.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name.
Note: This field may return null, indicating that no valid value was found.
                     * @param _metricName Metric name.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Alarm type. The value 0 indicates metric alarms. The value 2 indicates product event alarms. The value 3 indicates platform event alarms.
Note: This field may return null, indicating that no valid value was found.
                     * @return AlarmType Alarm type. The value 0 indicates metric alarms. The value 2 indicates product event alarms. The value 3 indicates platform event alarms.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetAlarmType() const;

                    /**
                     * 设置Alarm type. The value 0 indicates metric alarms. The value 2 indicates product event alarms. The value 3 indicates platform event alarms.
Note: This field may return null, indicating that no valid value was found.
                     * @param _alarmType Alarm type. The value 0 indicates metric alarms. The value 2 indicates product event alarms. The value 3 indicates platform event alarms.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetAlarmType(const int64_t& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取Region.
Note: This field may return null, indicating that no valid value was found.
                     * @return Region Region.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
Note: This field may return null, indicating that no valid value was found.
                     * @param _region Region.
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取Dimensions of an alarm object.
Note: This field may return null, indicating that no valid value was found.
                     * @return Dimensions Dimensions of an alarm object.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置Dimensions of an alarm object.
Note: This field may return null, indicating that no valid value was found.
                     * @param _dimensions Dimensions of an alarm object.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetDimensions(const std::string& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取Notification method.
Note: This field may return null, indicating that no valid value was found.
                     * @return NotifyWay Notification method.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::vector<std::string> GetNotifyWay() const;

                    /**
                     * 设置Notification method.
Note: This field may return null, indicating that no valid value was found.
                     * @param _notifyWay Notification method.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetNotifyWay(const std::vector<std::string>& _notifyWay);

                    /**
                     * 判断参数 NotifyWay 是否已赋值
                     * @return NotifyWay 是否已赋值
                     * 
                     */
                    bool NotifyWayHasBeenSet() const;

                    /**
                     * 获取Instance group information.
Note: This field may return null, indicating that no valid value was found.
                     * @return InstanceGroup Instance group information.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::vector<InstanceGroup> GetInstanceGroup() const;

                    /**
                     * 设置Instance group information.
Note: This field may return null, indicating that no valid value was found.
                     * @param _instanceGroup Instance group information.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetInstanceGroup(const std::vector<InstanceGroup>& _instanceGroup);

                    /**
                     * 判断参数 InstanceGroup 是否已赋值
                     * @return InstanceGroup 是否已赋值
                     * 
                     */
                    bool InstanceGroupHasBeenSet() const;

                private:

                    /**
                     * Alarm ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Project ID.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project name.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Alarm status ID. Valid values: 0 (not resolved), 1 (resolved), 2/3/5 (insufficient data), 4 (expired)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Alarm status. Valid values: ALARM (not resolved), OK (resolved), NO_DATA (insufficient data), NO_CONF (expired)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_alarmStatus;
                    bool m_alarmStatusHasBeenSet;

                    /**
                     * Policy group ID.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Policy group name.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Occurrence time.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_firstOccurTime;
                    bool m_firstOccurTimeHasBeenSet;

                    /**
                     * Duration in seconds.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * End time.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_lastOccurTime;
                    bool m_lastOccurTimeHasBeenSet;

                    /**
                     * Alarm content.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Alarm object.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_objName;
                    bool m_objNameHasBeenSet;

                    /**
                     * Alarm object ID.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_objId;
                    bool m_objIdHasBeenSet;

                    /**
                     * Policy type.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * VPC, which is unique to CVM.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * Metric ID.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_metricId;
                    bool m_metricIdHasBeenSet;

                    /**
                     * Metric name.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Alarm type. The value 0 indicates metric alarms. The value 2 indicates product event alarms. The value 3 indicates platform event alarms.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * Region.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Dimensions of an alarm object.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * Notification method.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_notifyWay;
                    bool m_notifyWayHasBeenSet;

                    /**
                     * Instance group information.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<InstanceGroup> m_instanceGroup;
                    bool m_instanceGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBASICALARMLISTALARMS_H_
