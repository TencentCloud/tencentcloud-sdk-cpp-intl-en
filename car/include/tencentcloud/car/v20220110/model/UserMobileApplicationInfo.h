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
#include <tencentcloud/car/v20220110/model/Tag.h>


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
                     * 获取<p>Application Id</p>
                     * @return ApplicationId <p>Application Id</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置<p>Application Id</p>
                     * @param _applicationId <p>Application Id</p>
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
                     * 获取<p>Application name</p>
                     * @return ApplicationName <p>Application name</p>
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置<p>Application name</p>
                     * @param _applicationName <p>Application name</p>
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
                     * 获取<p>App type (Cloud APK: ApplicationAPK)</p>
                     * @return ApplicationType <p>App type (Cloud APK: ApplicationAPK)</p>
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置<p>App type (Cloud APK: ApplicationAPK)</p>
                     * @param _applicationType <p>App type (Cloud APK: ApplicationAPK)</p>
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
                     * 获取<p>Application running status (ApplicationRunning: normal running; ApplicationNoPackage: no available package)</p>
                     * @return ApplicationRunStatus <p>Application running status (ApplicationRunning: normal running; ApplicationNoPackage: no available package)</p>
                     * 
                     */
                    std::string GetApplicationRunStatus() const;

                    /**
                     * 设置<p>Application running status (ApplicationRunning: normal running; ApplicationNoPackage: no available package)</p>
                     * @param _applicationRunStatus <p>Application running status (ApplicationRunning: normal running; ApplicationNoPackage: no available package)</p>
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
                     * 获取<p>Application update status (ApplicationUpdateCreating: version creation in progress; ApplicationUpdateCreateFail: version creation failed; ApplicationUpdateNoReleased: version to be released; ApplicationUpdateReleased: version release completed; ApplicationUpdateNormal: none)</p>
                     * @return ApplicationUpdateStatus <p>Application update status (ApplicationUpdateCreating: version creation in progress; ApplicationUpdateCreateFail: version creation failed; ApplicationUpdateNoReleased: version to be released; ApplicationUpdateReleased: version release completed; ApplicationUpdateNormal: none)</p>
                     * 
                     */
                    std::string GetApplicationUpdateStatus() const;

                    /**
                     * 设置<p>Application update status (ApplicationUpdateCreating: version creation in progress; ApplicationUpdateCreateFail: version creation failed; ApplicationUpdateNoReleased: version to be released; ApplicationUpdateReleased: version release completed; ApplicationUpdateNormal: none)</p>
                     * @param _applicationUpdateStatus <p>Application update status (ApplicationUpdateCreating: version creation in progress; ApplicationUpdateCreateFail: version creation failed; ApplicationUpdateNoReleased: version to be released; ApplicationUpdateReleased: version release completed; ApplicationUpdateNormal: none)</p>
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
                     * 获取<p>Application creation time</p>
                     * @return ApplicationCreateTime <p>Application creation time</p>
                     * 
                     */
                    std::string GetApplicationCreateTime() const;

                    /**
                     * 设置<p>Application creation time</p>
                     * @param _applicationCreateTime <p>Application creation time</p>
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
                     * 获取<p>Application version list</p>
                     * @return ApplicationVersions <p>Application version list</p>
                     * 
                     */
                    std::vector<UserApplicationVersion> GetApplicationVersions() const;

                    /**
                     * 设置<p>Application version list</p>
                     * @param _applicationVersions <p>Application version list</p>
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
                     * 获取<p>Application nature (PUBLIC: public application; PRIVATE: user application)</p>
                     * @return ApplicationNature <p>Application nature (PUBLIC: public application; PRIVATE: user application)</p>
                     * 
                     */
                    std::string GetApplicationNature() const;

                    /**
                     * 设置<p>Application nature (PUBLIC: public application; PRIVATE: user application)</p>
                     * @param _applicationNature <p>Application nature (PUBLIC: public application; PRIVATE: user application)</p>
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
                     * 获取<p>Application tag</p>
                     * @return ApplicationTags <p>Application tag</p>
                     * 
                     */
                    std::vector<Tag> GetApplicationTags() const;

                    /**
                     * 设置<p>Application tag</p>
                     * @param _applicationTags <p>Application tag</p>
                     * 
                     */
                    void SetApplicationTags(const std::vector<Tag>& _applicationTags);

                    /**
                     * 判断参数 ApplicationTags 是否已赋值
                     * @return ApplicationTags 是否已赋值
                     * 
                     */
                    bool ApplicationTagsHasBeenSet() const;

                private:

                    /**
                     * <p>Application Id</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>Application name</p>
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * <p>App type (Cloud APK: ApplicationAPK)</p>
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * <p>Application running status (ApplicationRunning: normal running; ApplicationNoPackage: no available package)</p>
                     */
                    std::string m_applicationRunStatus;
                    bool m_applicationRunStatusHasBeenSet;

                    /**
                     * <p>Application update status (ApplicationUpdateCreating: version creation in progress; ApplicationUpdateCreateFail: version creation failed; ApplicationUpdateNoReleased: version to be released; ApplicationUpdateReleased: version release completed; ApplicationUpdateNormal: none)</p>
                     */
                    std::string m_applicationUpdateStatus;
                    bool m_applicationUpdateStatusHasBeenSet;

                    /**
                     * <p>Application creation time</p>
                     */
                    std::string m_applicationCreateTime;
                    bool m_applicationCreateTimeHasBeenSet;

                    /**
                     * <p>Application version list</p>
                     */
                    std::vector<UserApplicationVersion> m_applicationVersions;
                    bool m_applicationVersionsHasBeenSet;

                    /**
                     * <p>Application nature (PUBLIC: public application; PRIVATE: user application)</p>
                     */
                    std::string m_applicationNature;
                    bool m_applicationNatureHasBeenSet;

                    /**
                     * <p>Application tag</p>
                     */
                    std::vector<Tag> m_applicationTags;
                    bool m_applicationTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_USERMOBILEAPPLICATIONINFO_H_
