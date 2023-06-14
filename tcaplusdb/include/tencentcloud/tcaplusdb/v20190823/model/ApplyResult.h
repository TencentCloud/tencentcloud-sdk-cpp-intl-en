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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_APPLYRESULT_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_APPLYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/ErrorInfo.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * Application update results
                */
                class ApplyResult : public AbstractModel
                {
                public:
                    ApplyResult();
                    ~ApplyResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application ID
                     * @return ApplicationId Application ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID
                     * @param _applicationId Application ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Application type
                     * @return ApplicationType Application type
                     * 
                     */
                    int64_t GetApplicationType() const;

                    /**
                     * 设置Application type
                     * @param _applicationType Application type
                     * 
                     */
                    void SetApplicationType(const int64_t& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取Status. Valid values: `0` (pending approval), `1` (application approved and task submitted), `2` (rejected)
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return ApplicationStatus Status. Valid values: `0` (pending approval), `1` (application approved and task submitted), `2` (rejected)
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetApplicationStatus() const;

                    /**
                     * 设置Status. Valid values: `0` (pending approval), `1` (application approved and task submitted), `2` (rejected)
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _applicationStatus Status. Valid values: `0` (pending approval), `1` (application approved and task submitted), `2` (rejected)
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationStatus(const int64_t& _applicationStatus);

                    /**
                     * 判断参数 ApplicationStatus 是否已赋值
                     * @return ApplicationStatus 是否已赋值
                     * 
                     */
                    bool ApplicationStatusHasBeenSet() const;

                    /**
                     * 获取ID of the submitted task
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return TaskId ID of the submitted task
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置ID of the submitted task
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _taskId ID of the submitted task
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
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
                     * 获取Error information
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return Error Error information
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 设置Error information
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _error Error information
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetError(const ErrorInfo& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Application type
                     */
                    int64_t m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * Status. Valid values: `0` (pending approval), `1` (application approved and task submitted), `2` (rejected)
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_applicationStatus;
                    bool m_applicationStatusHasBeenSet;

                    /**
                     * ID of the submitted task
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Error information
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    ErrorInfo m_error;
                    bool m_errorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_APPLYRESULT_H_
