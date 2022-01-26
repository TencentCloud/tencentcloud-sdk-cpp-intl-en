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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_CREATEACCOUNTREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_CREATEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateAccount request structure.
                */
                class CreateAccountRequest : public AbstractModel
                {
                public:
                    CreateAccountRequest();
                    ~CreateAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, which is in the format of `tdsql-ow728lmc` and can be obtained through the `DescribeDBInstances` API.
                     * @return InstanceId Instance ID, which is in the format of `tdsql-ow728lmc` and can be obtained through the `DescribeDBInstances` API.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, which is in the format of `tdsql-ow728lmc` and can be obtained through the `DescribeDBInstances` API.
                     * @param InstanceId Instance ID, which is in the format of `tdsql-ow728lmc` and can be obtained through the `DescribeDBInstances` API.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Login username, which can contain 1-32 letters, digits, underscores, and hyphens.
                     * @return UserName Login username, which can contain 1-32 letters, digits, underscores, and hyphens.
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Login username, which can contain 1-32 letters, digits, underscores, and hyphens.
                     * @param UserName Login username, which can contain 1-32 letters, digits, underscores, and hyphens.
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Host that can be logged in to, which is in the same format as the host of the MySQL account and supports wildcards, such as %, 10.%, and 10.20.%.
                     * @return Host Host that can be logged in to, which is in the same format as the host of the MySQL account and supports wildcards, such as %, 10.%, and 10.20.%.
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Host that can be logged in to, which is in the same format as the host of the MySQL account and supports wildcards, such as %, 10.%, and 10.20.%.
                     * @param Host Host that can be logged in to, which is in the same format as the host of the MySQL account and supports wildcards, such as %, 10.%, and 10.20.%.
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Account password. It must contain 8-32 characters in all of the following four types: lowercase letters, uppercase letters, digits, and symbols (()~!@#$%^&*-+=_|{}[]:<>,.?/), and cannot start with a slash (/).
                     * @return Password Account password. It must contain 8-32 characters in all of the following four types: lowercase letters, uppercase letters, digits, and symbols (()~!@#$%^&*-+=_|{}[]:<>,.?/), and cannot start with a slash (/).
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Account password. It must contain 8-32 characters in all of the following four types: lowercase letters, uppercase letters, digits, and symbols (()~!@#$%^&*-+=_|{}[]:<>,.?/), and cannot start with a slash (/).
                     * @param Password Account password. It must contain 8-32 characters in all of the following four types: lowercase letters, uppercase letters, digits, and symbols (()~!@#$%^&*-+=_|{}[]:<>,.?/), and cannot start with a slash (/).
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Whether to create a read-only account. 0: no; 1: for the account's SQL requests, the secondary will be used first, and if it is unavailable, the primary will be used; 2: the secondary will be used first, and if it is unavailable, the operation will fail.
                     * @return ReadOnly Whether to create a read-only account. 0: no; 1: for the account's SQL requests, the secondary will be used first, and if it is unavailable, the primary will be used; 2: the secondary will be used first, and if it is unavailable, the operation will fail.
                     */
                    int64_t GetReadOnly() const;

                    /**
                     * 设置Whether to create a read-only account. 0: no; 1: for the account's SQL requests, the secondary will be used first, and if it is unavailable, the primary will be used; 2: the secondary will be used first, and if it is unavailable, the operation will fail.
                     * @param ReadOnly Whether to create a read-only account. 0: no; 1: for the account's SQL requests, the secondary will be used first, and if it is unavailable, the primary will be used; 2: the secondary will be used first, and if it is unavailable, the operation will fail.
                     */
                    void SetReadOnly(const int64_t& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取Account remarks, which can contain 0-256 letters, digits, and common symbols.
                     * @return Description Account remarks, which can contain 0-256 letters, digits, and common symbols.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Account remarks, which can contain 0-256 letters, digits, and common symbols.
                     * @param Description Account remarks, which can contain 0-256 letters, digits, and common symbols.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Determines whether the secondary is unavailable based on the passed-in time
                     * @return DelayThresh Determines whether the secondary is unavailable based on the passed-in time
                     */
                    int64_t GetDelayThresh() const;

                    /**
                     * 设置Determines whether the secondary is unavailable based on the passed-in time
                     * @param DelayThresh Determines whether the secondary is unavailable based on the passed-in time
                     */
                    void SetDelayThresh(const int64_t& _delayThresh);

                    /**
                     * 判断参数 DelayThresh 是否已赋值
                     * @return DelayThresh 是否已赋值
                     */
                    bool DelayThreshHasBeenSet() const;

                private:

                    /**
                     * Instance ID, which is in the format of `tdsql-ow728lmc` and can be obtained through the `DescribeDBInstances` API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Login username, which can contain 1-32 letters, digits, underscores, and hyphens.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Host that can be logged in to, which is in the same format as the host of the MySQL account and supports wildcards, such as %, 10.%, and 10.20.%.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Account password. It must contain 8-32 characters in all of the following four types: lowercase letters, uppercase letters, digits, and symbols (()~!@#$%^&*-+=_|{}[]:<>,.?/), and cannot start with a slash (/).
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Whether to create a read-only account. 0: no; 1: for the account's SQL requests, the secondary will be used first, and if it is unavailable, the primary will be used; 2: the secondary will be used first, and if it is unavailable, the operation will fail.
                     */
                    int64_t m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * Account remarks, which can contain 0-256 letters, digits, and common symbols.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Determines whether the secondary is unavailable based on the passed-in time
                     */
                    int64_t m_delayThresh;
                    bool m_delayThreshHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_CREATEACCOUNTREQUEST_H_
