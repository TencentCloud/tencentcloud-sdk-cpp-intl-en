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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DBACCOUNT_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DBACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * TencentDB account information
                */
                class DBAccount : public AbstractModel
                {
                public:
                    DBAccount();
                    ~DBAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Username
                     * @return UserName Username
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username
                     * @param _userName Username
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
                     * 获取Host from which a user can log in (corresponding to the `host` field for a MySQL user; a user is uniquely identified by username and host; this parameter is in IP format and ends with % for IP range; % can be entered; if this parameter is left empty, % will be used by default).
                     * @return Host Host from which a user can log in (corresponding to the `host` field for a MySQL user; a user is uniquely identified by username and host; this parameter is in IP format and ends with % for IP range; % can be entered; if this parameter is left empty, % will be used by default).
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Host from which a user can log in (corresponding to the `host` field for a MySQL user; a user is uniquely identified by username and host; this parameter is in IP format and ends with % for IP range; % can be entered; if this parameter is left empty, % will be used by default).
                     * @param _host Host from which a user can log in (corresponding to the `host` field for a MySQL user; a user is uniquely identified by username and host; this parameter is in IP format and ends with % for IP range; % can be entered; if this parameter is left empty, % will be used by default).
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
                     * 获取User remarks
                     * @return Description User remarks
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置User remarks
                     * @param _description User remarks
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
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Last updated time
                     * @return UpdateTime Last updated time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last updated time
                     * @param _updateTime Last updated time
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
                     * 获取Read-only flag. 0: no; 1: for the account's SQL requests, the replica will be used first, and if it is unavailable, the primary will be used; 2: the replica will be used first, and if it is unavailable, the operation will fail.
                     * @return ReadOnly Read-only flag. 0: no; 1: for the account's SQL requests, the replica will be used first, and if it is unavailable, the primary will be used; 2: the replica will be used first, and if it is unavailable, the operation will fail.
                     * 
                     */
                    int64_t GetReadOnly() const;

                    /**
                     * 设置Read-only flag. 0: no; 1: for the account's SQL requests, the replica will be used first, and if it is unavailable, the primary will be used; 2: the replica will be used first, and if it is unavailable, the operation will fail.
                     * @param _readOnly Read-only flag. 0: no; 1: for the account's SQL requests, the replica will be used first, and if it is unavailable, the primary will be used; 2: the replica will be used first, and if it is unavailable, the operation will fail.
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
                     * 获取This field is meaningful for read-only accounts, indicating that a replica should be selected if its delay from the primary is less than this value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DelayThresh This field is meaningful for read-only accounts, indicating that a replica should be selected if its delay from the primary is less than this value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDelayThresh() const;

                    /**
                     * 设置This field is meaningful for read-only accounts, indicating that a replica should be selected if its delay from the primary is less than this value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _delayThresh This field is meaningful for read-only accounts, indicating that a replica should be selected if its delay from the primary is less than this value.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Maximum number of connections. `0` indicates no limit.
                     * @return MaxUserConnections Maximum number of connections. `0` indicates no limit.
                     * 
                     */
                    int64_t GetMaxUserConnections() const;

                    /**
                     * 设置Maximum number of connections. `0` indicates no limit.
                     * @param _maxUserConnections Maximum number of connections. `0` indicates no limit.
                     * 
                     */
                    void SetMaxUserConnections(const int64_t& _maxUserConnections);

                    /**
                     * 判断参数 MaxUserConnections 是否已赋值
                     * @return MaxUserConnections 是否已赋值
                     * 
                     */
                    bool MaxUserConnectionsHasBeenSet() const;

                private:

                    /**
                     * Username
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Host from which a user can log in (corresponding to the `host` field for a MySQL user; a user is uniquely identified by username and host; this parameter is in IP format and ends with % for IP range; % can be entered; if this parameter is left empty, % will be used by default).
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * User remarks
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last updated time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Read-only flag. 0: no; 1: for the account's SQL requests, the replica will be used first, and if it is unavailable, the primary will be used; 2: the replica will be used first, and if it is unavailable, the operation will fail.
                     */
                    int64_t m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * This field is meaningful for read-only accounts, indicating that a replica should be selected if its delay from the primary is less than this value.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_delayThresh;
                    bool m_delayThreshHasBeenSet;

                    /**
                     * Whether to specify a replica server for read-only account. Valid values: `0` (No replica server is specified, which means that the proxy will select another available replica server to keep connection with the client if the current replica server doesn’t meet the requirement). `1` (The replica server is specified, which means that the connection will be disconnected if the specified replica server doesn’t meet the requirement.)
                     */
                    int64_t m_slaveConst;
                    bool m_slaveConstHasBeenSet;

                    /**
                     * Maximum number of connections. `0` indicates no limit.
                     */
                    int64_t m_maxUserConnections;
                    bool m_maxUserConnectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DBACCOUNT_H_
