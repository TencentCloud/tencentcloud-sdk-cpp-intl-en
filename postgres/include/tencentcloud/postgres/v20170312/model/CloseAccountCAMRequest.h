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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLOSEACCOUNTCAMREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLOSEACCOUNTCAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CloseAccountCAM request structure.
                */
                class CloseAccountCAMRequest : public AbstractModel
                {
                public:
                    CloseAccountCAMRequest();
                    ~CloseAccountCAMRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return DBInstanceId Instance ID.
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _dBInstanceId Instance ID.
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Account name of the CAM service to be disabled.
                     * @return UserName Account name of the CAM service to be disabled.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Account name of the CAM service to be disabled.
                     * @param _userName Account name of the CAM service to be disabled.
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
                     * 获取Specifies the new password necessary to log on to this account after CAM is disabled.
                     * @return Password Specifies the new password necessary to log on to this account after CAM is disabled.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Specifies the new password necessary to log on to this account after CAM is disabled.
                     * @param _password Specifies the new password necessary to log on to this account after CAM is disabled.
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Indicates whether the password is encrypted.
                     * @return PasswordEncrypt Indicates whether the password is encrypted.
                     * 
                     */
                    bool GetPasswordEncrypt() const;

                    /**
                     * 设置Indicates whether the password is encrypted.
                     * @param _passwordEncrypt Indicates whether the password is encrypted.
                     * 
                     */
                    void SetPasswordEncrypt(const bool& _passwordEncrypt);

                    /**
                     * 判断参数 PasswordEncrypt 是否已赋值
                     * @return PasswordEncrypt 是否已赋值
                     * 
                     */
                    bool PasswordEncryptHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Account name of the CAM service to be disabled.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Specifies the new password necessary to log on to this account after CAM is disabled.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Indicates whether the password is encrypted.
                     */
                    bool m_passwordEncrypt;
                    bool m_passwordEncryptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLOSEACCOUNTCAMREQUEST_H_
