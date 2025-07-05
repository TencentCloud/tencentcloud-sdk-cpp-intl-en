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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_COMMAND_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_COMMAND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/Tag.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Command details.
                */
                class Command : public AbstractModel
                {
                public:
                    Command();
                    ~Command() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Command ID.
                     * @return CommandId Command ID.
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置Command ID.
                     * @param _commandId Command ID.
                     * 
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     * 
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取Command name.
                     * @return CommandName Command name.
                     * 
                     */
                    std::string GetCommandName() const;

                    /**
                     * 设置Command name.
                     * @param _commandName Command name.
                     * 
                     */
                    void SetCommandName(const std::string& _commandName);

                    /**
                     * 判断参数 CommandName 是否已赋值
                     * @return CommandName 是否已赋值
                     * 
                     */
                    bool CommandNameHasBeenSet() const;

                    /**
                     * 获取Command description.
                     * @return Description Command description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Command description.
                     * @param _description Command description.
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
                     * 获取Base64-encoded command.
                     * @return Content Base64-encoded command.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Base64-encoded command.
                     * @param _content Base64-encoded command.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Command type.
                     * @return CommandType Command type.
                     * 
                     */
                    std::string GetCommandType() const;

                    /**
                     * 设置Command type.
                     * @param _commandType Command type.
                     * 
                     */
                    void SetCommandType(const std::string& _commandType);

                    /**
                     * 判断参数 CommandType 是否已赋值
                     * @return CommandType 是否已赋值
                     * 
                     */
                    bool CommandTypeHasBeenSet() const;

                    /**
                     * 获取Command execution path.
                     * @return WorkingDirectory Command execution path.
                     * 
                     */
                    std::string GetWorkingDirectory() const;

                    /**
                     * 设置Command execution path.
                     * @param _workingDirectory Command execution path.
                     * 
                     */
                    void SetWorkingDirectory(const std::string& _workingDirectory);

                    /**
                     * 判断参数 WorkingDirectory 是否已赋值
                     * @return WorkingDirectory 是否已赋值
                     * 
                     */
                    bool WorkingDirectoryHasBeenSet() const;

                    /**
                     * 获取Command timeout period.
                     * @return Timeout Command timeout period.
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置Command timeout period.
                     * @param _timeout Command timeout period.
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Command creation time.
                     * @return CreatedTime Command creation time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Command creation time.
                     * @param _createdTime Command creation time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Command update time.
                     * @return UpdatedTime Command update time.
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置Command update time.
                     * @param _updatedTime Command update time.
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取Whether to enable the custom parameter feature.
                     * @return EnableParameter Whether to enable the custom parameter feature.
                     * 
                     */
                    bool GetEnableParameter() const;

                    /**
                     * 设置Whether to enable the custom parameter feature.
                     * @param _enableParameter Whether to enable the custom parameter feature.
                     * 
                     */
                    void SetEnableParameter(const bool& _enableParameter);

                    /**
                     * 判断参数 EnableParameter 是否已赋值
                     * @return EnableParameter 是否已赋值
                     * 
                     */
                    bool EnableParameterHasBeenSet() const;

                    /**
                     * 获取Default custom parameter value.
                     * @return DefaultParameters Default custom parameter value.
                     * 
                     */
                    std::string GetDefaultParameters() const;

                    /**
                     * 设置Default custom parameter value.
                     * @param _defaultParameters Default custom parameter value.
                     * 
                     */
                    void SetDefaultParameters(const std::string& _defaultParameters);

                    /**
                     * 判断参数 DefaultParameters 是否已赋值
                     * @return DefaultParameters 是否已赋值
                     * 
                     */
                    bool DefaultParametersHasBeenSet() const;

                    /**
                     * 获取Formatted description of the command. This parameter is an empty string for user commands and contains values for public commands.
                     * @return FormattedDescription Formatted description of the command. This parameter is an empty string for user commands and contains values for public commands.
                     * 
                     */
                    std::string GetFormattedDescription() const;

                    /**
                     * 设置Formatted description of the command. This parameter is an empty string for user commands and contains values for public commands.
                     * @param _formattedDescription Formatted description of the command. This parameter is an empty string for user commands and contains values for public commands.
                     * 
                     */
                    void SetFormattedDescription(const std::string& _formattedDescription);

                    /**
                     * 判断参数 FormattedDescription 是否已赋值
                     * @return FormattedDescription 是否已赋值
                     * 
                     */
                    bool FormattedDescriptionHasBeenSet() const;

                    /**
                     * 获取Command creator. `TAT` indicates a public command and `USER` indicates a personal command.
                     * @return CreatedBy Command creator. `TAT` indicates a public command and `USER` indicates a personal command.
                     * 
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 设置Command creator. `TAT` indicates a public command and `USER` indicates a personal command.
                     * @param _createdBy Command creator. `TAT` indicates a public command and `USER` indicates a personal command.
                     * 
                     */
                    void SetCreatedBy(const std::string& _createdBy);

                    /**
                     * 判断参数 CreatedBy 是否已赋值
                     * @return CreatedBy 是否已赋值
                     * 
                     */
                    bool CreatedByHasBeenSet() const;

                    /**
                     * 获取The list of tags bound to the command.
                     * @return Tags The list of tags bound to the command.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置The list of tags bound to the command.
                     * @param _tags The list of tags bound to the command.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取The user who executes the command on the instance.
                     * @return Username The user who executes the command on the instance.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置The user who executes the command on the instance.
                     * @param _username The user who executes the command on the instance.
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取The COS bucket URL for uploading logs.
                     * @return OutputCOSBucketUrl The COS bucket URL for uploading logs.
                     * 
                     */
                    std::string GetOutputCOSBucketUrl() const;

                    /**
                     * 设置The COS bucket URL for uploading logs.
                     * @param _outputCOSBucketUrl The COS bucket URL for uploading logs.
                     * 
                     */
                    void SetOutputCOSBucketUrl(const std::string& _outputCOSBucketUrl);

                    /**
                     * 判断参数 OutputCOSBucketUrl 是否已赋值
                     * @return OutputCOSBucketUrl 是否已赋值
                     * 
                     */
                    bool OutputCOSBucketUrlHasBeenSet() const;

                    /**
                     * 获取The COS bucket directory where the logs are saved.
                     * @return OutputCOSKeyPrefix The COS bucket directory where the logs are saved.
                     * 
                     */
                    std::string GetOutputCOSKeyPrefix() const;

                    /**
                     * 设置The COS bucket directory where the logs are saved.
                     * @param _outputCOSKeyPrefix The COS bucket directory where the logs are saved.
                     * 
                     */
                    void SetOutputCOSKeyPrefix(const std::string& _outputCOSKeyPrefix);

                    /**
                     * 判断参数 OutputCOSKeyPrefix 是否已赋值
                     * @return OutputCOSKeyPrefix 是否已赋值
                     * 
                     */
                    bool OutputCOSKeyPrefixHasBeenSet() const;

                private:

                    /**
                     * Command ID.
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * Command name.
                     */
                    std::string m_commandName;
                    bool m_commandNameHasBeenSet;

                    /**
                     * Command description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

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
                     * Command execution path.
                     */
                    std::string m_workingDirectory;
                    bool m_workingDirectoryHasBeenSet;

                    /**
                     * Command timeout period.
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Command creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Command update time.
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * Whether to enable the custom parameter feature.
                     */
                    bool m_enableParameter;
                    bool m_enableParameterHasBeenSet;

                    /**
                     * Default custom parameter value.
                     */
                    std::string m_defaultParameters;
                    bool m_defaultParametersHasBeenSet;

                    /**
                     * Formatted description of the command. This parameter is an empty string for user commands and contains values for public commands.
                     */
                    std::string m_formattedDescription;
                    bool m_formattedDescriptionHasBeenSet;

                    /**
                     * Command creator. `TAT` indicates a public command and `USER` indicates a personal command.
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                    /**
                     * The list of tags bound to the command.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * The user who executes the command on the instance.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * The COS bucket URL for uploading logs.
                     */
                    std::string m_outputCOSBucketUrl;
                    bool m_outputCOSBucketUrlHasBeenSet;

                    /**
                     * The COS bucket directory where the logs are saved.
                     */
                    std::string m_outputCOSKeyPrefix;
                    bool m_outputCOSKeyPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_COMMAND_H_
