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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERINFORESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERINFORESPONSE_H_

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
                * DescribeUserInfo response structure.
                */
                class DescribeUserInfoResponse : public AbstractModel
                {
                public:
                    DescribeUserInfoResponse();
                    ~DescribeUserInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Username.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserName Username.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取User status. Valid values: NORMAL: normal; FREEZE: frozen; LOCKED: locked; NOT_ENABLED: disabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status User status. Valid values: NORMAL: normal; FREEZE: frozen; LOCKED: locked; NOT_ENABLED: disabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Nickname
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DisplayName Nickname
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取User remarks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Description User remarks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取List of IDs of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserGroupIds List of IDs of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetUserGroupIds() const;

                    /**
                     * 判断参数 UserGroupIds 是否已赋值
                     * @return UserGroupIds 是否已赋值
                     * 
                     */
                    bool UserGroupIdsHasBeenSet() const;

                    /**
                     * 获取User ID, which can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserId User ID, which can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取User's email address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Email User's email address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取User's mobile number.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Phone User's mobile number.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取Unique ID of the user's primary organization.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrgNodeId Unique ID of the user's primary organization.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrgNodeId() const;

                    /**
                     * 判断参数 OrgNodeId 是否已赋值
                     * @return OrgNodeId 是否已赋值
                     * 
                     */
                    bool OrgNodeIdHasBeenSet() const;

                    /**
                     * 获取Data source
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DataSource Data source
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataSource() const;

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     * 
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取User expiration time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ExpirationTime User expiration time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpirationTime() const;

                    /**
                     * 判断参数 ExpirationTime 是否已赋值
                     * @return ExpirationTime 是否已赋值
                     * 
                     */
                    bool ExpirationTimeHasBeenSet() const;

                    /**
                     * 获取User activation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ActivationTime User activation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetActivationTime() const;

                    /**
                     * 判断参数 ActivationTime 是否已赋值
                     * @return ActivationTime 是否已赋值
                     * 
                     */
                    bool ActivationTimeHasBeenSet() const;

                    /**
                     * 获取Whether the password of the current user needs to be reset. `false` indicates no.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PwdNeedReset Whether the password of the current user needs to be reset. `false` indicates no.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetPwdNeedReset() const;

                    /**
                     * 判断参数 PwdNeedReset 是否已赋值
                     * @return PwdNeedReset 是否已赋值
                     * 
                     */
                    bool PwdNeedResetHasBeenSet() const;

                    /**
                     * 获取List of IDs of the user's secondary organizations.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SecondaryOrgNodeIdList List of IDs of the user's secondary organizations.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSecondaryOrgNodeIdList() const;

                    /**
                     * 判断参数 SecondaryOrgNodeIdList 是否已赋值
                     * @return SecondaryOrgNodeIdList 是否已赋值
                     * 
                     */
                    bool SecondaryOrgNodeIdListHasBeenSet() const;

                    /**
                     * 获取Whether the user is an admin. Valid values: 0: no; 1: yes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AdminFlag Whether the user is an admin. Valid values: 0: no; 1: yes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAdminFlag() const;

                    /**
                     * 判断参数 AdminFlag 是否已赋值
                     * @return AdminFlag 是否已赋值
                     * 
                     */
                    bool AdminFlagHasBeenSet() const;

                private:

                    /**
                     * Username.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * User status. Valid values: NORMAL: normal; FREEZE: frozen; LOCKED: locked; NOT_ENABLED: disabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Nickname
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * User remarks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * List of IDs of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_userGroupIds;
                    bool m_userGroupIdsHasBeenSet;

                    /**
                     * User ID, which can contain up to 64 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * User's email address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * User's mobile number.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * Unique ID of the user's primary organization.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orgNodeId;
                    bool m_orgNodeIdHasBeenSet;

                    /**
                     * Data source
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * User expiration time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expirationTime;
                    bool m_expirationTimeHasBeenSet;

                    /**
                     * User activation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_activationTime;
                    bool m_activationTimeHasBeenSet;

                    /**
                     * Whether the password of the current user needs to be reset. `false` indicates no.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_pwdNeedReset;
                    bool m_pwdNeedResetHasBeenSet;

                    /**
                     * List of IDs of the user's secondary organizations.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_secondaryOrgNodeIdList;
                    bool m_secondaryOrgNodeIdListHasBeenSet;

                    /**
                     * Whether the user is an admin. Valid values: 0: no; 1: yes.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_adminFlag;
                    bool m_adminFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEUSERINFORESPONSE_H_
