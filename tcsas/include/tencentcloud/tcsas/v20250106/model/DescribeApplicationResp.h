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
                * Superapp details.
                */
                class DescribeApplicationResp : public AbstractModel
                {
                public:
                    DescribeApplicationResp();
                    ~DescribeApplicationResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Superapp ID.
                     * @return ApplicationId Superapp ID.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Superapp ID.
                     * @param _applicationId Superapp ID.
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
                     * 获取Product ID.
                     * @return AppIdentityId Product ID.
                     * 
                     */
                    int64_t GetAppIdentityId() const;

                    /**
                     * 设置Product ID.
                     * @param _appIdentityId Product ID.
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
                     * 获取Superapp name.
                     * @return ApplicationName Superapp name.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Superapp name.
                     * @param _applicationName Superapp name.
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
                     * 获取Superapp icon.
                     * @return Logo Superapp icon.
                     * 
                     */
                    std::string GetLogo() const;

                    /**
                     * 设置Superapp icon.
                     * @param _logo Superapp icon.
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
                     * 获取Remarks.
                     * @return Remark Remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks.
                     * @param _remark Remarks.
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
                     * 获取Android superapp package name.
                     * @return AndroidAppKey Android superapp package name.
                     * 
                     */
                    std::string GetAndroidAppKey() const;

                    /**
                     * 设置Android superapp package name.
                     * @param _androidAppKey Android superapp package name.
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
                     * 获取iOS superapp bundle ID.
                     * @return IosAppKey iOS superapp bundle ID.
                     * 
                     */
                    std::string GetIosAppKey() const;

                    /**
                     * 设置iOS superapp bundle ID.
                     * @param _iosAppKey iOS superapp bundle ID.
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
                     * 获取Creator.
                     * @return CreateUser Creator.
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置Creator.
                     * @param _createUser Creator.
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
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Last modifier.
                     * @return UpdateUser Last modifier.
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置Last modifier.
                     * @param _updateUser Last modifier.
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
                     * 获取Last modified time.
                     * @return UpdateTime Last modified time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time.
                     * @param _updateTime Last modified time.
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
                     * 获取Superapp introduction.
                     * @return Intro Superapp introduction.
                     * 
                     */
                    std::string GetIntro() const;

                    /**
                     * 设置Superapp introduction.
                     * @param _intro Superapp introduction.
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
                     * 获取Team ID.
                     * @return TeamId Team ID.
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置Team ID.
                     * @param _teamId Team ID.
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
                     * 获取Team name.
                     * @return TeamName Team name.
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置Team name.
                     * @param _teamName Team name.
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
                     * 获取Number of sensitive APIs.
                     * @return SensitiveApiCount Number of sensitive APIs.
                     * 
                     */
                    int64_t GetSensitiveApiCount() const;

                    /**
                     * 设置Number of sensitive APIs.
                     * @param _sensitiveApiCount Number of sensitive APIs.
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
                     * 获取Superapp type. Valid values: 1: Test; 2: Production.
                     * @return ApplicationType Superapp type. Valid values: 1: Test; 2: Production.
                     * 
                     */
                    int64_t GetApplicationType() const;

                    /**
                     * 设置Superapp type. Valid values: 1: Test; 2: Production.
                     * @param _applicationType Superapp type. Valid values: 1: Test; 2: Production.
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
                     * 获取Superapp scheme.
                     * @return Scheme Superapp scheme.
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置Superapp scheme.
                     * @param _scheme Superapp scheme.
                     * 
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     * 
                     */
                    bool SchemeHasBeenSet() const;

                private:

                    /**
                     * Superapp ID.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Product ID.
                     */
                    int64_t m_appIdentityId;
                    bool m_appIdentityIdHasBeenSet;

                    /**
                     * Superapp name.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Superapp icon.
                     */
                    std::string m_logo;
                    bool m_logoHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Android superapp package name.
                     */
                    std::string m_androidAppKey;
                    bool m_androidAppKeyHasBeenSet;

                    /**
                     * iOS superapp bundle ID.
                     */
                    std::string m_iosAppKey;
                    bool m_iosAppKeyHasBeenSet;

                    /**
                     * Creator.
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modifier.
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * Last modified time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Superapp introduction.
                     */
                    std::string m_intro;
                    bool m_introHasBeenSet;

                    /**
                     * Team ID.
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * Team name.
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * Number of sensitive APIs.
                     */
                    int64_t m_sensitiveApiCount;
                    bool m_sensitiveApiCountHasBeenSet;

                    /**
                     * Superapp type. Valid values: 1: Test; 2: Production.
                     */
                    int64_t m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * Superapp scheme.
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEAPPLICATIONRESP_H_
