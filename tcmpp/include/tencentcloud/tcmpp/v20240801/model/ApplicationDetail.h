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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_APPLICATIONDETAIL_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_APPLICATIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcmpp/v20240801/model/ApplicationMNPRelInfoResp.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Application details
                */
                class ApplicationDetail : public AbstractModel
                {
                public:
                    ApplicationDetail();
                    ~ApplicationDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationID Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationID() const;

                    /**
                     * 设置Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationID Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationID(const std::string& _applicationID);

                    /**
                     * 判断参数 ApplicationID 是否已赋值
                     * @return ApplicationID 是否已赋值
                     * 
                     */
                    bool ApplicationIDHasBeenSet() const;

                    /**
                     * 获取Product ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppIdentityID Product ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAppIdentityID() const;

                    /**
                     * 设置Product ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appIdentityID Product ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppIdentityID(const int64_t& _appIdentityID);

                    /**
                     * 判断参数 AppIdentityID 是否已赋值
                     * @return AppIdentityID 是否已赋值
                     * 
                     */
                    bool AppIdentityIDHasBeenSet() const;

                    /**
                     * 获取The application name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationName The application name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置The application name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationName The application name.
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
                     * 获取English name of the application (this field is not used yet)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationEnglishName English name of the application (this field is not used yet)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationEnglishName() const;

                    /**
                     * 设置English name of the application (this field is not used yet)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationEnglishName English name of the application (this field is not used yet)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationEnglishName(const std::string& _applicationEnglishName);

                    /**
                     * 判断参数 ApplicationEnglishName 是否已赋值
                     * @return ApplicationEnglishName 是否已赋值
                     * 
                     */
                    bool ApplicationEnglishNameHasBeenSet() const;

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
                     * 获取The creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime The creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime The creation time.
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
                     * 获取Updated by
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateUser Updated by
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置Updated by
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateUser Updated by
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
                     * 获取Update date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update date
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update date
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
                     * 获取Number of bound mini programs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BindMNPCount Number of bound mini programs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBindMNPCount() const;

                    /**
                     * 设置Number of bound mini programs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bindMNPCount Number of bound mini programs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBindMNPCount(const int64_t& _bindMNPCount);

                    /**
                     * 判断参数 BindMNPCount 是否已赋值
                     * @return BindMNPCount 是否已赋值
                     * 
                     */
                    bool BindMNPCountHasBeenSet() const;

                    /**
                     * 获取Information of bound mini programs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BindMNPList Information of bound mini programs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ApplicationMNPRelInfoResp> GetBindMNPList() const;

                    /**
                     * 设置Information of bound mini programs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bindMNPList Information of bound mini programs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBindMNPList(const std::vector<ApplicationMNPRelInfoResp>& _bindMNPList);

                    /**
                     * 判断参数 BindMNPList 是否已赋值
                     * @return BindMNPList 是否已赋值
                     * 
                     */
                    bool BindMNPListHasBeenSet() const;

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
                     * 获取Android App download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AndroidAppUrl Android App download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAndroidAppUrl() const;

                    /**
                     * 设置Android App download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _androidAppUrl Android App download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAndroidAppUrl(const std::string& _androidAppUrl);

                    /**
                     * 判断参数 AndroidAppUrl 是否已赋值
                     * @return AndroidAppUrl 是否已赋值
                     * 
                     */
                    bool AndroidAppUrlHasBeenSet() const;

                    /**
                     * 获取iOS App download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IosAppUrl iOS App download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIosAppUrl() const;

                    /**
                     * 设置iOS App download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iosAppUrl iOS App download address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIosAppUrl(const std::string& _iosAppUrl);

                    /**
                     * 判断参数 IosAppUrl 是否已赋值
                     * @return IosAppUrl 是否已赋值
                     * 
                     */
                    bool IosAppUrlHasBeenSet() const;

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
                     * 获取Quantity of sensitive APIs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SensitiveApiCount Quantity of sensitive APIs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSensitiveApiCount() const;

                    /**
                     * 设置Quantity of sensitive APIs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sensitiveApiCount Quantity of sensitive APIs
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
                    std::string m_applicationID;
                    bool m_applicationIDHasBeenSet;

                    /**
                     * Product ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_appIdentityID;
                    bool m_appIdentityIDHasBeenSet;

                    /**
                     * The application name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * English name of the application (this field is not used yet)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationEnglishName;
                    bool m_applicationEnglishNameHasBeenSet;

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
                     * The creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Updated by
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * Update date
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Number of bound mini programs
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bindMNPCount;
                    bool m_bindMNPCountHasBeenSet;

                    /**
                     * Information of bound mini programs
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ApplicationMNPRelInfoResp> m_bindMNPList;
                    bool m_bindMNPListHasBeenSet;

                    /**
                     * Application description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_intro;
                    bool m_introHasBeenSet;

                    /**
                     * Android App download address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_androidAppUrl;
                    bool m_androidAppUrlHasBeenSet;

                    /**
                     * iOS App download address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iosAppUrl;
                    bool m_iosAppUrlHasBeenSet;

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
                     * Quantity of sensitive APIs
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

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_APPLICATIONDETAIL_H_
