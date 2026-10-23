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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_LOGANALYSISDOWNLOADTASK_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_LOGANALYSISDOWNLOADTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Log analytics log download task.
                */
                class LogAnalysisDownloadTask : public AbstractModel
                {
                public:
                    LogAnalysisDownloadTask();
                    ~LogAnalysisDownloadTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task ID.</p>
                     * @return TaskId <p>Task ID.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _taskId <p>Task ID.</p>
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
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Data ownership region. Valid values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></ul></p>
                     * @return Area <p>Data ownership region. Valid values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></ul></p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>Data ownership region. Valid values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></ul></p>
                     * @param _area <p>Data ownership region. Valid values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></ul></p>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取<p>Start time, example value: 2020-04-29T00:00:00Z.</p>
                     * @return StartTime <p>Start time, example value: 2020-04-29T00:00:00Z.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time, example value: 2020-04-29T00:00:00Z.</p>
                     * @param _startTime <p>Start time, example value: 2020-04-29T00:00:00Z.</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>End time. Example value: 2020-04-30T00:00:00Z.</p>
                     * @return EndTime <p>End time. Example value: 2020-04-30T00:00:00Z.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time. Example value: 2020-04-30T00:00:00Z.</p>
                     * @param _endTime <p>End time. Example value: 2020-04-30T00:00:00Z.</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Log type. Valid values: <ul><li> l7-access-logs: Layer 7 Access Logs;</li><li>web-attack: Managed rule log.</li></ul></p>
                     * @return LogType <p>Log type. Valid values: <ul><li> l7-access-logs: Layer 7 Access Logs;</li><li>web-attack: Managed rule log.</li></ul></p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>Log type. Valid values: <ul><li> l7-access-logs: Layer 7 Access Logs;</li><li>web-attack: Managed rule log.</li></ul></p>
                     * @param _logType <p>Log type. Valid values: <ul><li> l7-access-logs: Layer 7 Access Logs;</li><li>web-attack: Managed rule log.</li></ul></p>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p><a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">Log match condition</a>. Maximum length 12KB.</p>
                     * @return Condition <p><a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">Log match condition</a>. Maximum length 12KB.</p>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p><a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">Log match condition</a>. Maximum length 12KB.</p>
                     * @param _condition <p><a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">Log match condition</a>. Maximum length 12KB.</p>
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取<p>File format, valid values:</p><ul><li>csv.</li></ul>
                     * @return Format <p>File format, valid values:</p><ul><li>csv.</li></ul>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>File format, valid values:</p><ul><li>csv.</li></ul>
                     * @param _format <p>File format, valid values:</p><ul><li>csv.</li></ul>
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取<p>Whether raw logs are returned in time sequence. Valid values: <ul><li>asc: ascending order;</li><li>desc: descending order.</li></ul></p>
                     * @return Sort <p>Whether raw logs are returned in time sequence. Valid values: <ul><li>asc: ascending order;</li><li>desc: descending order.</li></ul></p>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置<p>Whether raw logs are returned in time sequence. Valid values: <ul><li>asc: ascending order;</li><li>desc: descending order.</li></ul></p>
                     * @param _sort <p>Whether raw logs are returned in time sequence. Valid values: <ul><li>asc: ascending order;</li><li>desc: descending order.</li></ul></p>
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取<p>Task status, valid values: <ul><li>loading: being processed, waiting to generate download link;</li><li> failed: processing failure, current task cannot be downloaded;</li><li>completed: packaging completed, ready for download.</li></ul></p>
                     * @return Status <p>Task status, valid values: <ul><li>loading: being processed, waiting to generate download link;</li><li> failed: processing failure, current task cannot be downloaded;</li><li>completed: packaging completed, ready for download.</li></ul></p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Task status, valid values: <ul><li>loading: being processed, waiting to generate download link;</li><li> failed: processing failure, current task cannot be downloaded;</li><li>completed: packaging completed, ready for download.</li></ul></p>
                     * @param _status <p>Task status, valid values: <ul><li>loading: being processed, waiting to generate download link;</li><li> failed: processing failure, current task cannot be downloaded;</li><li>completed: packaging completed, ready for download.</li></ul></p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Task creation time. After successful task creation, the retention period is 3 days.</p>
                     * @return CreateTime <p>Task creation time. After successful task creation, the retention period is 3 days.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Task creation time. After successful task creation, the retention period is 3 days.</p>
                     * @param _createTime <p>Task creation time. After successful task creation, the retention period is 3 days.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Download link, only returned when Status = completed.</p>
                     * @return Url <p>Download link, only returned when Status = completed.</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Download link, only returned when Status = completed.</p>
                     * @param _url <p>Download link, only returned when Status = completed.</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>Task expiration time. After expiry, the download address will be unavailable. Please obtain a new download address through this API.</p>
                     * @return ExpireTime <p>Task expiration time. After expiry, the download address will be unavailable. Please obtain a new download address through this API.</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>Task expiration time. After expiry, the download address will be unavailable. Please obtain a new download address through this API.</p>
                     * @param _expireTime <p>Task expiration time. After expiry, the download address will be unavailable. Please obtain a new download address through this API.</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Data ownership region. Valid values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></ul></p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>Start time, example value: 2020-04-29T00:00:00Z.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time. Example value: 2020-04-30T00:00:00Z.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Log type. Valid values: <ul><li> l7-access-logs: Layer 7 Access Logs;</li><li>web-attack: Managed rule log.</li></ul></p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p><a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">Log match condition</a>. Maximum length 12KB.</p>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>File format, valid values:</p><ul><li>csv.</li></ul>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>Whether raw logs are returned in time sequence. Valid values: <ul><li>asc: ascending order;</li><li>desc: descending order.</li></ul></p>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>Task status, valid values: <ul><li>loading: being processed, waiting to generate download link;</li><li> failed: processing failure, current task cannot be downloaded;</li><li>completed: packaging completed, ready for download.</li></ul></p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Task creation time. After successful task creation, the retention period is 3 days.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Download link, only returned when Status = completed.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Task expiration time. After expiry, the download address will be unavailable. Please obtain a new download address through this API.</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_LOGANALYSISDOWNLOADTASK_H_
