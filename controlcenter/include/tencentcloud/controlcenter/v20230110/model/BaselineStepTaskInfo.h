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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_BASELINESTEPTASKINFO_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_BASELINESTEPTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            namespace Model
            {
                /**
                * Baseline item deployment task information list.
                */
                class BaselineStepTaskInfo : public AbstractModel
                {
                public:
                    BaselineStepTaskInfo();
                    ~BaselineStepTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the unique Id of the task, which can only contain english letters and digits, and is a 16-character random string.
                     * @return TaskId Specifies the unique Id of the task, which can only contain english letters and digits, and is a 16-character random string.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Specifies the unique Id of the task, which can only contain english letters and digits, and is a 16-character random string.
                     * @param _taskId Specifies the unique Id of the task, which can only contain english letters and digits, and is a 16-character random string.
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
                     * 获取Specifies the unique identifier for the baseline feature item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * @return Identifier Specifies the unique identifier for the baseline feature item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置Specifies the unique identifier for the baseline feature item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * @param _identifier Specifies the unique identifier for the baseline feature item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                    /**
                     * 获取Specifies the member account uin of the applied baseline item.
                     * @return MemberUin Specifies the member account uin of the applied baseline item.
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置Specifies the member account uin of the applied baseline item.
                     * @param _memberUin Specifies the member account uin of the applied baseline item.
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取Baseline item application status. Running means the baseline item is in application. Success means the baseline item application is successful. Failed means the baseline item application failure. Pending means the baseline item is Pending application. Skipped means the baseline item is Skipped.
                     * @return Status Baseline item application status. Running means the baseline item is in application. Success means the baseline item application is successful. Failed means the baseline item application failure. Pending means the baseline item is Pending application. Skipped means the baseline item is Skipped.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Baseline item application status. Running means the baseline item is in application. Success means the baseline item application is successful. Failed means the baseline item application failure. Pending means the baseline item is Pending application. Skipped means the baseline item is Skipped.
                     * @param _status Baseline item application status. Running means the baseline item is in application. Success means the baseline item application is successful. Failed means the baseline item application failure. Pending means the baseline item is Pending application. Skipped means the baseline item is Skipped.
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
                     * 获取Error code
                     * @return ErrCode Error code
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置Error code
                     * @param _errCode Error code
                     * 
                     */
                    void SetErrCode(const std::string& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Error message
                     * @return ErrMessage Error message
                     * 
                     */
                    std::string GetErrMessage() const;

                    /**
                     * 设置Error message
                     * @param _errMessage Error message
                     * 
                     */
                    void SetErrMessage(const std::string& _errMessage);

                    /**
                     * 判断参数 ErrMessage 是否已赋值
                     * @return ErrMessage 是否已赋值
                     * 
                     */
                    bool ErrMessageHasBeenSet() const;

                    /**
                     * 获取Baseline item deployment output.
                     * @return Output Baseline item deployment output.
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置Baseline item deployment output.
                     * @param _output Baseline item deployment output.
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Creation time, represented in ISO8601 standard format as yyyy-MM-dd hh:MM:ss.
                     * @return CreateTime Creation time, represented in ISO8601 standard format as yyyy-MM-dd hh:MM:ss.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time, represented in ISO8601 standard format as yyyy-MM-dd hh:MM:ss.
                     * @param _createTime Creation time, represented in ISO8601 standard format as yyyy-MM-dd hh:MM:ss.
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
                     * 获取Specifies the last update time in ISO8601 standard representation with format yyyy-MM-dd hh:MM:ss.
                     * @return UpdateTime Specifies the last update time in ISO8601 standard representation with format yyyy-MM-dd hh:MM:ss.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Specifies the last update time in ISO8601 standard representation with format yyyy-MM-dd hh:MM:ss.
                     * @param _updateTime Specifies the last update time in ISO8601 standard representation with format yyyy-MM-dd hh:MM:ss.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Specifies the unique Id of the task, which can only contain english letters and digits, and is a 16-character random string.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Specifies the unique identifier for the baseline feature item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * Specifies the member account uin of the applied baseline item.
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * Baseline item application status. Running means the baseline item is in application. Success means the baseline item application is successful. Failed means the baseline item application failure. Pending means the baseline item is Pending application. Skipped means the baseline item is Skipped.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message
                     */
                    std::string m_errMessage;
                    bool m_errMessageHasBeenSet;

                    /**
                     * Baseline item deployment output.
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Creation time, represented in ISO8601 standard format as yyyy-MM-dd hh:MM:ss.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Specifies the last update time in ISO8601 standard representation with format yyyy-MM-dd hh:MM:ss.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_BASELINESTEPTASKINFO_H_
