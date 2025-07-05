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
                * The information of a scheme.
                */
                class ScheduleTask : public AbstractModel
                {
                public:
                    ScheduleTask();
                    ~ScheduleTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The scheme ID.
                     * @return TaskId The scheme ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The scheme ID.
                     * @param _taskId The scheme ID.
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
                     * 获取The scheme status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
                     * @return Status The scheme status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The scheme status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
                     * @param _status The scheme status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
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
                     * 获取If the value returned is not 0, there was a source error. If 0 is returned, refer to the error codes of the corresponding task type.
                     * @return ErrCode If the value returned is not 0, there was a source error. If 0 is returned, refer to the error codes of the corresponding task type.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置If the value returned is not 0, there was a source error. If 0 is returned, refer to the error codes of the corresponding task type.
                     * @param _errCode If the value returned is not 0, there was a source error. If 0 is returned, refer to the error codes of the corresponding task type.
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
                     * @return Message If there was a source error, this parameter is the error message. For other errors, refer to the error messages of the corresponding task type.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置If there was a source error, this parameter is the error message. For other errors, refer to the error messages of the corresponding task type.
                     * @param _message If there was a source error, this parameter is the error message. For other errors, refer to the error messages of the corresponding task type.
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
                     * 获取The information of the file processed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InputInfo The information of the file processed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置The information of the file processed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _inputInfo The information of the file processed.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The metadata of the source video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetaData The metadata of the source video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置The metadata of the source video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metaData The metadata of the source video.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The output of the scheme.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActivityResultSet The output of the scheme.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ActivityResult> GetActivityResultSet() const;

                    /**
                     * 设置The output of the scheme.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _activityResultSet The output of the scheme.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * The scheme ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The scheme status. Valid values:
<li>PROCESSING</li>
<li>FINISH</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * If the value returned is not 0, there was a source error. If 0 is returned, refer to the error codes of the corresponding task type.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * If there was a source error, this parameter is the error message. For other errors, refer to the error messages of the corresponding task type.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * The information of the file processed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * The metadata of the source video.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * The output of the scheme.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ActivityResult> m_activityResultSet;
                    bool m_activityResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SCHEDULETASK_H_
