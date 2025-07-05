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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEKILLTASKREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEKILLTASKREQUEST_H_

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
                * CreateKillTask request structure.
                */
                class CreateKillTaskRequest : public AbstractModel
                {
                public:
                    CreateKillTaskRequest();
                    ~CreateKillTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the instance associated with the session killing task.
                     * @return InstanceId ID of the instance associated with the session killing task.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance associated with the session killing task.
                     * @param _instanceId ID of the instance associated with the session killing task.
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
                     * 获取Task duration in seconds. Pass in `-1` to stop the task manually.
                     * @return Duration Task duration in seconds. Pass in `-1` to stop the task manually.
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Task duration in seconds. Pass in `-1` to stop the task manually.
                     * @param _duration Task duration in seconds. Pass in `-1` to stop the task manually.
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Client IP, which is a task filter.
                     * @return Host Client IP, which is a task filter.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Client IP, which is a task filter.
                     * @param _host Client IP, which is a task filter.
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
                     * 获取Database name, which is a task filter. Multiple database names are separated by comma.
                     * @return DB Database name, which is a task filter. Multiple database names are separated by comma.
                     * 
                     */
                    std::string GetDB() const;

                    /**
                     * 设置Database name, which is a task filter. Multiple database names are separated by comma.
                     * @param _dB Database name, which is a task filter. Multiple database names are separated by comma.
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
                     * 获取Related command, which is a task filter. Multiple commands are separated by comma.
                     * @return Command Related command, which is a task filter. Multiple commands are separated by comma.
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置Related command, which is a task filter. Multiple commands are separated by comma.
                     * @param _command Related command, which is a task filter. Multiple commands are separated by comma.
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
                     * 获取Task filter. Filtering by single filter prefix is supported.
                     * @return Info Task filter. Filtering by single filter prefix is supported.
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置Task filter. Filtering by single filter prefix is supported.
                     * @param _info Task filter. Filtering by single filter prefix is supported.
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
                     * 获取User type, which is a task filter.
                     * @return User User type, which is a task filter.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置User type, which is a task filter.
                     * @param _user User type, which is a task filter.
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
                     * 获取Session duration in seconds, which is a task filter.
                     * @return Time Session duration in seconds, which is a task filter.
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置Session duration in seconds, which is a task filter.
                     * @param _time Session duration in seconds, which is a task filter.
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @return Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @param _product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
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
                     * ID of the instance associated with the session killing task.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Task duration in seconds. Pass in `-1` to stop the task manually.
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Client IP, which is a task filter.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Database name, which is a task filter. Multiple database names are separated by comma.
                     */
                    std::string m_dB;
                    bool m_dBHasBeenSet;

                    /**
                     * Related command, which is a task filter. Multiple commands are separated by comma.
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * Task filter. Filtering by single filter prefix is supported.
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * User type, which is a task filter.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Session duration in seconds, which is a task filter.
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEKILLTASKREQUEST_H_
