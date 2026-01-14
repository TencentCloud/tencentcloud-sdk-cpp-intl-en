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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYMPS_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYMPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSSubTaskResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * MPS media processing task information.
                */
                class ProcessMediaByMPS : public AbstractModel
                {
                public:
                    ProcessMediaByMPS();
                    ~ProcessMediaByMPS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The task ID.
                     * @return TaskId The task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The task ID.
                     * @param _taskId The task ID.
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
                     * 获取Task status, value: <li>PROCESSING: processing;</li><li>FINISH: completed.</li>
                     * @return Status Task status, value: <li>PROCESSING: processing;</li><li>FINISH: completed.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status, value: <li>PROCESSING: processing;</li><li>FINISH: completed.</li>
                     * @param _status Task status, value: <li>PROCESSING: processing;</li><li>FINISH: completed.</li>
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
                     * 获取Error code. A non-zero error code is returned when the source is abnormal. If 0 is returned, use the ErrCode of each specific task.
                     * @return ErrCode Error code. A non-zero error code is returned when the source is abnormal. If 0 is returned, use the ErrCode of each specific task.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code. A non-zero error code is returned when the source is abnormal. If 0 is returned, use the ErrCode of each specific task.
                     * @param _errCode Error code. A non-zero error code is returned when the source is abnormal. If 0 is returned, use the ErrCode of each specific task.
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
                     * 获取Error message. If the source is abnormal, the corresponding exception message is returned. Otherwise, use the message of each specific task.
                     * @return Message Error message. If the source is abnormal, the corresponding exception message is returned. Otherwise, use the message of each specific task.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message. If the source is abnormal, the corresponding exception message is returned. Otherwise, use the message of each specific task.
                     * @param _message Error message. If the source is abnormal, the corresponding exception message is returned. Otherwise, use the message of each specific task.
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
                     * 获取MPS media processing tasks.
                     * @return SubTaskSet MPS media processing tasks.
                     * 
                     */
                    std::vector<MPSSubTaskResult> GetSubTaskSet() const;

                    /**
                     * 设置MPS media processing tasks.
                     * @param _subTaskSet MPS media processing tasks.
                     * 
                     */
                    void SetSubTaskSet(const std::vector<MPSSubTaskResult>& _subTaskSet);

                    /**
                     * 判断参数 SubTaskSet 是否已赋值
                     * @return SubTaskSet 是否已赋值
                     * 
                     */
                    bool SubTaskSetHasBeenSet() const;

                private:

                    /**
                     * The task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task status, value: <li>PROCESSING: processing;</li><li>FINISH: completed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. A non-zero error code is returned when the source is abnormal. If 0 is returned, use the ErrCode of each specific task.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message. If the source is abnormal, the corresponding exception message is returned. Otherwise, use the message of each specific task.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * MPS media processing tasks.
                     */
                    std::vector<MPSSubTaskResult> m_subTaskSet;
                    bool m_subTaskSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYMPS_H_
