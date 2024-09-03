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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_USERAPPLICATIONSTATUS_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_USERAPPLICATIONSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * Application status information.
                */
                class UserApplicationStatus : public AbstractModel
                {
                public:
                    UserApplicationStatus();
                    ~UserApplicationStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application ID.
                     * @return ApplicationId Application ID.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID.
                     * @param _applicationId Application ID.
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
                     * 获取Application running status (ApplicationDeleting: application deletion in progress; ApplicationCreateFail: application creation failed; ApplicationCreating: application creation in progress; ApplicationRunning: normal running; ApplicationNoConfigured: main execution program path not configured; ApplicationNoPackage: no available package).
                     * @return ApplicationRunStatus Application running status (ApplicationDeleting: application deletion in progress; ApplicationCreateFail: application creation failed; ApplicationCreating: application creation in progress; ApplicationRunning: normal running; ApplicationNoConfigured: main execution program path not configured; ApplicationNoPackage: no available package).
                     * 
                     */
                    std::string GetApplicationRunStatus() const;

                    /**
                     * 设置Application running status (ApplicationDeleting: application deletion in progress; ApplicationCreateFail: application creation failed; ApplicationCreating: application creation in progress; ApplicationRunning: normal running; ApplicationNoConfigured: main execution program path not configured; ApplicationNoPackage: no available package).
                     * @param _applicationRunStatus Application running status (ApplicationDeleting: application deletion in progress; ApplicationCreateFail: application creation failed; ApplicationCreating: application creation in progress; ApplicationRunning: normal running; ApplicationNoConfigured: main execution program path not configured; ApplicationNoPackage: no available package).
                     * 
                     */
                    void SetApplicationRunStatus(const std::string& _applicationRunStatus);

                    /**
                     * 判断参数 ApplicationRunStatus 是否已赋值
                     * @return ApplicationRunStatus 是否已赋值
                     * 
                     */
                    bool ApplicationRunStatusHasBeenSet() const;

                    /**
                     * 获取Application update status (ApplicationUpdateCreating: version creation in progress; ApplicationUpdateCreateFail: version creation failed; ApplicationUpdateNoReleased: version to be released; ApplicationUpdateReleased: version release completed; ApplicationUpdateNormal: none).
                     * @return ApplicationUpdateStatus Application update status (ApplicationUpdateCreating: version creation in progress; ApplicationUpdateCreateFail: version creation failed; ApplicationUpdateNoReleased: version to be released; ApplicationUpdateReleased: version release completed; ApplicationUpdateNormal: none).
                     * 
                     */
                    std::string GetApplicationUpdateStatus() const;

                    /**
                     * 设置Application update status (ApplicationUpdateCreating: version creation in progress; ApplicationUpdateCreateFail: version creation failed; ApplicationUpdateNoReleased: version to be released; ApplicationUpdateReleased: version release completed; ApplicationUpdateNormal: none).
                     * @param _applicationUpdateStatus Application update status (ApplicationUpdateCreating: version creation in progress; ApplicationUpdateCreateFail: version creation failed; ApplicationUpdateNoReleased: version to be released; ApplicationUpdateReleased: version release completed; ApplicationUpdateNormal: none).
                     * 
                     */
                    void SetApplicationUpdateStatus(const std::string& _applicationUpdateStatus);

                    /**
                     * 判断参数 ApplicationUpdateStatus 是否已赋值
                     * @return ApplicationUpdateStatus 是否已赋值
                     * 
                     */
                    bool ApplicationUpdateStatusHasBeenSet() const;

                    /**
                     * 获取Application update progress.
                     * @return ApplicationUpdateProgress Application update progress.
                     * 
                     */
                    int64_t GetApplicationUpdateProgress() const;

                    /**
                     * 设置Application update progress.
                     * @param _applicationUpdateProgress Application update progress.
                     * 
                     */
                    void SetApplicationUpdateProgress(const int64_t& _applicationUpdateProgress);

                    /**
                     * 判断参数 ApplicationUpdateProgress 是否已赋值
                     * @return ApplicationUpdateProgress 是否已赋值
                     * 
                     */
                    bool ApplicationUpdateProgressHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Application running status (ApplicationDeleting: application deletion in progress; ApplicationCreateFail: application creation failed; ApplicationCreating: application creation in progress; ApplicationRunning: normal running; ApplicationNoConfigured: main execution program path not configured; ApplicationNoPackage: no available package).
                     */
                    std::string m_applicationRunStatus;
                    bool m_applicationRunStatusHasBeenSet;

                    /**
                     * Application update status (ApplicationUpdateCreating: version creation in progress; ApplicationUpdateCreateFail: version creation failed; ApplicationUpdateNoReleased: version to be released; ApplicationUpdateReleased: version release completed; ApplicationUpdateNormal: none).
                     */
                    std::string m_applicationUpdateStatus;
                    bool m_applicationUpdateStatusHasBeenSet;

                    /**
                     * Application update progress.
                     */
                    int64_t m_applicationUpdateProgress;
                    bool m_applicationUpdateProgressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_USERAPPLICATIONSTATUS_H_
