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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MYSQLPROCESS_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MYSQLPROCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Relational database thread
                */
                class MySqlProcess : public AbstractModel
                {
                public:
                    MySqlProcess();
                    ~MySqlProcess() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Thread ID.
                     * @return ID Thread ID.
                     */
                    std::string GetID() const;

                    /**
                     * 设置Thread ID.
                     * @param ID Thread ID.
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Thread operation account name.
                     * @return User Thread operation account name.
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Thread operation account name.
                     * @param User Thread operation account name.
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Thread operation host address.
                     * @return Host Thread operation host address.
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Thread operation host address.
                     * @param Host Thread operation host address.
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Thread operation database.
                     * @return DB Thread operation database.
                     */
                    std::string GetDB() const;

                    /**
                     * 设置Thread operation database.
                     * @param DB Thread operation database.
                     */
                    void SetDB(const std::string& _dB);

                    /**
                     * 判断参数 DB 是否已赋值
                     * @return DB 是否已赋值
                     */
                    bool DBHasBeenSet() const;

                    /**
                     * 获取Thread operation status.
                     * @return State Thread operation status.
                     */
                    std::string GetState() const;

                    /**
                     * 设置Thread operation status.
                     * @param State Thread operation status.
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Thread execution type.
                     * @return Command Thread execution type.
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置Thread execution type.
                     * @param Command Thread execution type.
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取Thread operation duration in seconds.
                     * @return Time Thread operation duration in seconds.
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Thread operation duration in seconds.
                     * @param Time Thread operation duration in seconds.
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Thread operation statement.
                     * @return Info Thread operation statement.
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置Thread operation statement.
                     * @param Info Thread operation statement.
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * Thread ID.
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Thread operation account name.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Thread operation host address.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Thread operation database.
                     */
                    std::string m_dB;
                    bool m_dBHasBeenSet;

                    /**
                     * Thread operation status.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Thread execution type.
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * Thread operation duration in seconds.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Thread operation statement.
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MYSQLPROCESS_H_
