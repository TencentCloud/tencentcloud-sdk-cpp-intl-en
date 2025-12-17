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
                     * 获取
                     * @return TaskId 
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置
                     * @param _taskId 
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
                     * 获取
                     * @return Type 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置
                     * @param _type 
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
                     * 获取
                     * @return State 
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置
                     * @param _state 
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
                     * 获取
                     * @return Result 
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置
                     * @param _result 
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
                     * 获取
                     * @return ErrorCode 
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置
                     * @param _errorCode 
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
                     * 获取
                     * @return ErrorMsg 
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置
                     * @param _errorMsg 
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
                     * 获取
                     * @return InputInfo 
                     * 
                     */
                    AbWatermarkInputInfo GetInputInfo() const;

                    /**
                     * 设置
                     * @param _inputInfo 
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
                     * 获取
                     * @return TaskNotifyConfig 
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置
                     * @param _taskNotifyConfig 
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
                     * 获取
                     * @return CreateTime 
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置
                     * @param _createTime 
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
                     * 获取
                     * @return UpdateTime 
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置
                     * @param _updateTime 
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
                     * 获取
                     * @return InputFileInfo 
                     * 
                     */
                    InputFileInfo GetInputFileInfo() const;

                    /**
                     * 设置
                     * @param _inputFileInfo 
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
                     * 
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 
                     */
                    AbWatermarkInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * 
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 
                     */
                    InputFileInfo m_inputFileInfo;
                    bool m_inputFileInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_ABWATERMARKDETECTIONINFO_H_
