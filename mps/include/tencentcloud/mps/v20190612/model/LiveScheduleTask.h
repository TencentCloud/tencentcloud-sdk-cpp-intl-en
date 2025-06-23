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
                     * 获取The ID of a live scheme subtask.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId The ID of a live scheme subtask.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The ID of a live scheme subtask.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskId The ID of a live scheme subtask.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The task status. Valid values:
<li>`PROCESSING`</li>
<li>`FINISH` </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status The task status. Valid values:
<li>`PROCESSING`</li>
<li>`FINISH` </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The task status. Valid values:
<li>`PROCESSING`</li>
<li>`FINISH` </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status The task status. Valid values:
<li>`PROCESSING`</li>
<li>`FINISH` </li>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取If the value returned is not `0`, there was a source error. If `0` is returned, refer to the error codes of the corresponding task type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrCode If the value returned is not `0`, there was a source error. If `0` is returned, refer to the error codes of the corresponding task type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置If the value returned is not `0`, there was a source error. If `0` is returned, refer to the error codes of the corresponding task type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errCode If the value returned is not `0`, there was a source error. If `0` is returned, refer to the error codes of the corresponding task type.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取If there was a source error, this parameter is the error message. For other errors, refer to the error messages of the corresponding task type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Message If there was a source error, this parameter is the error message. For other errors, refer to the error messages of the corresponding task type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置If there was a source error, this parameter is the error message. For other errors, refer to the error messages of the corresponding task type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _message If there was a source error, this parameter is the error message. For other errors, refer to the error messages of the corresponding task type.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The URL of the live stream.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Url The URL of the live stream.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置The URL of the live stream.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _url The URL of the live stream.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * The ID of a live scheme subtask.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The task status. Valid values:
<li>`PROCESSING`</li>
<li>`FINISH` </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * If the value returned is not `0`, there was a source error. If `0` is returned, refer to the error codes of the corresponding task type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * If there was a source error, this parameter is the error message. For other errors, refer to the error messages of the corresponding task type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * The URL of the live stream.
Note: This field may return null, indicating that no valid values can be obtained.
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
