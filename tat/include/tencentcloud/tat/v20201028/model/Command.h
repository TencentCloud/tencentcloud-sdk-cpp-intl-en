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
#include <tencentcloud/tat/v20201028/model/DefaultParameterConf.h>
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
                     * 获取<p>Command ID.</p>.
                     * @return CommandId <p>Command ID.</p>.
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置<p>Command ID.</p>.
                     * @param _commandId <p>Command ID.</p>.
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
                     * 获取<P>Command name.</p>.
                     * @return CommandName <P>Command name.</p>.
                     * 
                     */
                    std::string GetCommandName() const;

                    /**
                     * 设置<P>Command name.</p>.
                     * @param _commandName <P>Command name.</p>.
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
                     * 获取<P>Command description.</p>.
                     * @return Description <P>Command description.</p>.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<P>Command description.</p>.
                     * @param _description <P>Command description.</p>.
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
                     * 获取<p>The Base64-encoded command content.</p>.
                     * @return Content <p>The Base64-encoded command content.</p>.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>The Base64-encoded command content.</p>.
                     * @param _content <p>The Base64-encoded command content.</p>.
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
                     * 获取<p>Command type. value is one of SHELL, POWERSHELL, BAT.</p>.
                     * @return CommandType <p>Command type. value is one of SHELL, POWERSHELL, BAT.</p>.
                     * 
                     */
                    std::string GetCommandType() const;

                    /**
                     * 设置<p>Command type. value is one of SHELL, POWERSHELL, BAT.</p>.
                     * @param _commandType <p>Command type. value is one of SHELL, POWERSHELL, BAT.</p>.
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
                     * 获取<P>Command execution path.</p>.
                     * @return WorkingDirectory <P>Command execution path.</p>.
                     * 
                     */
                    std::string GetWorkingDirectory() const;

                    /**
                     * 设置<P>Command execution path.</p>.
                     * @param _workingDirectory <P>Command execution path.</p>.
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
                     * 获取<p>Command timeout time.</p><p>unit: seconds.</p><p>when specifying the OutputCOSBucketUrl parameter, the timeout period includes the time taken to upload command output to COS.</p>.
                     * @return Timeout <p>Command timeout time.</p><p>unit: seconds.</p><p>when specifying the OutputCOSBucketUrl parameter, the timeout period includes the time taken to upload command output to COS.</p>.
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>Command timeout time.</p><p>unit: seconds.</p><p>when specifying the OutputCOSBucketUrl parameter, the timeout period includes the time taken to upload command output to COS.</p>.
                     * @param _timeout <p>Command timeout time.</p><p>unit: seconds.</p><p>when specifying the OutputCOSBucketUrl parameter, the timeout period includes the time taken to upload command output to COS.</p>.
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
                     * 获取<p>Command creation time. the format is YYYY-MM-DDThh:MM:ssZ.</p>.
                     * @return CreatedTime <p>Command creation time. the format is YYYY-MM-DDThh:MM:ssZ.</p>.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>Command creation time. the format is YYYY-MM-DDThh:MM:ssZ.</p>.
                     * @param _createdTime <p>Command creation time. the format is YYYY-MM-DDThh:MM:ssZ.</p>.
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
                     * 获取<p>Command last update time. format: YYYY-MM-DDThh:MM:ssZ.</p>.
                     * @return UpdatedTime <p>Command last update time. format: YYYY-MM-DDThh:MM:ssZ.</p>.
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置<p>Command last update time. format: YYYY-MM-DDThh:MM:ssZ.</p>.
                     * @param _updatedTime <p>Command last update time. format: YYYY-MM-DDThh:MM:ssZ.</p>.
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
                     * 获取<P>Whether to enable the custom parameter feature.</p>.
                     * @return EnableParameter <P>Whether to enable the custom parameter feature.</p>.
                     * 
                     */
                    bool GetEnableParameter() const;

                    /**
                     * 设置<P>Whether to enable the custom parameter feature.</p>.
                     * @param _enableParameter <P>Whether to enable the custom parameter feature.</p>.
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
                     * 获取<P>Default value of custom parameter.</p>.
                     * @return DefaultParameters <P>Default value of custom parameter.</p>.
                     * 
                     */
                    std::string GetDefaultParameters() const;

                    /**
                     * 设置<P>Default value of custom parameter.</p>.
                     * @param _defaultParameters <P>Default value of custom parameter.</p>.
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
                     * 获取<P>Default value of custom parameters.</p>.
                     * @return DefaultParameterConfs <P>Default value of custom parameters.</p>.
                     * 
                     */
                    std::vector<DefaultParameterConf> GetDefaultParameterConfs() const;

                    /**
                     * 设置<P>Default value of custom parameters.</p>.
                     * @param _defaultParameterConfs <P>Default value of custom parameters.</p>.
                     * 
                     */
                    void SetDefaultParameterConfs(const std::vector<DefaultParameterConf>& _defaultParameterConfs);

                    /**
                     * 判断参数 DefaultParameterConfs 是否已赋值
                     * @return DefaultParameterConfs 是否已赋值
                     * 
                     */
                    bool DefaultParameterConfsHasBeenSet() const;

                    /**
                     * 获取<P>Command association scenarios</p>.
                     * @return Scenes <P>Command association scenarios</p>.
                     * 
                     */
                    std::vector<std::string> GetScenes() const;

                    /**
                     * 设置<P>Command association scenarios</p>.
                     * @param _scenes <P>Command association scenarios</p>.
                     * 
                     */
                    void SetScenes(const std::vector<std::string>& _scenes);

                    /**
                     * 判断参数 Scenes 是否已赋值
                     * @return Scenes 是否已赋值
                     * 
                     */
                    bool ScenesHasBeenSet() const;

                    /**
                     * 获取<P>Structured description of the command. public commands have values, and user commands are empty strings.</p>.
                     * @return FormattedDescription <P>Structured description of the command. public commands have values, and user commands are empty strings.</p>.
                     * 
                     */
                    std::string GetFormattedDescription() const;

                    /**
                     * 设置<P>Structured description of the command. public commands have values, and user commands are empty strings.</p>.
                     * @param _formattedDescription <P>Structured description of the command. public commands have values, and user commands are empty strings.</p>.
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
                     * 获取<p>Command creator.</p><p>enumeration value:</p><ul><li>TAT: public command</li><li>USER: personal creation command</li></ul>.
                     * @return CreatedBy <p>Command creator.</p><p>enumeration value:</p><ul><li>TAT: public command</li><li>USER: personal creation command</li></ul>.
                     * 
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 设置<p>Command creator.</p><p>enumeration value:</p><ul><li>TAT: public command</li><li>USER: personal creation command</li></ul>.
                     * @param _createdBy <p>Command creator.</p><p>enumeration value:</p><ul><li>TAT: public command</li><li>USER: personal creation command</li></ul>.
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
                     * 获取<P>Tag list associated with the command.</p>.
                     * @return Tags <P>Tag list associated with the command.</p>.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<P>Tag list associated with the command.</p>.
                     * @param _tags <P>Tag list associated with the command.</p>.
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
                     * 获取<P>Username to run command on the instance.</p>.
                     * @return Username <P>Username to run command on the instance.</p>.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<P>Username to run command on the instance.</p>.
                     * @param _username <P>Username to run command on the instance.</p>.
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
                     * 获取<P>The cos bucket address for log upload.</p>.
                     * @return OutputCOSBucketUrl <P>The cos bucket address for log upload.</p>.
                     * 
                     */
                    std::string GetOutputCOSBucketUrl() const;

                    /**
                     * 设置<P>The cos bucket address for log upload.</p>.
                     * @param _outputCOSBucketUrl <P>The cos bucket address for log upload.</p>.
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
                     * 获取<P>Directory of logs in the cos bucket.</p>.
                     * @return OutputCOSKeyPrefix <P>Directory of logs in the cos bucket.</p>.
                     * 
                     */
                    std::string GetOutputCOSKeyPrefix() const;

                    /**
                     * 设置<P>Directory of logs in the cos bucket.</p>.
                     * @param _outputCOSKeyPrefix <P>Directory of logs in the cos bucket.</p>.
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
                     * <p>Command ID.</p>.
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * <P>Command name.</p>.
                     */
                    std::string m_commandName;
                    bool m_commandNameHasBeenSet;

                    /**
                     * <P>Command description.</p>.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>The Base64-encoded command content.</p>.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>Command type. value is one of SHELL, POWERSHELL, BAT.</p>.
                     */
                    std::string m_commandType;
                    bool m_commandTypeHasBeenSet;

                    /**
                     * <P>Command execution path.</p>.
                     */
                    std::string m_workingDirectory;
                    bool m_workingDirectoryHasBeenSet;

                    /**
                     * <p>Command timeout time.</p><p>unit: seconds.</p><p>when specifying the OutputCOSBucketUrl parameter, the timeout period includes the time taken to upload command output to COS.</p>.
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>Command creation time. the format is YYYY-MM-DDThh:MM:ssZ.</p>.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>Command last update time. format: YYYY-MM-DDThh:MM:ssZ.</p>.
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * <P>Whether to enable the custom parameter feature.</p>.
                     */
                    bool m_enableParameter;
                    bool m_enableParameterHasBeenSet;

                    /**
                     * <P>Default value of custom parameter.</p>.
                     */
                    std::string m_defaultParameters;
                    bool m_defaultParametersHasBeenSet;

                    /**
                     * <P>Default value of custom parameters.</p>.
                     */
                    std::vector<DefaultParameterConf> m_defaultParameterConfs;
                    bool m_defaultParameterConfsHasBeenSet;

                    /**
                     * <P>Command association scenarios</p>.
                     */
                    std::vector<std::string> m_scenes;
                    bool m_scenesHasBeenSet;

                    /**
                     * <P>Structured description of the command. public commands have values, and user commands are empty strings.</p>.
                     */
                    std::string m_formattedDescription;
                    bool m_formattedDescriptionHasBeenSet;

                    /**
                     * <p>Command creator.</p><p>enumeration value:</p><ul><li>TAT: public command</li><li>USER: personal creation command</li></ul>.
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                    /**
                     * <P>Tag list associated with the command.</p>.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <P>Username to run command on the instance.</p>.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <P>The cos bucket address for log upload.</p>.
                     */
                    std::string m_outputCOSBucketUrl;
                    bool m_outputCOSBucketUrlHasBeenSet;

                    /**
                     * <P>Directory of logs in the cos bucket.</p>.
                     */
                    std::string m_outputCOSKeyPrefix;
                    bool m_outputCOSKeyPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_COMMAND_H_
