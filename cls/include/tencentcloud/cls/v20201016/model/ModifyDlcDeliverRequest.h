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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDLCDELIVERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDLCDELIVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyDlcDeliver request structure.
                */
                class ModifyDlcDeliverRequest : public AbstractModel
                {
                public:
                    ModifyDlcDeliverRequest();
                    ~ModifyDlcDeliverRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>log topic id</p><ul><li>Obtain the log topic Id through <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">Get Log Topic List</a>.</li></ul>
                     * @return TopicId <p>log topic id</p><ul><li>Obtain the log topic Id through <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">Get Log Topic List</a>.</li></ul>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>log topic id</p><ul><li>Obtain the log topic Id through <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">Get Log Topic List</a>.</li></ul>
                     * @param _topicId <p>log topic id</p><ul><li>Obtain the log topic Id through <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">Get Log Topic List</a>.</li></ul>
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
                     * 获取<p>Name: Length not exceeding 64 characters, starts with a letter, accepts 0-9, a-z, A-Z, _, -, Chinese character.</p>
                     * @return Name <p>Name: Length not exceeding 64 characters, starts with a letter, accepts 0-9, a-z, A-Z, _, -, Chinese character.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Name: Length not exceeding 64 characters, starts with a letter, accepts 0-9, a-z, A-Z, _, -, Chinese character.</p>
                     * @param _name <p>Name: Length not exceeding 64 characters, starts with a letter, accepts 0-9, a-z, A-Z, _, -, Chinese character.</p>
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
                     * 获取<p>Delivery Type. Valid values: 0: batch delivery; 1: real-time delivery.</p>
                     * @return DeliverType <p>Delivery Type. Valid values: 0: batch delivery; 1: real-time delivery.</p>
                     * 
                     */
                    uint64_t GetDeliverType() const;

                    /**
                     * 设置<p>Delivery Type. Valid values: 0: batch delivery; 1: real-time delivery.</p>
                     * @param _deliverType <p>Delivery Type. Valid values: 0: batch delivery; 1: real-time delivery.</p>
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
                     * 获取<p>End time of the delivery time range. If empty, it means unlimited time.</p>
                     * @return EndTime <p>End time of the delivery time range. If empty, it means unlimited time.</p>
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置<p>End time of the delivery time range. If empty, it means unlimited time.</p>
                     * @param _endTime <p>End time of the delivery time range. If empty, it means unlimited time.</p>
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
                     * 获取<p>Delivery file size in MB. Required when DeliverType=0. Valid range: 5 &lt;= MaxSize &lt;= 256.</p>
                     * @return MaxSize <p>Delivery file size in MB. Required when DeliverType=0. Valid range: 5 &lt;= MaxSize &lt;= 256.</p>
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置<p>Delivery file size in MB. Required when DeliverType=0. Valid range: 5 &lt;= MaxSize &lt;= 256.</p>
                     * @param _maxSize <p>Delivery file size in MB. Required when DeliverType=0. Valid range: 5 &lt;= MaxSize &lt;= 256.</p>
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
                     * 获取<p>Delivery interval in seconds. Required when DeliverType=0. Valid range: 300 &lt;= Interval &lt;= 900.</p>
                     * @return Interval <p>Delivery interval in seconds. Required when DeliverType=0. Valid range: 300 &lt;= Interval &lt;= 900.</p>
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置<p>Delivery interval in seconds. Required when DeliverType=0. Valid range: 300 &lt;= Interval &lt;= 900.</p>
                     * @param _interval <p>Delivery interval in seconds. Required when DeliverType=0. Valid range: 300 &lt;= Interval &lt;= 900.</p>
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
                     * 获取<p>Whether to enable the delivery service log. 1: Disabled, 2: Enabled. Enabled by default.</p>
                     * @return HasServicesLog <p>Whether to enable the delivery service log. 1: Disabled, 2: Enabled. Enabled by default.</p>
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置<p>Whether to enable the delivery service log. 1: Disabled, 2: Enabled. Enabled by default.</p>
                     * @param _hasServicesLog <p>Whether to enable the delivery service log. 1: Disabled, 2: Enabled. Enabled by default.</p>
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
                     * 获取<p>Task status.</p><p>Enumeration values: </p><ul><li>1: Running, </li><li>2: Stop.</li></ul>
                     * @return Status <p>Task status.</p><p>Enumeration values: </p><ul><li>1: Running, </li><li>2: Stop.</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Task status.</p><p>Enumeration values: </p><ul><li>1: Running, </li><li>2: Stop.</li></ul>
                     * @param _status <p>Task status.</p><p>Enumeration values: </p><ul><li>1: Running, </li><li>2: Stop.</li></ul>
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
                     * <p>log topic id</p><ul><li>Obtain the log topic Id through <a href="https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1">Get Log Topic List</a>.</li></ul>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Task id.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Name: Length not exceeding 64 characters, starts with a letter, accepts 0-9, a-z, A-Z, _, -, Chinese character.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Delivery Type. Valid values: 0: batch delivery; 1: real-time delivery.</p>
                     */
                    uint64_t m_deliverType;
                    bool m_deliverTypeHasBeenSet;

                    /**
                     * <p>Start time of the delivery time range</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time of the delivery time range. If empty, it means unlimited time.</p>
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Delivery file size in MB. Required when DeliverType=0. Valid range: 5 &lt;= MaxSize &lt;= 256.</p>
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * <p>Delivery interval in seconds. Required when DeliverType=0. Valid range: 300 &lt;= Interval &lt;= 900.</p>
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>dlc configuration message</p>
                     */
                    DlcInfo m_dlcInfo;
                    bool m_dlcInfoHasBeenSet;

                    /**
                     * <p>Whether to enable the delivery service log. 1: Disabled, 2: Enabled. Enabled by default.</p>
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                    /**
                     * <p>Task status.</p><p>Enumeration values: </p><ul><li>1: Running, </li><li>2: Stop.</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

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

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDLCDELIVERREQUEST_H_
