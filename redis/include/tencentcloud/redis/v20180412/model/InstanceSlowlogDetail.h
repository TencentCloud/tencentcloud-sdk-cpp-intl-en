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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCESLOWLOGDETAIL_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCESLOWLOGDETAIL_H_

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
                * Slow log details
                */
                class InstanceSlowlogDetail : public AbstractModel
                {
                public:
                    InstanceSlowlogDetail();
                    ~InstanceSlowlogDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Slow log duration
                     * @return Duration Slow log duration
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Slow log duration
                     * @param _duration Slow log duration
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
                     * 获取Command
                     * @return Command Command
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置Command
                     * @param _command Command
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
                     * 获取Command line details
                     * @return CommandLine Command line details
                     * 
                     */
                    std::string GetCommandLine() const;

                    /**
                     * 设置Command line details
                     * @param _commandLine Command line details
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
                     * 获取Execution duration
                     * @return ExecuteTime Execution duration
                     * 
                     */
                    std::string GetExecuteTime() const;

                    /**
                     * 设置Execution duration
                     * @param _executeTime Execution duration
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
                     * 获取Node ID
                     * @return Node Node ID
                     * 
                     */
                    std::string GetNode() const;

                    /**
                     * 设置Node ID
                     * @param _node Node ID
                     * 
                     */
                    void SetNode(const std::string& _node);

                    /**
                     * 判断参数 Node 是否已赋值
                     * @return Node 是否已赋值
                     * 
                     */
                    bool NodeHasBeenSet() const;

                private:

                    /**
                     * Slow log duration
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Client address
                     */
                    std::string m_client;
                    bool m_clientHasBeenSet;

                    /**
                     * Command
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * Command line details
                     */
                    std::string m_commandLine;
                    bool m_commandLineHasBeenSet;

                    /**
                     * Execution duration
                     */
                    std::string m_executeTime;
                    bool m_executeTimeHasBeenSet;

                    /**
                     * Node ID
                     */
                    std::string m_node;
                    bool m_nodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCESLOWLOGDETAIL_H_
