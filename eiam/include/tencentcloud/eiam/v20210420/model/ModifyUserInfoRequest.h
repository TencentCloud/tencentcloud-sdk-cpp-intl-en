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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYUSERINFOREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYUSERINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ModifyUserInfo request structure.
                */
                class ModifyUserInfoRequest : public AbstractModel
                {
                public:
                    ModifyUserInfoRequest();
                    ~ModifyUserInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Username, which can contain up to 32 characters. You need to select either `Username` or `UserId` as the search criterion; if both are selected, `Username` will be used by default.
                     * @return UserName Username, which can contain up to 32 characters. You need to select either `Username` or `UserId` as the search criterion; if both are selected, `Username` will be used by default.
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username, which can contain up to 32 characters. You need to select either `Username` or `UserId` as the search criterion; if both are selected, `Username` will be used by default.
                     * @param UserName Username, which can contain up to 32 characters. You need to select either `Username` or `UserId` as the search criterion; if both are selected, `Username` will be used by default.
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Nickname, which can contain up to 64 characters and is the same as the username by default.
                     * @return DisplayName Nickname, which can contain up to 64 characters and is the same as the username by default.
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Nickname, which can contain up to 64 characters and is the same as the username by default.
                     * @param DisplayName Nickname, which can contain up to 64 characters and is the same as the username by default.
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取User remarks, which can contain up to 512 characters.
                     * @return Description User remarks, which can contain up to 512 characters.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置User remarks, which can contain up to 512 characters.
                     * @param Description User remarks, which can contain up to 512 characters.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取List of IDs of the user's user groups.
                     * @return UserGroupIds List of IDs of the user's user groups.
                     */
                    std::vector<std::string> GetUserGroupIds() const;

                    /**
                     * 设置List of IDs of the user's user groups.
                     * @param UserGroupIds List of IDs of the user's user groups.
                     */
                    void SetUserGroupIds(const std::vector<std::string>& _userGroupIds);

                    /**
                     * 判断参数 UserGroupIds 是否已赋值
                     * @return UserGroupIds 是否已赋值
                     */
                    bool UserGroupIdsHasBeenSet() const;

                    /**
                     * 获取User ID. You need to select either `UserName` or `UserId` as the search criterion. If both are selected, `UserName` will be used by default.
                     * @return UserId User ID. You need to select either `UserName` or `UserId` as the search criterion. If both are selected, `UserName` will be used by default.
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID. You need to select either `UserName` or `UserId` as the search criterion. If both are selected, `UserName` will be used by default.
                     * @param UserId User ID. You need to select either `UserName` or `UserId` as the search criterion. If both are selected, `UserName` will be used by default.
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取User's mobile number.
                     * @return Phone User's mobile number.
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置User's mobile number.
                     * @param Phone User's mobile number.
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取User expiration time in ISO 8601 format.
                     * @return ExpirationTime User expiration time in ISO 8601 format.
                     */
                    std::string GetExpirationTime() const;

                    /**
                     * 设置User expiration time in ISO 8601 format.
                     * @param ExpirationTime User expiration time in ISO 8601 format.
                     */
                    void SetExpirationTime(const std::string& _expirationTime);

                    /**
                     * 判断参数 ExpirationTime 是否已赋值
                     * @return ExpirationTime 是否已赋值
                     */
                    bool ExpirationTimeHasBeenSet() const;

                    /**
                     * 获取User password, which needs to be configured according to the password policy.
                     * @return Password User password, which needs to be configured according to the password policy.
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置User password, which needs to be configured according to the password policy.
                     * @param Password User password, which needs to be configured according to the password policy.
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取User's email address.
                     * @return Email User's email address.
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置User's email address.
                     * @param Email User's email address.
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取Whether the password needs to be reset. Default value: false (no).
                     * @return PwdNeedReset Whether the password needs to be reset. Default value: false (no).
                     */
                    bool GetPwdNeedReset() const;

                    /**
                     * 设置Whether the password needs to be reset. Default value: false (no).
                     * @param PwdNeedReset Whether the password needs to be reset. Default value: false (no).
                     */
                    void SetPwdNeedReset(const bool& _pwdNeedReset);

                    /**
                     * 判断参数 PwdNeedReset 是否已赋值
                     * @return PwdNeedReset 是否已赋值
                     */
                    bool PwdNeedResetHasBeenSet() const;

                    /**
                     * 获取Unique ID of the user's primary organization. If this parameter is left empty, the user will be created under the root node by default.
                     * @return OrgNodeId Unique ID of the user's primary organization. If this parameter is left empty, the user will be created under the root node by default.
                     */
                    std::string GetOrgNodeId() const;

                    /**
                     * 设置Unique ID of the user's primary organization. If this parameter is left empty, the user will be created under the root node by default.
                     * @param OrgNodeId Unique ID of the user's primary organization. If this parameter is left empty, the user will be created under the root node by default.
                     */
                    void SetOrgNodeId(const std::string& _orgNodeId);

                    /**
                     * 判断参数 OrgNodeId 是否已赋值
                     * @return OrgNodeId 是否已赋值
                     */
                    bool OrgNodeIdHasBeenSet() const;

                    /**
                     * 获取List of IDs of the user's secondary organizations.
                     * @return SecondaryOrgNodeIdList List of IDs of the user's secondary organizations.
                     */
                    std::vector<std::string> GetSecondaryOrgNodeIdList() const;

                    /**
                     * 设置List of IDs of the user's secondary organizations.
                     * @param SecondaryOrgNodeIdList List of IDs of the user's secondary organizations.
                     */
                    void SetSecondaryOrgNodeIdList(const std::vector<std::string>& _secondaryOrgNodeIdList);

                    /**
                     * 判断参数 SecondaryOrgNodeIdList 是否已赋值
                     * @return SecondaryOrgNodeIdList 是否已赋值
                     */
                    bool SecondaryOrgNodeIdListHasBeenSet() const;

                private:

                    /**
                     * Username, which can contain up to 32 characters. You need to select either `Username` or `UserId` as the search criterion; if both are selected, `Username` will be used by default.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Nickname, which can contain up to 64 characters and is the same as the username by default.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * User remarks, which can contain up to 512 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * List of IDs of the user's user groups.
                     */
                    std::vector<std::string> m_userGroupIds;
                    bool m_userGroupIdsHasBeenSet;

                    /**
                     * User ID. You need to select either `UserName` or `UserId` as the search criterion. If both are selected, `UserName` will be used by default.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * User's mobile number.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * User expiration time in ISO 8601 format.
                     */
                    std::string m_expirationTime;
                    bool m_expirationTimeHasBeenSet;

                    /**
                     * User password, which needs to be configured according to the password policy.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * User's email address.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Whether the password needs to be reset. Default value: false (no).
                     */
                    bool m_pwdNeedReset;
                    bool m_pwdNeedResetHasBeenSet;

                    /**
                     * Unique ID of the user's primary organization. If this parameter is left empty, the user will be created under the root node by default.
                     */
                    std::string m_orgNodeId;
                    bool m_orgNodeIdHasBeenSet;

                    /**
                     * List of IDs of the user's secondary organizations.
                     */
                    std::vector<std::string> m_secondaryOrgNodeIdList;
                    bool m_secondaryOrgNodeIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYUSERINFOREQUEST_H_
