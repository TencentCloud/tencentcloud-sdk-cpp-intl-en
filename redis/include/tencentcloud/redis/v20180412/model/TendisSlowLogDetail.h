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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_TENDISSLOWLOGDETAIL_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_TENDISSLOWLOGDETAIL_H_

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
                * Tendis slow query details
                */
                class TendisSlowLogDetail : public AbstractModel
                {
                public:
                    TendisSlowLogDetail();
                    ~TendisSlowLogDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Duration of the slow query (ms)
                     * @return Duration Duration of the slow query (ms)
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Duration of the slow query (ms)
                     * @param _duration Duration of the slow query (ms)
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
                     * Execution time
                     */
                    std::string m_executeTime;
                    bool m_executeTimeHasBeenSet;

                    /**
                     * Duration of the slow query (ms)
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

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
                     * Node ID
                     */
                    std::string m_node;
                    bool m_nodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_TENDISSLOWLOGDETAIL_H_
