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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_USERROLELISTDATAUSERROLEINFO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_USERROLELISTDATAUSERROLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/UserRoleListDataRoleInfo.h>
#include <tencentcloud/bi/v20220105/model/UserGroupDTO.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * User role information
                */
                class UserRoleListDataUserRoleInfo : public AbstractModel
                {
                public:
                    UserRoleListDataUserRoleInfo();
                    ~UserRoleListDataUserRoleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Business ID.
                     * @return Id Business ID.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Business ID.
                     * @param _id Business ID.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取This API is used to obtain the role list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoleList This API is used to obtain the role list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<UserRoleListDataRoleInfo> GetRoleList() const;

                    /**
                     * 设置This API is used to obtain the role list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roleList This API is used to obtain the role list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoleList(const std::vector<UserRoleListDataRoleInfo>& _roleList);

                    /**
                     * 判断参数 RoleList 是否已赋值
                     * @return RoleList 是否已赋值
                     * 
                     */
                    bool RoleListHasBeenSet() const;

                    /**
                     * 获取Role ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoleIdList Role ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<uint64_t> GetRoleIdList() const;

                    /**
                     * 设置Role ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roleIdList Role ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoleIdList(const std::vector<uint64_t>& _roleIdList);

                    /**
                     * 判断参数 RoleIdList 是否已赋值
                     * @return RoleIdList 是否已赋值
                     * 
                     */
                    bool RoleIdListHasBeenSet() const;

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
                     * @return CorpId Enterprise ID.
                     * 
                     */
                    std::string GetCorpId() const;

                    /**
                     * 设置Enterprise ID.
                     * @param _corpId Enterprise ID.
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
                     * 获取Updater.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedUser Updater.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdatedUser() const;

                    /**
                     * 设置Updater.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updatedUser Updater.
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
                     * 获取Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedAt Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updatedAt Update time.
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
                     * 获取Account status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Account status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Account status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Account status.
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
                     * 获取Whether it is the root account.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RootAccount Whether it is the root account.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetRootAccount() const;

                    /**
                     * 设置Whether it is the root account.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rootAccount Whether it is the root account.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRootAccount(const bool& _rootAccount);

                    /**
                     * 判断参数 RootAccount 是否已赋值
                     * @return RootAccount 是否已赋值
                     * 
                     */
                    bool RootAccountHasBeenSet() const;

                    /**
                     * 获取Whether it is an enterprise administrator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CorpAdmin Whether it is an enterprise administrator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetCorpAdmin() const;

                    /**
                     * 设置Whether it is an enterprise administrator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _corpAdmin Whether it is an enterprise administrator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCorpAdmin(const bool& _corpAdmin);

                    /**
                     * 判断参数 CorpAdmin 是否已赋值
                     * @return CorpAdmin 是否已赋值
                     * 
                     */
                    bool CorpAdminHasBeenSet() const;

                    /**
                     * 获取WeCom user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppUserId WeCom user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppUserId() const;

                    /**
                     * 设置WeCom user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appUserId WeCom user ID.
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
                     * 获取Nickname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppUserAliasName Nickname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppUserAliasName() const;

                    /**
                     * 设置Nickname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appUserAliasName Nickname.
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
                     * 获取Application username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppUserName Application username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppUserName() const;

                    /**
                     * 设置Application username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appUserName Application username.
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
                     * 获取Whether it is within the visible range.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InValidateAppRange Whether it is within the visible range.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetInValidateAppRange() const;

                    /**
                     * 设置Whether it is within the visible range.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _inValidateAppRange Whether it is within the visible range.
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
                     * 获取User openID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppOpenUserId User openID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppOpenUserId() const;

                    /**
                     * 设置User openID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appOpenUserId User openID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppOpenUserId(const std::string& _appOpenUserId);

                    /**
                     * 判断参数 AppOpenUserId 是否已赋值
                     * @return AppOpenUserId 是否已赋值
                     * 
                     */
                    bool AppOpenUserIdHasBeenSet() const;

                    /**
                     * 获取Activation status of email.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EmailActivationStatus Activation status of email.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEmailActivationStatus() const;

                    /**
                     * 设置Activation status of email.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _emailActivationStatus Activation status of email.
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
                     * 获取User group information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserGroupList User group information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<UserGroupDTO> GetUserGroupList() const;

                    /**
                     * 设置User group information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userGroupList User group information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserGroupList(const std::vector<UserGroupDTO>& _userGroupList);

                    /**
                     * 判断参数 UserGroupList 是否已赋值
                     * @return UserGroupList 是否已赋值
                     * 
                     */
                    bool UserGroupListHasBeenSet() const;

                private:

                    /**
                     * Business ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * This API is used to obtain the role list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserRoleListDataRoleInfo> m_roleList;
                    bool m_roleListHasBeenSet;

                    /**
                     * Role ID list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<uint64_t> m_roleIdList;
                    bool m_roleIdListHasBeenSet;

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
                     * Updater.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedUser;
                    bool m_updatedUserHasBeenSet;

                    /**
                     * Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * Last login time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastLogin;
                    bool m_lastLoginHasBeenSet;

                    /**
                     * Account status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

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
                     * Whether it is the root account.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_rootAccount;
                    bool m_rootAccountHasBeenSet;

                    /**
                     * Whether it is an enterprise administrator.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_corpAdmin;
                    bool m_corpAdminHasBeenSet;

                    /**
                     * WeCom user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appUserId;
                    bool m_appUserIdHasBeenSet;

                    /**
                     * Nickname.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appUserAliasName;
                    bool m_appUserAliasNameHasBeenSet;

                    /**
                     * Application username.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appUserName;
                    bool m_appUserNameHasBeenSet;

                    /**
                     * Whether it is within the visible range.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_inValidateAppRange;
                    bool m_inValidateAppRangeHasBeenSet;

                    /**
                     * User openID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appOpenUserId;
                    bool m_appOpenUserIdHasBeenSet;

                    /**
                     * Activation status of email.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_emailActivationStatus;
                    bool m_emailActivationStatusHasBeenSet;

                    /**
                     * User group information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserGroupDTO> m_userGroupList;
                    bool m_userGroupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_USERROLELISTDATAUSERROLEINFO_H_
