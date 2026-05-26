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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_RESETACCOUNTPASSWORDREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_RESETACCOUNTPASSWORDREQUEST_H_

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
                * ResetAccountPassword request structure.
                */
                class ResetAccountPasswordRequest : public AbstractModel
                {
                public:
                    ResetAccountPasswordRequest();
                    ~ResetAccountPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the instance ID, such as postgres-4wdeb0zv. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @return DBInstanceId Specifies the instance ID, such as postgres-4wdeb0zv. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Specifies the instance ID, such as postgres-4wdeb0zv. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @param _dBInstanceId Specifies the instance ID, such as postgres-4wdeb0zv. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
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
                     * 获取Instance account name. obtain through the api [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1).
                     * @return UserName Instance account name. obtain through the api [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1).
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Instance account name. obtain through the api [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1).
                     * @param _userName Instance account name. obtain through the api [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1).
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
                     * 获取Specifies the new password for the UserName account.
Password settings rule specifies the following:.
- valid values: 8 to 32 characters. a password with more than 12 characters is recommended.
-Must not start with "/".
-Must include the following four items:.
Lowercase letters a ~ z.
Uppercase letters: A – Z.
Digits: 0-9.
Special symbols: ()`~!@#$%^&*-+=_|{}[]:<>,.?/.
                     * @return Password Specifies the new password for the UserName account.
Password settings rule specifies the following:.
- valid values: 8 to 32 characters. a password with more than 12 characters is recommended.
-Must not start with "/".
-Must include the following four items:.
Lowercase letters a ~ z.
Uppercase letters: A – Z.
Digits: 0-9.
Special symbols: ()`~!@#$%^&*-+=_|{}[]:<>,.?/.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Specifies the new password for the UserName account.
Password settings rule specifies the following:.
- valid values: 8 to 32 characters. a password with more than 12 characters is recommended.
-Must not start with "/".
-Must include the following four items:.
Lowercase letters a ~ z.
Uppercase letters: A – Z.
Digits: 0-9.
Special symbols: ()`~!@#$%^&*-+=_|{}[]:<>,.?/.
                     * @param _password Specifies the new password for the UserName account.
Password settings rule specifies the following:.
- valid values: 8 to 32 characters. a password with more than 12 characters is recommended.
-Must not start with "/".
-Must include the following four items:.
Lowercase letters a ~ z.
Uppercase letters: A – Z.
Digits: 0-9.
Special symbols: ()`~!@#$%^&*-+=_|{}[]:<>,.?/.
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * Specifies the instance ID, such as postgres-4wdeb0zv. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Instance account name. obtain through the api [DescribeAccounts](https://www.tencentcloud.com/document/api/409/18109?from_cn_redirect=1).
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Specifies the new password for the UserName account.
Password settings rule specifies the following:.
- valid values: 8 to 32 characters. a password with more than 12 characters is recommended.
-Must not start with "/".
-Must include the following four items:.
Lowercase letters a ~ z.
Uppercase letters: A – Z.
Digits: 0-9.
Special symbols: ()`~!@#$%^&*-+=_|{}[]:<>,.?/.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_RESETACCOUNTPASSWORDREQUEST_H_
