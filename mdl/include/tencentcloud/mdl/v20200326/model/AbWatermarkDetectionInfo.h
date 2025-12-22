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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_ABWATERMARKDETECTIONINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_ABWATERMARKDETECTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/AbWatermarkInputInfo.h>
#include <tencentcloud/mdl/v20200326/model/TaskNotifyConfig.h>
#include <tencentcloud/mdl/v20200326/model/InputFileInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * AbWatermarkDetectionInfo
                */
                class AbWatermarkDetectionInfo : public AbstractModel
                {
                public:
                    AbWatermarkDetectionInfo();
                    ~AbWatermarkDetectionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
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
                     * 获取Types of testing
                     * @return Type Types of testing
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Types of testing
                     * @param _type Types of testing
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取State
                     * @return State State
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置State
                     * @param _state State
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Result
                     * @return Result Result
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置Result
                     * @param _result Result
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Error code
                     * @return ErrorCode Error code
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置Error code
                     * @param _errorCode Error code
                     * 
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取Error message
                     * @return ErrorMsg Error message
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置Error message
                     * @param _errorMsg Error message
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取Input information
                     * @return InputInfo Input information
                     * 
                     */
                    AbWatermarkInputInfo GetInputInfo() const;

                    /**
                     * 设置Input information
                     * @param _inputInfo Input information
                     * 
                     */
                    void SetInputInfo(const AbWatermarkInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取Task notification configuration
                     * @return TaskNotifyConfig Task notification configuration
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置Task notification configuration
                     * @param _taskNotifyConfig Task notification configuration
                     * 
                     */
                    void SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig);

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     * 
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                    /**
                     * 获取Create time
                     * @return CreateTime Create time
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Create time
                     * @param _createTime Create time
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Input file information
                     * @return InputFileInfo Input file information
                     * 
                     */
                    InputFileInfo GetInputFileInfo() const;

                    /**
                     * 设置Input file information
                     * @param _inputFileInfo Input file information
                     * 
                     */
                    void SetInputFileInfo(const InputFileInfo& _inputFileInfo);

                    /**
                     * 判断参数 InputFileInfo 是否已赋值
                     * @return InputFileInfo 是否已赋值
                     * 
                     */
                    bool InputFileInfoHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Types of testing
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * State
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Result
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Error code
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * Error message
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * Input information
                     */
                    AbWatermarkInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * Task notification configuration
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * Create time
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Input file information
                     */
                    InputFileInfo m_inputFileInfo;
                    bool m_inputFileInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_ABWATERMARKDETECTIONINFO_H_
