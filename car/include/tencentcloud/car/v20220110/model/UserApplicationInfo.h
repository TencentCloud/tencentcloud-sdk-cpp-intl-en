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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_USERAPPLICATIONINFO_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_USERAPPLICATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/car/v20220110/model/UserApplicationVersion.h>
#include <tencentcloud/car/v20220110/model/ApplicationBaseInfo.h>
#include <tencentcloud/car/v20220110/model/UserApplicationStore.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * Application data information.
                */
                class UserApplicationInfo : public AbstractModel
                {
                public:
                    UserApplicationInfo();
                    ~UserApplicationInfo() = default;
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
                     * 获取Application type (cloud 3D: Application3D; cloud XR: ApplicationXR; cloud Web: ApplicationWeb).
                     * @return ApplicationType Application type (cloud 3D: Application3D; cloud XR: ApplicationXR; cloud Web: ApplicationWeb).
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置Application type (cloud 3D: Application3D; cloud XR: ApplicationXR; cloud Web: ApplicationWeb).
                     * @param _applicationType Application type (cloud 3D: Application3D; cloud XR: ApplicationXR; cloud Web: ApplicationWeb).
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
                     * 获取Application program execution path.
                     * @return ApplicationExePath Application program execution path.
                     * 
                     */
                    std::string GetApplicationExePath() const;

                    /**
                     * 设置Application program execution path.
                     * @param _applicationExePath Application program execution path.
                     * 
                     */
                    void SetApplicationExePath(const std::string& _applicationExePath);

                    /**
                     * 判断参数 ApplicationExePath 是否已赋值
                     * @return ApplicationExePath 是否已赋值
                     * 
                     */
                    bool ApplicationExePathHasBeenSet() const;

                    /**
                     * 获取Application process list.
                     * @return ApplicationInterList Application process list.
                     * 
                     */
                    std::string GetApplicationInterList() const;

                    /**
                     * 设置Application process list.
                     * @param _applicationInterList Application process list.
                     * 
                     */
                    void SetApplicationInterList(const std::string& _applicationInterList);

                    /**
                     * 判断参数 ApplicationInterList 是否已赋值
                     * @return ApplicationInterList 是否已赋值
                     * 
                     */
                    bool ApplicationInterListHasBeenSet() const;

                    /**
                     * 获取Application startup parameters.
                     * @return ApplicationParams Application startup parameters.
                     * 
                     */
                    std::string GetApplicationParams() const;

                    /**
                     * 设置Application startup parameters.
                     * @param _applicationParams Application startup parameters.
                     * 
                     */
                    void SetApplicationParams(const std::string& _applicationParams);

                    /**
                     * 判断参数 ApplicationParams 是否已赋值
                     * @return ApplicationParams 是否已赋值
                     * 
                     */
                    bool ApplicationParamsHasBeenSet() const;

                    /**
                     * 获取Application running status (ApplicationDeleting: application deletion in progress; ApplicationCreateFail: application creation failed; ApplicationCreating: application creation in progress; ApplicationRunning: normal running; ApplicationNoConfigured: main execution program path not configured).
                     * @return ApplicationRunStatus Application running status (ApplicationDeleting: application deletion in progress; ApplicationCreateFail: application creation failed; ApplicationCreating: application creation in progress; ApplicationRunning: normal running; ApplicationNoConfigured: main execution program path not configured).
                     * 
                     */
                    std::string GetApplicationRunStatus() const;

                    /**
                     * 设置Application running status (ApplicationDeleting: application deletion in progress; ApplicationCreateFail: application creation failed; ApplicationCreating: application creation in progress; ApplicationRunning: normal running; ApplicationNoConfigured: main execution program path not configured).
                     * @param _applicationRunStatus Application running status (ApplicationDeleting: application deletion in progress; ApplicationCreateFail: application creation failed; ApplicationCreating: application creation in progress; ApplicationRunning: normal running; ApplicationNoConfigured: main execution program path not configured).
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
                     * 获取Application basic data.
                     * @return ApplicationBaseInfo Application basic data.
                     * 
                     */
                    ApplicationBaseInfo GetApplicationBaseInfo() const;

                    /**
                     * 设置Application basic data.
                     * @param _applicationBaseInfo Application basic data.
                     * 
                     */
                    void SetApplicationBaseInfo(const ApplicationBaseInfo& _applicationBaseInfo);

                    /**
                     * 判断参数 ApplicationBaseInfo 是否已赋值
                     * @return ApplicationBaseInfo 是否已赋值
                     * 
                     */
                    bool ApplicationBaseInfoHasBeenSet() const;

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

                    /**
                     * 获取Application repository list.
                     * @return ApplicationStores Application repository list.
                     * 
                     */
                    std::vector<UserApplicationStore> GetApplicationStores() const;

                    /**
                     * 设置Application repository list.
                     * @param _applicationStores Application repository list.
                     * 
                     */
                    void SetApplicationStores(const std::vector<UserApplicationStore>& _applicationStores);

                    /**
                     * 判断参数 ApplicationStores 是否已赋值
                     * @return ApplicationStores 是否已赋值
                     * 
                     */
                    bool ApplicationStoresHasBeenSet() const;

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
                     * Application type (cloud 3D: Application3D; cloud XR: ApplicationXR; cloud Web: ApplicationWeb).
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * Application program execution path.
                     */
                    std::string m_applicationExePath;
                    bool m_applicationExePathHasBeenSet;

                    /**
                     * Application process list.
                     */
                    std::string m_applicationInterList;
                    bool m_applicationInterListHasBeenSet;

                    /**
                     * Application startup parameters.
                     */
                    std::string m_applicationParams;
                    bool m_applicationParamsHasBeenSet;

                    /**
                     * Application running status (ApplicationDeleting: application deletion in progress; ApplicationCreateFail: application creation failed; ApplicationCreating: application creation in progress; ApplicationRunning: normal running; ApplicationNoConfigured: main execution program path not configured).
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
                     * Application basic data.
                     */
                    ApplicationBaseInfo m_applicationBaseInfo;
                    bool m_applicationBaseInfoHasBeenSet;

                    /**
                     * Application update progress.
                     */
                    int64_t m_applicationUpdateProgress;
                    bool m_applicationUpdateProgressHasBeenSet;

                    /**
                     * Application nature (PUBLIC: public application; PRIVATE: user application).
                     */
                    std::string m_applicationNature;
                    bool m_applicationNatureHasBeenSet;

                    /**
                     * Application repository list.
                     */
                    std::vector<UserApplicationStore> m_applicationStores;
                    bool m_applicationStoresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_USERAPPLICATIONINFO_H_
