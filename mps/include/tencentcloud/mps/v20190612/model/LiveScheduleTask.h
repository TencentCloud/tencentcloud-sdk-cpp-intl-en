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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESCHEDULETASK_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESCHEDULETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveActivityResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The information of a live scheme subtask.
                */
                class LiveScheduleTask : public AbstractModel
                {
                public:
                    LiveScheduleTask();
                    ~LiveScheduleTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Live orchestration task ID.
                     * @return TaskId Live orchestration task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Live orchestration task ID.
                     * @param _taskId Live orchestration task ID.
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
                     * 获取Task stream status. Valid values:
<li>PROCESSING: processing</li>
<li>FINISH: completed</li>
                     * @return Status Task stream status. Valid values:
<li>PROCESSING: processing</li>
<li>FINISH: completed</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task stream status. Valid values:
<li>PROCESSING: processing</li>
<li>FINISH: completed</li>
                     * @param _status Task stream status. Valid values:
<li>PROCESSING: processing</li>
<li>FINISH: completed</li>
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
                     * 获取An error code other than 0 is returned in case of a source exception. Use the error code of the specific task when a value of 0 is returned.
                     * @return ErrCode An error code other than 0 is returned in case of a source exception. Use the error code of the specific task when a value of 0 is returned.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置An error code other than 0 is returned in case of a source exception. Use the error code of the specific task when a value of 0 is returned.
                     * @param _errCode An error code other than 0 is returned in case of a source exception. Use the error code of the specific task when a value of 0 is returned.
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取The corresponding exception message is returned in case of a source exception. If no source exception occurs, use the message of each specific task.
                     * @return Message The corresponding exception message is returned in case of a source exception. If no source exception occurs, use the message of each specific task.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置The corresponding exception message is returned in case of a source exception. If no source exception occurs, use the message of each specific task.
                     * @param _message The corresponding exception message is returned in case of a source exception. If no source exception occurs, use the message of each specific task.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Live stream URL.
                     * @return Url Live stream URL.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Live stream URL.
                     * @param _url Live stream URL.
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
                     * 获取The task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LiveActivityResultSet The task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<LiveActivityResult> GetLiveActivityResultSet() const;

                    /**
                     * 设置The task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _liveActivityResultSet The task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLiveActivityResultSet(const std::vector<LiveActivityResult>& _liveActivityResultSet);

                    /**
                     * 判断参数 LiveActivityResultSet 是否已赋值
                     * @return LiveActivityResultSet 是否已赋值
                     * 
                     */
                    bool LiveActivityResultSetHasBeenSet() const;

                private:

                    /**
                     * Live orchestration task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task stream status. Valid values:
<li>PROCESSING: processing</li>
<li>FINISH: completed</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * An error code other than 0 is returned in case of a source exception. Use the error code of the specific task when a value of 0 is returned.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * The corresponding exception message is returned in case of a source exception. If no source exception occurs, use the message of each specific task.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Live stream URL.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * The task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LiveActivityResult> m_liveActivityResultSet;
                    bool m_liveActivityResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESCHEDULETASK_H_
