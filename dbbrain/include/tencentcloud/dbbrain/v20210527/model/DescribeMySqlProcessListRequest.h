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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMYSQLPROCESSLISTREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMYSQLPROCESSLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeMySqlProcessList request structure.
                */
                class DescribeMySqlProcessListRequest : public AbstractModel
                {
                public:
                    DescribeMySqlProcessListRequest();
                    ~DescribeMySqlProcessListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Thread ID, which is used to filter the thread list.
                     * @return ID Thread ID, which is used to filter the thread list.
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置Thread ID, which is used to filter the thread list.
                     * @param _iD Thread ID, which is used to filter the thread list.
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Thread operation account name, which is used to filter the thread list.
                     * @return User Thread operation account name, which is used to filter the thread list.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Thread operation account name, which is used to filter the thread list.
                     * @param _user Thread operation account name, which is used to filter the thread list.
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
                     * 获取Thread operation host address, which is used to filter the thread list.
                     * @return Host Thread operation host address, which is used to filter the thread list.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Thread operation host address, which is used to filter the thread list.
                     * @param _host Thread operation host address, which is used to filter the thread list.
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
                     * 获取Thread operation database, which is used to filter the thread list.
                     * @return DB Thread operation database, which is used to filter the thread list.
                     * 
                     */
                    std::string GetDB() const;

                    /**
                     * 设置Thread operation database, which is used to filter the thread list.
                     * @param _dB Thread operation database, which is used to filter the thread list.
                     * 
                     */
                    void SetDB(const std::string& _dB);

                    /**
                     * 判断参数 DB 是否已赋值
                     * @return DB 是否已赋值
                     * 
                     */
                    bool DBHasBeenSet() const;

                    /**
                     * 获取Thread operation status, which is used to filter the thread list.
                     * @return State Thread operation status, which is used to filter the thread list.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Thread operation status, which is used to filter the thread list.
                     * @param _state Thread operation status, which is used to filter the thread list.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Thread execution type, which is used to filter the thread list.
                     * @return Command Thread execution type, which is used to filter the thread list.
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置Thread execution type, which is used to filter the thread list.
                     * @param _command Thread execution type, which is used to filter the thread list.
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取Minimum operation duration of the thread in seconds, which is used to filter the list of threads whose operation duration is greater than this value.
                     * @return Time Minimum operation duration of the thread in seconds, which is used to filter the list of threads whose operation duration is greater than this value.
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置Minimum operation duration of the thread in seconds, which is used to filter the list of threads whose operation duration is greater than this value.
                     * @param _time Minimum operation duration of the thread in seconds, which is used to filter the list of threads whose operation duration is greater than this value.
                     * 
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Thread operation statement, which is used to filter the thread list.
                     * @return Info Thread operation statement, which is used to filter the thread list.
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置Thread operation statement, which is used to filter the thread list.
                     * @param _info Thread operation statement, which is used to filter the thread list.
                     * 
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20.
                     * @return Limit Number of returned results. Default value: 20.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20.
                     * @param _limit Number of returned results. Default value: 20.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Service type. Valid values: mysql (TencentDB for MySQL), cynosdb (TDSQL-C for MySQL). Default value: mysql.
                     * @return Product Service type. Valid values: mysql (TencentDB for MySQL), cynosdb (TDSQL-C for MySQL). Default value: mysql.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid values: mysql (TencentDB for MySQL), cynosdb (TDSQL-C for MySQL). Default value: mysql.
                     * @param _product Service type. Valid values: mysql (TencentDB for MySQL), cynosdb (TDSQL-C for MySQL). Default value: mysql.
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Thread ID, which is used to filter the thread list.
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Thread operation account name, which is used to filter the thread list.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Thread operation host address, which is used to filter the thread list.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Thread operation database, which is used to filter the thread list.
                     */
                    std::string m_dB;
                    bool m_dBHasBeenSet;

                    /**
                     * Thread operation status, which is used to filter the thread list.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Thread execution type, which is used to filter the thread list.
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * Minimum operation duration of the thread in seconds, which is used to filter the list of threads whose operation duration is greater than this value.
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Thread operation statement, which is used to filter the thread list.
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Service type. Valid values: mysql (TencentDB for MySQL), cynosdb (TDSQL-C for MySQL). Default value: mysql.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMYSQLPROCESSLISTREQUEST_H_
