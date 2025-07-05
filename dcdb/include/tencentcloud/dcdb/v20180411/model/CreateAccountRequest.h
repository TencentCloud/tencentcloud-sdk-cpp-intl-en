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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEACCOUNTREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
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
                     * 获取Instance ID in the format of dcdbt-ow728lmc, which can be obtained through the `DescribeDCDBInstances` API.
                     * @return InstanceId Instance ID in the format of dcdbt-ow728lmc, which can be obtained through the `DescribeDCDBInstances` API.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of dcdbt-ow728lmc, which can be obtained through the `DescribeDCDBInstances` API.
                     * @param _instanceId Instance ID in the format of dcdbt-ow728lmc, which can be obtained through the `DescribeDCDBInstances` API.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取AccountName
                     * @return UserName AccountName
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置AccountName
                     * @param _userName AccountName
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
                     * 获取Host that can be logged in to, which is in the same format as the host of the MySQL account and supports wildcards, such as %, 10.%, and 10.20.%.
                     * @return Host Host that can be logged in to, which is in the same format as the host of the MySQL account and supports wildcards, such as %, 10.%, and 10.20.%.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Host that can be logged in to, which is in the same format as the host of the MySQL account and supports wildcards, such as %, 10.%, and 10.20.%.
                     * @param _host Host that can be logged in to, which is in the same format as the host of the MySQL account and supports wildcards, such as %, 10.%, and 10.20.%.
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Account password. It must contain 8-32 characters in all of the following four types: lowercase letters, uppercase letters, digits, and symbols (()~!@#$%^&*-+=_|{}[]:<>,.?/), and cannot start with a slash (/).
                     * @return Password Account password. It must contain 8-32 characters in all of the following four types: lowercase letters, uppercase letters, digits, and symbols (()~!@#$%^&*-+=_|{}[]:<>,.?/), and cannot start with a slash (/).
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Account password. It must contain 8-32 characters in all of the following four types: lowercase letters, uppercase letters, digits, and symbols (()~!@#$%^&*-+=_|{}[]:<>,.?/), and cannot start with a slash (/).
                     * @param _password Account password. It must contain 8-32 characters in all of the following four types: lowercase letters, uppercase letters, digits, and symbols (()~!@#$%^&*-+=_|{}[]:<>,.?/), and cannot start with a slash (/).
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
                     * 获取Whether to create a read-only account. 0: no; 1: for the account's SQL requests, the secondary will be used first, and if it is unavailable, the primary will be used; 2: the secondary will be used first, and if it is unavailable, the operation will fail; 3: only the secondary will be read from.
                     * @return ReadOnly Whether to create a read-only account. 0: no; 1: for the account's SQL requests, the secondary will be used first, and if it is unavailable, the primary will be used; 2: the secondary will be used first, and if it is unavailable, the operation will fail; 3: only the secondary will be read from.
                     * 
                     */
                    int64_t GetReadOnly() const;

                    /**
                     * 设置Whether to create a read-only account. 0: no; 1: for the account's SQL requests, the secondary will be used first, and if it is unavailable, the primary will be used; 2: the secondary will be used first, and if it is unavailable, the operation will fail; 3: only the secondary will be read from.
                     * @param _readOnly Whether to create a read-only account. 0: no; 1: for the account's SQL requests, the secondary will be used first, and if it is unavailable, the primary will be used; 2: the secondary will be used first, and if it is unavailable, the operation will fail; 3: only the secondary will be read from.
                     * 
                     */
                    void SetReadOnly(const int64_t& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取Account remarks, which can contain 0-256 letters, digits, and common symbols.
                     * @return Description Account remarks, which can contain 0-256 letters, digits, and common symbols.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Account remarks, which can contain 0-256 letters, digits, and common symbols.
                     * @param _description Account remarks, which can contain 0-256 letters, digits, and common symbols.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取If the secondary delay exceeds the set value of this parameter, the secondary will be deemed to have failed.
It is recommended that this parameter be set to a value greater than 10. This parameter takes effect when `ReadOnly` is 1 or 2.
                     * @return DelayThresh If the secondary delay exceeds the set value of this parameter, the secondary will be deemed to have failed.
It is recommended that this parameter be set to a value greater than 10. This parameter takes effect when `ReadOnly` is 1 or 2.
                     * 
                     */
                    int64_t GetDelayThresh() const;

                    /**
                     * 设置If the secondary delay exceeds the set value of this parameter, the secondary will be deemed to have failed.
It is recommended that this parameter be set to a value greater than 10. This parameter takes effect when `ReadOnly` is 1 or 2.
                     * @param _delayThresh If the secondary delay exceeds the set value of this parameter, the secondary will be deemed to have failed.
It is recommended that this parameter be set to a value greater than 10. This parameter takes effect when `ReadOnly` is 1 or 2.
                     * 
                     */
                    void SetDelayThresh(const int64_t& _delayThresh);

                    /**
                     * 判断参数 DelayThresh 是否已赋值
                     * @return DelayThresh 是否已赋值
                     * 
                     */
                    bool DelayThreshHasBeenSet() const;

                    /**
                     * 获取Whether to specify a replica server for read-only account. Valid values: `0` (No replica server is specified, which means that the proxy will select another available replica server to keep connection with the client if the current replica server doesn’t meet the requirement). `1` (The replica server is specified, which means that the connection will be disconnected if the specified replica server doesn’t meet the requirement.)
                     * @return SlaveConst Whether to specify a replica server for read-only account. Valid values: `0` (No replica server is specified, which means that the proxy will select another available replica server to keep connection with the client if the current replica server doesn’t meet the requirement). `1` (The replica server is specified, which means that the connection will be disconnected if the specified replica server doesn’t meet the requirement.)
                     * 
                     */
                    int64_t GetSlaveConst() const;

                    /**
                     * 设置Whether to specify a replica server for read-only account. Valid values: `0` (No replica server is specified, which means that the proxy will select another available replica server to keep connection with the client if the current replica server doesn’t meet the requirement). `1` (The replica server is specified, which means that the connection will be disconnected if the specified replica server doesn’t meet the requirement.)
                     * @param _slaveConst Whether to specify a replica server for read-only account. Valid values: `0` (No replica server is specified, which means that the proxy will select another available replica server to keep connection with the client if the current replica server doesn’t meet the requirement). `1` (The replica server is specified, which means that the connection will be disconnected if the specified replica server doesn’t meet the requirement.)
                     * 
                     */
                    void SetSlaveConst(const int64_t& _slaveConst);

                    /**
                     * 判断参数 SlaveConst 是否已赋值
                     * @return SlaveConst 是否已赋值
                     * 
                     */
                    bool SlaveConstHasBeenSet() const;

                    /**
                     * 获取Maximum number of connections. If left empty or `0` is passed in, the connections will be unlimited. This parameter configuration is not supported for kernel version 10.1.
                     * @return MaxUserConnections Maximum number of connections. If left empty or `0` is passed in, the connections will be unlimited. This parameter configuration is not supported for kernel version 10.1.
                     * 
                     */
                    uint64_t GetMaxUserConnections() const;

                    /**
                     * 设置Maximum number of connections. If left empty or `0` is passed in, the connections will be unlimited. This parameter configuration is not supported for kernel version 10.1.
                     * @param _maxUserConnections Maximum number of connections. If left empty or `0` is passed in, the connections will be unlimited. This parameter configuration is not supported for kernel version 10.1.
                     * 
                     */
                    void SetMaxUserConnections(const uint64_t& _maxUserConnections);

                    /**
                     * 判断参数 MaxUserConnections 是否已赋值
                     * @return MaxUserConnections 是否已赋值
                     * 
                     */
                    bool MaxUserConnectionsHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of dcdbt-ow728lmc, which can be obtained through the `DescribeDCDBInstances` API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * AccountName
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
                     * Whether to create a read-only account. 0: no; 1: for the account's SQL requests, the secondary will be used first, and if it is unavailable, the primary will be used; 2: the secondary will be used first, and if it is unavailable, the operation will fail; 3: only the secondary will be read from.
                     */
                    int64_t m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * Account remarks, which can contain 0-256 letters, digits, and common symbols.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * If the secondary delay exceeds the set value of this parameter, the secondary will be deemed to have failed.
It is recommended that this parameter be set to a value greater than 10. This parameter takes effect when `ReadOnly` is 1 or 2.
                     */
                    int64_t m_delayThresh;
                    bool m_delayThreshHasBeenSet;

                    /**
                     * Whether to specify a replica server for read-only account. Valid values: `0` (No replica server is specified, which means that the proxy will select another available replica server to keep connection with the client if the current replica server doesn’t meet the requirement). `1` (The replica server is specified, which means that the connection will be disconnected if the specified replica server doesn’t meet the requirement.)
                     */
                    int64_t m_slaveConst;
                    bool m_slaveConstHasBeenSet;

                    /**
                     * Maximum number of connections. If left empty or `0` is passed in, the connections will be unlimited. This parameter configuration is not supported for kernel version 10.1.
                     */
                    uint64_t m_maxUserConnections;
                    bool m_maxUserConnectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEACCOUNTREQUEST_H_
