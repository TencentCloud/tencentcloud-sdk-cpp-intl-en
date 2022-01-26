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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTEVENTS_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTEVENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListEventsDimensions.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListEventsGroupInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Events returned by the DescribeProductEventList API
                */
                class DescribeProductEventListEvents : public AbstractModel
                {
                public:
                    DescribeProductEventListEvents();
                    ~DescribeProductEventListEvents() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event ID.
Note: This field may return null, indicating that no valid value was found.
                     * @return EventId Event ID.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置Event ID.
Note: This field may return null, indicating that no valid value was found.
                     * @param EventId Event ID.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Event name in Chinese.
Note: This field may return null, indicating that no valid value was found.
                     * @return EventCName Event name in Chinese.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetEventCName() const;

                    /**
                     * 设置Event name in Chinese.
Note: This field may return null, indicating that no valid value was found.
                     * @param EventCName Event name in Chinese.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetEventCName(const std::string& _eventCName);

                    /**
                     * 判断参数 EventCName 是否已赋值
                     * @return EventCName 是否已赋值
                     */
                    bool EventCNameHasBeenSet() const;

                    /**
                     * 获取Event name in English.
Note: This field may return null, indicating that no valid value was found.
                     * @return EventEName Event name in English.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetEventEName() const;

                    /**
                     * 设置Event name in English.
Note: This field may return null, indicating that no valid value was found.
                     * @param EventEName Event name in English.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetEventEName(const std::string& _eventEName);

                    /**
                     * 判断参数 EventEName 是否已赋值
                     * @return EventEName 是否已赋值
                     */
                    bool EventENameHasBeenSet() const;

                    /**
                     * 获取Event name abbreviation.
Note: This field may return null, indicating that no valid value was found.
                     * @return EventName Event name abbreviation.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置Event name abbreviation.
Note: This field may return null, indicating that no valid value was found.
                     * @param EventName Event name abbreviation.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取Product name in Chinese.
Note: This field may return null, indicating that no valid value was found.
                     * @return ProductCName Product name in Chinese.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetProductCName() const;

                    /**
                     * 设置Product name in Chinese.
Note: This field may return null, indicating that no valid value was found.
                     * @param ProductCName Product name in Chinese.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetProductCName(const std::string& _productCName);

                    /**
                     * 判断参数 ProductCName 是否已赋值
                     * @return ProductCName 是否已赋值
                     */
                    bool ProductCNameHasBeenSet() const;

                    /**
                     * 获取Product name in English.
Note: This field may return null, indicating that no valid value was found.
                     * @return ProductEName Product name in English.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetProductEName() const;

                    /**
                     * 设置Product name in English.
Note: This field may return null, indicating that no valid value was found.
                     * @param ProductEName Product name in English.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetProductEName(const std::string& _productEName);

                    /**
                     * 判断参数 ProductEName 是否已赋值
                     * @return ProductEName 是否已赋值
                     */
                    bool ProductENameHasBeenSet() const;

                    /**
                     * 获取Product name abbreviation.
Note: This field may return null, indicating that no valid value was found.
                     * @return ProductName Product name abbreviation.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product name abbreviation.
Note: This field may return null, indicating that no valid value was found.
                     * @param ProductName Product name abbreviation.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Instance ID.
Note: This field may return null, indicating that no valid value was found.
                     * @return InstanceId Instance ID.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
Note: This field may return null, indicating that no valid value was found.
                     * @param InstanceId Instance ID.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name.
Note: This field may return null, indicating that no valid value was found.
                     * @return InstanceName Instance name.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
Note: This field may return null, indicating that no valid value was found.
                     * @param InstanceName Instance name.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Project ID.
Note: This field may return null, indicating that no valid value was found.
                     * @return ProjectId Project ID.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
Note: This field may return null, indicating that no valid value was found.
                     * @param ProjectId Project ID.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Region.
Note: This field may return null, indicating that no valid value was found.
                     * @return Region Region.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
Note: This field may return null, indicating that no valid value was found.
                     * @param Region Region.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Status.
Note: This field may return null, indicating that no valid value was found.
                     * @return Status Status.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status.
Note: This field may return null, indicating that no valid value was found.
                     * @param Status Status.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether to support alarms.
Note: This field may return null, indicating that no valid value was found.
                     * @return SupportAlarm Whether to support alarms.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t GetSupportAlarm() const;

                    /**
                     * 设置Whether to support alarms.
Note: This field may return null, indicating that no valid value was found.
                     * @param SupportAlarm Whether to support alarms.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetSupportAlarm(const int64_t& _supportAlarm);

                    /**
                     * 判断参数 SupportAlarm 是否已赋值
                     * @return SupportAlarm 是否已赋值
                     */
                    bool SupportAlarmHasBeenSet() const;

                    /**
                     * 获取Event type.
Note: This field may return null, indicating that no valid value was found.
                     * @return Type Event type.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Event type.
Note: This field may return null, indicating that no valid value was found.
                     * @param Type Event type.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Start time.
Note: This field may return null, indicating that no valid value was found.
                     * @return StartTime Start time.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time.
Note: This field may return null, indicating that no valid value was found.
                     * @param StartTime Start time.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Update time.
Note: This field may return null, indicating that no valid value was found.
                     * @return UpdateTime Update time.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Update time.
Note: This field may return null, indicating that no valid value was found.
                     * @param UpdateTime Update time.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Instance object information.
Note: This field may return null, indicating that no valid value was found.
                     * @return Dimensions Instance object information.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribeProductEventListEventsDimensions> GetDimensions() const;

                    /**
                     * 设置Instance object information.
Note: This field may return null, indicating that no valid value was found.
                     * @param Dimensions Instance object information.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetDimensions(const std::vector<DescribeProductEventListEventsDimensions>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取Additional information of the instance object.
Note: This field may return null, indicating that no valid value was found.
                     * @return AdditionMsg Additional information of the instance object.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribeProductEventListEventsDimensions> GetAdditionMsg() const;

                    /**
                     * 设置Additional information of the instance object.
Note: This field may return null, indicating that no valid value was found.
                     * @param AdditionMsg Additional information of the instance object.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetAdditionMsg(const std::vector<DescribeProductEventListEventsDimensions>& _additionMsg);

                    /**
                     * 判断参数 AdditionMsg 是否已赋值
                     * @return AdditionMsg 是否已赋值
                     */
                    bool AdditionMsgHasBeenSet() const;

                    /**
                     * 获取Whether to configure alarms.
Note: This field may return null, indicating that no valid value was found.
                     * @return IsAlarmConfig Whether to configure alarms.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t GetIsAlarmConfig() const;

                    /**
                     * 设置Whether to configure alarms.
Note: This field may return null, indicating that no valid value was found.
                     * @param IsAlarmConfig Whether to configure alarms.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetIsAlarmConfig(const int64_t& _isAlarmConfig);

                    /**
                     * 判断参数 IsAlarmConfig 是否已赋值
                     * @return IsAlarmConfig 是否已赋值
                     */
                    bool IsAlarmConfigHasBeenSet() const;

                    /**
                     * 获取Policy information.
Note: This field may return null, indicating that no valid value was found.
                     * @return GroupInfo Policy information.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribeProductEventListEventsGroupInfo> GetGroupInfo() const;

                    /**
                     * 设置Policy information.
Note: This field may return null, indicating that no valid value was found.
                     * @param GroupInfo Policy information.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetGroupInfo(const std::vector<DescribeProductEventListEventsGroupInfo>& _groupInfo);

                    /**
                     * 判断参数 GroupInfo 是否已赋值
                     * @return GroupInfo 是否已赋值
                     */
                    bool GroupInfoHasBeenSet() const;

                    /**
                     * 获取Display name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ViewName Display name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置Display name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param ViewName Display name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     */
                    bool ViewNameHasBeenSet() const;

                private:

                    /**
                     * Event ID.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Event name in Chinese.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_eventCName;
                    bool m_eventCNameHasBeenSet;

                    /**
                     * Event name in English.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_eventEName;
                    bool m_eventENameHasBeenSet;

                    /**
                     * Event name abbreviation.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Product name in Chinese.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_productCName;
                    bool m_productCNameHasBeenSet;

                    /**
                     * Product name in English.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_productEName;
                    bool m_productENameHasBeenSet;

                    /**
                     * Product name abbreviation.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Instance ID.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Project ID.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Region.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Status.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether to support alarms.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_supportAlarm;
                    bool m_supportAlarmHasBeenSet;

                    /**
                     * Event type.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Start time.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Update time.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Instance object information.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribeProductEventListEventsDimensions> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * Additional information of the instance object.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribeProductEventListEventsDimensions> m_additionMsg;
                    bool m_additionMsgHasBeenSet;

                    /**
                     * Whether to configure alarms.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_isAlarmConfig;
                    bool m_isAlarmConfigHasBeenSet;

                    /**
                     * Policy information.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribeProductEventListEventsGroupInfo> m_groupInfo;
                    bool m_groupInfoHasBeenSet;

                    /**
                     * Display name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTEVENTS_H_
