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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_USERIDANDUSERNAME_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_USERIDANDUSERNAME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * User ID and username
                */
                class UserIdAndUserName : public AbstractModel
                {
                public:
                    UserIdAndUserName();
                    ~UserIdAndUserName() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID.
                     * @return UserId User ID.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID.
                     * @param _userId User ID.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Username.
                     * @return UserName Username.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username.
                     * @param _userName Username.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Enterprise ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CorpId Enterprise ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCorpId() const;

                    /**
                     * 设置Enterprise ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _corpId Enterprise ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCorpId(const std::string& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取Email.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Email Email.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Email.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _email Email.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取Last login time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastLogin Last login time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastLogin() const;

                    /**
                     * 设置Last login time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastLogin Last login time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastLogin(const std::string& _lastLogin);

                    /**
                     * 判断参数 LastLogin 是否已赋值
                     * @return LastLogin 是否已赋值
                     * 
                     */
                    bool LastLoginHasBeenSet() const;

                    /**
                     * 获取Enabled/Disabled status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Enabled/Disabled status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Enabled/Disabled status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Enabled/Disabled status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether to change the password during the first-time login.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FirstModify Whether to change the password during the first-time login.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFirstModify() const;

                    /**
                     * 设置Whether to change the password during the first-time login.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _firstModify Whether to change the password during the first-time login.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFirstModify(const int64_t& _firstModify);

                    /**
                     * 判断参数 FirstModify 是否已赋值
                     * @return FirstModify 是否已赋值
                     * 
                     */
                    bool FirstModifyHasBeenSet() const;

                    /**
                     * 获取Mobile number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PhoneNumber Mobile number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置Mobile number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _phoneNumber Mobile number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取Telephone country code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AreaCode Telephone country code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAreaCode() const;

                    /**
                     * 设置Telephone country code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _areaCode Telephone country code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAreaCode(const std::string& _areaCode);

                    /**
                     * 判断参数 AreaCode 是否已赋值
                     * @return AreaCode 是否已赋值
                     * 
                     */
                    bool AreaCodeHasBeenSet() const;

                    /**
                     * 获取Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatedUser Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedUser() const;

                    /**
                     * 设置Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createdUser Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedUser(const std::string& _createdUser);

                    /**
                     * 判断参数 CreatedUser 是否已赋值
                     * @return CreatedUser 是否已赋值
                     * 
                     */
                    bool CreatedUserHasBeenSet() const;

                    /**
                     * 获取Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatedAt Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createdAt Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Modifier.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedUser Modifier.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdatedUser() const;

                    /**
                     * 设置Modifier.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updatedUser Modifier.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdatedUser(const std::string& _updatedUser);

                    /**
                     * 判断参数 UpdatedUser 是否已赋值
                     * @return UpdatedUser 是否已赋值
                     * 
                     */
                    bool UpdatedUserHasBeenSet() const;

                    /**
                     * 获取Change time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedAt Change time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Change time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updatedAt Change time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取Global role.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GlobalUserName Global role.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGlobalUserName() const;

                    /**
                     * 设置Global role.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _globalUserName Global role.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGlobalUserName(const std::string& _globalUserName);

                    /**
                     * 判断参数 GlobalUserName 是否已赋值
                     * @return GlobalUserName 是否已赋值
                     * 
                     */
                    bool GlobalUserNameHasBeenSet() const;

                    /**
                     * 获取Global role code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GlobalUserCode Global role code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGlobalUserCode() const;

                    /**
                     * 设置Global role code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _globalUserCode Global role code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGlobalUserCode(const std::string& _globalUserCode);

                    /**
                     * 判断参数 GlobalUserCode 是否已赋值
                     * @return GlobalUserCode 是否已赋值
                     * 
                     */
                    bool GlobalUserCodeHasBeenSet() const;

                    /**
                     * 获取Mobile number.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Mobile Mobile number.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置Mobile number.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mobile Mobile number.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppId 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appId 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppUserId 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppUserId() const;

                    /**
                     * 设置1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appUserId 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppUserId(const std::string& _appUserId);

                    /**
                     * 判断参数 AppUserId 是否已赋值
                     * @return AppUserId 是否已赋值
                     * 
                     */
                    bool AppUserIdHasBeenSet() const;

                    /**
                     * 获取1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppUserAliasName 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppUserAliasName() const;

                    /**
                     * 设置1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appUserAliasName 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppUserAliasName(const std::string& _appUserAliasName);

                    /**
                     * 判断参数 AppUserAliasName 是否已赋值
                     * @return AppUserAliasName 是否已赋值
                     * 
                     */
                    bool AppUserAliasNameHasBeenSet() const;

                    /**
                     * 获取1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppUserName 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppUserName() const;

                    /**
                     * 设置1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appUserName 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppUserName(const std::string& _appUserName);

                    /**
                     * 判断参数 AppUserName 是否已赋值
                     * @return AppUserName 是否已赋值
                     * 
                     */
                    bool AppUserNameHasBeenSet() const;

                    /**
                     * 获取1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InValidateAppRange 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetInValidateAppRange() const;

                    /**
                     * 设置1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _inValidateAppRange 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInValidateAppRange(const bool& _inValidateAppRange);

                    /**
                     * 判断参数 InValidateAppRange 是否已赋值
                     * @return InValidateAppRange 是否已赋值
                     * 
                     */
                    bool InValidateAppRangeHasBeenSet() const;

                    /**
                     * 获取 -1: No activation required. 0: Inactivated. 1: Activated. Null value represents pending binding.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EmailActivationStatus  -1: No activation required. 0: Inactivated. 1: Activated. Null value represents pending binding.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEmailActivationStatus() const;

                    /**
                     * 设置 -1: No activation required. 0: Inactivated. 1: Activated. Null value represents pending binding.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _emailActivationStatus  -1: No activation required. 0: Inactivated. 1: Activated. Null value represents pending binding.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEmailActivationStatus(const int64_t& _emailActivationStatus);

                    /**
                     * 判断参数 EmailActivationStatus 是否已赋值
                     * @return EmailActivationStatus 是否已赋值
                     * 
                     */
                    bool EmailActivationStatusHasBeenSet() const;

                    /**
                     * 获取1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置1
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id 1
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * User ID.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Username.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Enterprise ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * Email.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Last login time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastLogin;
                    bool m_lastLoginHasBeenSet;

                    /**
                     * Enabled/Disabled status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether to change the password during the first-time login.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_firstModify;
                    bool m_firstModifyHasBeenSet;

                    /**
                     * Mobile number.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * Telephone country code.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_areaCode;
                    bool m_areaCodeHasBeenSet;

                    /**
                     * Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdUser;
                    bool m_createdUserHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Modifier.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedUser;
                    bool m_updatedUserHasBeenSet;

                    /**
                     * Change time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * Global role.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_globalUserName;
                    bool m_globalUserNameHasBeenSet;

                    /**
                     * Global role code.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_globalUserCode;
                    bool m_globalUserCodeHasBeenSet;

                    /**
                     * Mobile number.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 1
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 1
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appUserId;
                    bool m_appUserIdHasBeenSet;

                    /**
                     * 1
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appUserAliasName;
                    bool m_appUserAliasNameHasBeenSet;

                    /**
                     * 1
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appUserName;
                    bool m_appUserNameHasBeenSet;

                    /**
                     * 1
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_inValidateAppRange;
                    bool m_inValidateAppRangeHasBeenSet;

                    /**
                     *  -1: No activation required. 0: Inactivated. 1: Activated. Null value represents pending binding.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_emailActivationStatus;
                    bool m_emailActivationStatusHasBeenSet;

                    /**
                     * 1
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_USERIDANDUSERNAME_H_
