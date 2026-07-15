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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DLCDELIVERINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DLCDELIVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DlcInfo.h>
#include <tencentcloud/cls/v20201016/model/DlcFailHandle.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Submit DLC task configuration
                */
                class DlcDeliverInfo : public AbstractModel
                {
                public:
                    DlcDeliverInfo();
                    ~DlcDeliverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task id.</p>
                     * @return TaskId <p>Task id.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Task id.</p>
                     * @param _taskId <p>Task id.</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Account id.</p>
                     * @return Uin <p>Account id.</p>
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置<p>Account id.</p>
                     * @param _uin <p>Account id.</p>
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>Log topic id.</p>
                     * @return TopicId <p>Log topic id.</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Log topic id.</p>
                     * @param _topicId <p>Log topic id.</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>Task name.</p>
                     * @return Name <p>Task name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Task name.</p>
                     * @param _name <p>Task name.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Delivery Type, 0: real-time delivery, 1: history delivery</p>
                     * @return DeliverType <p>Delivery Type, 0: real-time delivery, 1: history delivery</p>
                     * 
                     */
                    uint64_t GetDeliverType() const;

                    /**
                     * 设置<p>Delivery Type, 0: real-time delivery, 1: history delivery</p>
                     * @param _deliverType <p>Delivery Type, 0: real-time delivery, 1: history delivery</p>
                     * 
                     */
                    void SetDeliverType(const uint64_t& _deliverType);

                    /**
                     * 判断参数 DeliverType 是否已赋值
                     * @return DeliverType 是否已赋值
                     * 
                     */
                    bool DeliverTypeHasBeenSet() const;

                    /**
                     * 获取<p>Delivery file size, in MB.</p>
                     * @return MaxSize <p>Delivery file size, in MB.</p>
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置<p>Delivery file size, in MB.</p>
                     * @param _maxSize <p>Delivery file size, in MB.</p>
                     * 
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取<p>Delivery interval in seconds</p>
                     * @return Interval <p>Delivery interval in seconds</p>
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置<p>Delivery interval in seconds</p>
                     * @param _interval <p>Delivery interval in seconds</p>
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>Start time of the delivery time range</p>
                     * @return StartTime <p>Start time of the delivery time range</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>Start time of the delivery time range</p>
                     * @param _startTime <p>Start time of the delivery time range</p>
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>End time of the delivery time range</p>
                     * @return EndTime <p>End time of the delivery time range</p>
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置<p>End time of the delivery time range</p>
                     * @param _endTime <p>End time of the delivery time range</p>
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>dlc configuration message</p>
                     * @return DlcInfo <p>dlc configuration message</p>
                     * 
                     */
                    DlcInfo GetDlcInfo() const;

                    /**
                     * 设置<p>dlc configuration message</p>
                     * @param _dlcInfo <p>dlc configuration message</p>
                     * 
                     */
                    void SetDlcInfo(const DlcInfo& _dlcInfo);

                    /**
                     * 判断参数 DlcInfo 是否已赋值
                     * @return DlcInfo 是否已赋值
                     * 
                     */
                    bool DlcInfoHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable delivery service log. 1 Disabled, 2 Enabled</p>
                     * @return HasServicesLog <p>Whether to enable delivery service log. 1 Disabled, 2 Enabled</p>
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置<p>Whether to enable delivery service log. 1 Disabled, 2 Enabled</p>
                     * @param _hasServicesLog <p>Whether to enable delivery service log. 1 Disabled, 2 Enabled</p>
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                    /**
                     * 获取<p>Task status.</p>
                     * @return Status <p>Task status.</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Task status.</p>
                     * @param _status <p>Task status.</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Task progress. Historic delivery tasks take effect.</p>
                     * @return Progress <p>Task progress. Historic delivery tasks take effect.</p>
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置<p>Task progress. Historic delivery tasks take effect.</p>
                     * @param _progress <p>Task progress. Historic delivery tasks take effect.</p>
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>Log topic type. 0: Standard topic, 1: Metric topic</p>
                     * @return BizType <p>Log topic type. 0: Standard topic, 1: Metric topic</p>
                     * 
                     */
                    uint64_t GetBizType() const;

                    /**
                     * 设置<p>Log topic type. 0: Standard topic, 1: Metric topic</p>
                     * @param _bizType <p>Log topic type. 0: Standard topic, 1: Metric topic</p>
                     * 
                     */
                    void SetBizType(const uint64_t& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取<p>Task creation time.</p>
                     * @return CreateTime <p>Task creation time.</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>Task creation time.</p>
                     * @param _createTime <p>Task creation time.</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Task last modified.</p>
                     * @return UpdateTime <p>Task last modified.</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>Task last modified.</p>
                     * @param _updateTime <p>Task last modified.</p>
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Auto-create dlc field</p><p>Default value: false</p><p>When there are additional fields in your log, the system will automatically ship them to DLC.</p>
                     * @return AutoCreateField <p>Auto-create dlc field</p><p>Default value: false</p><p>When there are additional fields in your log, the system will automatically ship them to DLC.</p>
                     * 
                     */
                    bool GetAutoCreateField() const;

                    /**
                     * 设置<p>Auto-create dlc field</p><p>Default value: false</p><p>When there are additional fields in your log, the system will automatically ship them to DLC.</p>
                     * @param _autoCreateField <p>Auto-create dlc field</p><p>Default value: false</p><p>When there are additional fields in your log, the system will automatically ship them to DLC.</p>
                     * 
                     */
                    void SetAutoCreateField(const bool& _autoCreateField);

                    /**
                     * 判断参数 AutoCreateField 是否已赋值
                     * @return AutoCreateField 是否已赋值
                     * 
                     */
                    bool AutoCreateFieldHasBeenSet() const;

                    /**
                     * 获取<p>Store logs with delivery failure in a DLC table</p>
                     * @return DlcFailHandle <p>Store logs with delivery failure in a DLC table</p>
                     * 
                     */
                    DlcFailHandle GetDlcFailHandle() const;

                    /**
                     * 设置<p>Store logs with delivery failure in a DLC table</p>
                     * @param _dlcFailHandle <p>Store logs with delivery failure in a DLC table</p>
                     * 
                     */
                    void SetDlcFailHandle(const DlcFailHandle& _dlcFailHandle);

                    /**
                     * 判断参数 DlcFailHandle 是否已赋值
                     * @return DlcFailHandle 是否已赋值
                     * 
                     */
                    bool DlcFailHandleHasBeenSet() const;

                    /**
                     * 获取<p>Log pre-filtering - Perform pre-filtering process on the original data for data ingestion into Splunk.</p>
                     * @return DSLFilter <p>Log pre-filtering - Perform pre-filtering process on the original data for data ingestion into Splunk.</p>
                     * 
                     */
                    std::string GetDSLFilter() const;

                    /**
                     * 设置<p>Log pre-filtering - Perform pre-filtering process on the original data for data ingestion into Splunk.</p>
                     * @param _dSLFilter <p>Log pre-filtering - Perform pre-filtering process on the original data for data ingestion into Splunk.</p>
                     * 
                     */
                    void SetDSLFilter(const std::string& _dSLFilter);

                    /**
                     * 判断参数 DSLFilter 是否已赋值
                     * @return DSLFilter 是否已赋值
                     * 
                     */
                    bool DSLFilterHasBeenSet() const;

                private:

                    /**
                     * <p>Task id.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Account id.</p>
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>Log topic id.</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Task name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Delivery Type, 0: real-time delivery, 1: history delivery</p>
                     */
                    uint64_t m_deliverType;
                    bool m_deliverTypeHasBeenSet;

                    /**
                     * <p>Delivery file size, in MB.</p>
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * <p>Delivery interval in seconds</p>
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>Start time of the delivery time range</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time of the delivery time range</p>
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>dlc configuration message</p>
                     */
                    DlcInfo m_dlcInfo;
                    bool m_dlcInfoHasBeenSet;

                    /**
                     * <p>Whether to enable delivery service log. 1 Disabled, 2 Enabled</p>
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * <p>Task status.</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Task progress. Historic delivery tasks take effect.</p>
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>Log topic type. 0: Standard topic, 1: Metric topic</p>
                     */
                    uint64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * <p>Task creation time.</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Task last modified.</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Auto-create dlc field</p><p>Default value: false</p><p>When there are additional fields in your log, the system will automatically ship them to DLC.</p>
                     */
                    bool m_autoCreateField;
                    bool m_autoCreateFieldHasBeenSet;

                    /**
                     * <p>Store logs with delivery failure in a DLC table</p>
                     */
                    DlcFailHandle m_dlcFailHandle;
                    bool m_dlcFailHandleHasBeenSet;

                    /**
                     * <p>Log pre-filtering - Perform pre-filtering process on the original data for data ingestion into Splunk.</p>
                     */
                    std::string m_dSLFilter;
                    bool m_dSLFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DLCDELIVERINFO_H_
