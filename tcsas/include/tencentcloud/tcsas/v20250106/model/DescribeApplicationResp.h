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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPLICATIONRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPLICATIONRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Application details
                */
                class DescribeApplicationResp : public AbstractModel
                {
                public:
                    DescribeApplicationResp();
                    ~DescribeApplicationResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationId Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationId Application ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Product ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppIdentityId Product ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAppIdentityId() const;

                    /**
                     * 设置Product ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appIdentityId Product ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppIdentityId(const int64_t& _appIdentityId);

                    /**
                     * 判断参数 AppIdentityId 是否已赋值
                     * @return AppIdentityId 是否已赋值
                     * 
                     */
                    bool AppIdentityIdHasBeenSet() const;

                    /**
                     * 获取Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationName Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationName Application name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Logo Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogo() const;

                    /**
                     * 设置Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logo Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogo(const std::string& _logo);

                    /**
                     * 判断参数 Logo 是否已赋值
                     * @return Logo 是否已赋值
                     * 
                     */
                    bool LogoHasBeenSet() const;

                    /**
                     * 获取Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remark Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Android package name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AndroidAppKey Android package name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAndroidAppKey() const;

                    /**
                     * 设置Android package name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _androidAppKey Android package name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAndroidAppKey(const std::string& _androidAppKey);

                    /**
                     * 判断参数 AndroidAppKey 是否已赋值
                     * @return AndroidAppKey 是否已赋值
                     * 
                     */
                    bool AndroidAppKeyHasBeenSet() const;

                    /**
                     * 获取iOS bundleId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IosAppKey iOS bundleId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIosAppKey() const;

                    /**
                     * 设置iOS bundleId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iosAppKey iOS bundleId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIosAppKey(const std::string& _iosAppKey);

                    /**
                     * 判断参数 IosAppKey 是否已赋值
                     * @return IosAppKey 是否已赋值
                     * 
                     */
                    bool IosAppKeyHasBeenSet() const;

                    /**
                     * 获取Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateUser Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createUser Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateUser(const std::string& _createUser);

                    /**
                     * 判断参数 CreateUser 是否已赋值
                     * @return CreateUser 是否已赋值
                     * 
                     */
                    bool CreateUserHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Updater
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateUser Updater
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置Updater
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateUser Updater
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateUser(const std::string& _updateUser);

                    /**
                     * 判断参数 UpdateUser 是否已赋值
                     * @return UpdateUser 是否已赋值
                     * 
                     */
                    bool UpdateUserHasBeenSet() const;

                    /**
                     * 获取Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Application description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Intro Application description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIntro() const;

                    /**
                     * 设置Application description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _intro Application description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIntro(const std::string& _intro);

                    /**
                     * 判断参数 Intro 是否已赋值
                     * @return Intro 是否已赋值
                     * 
                     */
                    bool IntroHasBeenSet() const;

                    /**
                     * 获取Team ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TeamId Team ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置Team ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _teamId Team ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TeamName Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _teamName Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTeamName(const std::string& _teamName);

                    /**
                     * 判断参数 TeamName 是否已赋值
                     * @return TeamName 是否已赋值
                     * 
                     */
                    bool TeamNameHasBeenSet() const;

                    /**
                     * 获取Number of sensitive APIs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SensitiveApiCount Number of sensitive APIs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSensitiveApiCount() const;

                    /**
                     * 设置Number of sensitive APIs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sensitiveApiCount Number of sensitive APIs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSensitiveApiCount(const int64_t& _sensitiveApiCount);

                    /**
                     * 判断参数 SensitiveApiCount 是否已赋值
                     * @return SensitiveApiCount 是否已赋值
                     * 
                     */
                    bool SensitiveApiCountHasBeenSet() const;

                    /**
                     * 获取Application type. 1: Test; 2: Formal
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationType Application type. 1: Test; 2: Formal
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetApplicationType() const;

                    /**
                     * 设置Application type. 1: Test; 2: Formal
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationType Application type. 1: Test; 2: Formal
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationType(const int64_t& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                private:

                    /**
                     * Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Product ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_appIdentityId;
                    bool m_appIdentityIdHasBeenSet;

                    /**
                     * Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logo;
                    bool m_logoHasBeenSet;

                    /**
                     * Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Android package name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_androidAppKey;
                    bool m_androidAppKeyHasBeenSet;

                    /**
                     * iOS bundleId
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iosAppKey;
                    bool m_iosAppKeyHasBeenSet;

                    /**
                     * Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Updater
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Application description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_intro;
                    bool m_introHasBeenSet;

                    /**
                     * Team ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * Number of sensitive APIs
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sensitiveApiCount;
                    bool m_sensitiveApiCountHasBeenSet;

                    /**
                     * Application type. 1: Test; 2: Formal
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPLICATIONRESP_H_
