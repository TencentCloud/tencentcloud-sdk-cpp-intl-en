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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_MODIFYUSERROLEREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_MODIFYUSERROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyUserRole request structure.
                */
                class ModifyUserRoleRequest : public AbstractModel
                {
                public:
                    ModifyUserRoleRequest();
                    ~ModifyUserRoleRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Role ID list.
                     * @return RoleIdList Role ID list.
                     * 
                     */
                    std::vector<int64_t> GetRoleIdList() const;

                    /**
                     * 设置Role ID list.
                     * @param _roleIdList Role ID list.
                     * 
                     */
                    void SetRoleIdList(const std::vector<int64_t>& _roleIdList);

                    /**
                     * 判断参数 RoleIdList 是否已赋值
                     * @return RoleIdList 是否已赋值
                     * 
                     */
                    bool RoleIdListHasBeenSet() const;

                    /**
                     * 获取Mailbox.
                     * @return Email Mailbox.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Mailbox.
                     * @param _email Mailbox.
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
                     * 获取Mobile number.
                     * @return PhoneNumber Mobile number.
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置Mobile number.
                     * @param _phoneNumber Mobile number.
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
                     * @return AreaCode Telephone country code.
                     * 
                     */
                    std::string GetAreaCode() const;

                    /**
                     * 设置Telephone country code.
                     * @param _areaCode Telephone country code.
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
                     * 获取WeCom user ID.
                     * @return AppUserId WeCom user ID.
                     * 
                     */
                    std::string GetAppUserId() const;

                    /**
                     * 设置WeCom user ID.
                     * @param _appUserId WeCom user ID.
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
                     * 获取Whether to enable mobile phone verification code login (0: disabled, 1: enabled).
                     * @return LoginSecurityStatus Whether to enable mobile phone verification code login (0: disabled, 1: enabled).
                     * 
                     */
                    int64_t GetLoginSecurityStatus() const;

                    /**
                     * 设置Whether to enable mobile phone verification code login (0: disabled, 1: enabled).
                     * @param _loginSecurityStatus Whether to enable mobile phone verification code login (0: disabled, 1: enabled).
                     * 
                     */
                    void SetLoginSecurityStatus(const int64_t& _loginSecurityStatus);

                    /**
                     * 判断参数 LoginSecurityStatus 是否已赋值
                     * @return LoginSecurityStatus 是否已赋值
                     * 
                     */
                    bool LoginSecurityStatusHasBeenSet() const;

                    /**
                     * 获取Whether to enable password expiration reminder (0: disabled, 1: enabled).
                     * @return ResetPassWordTip Whether to enable password expiration reminder (0: disabled, 1: enabled).
                     * 
                     */
                    int64_t GetResetPassWordTip() const;

                    /**
                     * 设置Whether to enable password expiration reminder (0: disabled, 1: enabled).
                     * @param _resetPassWordTip Whether to enable password expiration reminder (0: disabled, 1: enabled).
                     * 
                     */
                    void SetResetPassWordTip(const int64_t& _resetPassWordTip);

                    /**
                     * 判断参数 ResetPassWordTip 是否已赋值
                     * @return ResetPassWordTip 是否已赋值
                     * 
                     */
                    bool ResetPassWordTipHasBeenSet() const;

                    /**
                     * 获取Force password reset (0: disabled, 1: enabled).
                     * @return ForceResetPassWord Force password reset (0: disabled, 1: enabled).
                     * 
                     */
                    int64_t GetForceResetPassWord() const;

                    /**
                     * 设置Force password reset (0: disabled, 1: enabled).
                     * @param _forceResetPassWord Force password reset (0: disabled, 1: enabled).
                     * 
                     */
                    void SetForceResetPassWord(const int64_t& _forceResetPassWord);

                    /**
                     * 判断参数 ForceResetPassWord 是否已赋值
                     * @return ForceResetPassWord 是否已赋值
                     * 
                     */
                    bool ForceResetPassWordHasBeenSet() const;

                    /**
                     * 获取Password expiration reminder period: 30, 60, 90 (default), or 180 days.
                     * @return PasswordExpired Password expiration reminder period: 30, 60, 90 (default), or 180 days.
                     * 
                     */
                    int64_t GetPasswordExpired() const;

                    /**
                     * 设置Password expiration reminder period: 30, 60, 90 (default), or 180 days.
                     * @param _passwordExpired Password expiration reminder period: 30, 60, 90 (default), or 180 days.
                     * 
                     */
                    void SetPasswordExpired(const int64_t& _passwordExpired);

                    /**
                     * 判断参数 PasswordExpired 是否已赋值
                     * @return PasswordExpired 是否已赋值
                     * 
                     */
                    bool PasswordExpiredHasBeenSet() const;

                private:

                    /**
                     * User ID.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Role ID list.
                     */
                    std::vector<int64_t> m_roleIdList;
                    bool m_roleIdListHasBeenSet;

                    /**
                     * Mailbox.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Username.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Mobile number.
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * Telephone country code.
                     */
                    std::string m_areaCode;
                    bool m_areaCodeHasBeenSet;

                    /**
                     * WeCom user ID.
                     */
                    std::string m_appUserId;
                    bool m_appUserIdHasBeenSet;

                    /**
                     * Whether to enable mobile phone verification code login (0: disabled, 1: enabled).
                     */
                    int64_t m_loginSecurityStatus;
                    bool m_loginSecurityStatusHasBeenSet;

                    /**
                     * Whether to enable password expiration reminder (0: disabled, 1: enabled).
                     */
                    int64_t m_resetPassWordTip;
                    bool m_resetPassWordTipHasBeenSet;

                    /**
                     * Force password reset (0: disabled, 1: enabled).
                     */
                    int64_t m_forceResetPassWord;
                    bool m_forceResetPassWordHasBeenSet;

                    /**
                     * Password expiration reminder period: 30, 60, 90 (default), or 180 days.
                     */
                    int64_t m_passwordExpired;
                    bool m_passwordExpiredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_MODIFYUSERROLEREQUEST_H_
