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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPROXYSLOWLOGDETAIL_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPROXYSLOWLOGDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Proxy slow query details
                */
                class InstanceProxySlowlogDetail : public AbstractModel
                {
                public:
                    InstanceProxySlowlogDetail();
                    ~InstanceProxySlowlogDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Slow query duration in milliseconds
                     * @return Duration Slow query duration in milliseconds
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Slow query duration in milliseconds
                     * @param _duration Slow query duration in milliseconds
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
                     * 获取Client address
                     * @return Client Client address
                     * 
                     */
                    std::string GetClient() const;

                    /**
                     * 设置Client address
                     * @param _client Client address
                     * 
                     */
                    void SetClient(const std::string& _client);

                    /**
                     * 判断参数 Client 是否已赋值
                     * @return Client 是否已赋值
                     * 
                     */
                    bool ClientHasBeenSet() const;

                    /**
                     * 获取Slow query command
                     * @return Command Slow query command
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置Slow query command
                     * @param _command Slow query command
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
                     * 获取Detailed command line information of slow query
                     * @return CommandLine Detailed command line information of slow query
                     * 
                     */
                    std::string GetCommandLine() const;

                    /**
                     * 设置Detailed command line information of slow query
                     * @param _commandLine Detailed command line information of slow query
                     * 
                     */
                    void SetCommandLine(const std::string& _commandLine);

                    /**
                     * 判断参数 CommandLine 是否已赋值
                     * @return CommandLine 是否已赋值
                     * 
                     */
                    bool CommandLineHasBeenSet() const;

                    /**
                     * 获取Execution time
                     * @return ExecuteTime Execution time
                     * 
                     */
                    std::string GetExecuteTime() const;

                    /**
                     * 设置Execution time
                     * @param _executeTime Execution time
                     * 
                     */
                    void SetExecuteTime(const std::string& _executeTime);

                    /**
                     * 判断参数 ExecuteTime 是否已赋值
                     * @return ExecuteTime 是否已赋值
                     * 
                     */
                    bool ExecuteTimeHasBeenSet() const;

                    /**
                     * 获取Duration of receiving client requests (ms).
                     * @return RecvClientEnd Duration of receiving client requests (ms).
                     * 
                     */
                    int64_t GetRecvClientEnd() const;

                    /**
                     * 设置Duration of receiving client requests (ms).
                     * @param _recvClientEnd Duration of receiving client requests (ms).
                     * 
                     */
                    void SetRecvClientEnd(const int64_t& _recvClientEnd);

                    /**
                     * 判断参数 RecvClientEnd 是否已赋值
                     * @return RecvClientEnd 是否已赋值
                     * 
                     */
                    bool RecvClientEndHasBeenSet() const;

                    /**
                     * 获取Duration of sending client requests (ms).
                     * @return SendClientEnd Duration of sending client requests (ms).
                     * 
                     */
                    int64_t GetSendClientEnd() const;

                    /**
                     * 设置Duration of sending client requests (ms).
                     * @param _sendClientEnd Duration of sending client requests (ms).
                     * 
                     */
                    void SetSendClientEnd(const int64_t& _sendClientEnd);

                    /**
                     * 判断参数 SendClientEnd 是否已赋值
                     * @return SendClientEnd 是否已赋值
                     * 
                     */
                    bool SendClientEndHasBeenSet() const;

                private:

                    /**
                     * Slow query duration in milliseconds
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Client address
                     */
                    std::string m_client;
                    bool m_clientHasBeenSet;

                    /**
                     * Slow query command
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * Detailed command line information of slow query
                     */
                    std::string m_commandLine;
                    bool m_commandLineHasBeenSet;

                    /**
                     * Execution time
                     */
                    std::string m_executeTime;
                    bool m_executeTimeHasBeenSet;

                    /**
                     * Duration of receiving client requests (ms).
                     */
                    int64_t m_recvClientEnd;
                    bool m_recvClientEndHasBeenSet;

                    /**
                     * Duration of sending client requests (ms).
                     */
                    int64_t m_sendClientEnd;
                    bool m_sendClientEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEPROXYSLOWLOGDETAIL_H_
