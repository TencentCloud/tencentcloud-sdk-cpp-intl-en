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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIGCTASKLISTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIGCTASKLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Aigc task details
                */
                class AigcTaskListItem : public AbstractModel
                {
                public:
                    AigcTaskListItem();
                    ~AigcTaskListItem() = default;
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
                     * 获取<p>Task type</p><p>Enumeration value:</p><ul><li>VideoRedraw: Video redraw task</li><li>AIDrama: AI drama task</li></ul>
                     * @return TaskType <p>Task type</p><p>Enumeration value:</p><ul><li>VideoRedraw: Video redraw task</li><li>AIDrama: AI drama task</li></ul>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>Task type</p><p>Enumeration value:</p><ul><li>VideoRedraw: Video redraw task</li><li>AIDrama: AI drama task</li></ul>
                     * @param _taskType <p>Task type</p><p>Enumeration value:</p><ul><li>VideoRedraw: Video redraw task</li><li>AIDrama: AI drama task</li></ul>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>Task status</p><p>Enumeration values:</p><ul><li>PENDING: Task waiting for scheduling</li><li>RUNNING: Task running</li><li>FINISHED: Task executed successfully</li><li>STOP: Task termination</li><li>FAILED: Task failure</li><li>TIMEOUT: Task timeout</li></ul>
                     * @return TaskStatus <p>Task status</p><p>Enumeration values:</p><ul><li>PENDING: Task waiting for scheduling</li><li>RUNNING: Task running</li><li>FINISHED: Task executed successfully</li><li>STOP: Task termination</li><li>FAILED: Task failure</li><li>TIMEOUT: Task timeout</li></ul>
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置<p>Task status</p><p>Enumeration values:</p><ul><li>PENDING: Task waiting for scheduling</li><li>RUNNING: Task running</li><li>FINISHED: Task executed successfully</li><li>STOP: Task termination</li><li>FAILED: Task failure</li><li>TIMEOUT: Task timeout</li></ul>
                     * @param _taskStatus <p>Task status</p><p>Enumeration values:</p><ul><li>PENDING: Task waiting for scheduling</li><li>RUNNING: Task running</li><li>FINISHED: Task executed successfully</li><li>STOP: Task termination</li><li>FAILED: Task failure</li><li>TIMEOUT: Task timeout</li></ul>
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>Task creation time</p>
                     * @return CreateTime <p>Task creation time</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Task creation time</p>
                     * @param _createTime <p>Task creation time</p>
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
                     * 获取<p>Task start scheduling time</p>
                     * @return ScheduledTime <p>Task start scheduling time</p>
                     * 
                     */
                    std::string GetScheduledTime() const;

                    /**
                     * 设置<p>Task start scheduling time</p>
                     * @param _scheduledTime <p>Task start scheduling time</p>
                     * 
                     */
                    void SetScheduledTime(const std::string& _scheduledTime);

                    /**
                     * 判断参数 ScheduledTime 是否已赋值
                     * @return ScheduledTime 是否已赋值
                     * 
                     */
                    bool ScheduledTimeHasBeenSet() const;

                    /**
                     * 获取<p>Task end time</p>
                     * @return FinishedTime <p>Task end time</p>
                     * 
                     */
                    std::string GetFinishedTime() const;

                    /**
                     * 设置<p>Task end time</p>
                     * @param _finishedTime <p>Task end time</p>
                     * 
                     */
                    void SetFinishedTime(const std::string& _finishedTime);

                    /**
                     * 判断参数 FinishedTime 是否已赋值
                     * @return FinishedTime 是否已赋值
                     * 
                     */
                    bool FinishedTimeHasBeenSet() const;

                    /**
                     * 获取<p>Task result Url.</p>
                     * @return Urls <p>Task result Url.</p>
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置<p>Task result Url.</p>
                     * @param _urls <p>Task result Url.</p>
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取<p>Task execution error code</p>
                     * @return TaskResultCode <p>Task execution error code</p>
                     * 
                     */
                    int64_t GetTaskResultCode() const;

                    /**
                     * 设置<p>Task execution error code</p>
                     * @param _taskResultCode <p>Task execution error code</p>
                     * 
                     */
                    void SetTaskResultCode(const int64_t& _taskResultCode);

                    /**
                     * 判断参数 TaskResultCode 是否已赋值
                     * @return TaskResultCode 是否已赋值
                     * 
                     */
                    bool TaskResultCodeHasBeenSet() const;

                    /**
                     * 获取<p>Task execution error message</p>
                     * @return TaskResultMsg <p>Task execution error message</p>
                     * 
                     */
                    std::string GetTaskResultMsg() const;

                    /**
                     * 设置<p>Task execution error message</p>
                     * @param _taskResultMsg <p>Task execution error message</p>
                     * 
                     */
                    void SetTaskResultMsg(const std::string& _taskResultMsg);

                    /**
                     * 判断参数 TaskResultMsg 是否已赋值
                     * @return TaskResultMsg 是否已赋值
                     * 
                     */
                    bool TaskResultMsgHasBeenSet() const;

                    /**
                     * 获取<p>Output video resolution</p>
                     * @return Resolution <p>Output video resolution</p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>Output video resolution</p>
                     * @param _resolution <p>Output video resolution</p>
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取<p>Aspect ratio of the output video</p>
                     * @return Ratio <p>Aspect ratio of the output video</p>
                     * 
                     */
                    std::string GetRatio() const;

                    /**
                     * 设置<p>Aspect ratio of the output video</p>
                     * @param _ratio <p>Aspect ratio of the output video</p>
                     * 
                     */
                    void SetRatio(const std::string& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取<p>Task request package</p>
                     * @return RequestBody <p>Task request package</p>
                     * 
                     */
                    std::string GetRequestBody() const;

                    /**
                     * 设置<p>Task request package</p>
                     * @param _requestBody <p>Task request package</p>
                     * 
                     */
                    void SetRequestBody(const std::string& _requestBody);

                    /**
                     * 判断参数 RequestBody 是否已赋值
                     * @return RequestBody 是否已赋值
                     * 
                     */
                    bool RequestBodyHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task type</p><p>Enumeration value:</p><ul><li>VideoRedraw: Video redraw task</li><li>AIDrama: AI drama task</li></ul>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>Task status</p><p>Enumeration values:</p><ul><li>PENDING: Task waiting for scheduling</li><li>RUNNING: Task running</li><li>FINISHED: Task executed successfully</li><li>STOP: Task termination</li><li>FAILED: Task failure</li><li>TIMEOUT: Task timeout</li></ul>
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>Task creation time</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Task start scheduling time</p>
                     */
                    std::string m_scheduledTime;
                    bool m_scheduledTimeHasBeenSet;

                    /**
                     * <p>Task end time</p>
                     */
                    std::string m_finishedTime;
                    bool m_finishedTimeHasBeenSet;

                    /**
                     * <p>Task result Url.</p>
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * <p>Task execution error code</p>
                     */
                    int64_t m_taskResultCode;
                    bool m_taskResultCodeHasBeenSet;

                    /**
                     * <p>Task execution error message</p>
                     */
                    std::string m_taskResultMsg;
                    bool m_taskResultMsgHasBeenSet;

                    /**
                     * <p>Output video resolution</p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>Aspect ratio of the output video</p>
                     */
                    std::string m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * <p>Task request package</p>
                     */
                    std::string m_requestBody;
                    bool m_requestBodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIGCTASKLISTITEM_H_
