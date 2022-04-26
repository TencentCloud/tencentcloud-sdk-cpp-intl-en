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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_COMMANDDOCUMENT_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_COMMANDDOCUMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Command execution details.
                */
                class CommandDocument : public AbstractModel
                {
                public:
                    CommandDocument();
                    ~CommandDocument() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Base64-encoded command.
                     * @return Content Base64-encoded command.
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Base64-encoded command.
                     * @param Content Base64-encoded command.
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Command type.
                     * @return CommandType Command type.
                     */
                    std::string GetCommandType() const;

                    /**
                     * 设置Command type.
                     * @param CommandType Command type.
                     */
                    void SetCommandType(const std::string& _commandType);

                    /**
                     * 判断参数 CommandType 是否已赋值
                     * @return CommandType 是否已赋值
                     */
                    bool CommandTypeHasBeenSet() const;

                    /**
                     * 获取Timeout period.
                     * @return Timeout Timeout period.
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置Timeout period.
                     * @param Timeout Timeout period.
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Execution path.
                     * @return WorkingDirectory Execution path.
                     */
                    std::string GetWorkingDirectory() const;

                    /**
                     * 设置Execution path.
                     * @param WorkingDirectory Execution path.
                     */
                    void SetWorkingDirectory(const std::string& _workingDirectory);

                    /**
                     * 判断参数 WorkingDirectory 是否已赋值
                     * @return WorkingDirectory 是否已赋值
                     */
                    bool WorkingDirectoryHasBeenSet() const;

                    /**
                     * 获取The user who executes the command.
                     * @return Username The user who executes the command.
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置The user who executes the command.
                     * @param Username The user who executes the command.
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     */
                    bool UsernameHasBeenSet() const;

                private:

                    /**
                     * Base64-encoded command.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Command type.
                     */
                    std::string m_commandType;
                    bool m_commandTypeHasBeenSet;

                    /**
                     * Timeout period.
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Execution path.
                     */
                    std::string m_workingDirectory;
                    bool m_workingDirectoryHasBeenSet;

                    /**
                     * The user who executes the command.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_COMMANDDOCUMENT_H_
