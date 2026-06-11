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
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param _taskId Task ID.
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
                     * 获取Account id.
                     * @return Uin Account id.
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置Account id.
                     * @param _uin Account id.
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
                     * 获取Log topic ID.
                     * @return TopicId Log topic ID.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID.
                     * @param _topicId Log topic ID.
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
                     * 获取Task name.
                     * @return Name Task name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Task name.
                     * @param _name Task name.
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
                     * 获取Delivery Type. Valid values: 0: real-time delivery; 1: historic delivery.
                     * @return DeliverType Delivery Type. Valid values: 0: real-time delivery; 1: historic delivery.
                     * 
                     */
                    uint64_t GetDeliverType() const;

                    /**
                     * 设置Delivery Type. Valid values: 0: real-time delivery; 1: historic delivery.
                     * @param _deliverType Delivery Type. Valid values: 0: real-time delivery; 1: historic delivery.
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
                     * 获取Delivery file size in MB
                     * @return MaxSize Delivery file size in MB
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置Delivery file size in MB
                     * @param _maxSize Delivery file size in MB
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
                     * 获取Delivery interval in seconds
                     * @return Interval Delivery interval in seconds
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置Delivery interval in seconds
                     * @param _interval Delivery interval in seconds
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
                     * 获取Start time of the delivery time range
                     * @return StartTime Start time of the delivery time range
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start time of the delivery time range
                     * @param _startTime Start time of the delivery time range
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
                     * 获取End time of the delivery time range
                     * @return EndTime End time of the delivery time range
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置End time of the delivery time range
                     * @param _endTime End time of the delivery time range
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
                     * 获取dlc configuration message
                     * @return DlcInfo dlc configuration message
                     * 
                     */
                    DlcInfo GetDlcInfo() const;

                    /**
                     * 设置dlc configuration message
                     * @param _dlcInfo dlc configuration message
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
                     * 获取Whether to enable delivery service log. 1 for disabled, 2 for enabled
                     * @return HasServicesLog Whether to enable delivery service log. 1 for disabled, 2 for enabled
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置Whether to enable delivery service log. 1 for disabled, 2 for enabled
                     * @param _hasServicesLog Whether to enable delivery service log. 1 for disabled, 2 for enabled
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
                     * 获取Task status.
                     * @return Status Task status.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Task status.
                     * @param _status Task status.
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
                     * 获取Task progress. Historic delivery tasks take effect.
                     * @return Progress Task progress. Historic delivery tasks take effect.
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置Task progress. Historic delivery tasks take effect.
                     * @param _progress Task progress. Historic delivery tasks take effect.
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
                     * 获取Topic type of logs. 0: standard topic; 1: metric topic.
                     * @return BizType Topic type of logs. 0: standard topic; 1: metric topic.
                     * 
                     */
                    uint64_t GetBizType() const;

                    /**
                     * 设置Topic type of logs. 0: standard topic; 1: metric topic.
                     * @param _bizType Topic type of logs. 0: standard topic; 1: metric topic.
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
                     * 获取Task creation time.
                     * @return CreateTime Task creation time.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Task creation time.
                     * @param _createTime Task creation time.
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
                     * 获取Task modification time.
                     * @return UpdateTime Task modification time.
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置Task modification time.
                     * @param _updateTime Task modification time.
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Account id.
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Log topic ID.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Task name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Delivery Type. Valid values: 0: real-time delivery; 1: historic delivery.
                     */
                    uint64_t m_deliverType;
                    bool m_deliverTypeHasBeenSet;

                    /**
                     * Delivery file size in MB
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * Delivery interval in seconds
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Start time of the delivery time range
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the delivery time range
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * dlc configuration message
                     */
                    DlcInfo m_dlcInfo;
                    bool m_dlcInfoHasBeenSet;

                    /**
                     * Whether to enable delivery service log. 1 for disabled, 2 for enabled
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * Task status.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task progress. Historic delivery tasks take effect.
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Topic type of logs. 0: standard topic; 1: metric topic.
                     */
                    uint64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * Task creation time.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task modification time.
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DLCDELIVERINFO_H_
