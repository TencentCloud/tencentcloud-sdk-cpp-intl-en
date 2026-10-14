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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULETASK_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/MediaMetaData.h>
#include <tencentcloud/mps/v20190612/model/ActivityResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Orchestration task information
                */
                class ScheduleTask : public AbstractModel
                {
                public:
                    ScheduleTask();
                    ~ScheduleTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Orchestration task ID.
                     * @return TaskId Orchestration task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Orchestration task ID.
                     * @param _taskId Orchestration task ID.
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
<li>PROCESSING: Processing;</li>
<li>FINISH: completed</li>
                     * @return Status Task stream status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: completed</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task stream status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: completed</li>
                     * @param _status Task stream status. Valid values:
<li>PROCESSING: Processing;</li>
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
                     * 获取Information about the target file for media processing.
                     * @return InputInfo Information about the target file for media processing.
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置Information about the target file for media processing.
                     * @param _inputInfo Information about the target file for media processing.
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取Metadata of the original video.
                     * @return MetaData Metadata of the original video.
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置Metadata of the original video.
                     * @param _metaData Metadata of the original video.
                     * 
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取Output of the orchestration task.
                     * @return ActivityResultSet Output of the orchestration task.
                     * 
                     */
                    std::vector<ActivityResult> GetActivityResultSet() const;

                    /**
                     * 设置Output of the orchestration task.
                     * @param _activityResultSet Output of the orchestration task.
                     * 
                     */
                    void SetActivityResultSet(const std::vector<ActivityResult>& _activityResultSet);

                    /**
                     * 判断参数 ActivityResultSet 是否已赋值
                     * @return ActivityResultSet 是否已赋值
                     * 
                     */
                    bool ActivityResultSetHasBeenSet() const;

                private:

                    /**
                     * Orchestration task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task stream status. Valid values:
<li>PROCESSING: Processing;</li>
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
                     * Information about the target file for media processing.
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * Metadata of the original video.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * Output of the orchestration task.
                     */
                    std::vector<ActivityResult> m_activityResultSet;
                    bool m_activityResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULETASK_H_
