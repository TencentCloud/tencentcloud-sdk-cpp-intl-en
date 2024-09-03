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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_USERMOBILEAPPLICATIONINFO_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_USERMOBILEAPPLICATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/car/v20220110/model/UserApplicationVersion.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * Mobile application data information.
                */
                class UserMobileApplicationInfo : public AbstractModel
                {
                public:
                    UserMobileApplicationInfo();
                    ~UserMobileApplicationInfo() = default;
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
                     * 获取Application name.
                     * @return ApplicationName Application name.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Application name.
                     * @param _applicationName Application name.
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取Application type (cloud APK: application APK).
                     * @return ApplicationType Application type (cloud APK: application APK).
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置Application type (cloud APK: application APK).
                     * @param _applicationType Application type (cloud APK: application APK).
                     * 
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取Application running status (ApplicationRunning: normal running; ApplicationNoPackage: no available package).
                     * @return ApplicationRunStatus Application running status (ApplicationRunning: normal running; ApplicationNoPackage: no available package).
                     * 
                     */
                    std::string GetApplicationRunStatus() const;

                    /**
                     * 设置Application running status (ApplicationRunning: normal running; ApplicationNoPackage: no available package).
                     * @param _applicationRunStatus Application running status (ApplicationRunning: normal running; ApplicationNoPackage: no available package).
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
                     * 获取Application creation time.
                     * @return ApplicationCreateTime Application creation time.
                     * 
                     */
                    std::string GetApplicationCreateTime() const;

                    /**
                     * 设置Application creation time.
                     * @param _applicationCreateTime Application creation time.
                     * 
                     */
                    void SetApplicationCreateTime(const std::string& _applicationCreateTime);

                    /**
                     * 判断参数 ApplicationCreateTime 是否已赋值
                     * @return ApplicationCreateTime 是否已赋值
                     * 
                     */
                    bool ApplicationCreateTimeHasBeenSet() const;

                    /**
                     * 获取List of application versions.
                     * @return ApplicationVersions List of application versions.
                     * 
                     */
                    std::vector<UserApplicationVersion> GetApplicationVersions() const;

                    /**
                     * 设置List of application versions.
                     * @param _applicationVersions List of application versions.
                     * 
                     */
                    void SetApplicationVersions(const std::vector<UserApplicationVersion>& _applicationVersions);

                    /**
                     * 判断参数 ApplicationVersions 是否已赋值
                     * @return ApplicationVersions 是否已赋值
                     * 
                     */
                    bool ApplicationVersionsHasBeenSet() const;

                    /**
                     * 获取Application nature (PUBLIC: public application; PRIVATE: user application).
                     * @return ApplicationNature Application nature (PUBLIC: public application; PRIVATE: user application).
                     * 
                     */
                    std::string GetApplicationNature() const;

                    /**
                     * 设置Application nature (PUBLIC: public application; PRIVATE: user application).
                     * @param _applicationNature Application nature (PUBLIC: public application; PRIVATE: user application).
                     * 
                     */
                    void SetApplicationNature(const std::string& _applicationNature);

                    /**
                     * 判断参数 ApplicationNature 是否已赋值
                     * @return ApplicationNature 是否已赋值
                     * 
                     */
                    bool ApplicationNatureHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Application name.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Application type (cloud APK: application APK).
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * Application running status (ApplicationRunning: normal running; ApplicationNoPackage: no available package).
                     */
                    std::string m_applicationRunStatus;
                    bool m_applicationRunStatusHasBeenSet;

                    /**
                     * Application update status (ApplicationUpdateCreating: version creation in progress; ApplicationUpdateCreateFail: version creation failed; ApplicationUpdateNoReleased: version to be released; ApplicationUpdateReleased: version release completed; ApplicationUpdateNormal: none).
                     */
                    std::string m_applicationUpdateStatus;
                    bool m_applicationUpdateStatusHasBeenSet;

                    /**
                     * Application creation time.
                     */
                    std::string m_applicationCreateTime;
                    bool m_applicationCreateTimeHasBeenSet;

                    /**
                     * List of application versions.
                     */
                    std::vector<UserApplicationVersion> m_applicationVersions;
                    bool m_applicationVersionsHasBeenSet;

                    /**
                     * Application nature (PUBLIC: public application; PRIVATE: user application).
                     */
                    std::string m_applicationNature;
                    bool m_applicationNatureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_USERMOBILEAPPLICATIONINFO_H_
