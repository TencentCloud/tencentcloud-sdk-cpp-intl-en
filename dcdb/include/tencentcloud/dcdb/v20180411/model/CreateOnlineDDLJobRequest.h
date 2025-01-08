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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEONLINEDDLJOBREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEONLINEDDLJOBREQUEST_H_

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
                * CreateOnlineDDLJob request structure.
                */
                class CreateOnlineDDLJobRequest : public AbstractModel
                {
                public:
                    CreateOnlineDDLJobRequest();
                    ~CreateOnlineDDLJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Specifies the DDL statement to be executed. Common online DDL refer to this API documentation example section.
                     * @return Alter Specifies the DDL statement to be executed. Common online DDL refer to this API documentation example section.
                     * 
                     */
                    std::string GetAlter() const;

                    /**
                     * 设置Specifies the DDL statement to be executed. Common online DDL refer to this API documentation example section.
                     * @param _alter Specifies the DDL statement to be executed. Common online DDL refer to this API documentation example section.
                     * 
                     */
                    void SetAlter(const std::string& _alter);

                    /**
                     * 判断参数 Alter 是否已赋值
                     * @return Alter 是否已赋值
                     * 
                     */
                    bool AlterHasBeenSet() const;

                    /**
                     * 获取Specifies the database to be modified.	
                     * @return DbName Specifies the database to be modified.	
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Specifies the database to be modified.	
                     * @param _dbName Specifies the database to be modified.	
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Specifies the table to be modified.
                     * @return Table Specifies the table to be modified.
                     * 
                     */
                    std::string GetTable() const;

                    /**
                     * 设置Specifies the table to be modified.
                     * @param _table Specifies the table to be modified.
                     * 
                     */
                    void SetTable(const std::string& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                    /**
                     * 获取Specifies the account to execute DDL. Ensure the account has ALTER, CREATE, INSERT, UPDATE, DROP, DELETE, INDEX, CREATE TEMPORARY TABLES, LOCK TABLES, TRIGGER, REPLICATION CLIENT, REPLICATION SLAVE permissions. If not specified, the system account will be used by default.
                     * @return User Specifies the account to execute DDL. Ensure the account has ALTER, CREATE, INSERT, UPDATE, DROP, DELETE, INDEX, CREATE TEMPORARY TABLES, LOCK TABLES, TRIGGER, REPLICATION CLIENT, REPLICATION SLAVE permissions. If not specified, the system account will be used by default.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Specifies the account to execute DDL. Ensure the account has ALTER, CREATE, INSERT, UPDATE, DROP, DELETE, INDEX, CREATE TEMPORARY TABLES, LOCK TABLES, TRIGGER, REPLICATION CLIENT, REPLICATION SLAVE permissions. If not specified, the system account will be used by default.
                     * @param _user Specifies the account to execute DDL. Ensure the account has ALTER, CREATE, INSERT, UPDATE, DROP, DELETE, INDEX, CREATE TEMPORARY TABLES, LOCK TABLES, TRIGGER, REPLICATION CLIENT, REPLICATION SLAVE permissions. If not specified, the system account will be used by default.
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Specifies the password for the account.
                     * @return Password Specifies the password for the account.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Specifies the password for the account.
                     * @param _password Specifies the password for the account.
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
                     * 获取Indicates that DDL will terminate if the number of running threads exceeds this value. Default is 58 if not specified.
                     * @return CriticalLoad Indicates that DDL will terminate if the number of running threads exceeds this value. Default is 58 if not specified.
                     * 
                     */
                    int64_t GetCriticalLoad() const;

                    /**
                     * 设置Indicates that DDL will terminate if the number of running threads exceeds this value. Default is 58 if not specified.
                     * @param _criticalLoad Indicates that DDL will terminate if the number of running threads exceeds this value. Default is 58 if not specified.
                     * 
                     */
                    void SetCriticalLoad(const int64_t& _criticalLoad);

                    /**
                     * 判断参数 CriticalLoad 是否已赋值
                     * @return CriticalLoad 是否已赋值
                     * 
                     */
                    bool CriticalLoadHasBeenSet() const;

                    /**
                     * 获取Specifies whether to check auto-increment fields. If set to 1, modification of auto-increment fields is not allowed; if set to 0 or left empty, no check is performed.
                     * @return CheckAutoInc Specifies whether to check auto-increment fields. If set to 1, modification of auto-increment fields is not allowed; if set to 0 or left empty, no check is performed.
                     * 
                     */
                    int64_t GetCheckAutoInc() const;

                    /**
                     * 设置Specifies whether to check auto-increment fields. If set to 1, modification of auto-increment fields is not allowed; if set to 0 or left empty, no check is performed.
                     * @param _checkAutoInc Specifies whether to check auto-increment fields. If set to 1, modification of auto-increment fields is not allowed; if set to 0 or left empty, no check is performed.
                     * 
                     */
                    void SetCheckAutoInc(const int64_t& _checkAutoInc);

                    /**
                     * 判断参数 CheckAutoInc 是否已赋值
                     * @return CheckAutoInc 是否已赋值
                     * 
                     */
                    bool CheckAutoIncHasBeenSet() const;

                    /**
                     * 获取Allowed primary-secondary delay time (in seconds). If set to 0 or left empty, do not check delay.
                     * @return MaxDelay Allowed primary-secondary delay time (in seconds). If set to 0 or left empty, do not check delay.
                     * 
                     */
                    int64_t GetMaxDelay() const;

                    /**
                     * 设置Allowed primary-secondary delay time (in seconds). If set to 0 or left empty, do not check delay.
                     * @param _maxDelay Allowed primary-secondary delay time (in seconds). If set to 0 or left empty, do not check delay.
                     * 
                     */
                    void SetMaxDelay(const int64_t& _maxDelay);

                    /**
                     * 判断参数 MaxDelay 是否已赋值
                     * @return MaxDelay 是否已赋值
                     * 
                     */
                    bool MaxDelayHasBeenSet() const;

                    /**
                     * 获取Indicates whether to use pt-osc tool for DDL.
                     * @return UsePt Indicates whether to use pt-osc tool for DDL.
                     * 
                     */
                    int64_t GetUsePt() const;

                    /**
                     * 设置Indicates whether to use pt-osc tool for DDL.
                     * @param _usePt Indicates whether to use pt-osc tool for DDL.
                     * 
                     */
                    void SetUsePt(const int64_t& _usePt);

                    /**
                     * 判断参数 UsePt 是否已赋值
                     * @return UsePt 是否已赋值
                     * 
                     */
                    bool UsePtHasBeenSet() const;

                    /**
                     * 获取Start Execution Time
                     * @return StartTime Start Execution Time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start Execution Time
                     * @param _startTime Start Execution Time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the DDL statement to be executed. Common online DDL refer to this API documentation example section.
                     */
                    std::string m_alter;
                    bool m_alterHasBeenSet;

                    /**
                     * Specifies the database to be modified.	
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Specifies the table to be modified.
                     */
                    std::string m_table;
                    bool m_tableHasBeenSet;

                    /**
                     * Specifies the account to execute DDL. Ensure the account has ALTER, CREATE, INSERT, UPDATE, DROP, DELETE, INDEX, CREATE TEMPORARY TABLES, LOCK TABLES, TRIGGER, REPLICATION CLIENT, REPLICATION SLAVE permissions. If not specified, the system account will be used by default.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Specifies the password for the account.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Indicates that DDL will terminate if the number of running threads exceeds this value. Default is 58 if not specified.
                     */
                    int64_t m_criticalLoad;
                    bool m_criticalLoadHasBeenSet;

                    /**
                     * Specifies whether to check auto-increment fields. If set to 1, modification of auto-increment fields is not allowed; if set to 0 or left empty, no check is performed.
                     */
                    int64_t m_checkAutoInc;
                    bool m_checkAutoIncHasBeenSet;

                    /**
                     * Allowed primary-secondary delay time (in seconds). If set to 0 or left empty, do not check delay.
                     */
                    int64_t m_maxDelay;
                    bool m_maxDelayHasBeenSet;

                    /**
                     * Indicates whether to use pt-osc tool for DDL.
                     */
                    int64_t m_usePt;
                    bool m_usePtHasBeenSet;

                    /**
                     * Start Execution Time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_CREATEONLINEDDLJOBREQUEST_H_
