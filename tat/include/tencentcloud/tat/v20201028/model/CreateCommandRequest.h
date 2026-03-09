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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_CREATECOMMANDREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_CREATECOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateCommand request structure.
                */
                class CreateCommandRequest : public AbstractModel
                {
                public:
                    CreateCommandRequest();
                    ~CreateCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Command name. The name can be up to 60 bytes, and contain [a-z], [A-Z], [0-9] and [_-.].
                     * @return CommandName Command name. The name can be up to 60 bytes, and contain [a-z], [A-Z], [0-9] and [_-.].
                     * 
                     */
                    std::string GetCommandName() const;

                    /**
                     * 设置Command name. The name can be up to 60 bytes, and contain [a-z], [A-Z], [0-9] and [_-.].
                     * @param _commandName Command name. The name can be up to 60 bytes, and contain [a-z], [A-Z], [0-9] and [_-.].
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
                     * 获取Base64-encoded command. The maximum length is 64 KB.
                     * @return Content Base64-encoded command. The maximum length is 64 KB.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Base64-encoded command. The maximum length is 64 KB.
                     * @param _content Base64-encoded command. The maximum length is 64 KB.
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
                     * 获取Command description. The maximum length is 120 characters.
                     * @return Description Command description. The maximum length is 120 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Command description. The maximum length is 120 characters.
                     * @param _description Command description. The maximum length is 120 characters.
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
                     * 获取Command type. currently supports SHELL, POWERSHELL, BAT. default: SHELL.
                     * @return CommandType Command type. currently supports SHELL, POWERSHELL, BAT. default: SHELL.
                     * 
                     */
                    std::string GetCommandType() const;

                    /**
                     * 设置Command type. currently supports SHELL, POWERSHELL, BAT. default: SHELL.
                     * @param _commandType Command type. currently supports SHELL, POWERSHELL, BAT. default: SHELL.
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
                     * 获取Command execution path. The default value is /root for `SHELL` commands and C:\Program Files\qcloud\tat_agent\workdir for `POWERSHELL` commands.
                     * @return WorkingDirectory Command execution path. The default value is /root for `SHELL` commands and C:\Program Files\qcloud\tat_agent\workdir for `POWERSHELL` commands.
                     * 
                     */
                    std::string GetWorkingDirectory() const;

                    /**
                     * 设置Command execution path. The default value is /root for `SHELL` commands and C:\Program Files\qcloud\tat_agent\workdir for `POWERSHELL` commands.
                     * @param _workingDirectory Command execution path. The default value is /root for `SHELL` commands and C:\Program Files\qcloud\tat_agent\workdir for `POWERSHELL` commands.
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
                     * 获取Command timeout period. Default value: 60 seconds. Value range: [1, 86400].
                     * @return Timeout Command timeout period. Default value: 60 seconds. Value range: [1, 86400].
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置Command timeout period. Default value: 60 seconds. Value range: [1, 86400].
                     * @param _timeout Command timeout period. Default value: 60 seconds. Value range: [1, 86400].
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
                     * 获取Whether to enable the custom parameter feature.
This cannot be modified once created.
Default value: `false`.
                     * @return EnableParameter Whether to enable the custom parameter feature.
This cannot be modified once created.
Default value: `false`.
                     * 
                     */
                    bool GetEnableParameter() const;

                    /**
                     * 设置Whether to enable the custom parameter feature.
This cannot be modified once created.
Default value: `false`.
                     * @param _enableParameter Whether to enable the custom parameter feature.
This cannot be modified once created.
Default value: `false`.
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
                     * 获取Enable the custom parameter feature. default value of the custom parameter. field type is json encoded string. for example: {"varA": "222"}.
The key is the custom parameter name, and the value is the default. both kv are string-type.
If no parameter value is provided when invoking the command, the default value here will be used to replace it.
Parameters must not be specified simultaneously `DefaultParameters` and `DefaultParameterConfs`.
Allow settings only when the EnableParameter parameter is true.
Custom parameters can be up to 20.
The custom parameter name must meet the following standard: the number of characters has a cap of 64, and the optional range is [a-zA-Z0-9-_].
                     * @return DefaultParameters Enable the custom parameter feature. default value of the custom parameter. field type is json encoded string. for example: {"varA": "222"}.
The key is the custom parameter name, and the value is the default. both kv are string-type.
If no parameter value is provided when invoking the command, the default value here will be used to replace it.
Parameters must not be specified simultaneously `DefaultParameters` and `DefaultParameterConfs`.
Allow settings only when the EnableParameter parameter is true.
Custom parameters can be up to 20.
The custom parameter name must meet the following standard: the number of characters has a cap of 64, and the optional range is [a-zA-Z0-9-_].
                     * 
                     */
                    std::string GetDefaultParameters() const;

                    /**
                     * 设置Enable the custom parameter feature. default value of the custom parameter. field type is json encoded string. for example: {"varA": "222"}.
The key is the custom parameter name, and the value is the default. both kv are string-type.
If no parameter value is provided when invoking the command, the default value here will be used to replace it.
Parameters must not be specified simultaneously `DefaultParameters` and `DefaultParameterConfs`.
Allow settings only when the EnableParameter parameter is true.
Custom parameters can be up to 20.
The custom parameter name must meet the following standard: the number of characters has a cap of 64, and the optional range is [a-zA-Z0-9-_].
                     * @param _defaultParameters Enable the custom parameter feature. default value of the custom parameter. field type is json encoded string. for example: {"varA": "222"}.
The key is the custom parameter name, and the value is the default. both kv are string-type.
If no parameter value is provided when invoking the command, the default value here will be used to replace it.
Parameters must not be specified simultaneously `DefaultParameters` and `DefaultParameterConfs`.
Allow settings only when the EnableParameter parameter is true.
Custom parameters can be up to 20.
The custom parameter name must meet the following standard: the number of characters has a cap of 64, and the optional range is [a-zA-Z0-9-_].
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
                     * 获取Custom parameter array.
If no parameter value is provided when invoking the command, the default value here will be used to replace it.
Parameters must not be specified simultaneously `DefaultParameters` and `DefaultParameterConfs`.
Allow settings only when the EnableParameter parameter is true.
Custom parameters can be up to 20.
                     * @return DefaultParameterConfs Custom parameter array.
If no parameter value is provided when invoking the command, the default value here will be used to replace it.
Parameters must not be specified simultaneously `DefaultParameters` and `DefaultParameterConfs`.
Allow settings only when the EnableParameter parameter is true.
Custom parameters can be up to 20.
                     * 
                     */
                    std::vector<DefaultParameterConf> GetDefaultParameterConfs() const;

                    /**
                     * 设置Custom parameter array.
If no parameter value is provided when invoking the command, the default value here will be used to replace it.
Parameters must not be specified simultaneously `DefaultParameters` and `DefaultParameterConfs`.
Allow settings only when the EnableParameter parameter is true.
Custom parameters can be up to 20.
                     * @param _defaultParameterConfs Custom parameter array.
If no parameter value is provided when invoking the command, the default value here will be used to replace it.
Parameters must not be specified simultaneously `DefaultParameters` and `DefaultParameterConfs`.
Allow settings only when the EnableParameter parameter is true.
Custom parameters can be up to 20.
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
                     * 获取Tags bound to the command. At most 10 tags are allowed.
                     * @return Tags Tags bound to the command. At most 10 tags are allowed.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tags bound to the command. At most 10 tags are allowed.
                     * @param _tags Tags bound to the command. At most 10 tags are allowed.
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
                     * 获取The username used to execute the command on the CVM or Lighthouse instance.
The principle of least privilege is the best practice for permission management. We recommend you execute TAT commands as a general user. By default, the root user is used to execute commands on Linux and the System user is used on Windows.
                     * @return Username The username used to execute the command on the CVM or Lighthouse instance.
The principle of least privilege is the best practice for permission management. We recommend you execute TAT commands as a general user. By default, the root user is used to execute commands on Linux and the System user is used on Windows.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置The username used to execute the command on the CVM or Lighthouse instance.
The principle of least privilege is the best practice for permission management. We recommend you execute TAT commands as a general user. By default, the root user is used to execute commands on Linux and the System user is used on Windows.
                     * @param _username The username used to execute the command on the CVM or Lighthouse instance.
The principle of least privilege is the best practice for permission management. We recommend you execute TAT commands as a general user. By default, the root user is used to execute commands on Linux and the System user is used on Windows.
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
                     * 获取The COS bucket URL for uploading logs. The URL must start with `https`, such as `https://BucketName-123454321.cos.ap-beijing.myqcloud.com`.
                     * @return OutputCOSBucketUrl The COS bucket URL for uploading logs. The URL must start with `https`, such as `https://BucketName-123454321.cos.ap-beijing.myqcloud.com`.
                     * 
                     */
                    std::string GetOutputCOSBucketUrl() const;

                    /**
                     * 设置The COS bucket URL for uploading logs. The URL must start with `https`, such as `https://BucketName-123454321.cos.ap-beijing.myqcloud.com`.
                     * @param _outputCOSBucketUrl The COS bucket URL for uploading logs. The URL must start with `https`, such as `https://BucketName-123454321.cos.ap-beijing.myqcloud.com`.
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
                     * 获取The COS bucket directory where the logs are saved. Check below for the rules of the directory name. 
1. It must be a combination of number, letters, and visible characters. Up to 60 characters are allowed.
2. Use a slash (/) to create a subdirectory.
3. Consecutive dots (.) and slashes (/) are not allowed. It can not start with a slash (/). 
                     * @return OutputCOSKeyPrefix The COS bucket directory where the logs are saved. Check below for the rules of the directory name. 
1. It must be a combination of number, letters, and visible characters. Up to 60 characters are allowed.
2. Use a slash (/) to create a subdirectory.
3. Consecutive dots (.) and slashes (/) are not allowed. It can not start with a slash (/). 
                     * 
                     */
                    std::string GetOutputCOSKeyPrefix() const;

                    /**
                     * 设置The COS bucket directory where the logs are saved. Check below for the rules of the directory name. 
1. It must be a combination of number, letters, and visible characters. Up to 60 characters are allowed.
2. Use a slash (/) to create a subdirectory.
3. Consecutive dots (.) and slashes (/) are not allowed. It can not start with a slash (/). 
                     * @param _outputCOSKeyPrefix The COS bucket directory where the logs are saved. Check below for the rules of the directory name. 
1. It must be a combination of number, letters, and visible characters. Up to 60 characters are allowed.
2. Use a slash (/) to create a subdirectory.
3. Consecutive dots (.) and slashes (/) are not allowed. It can not start with a slash (/). 
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
                     * Command name. The name can be up to 60 bytes, and contain [a-z], [A-Z], [0-9] and [_-.].
                     */
                    std::string m_commandName;
                    bool m_commandNameHasBeenSet;

                    /**
                     * Base64-encoded command. The maximum length is 64 KB.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Command description. The maximum length is 120 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Command type. currently supports SHELL, POWERSHELL, BAT. default: SHELL.
                     */
                    std::string m_commandType;
                    bool m_commandTypeHasBeenSet;

                    /**
                     * Command execution path. The default value is /root for `SHELL` commands and C:\Program Files\qcloud\tat_agent\workdir for `POWERSHELL` commands.
                     */
                    std::string m_workingDirectory;
                    bool m_workingDirectoryHasBeenSet;

                    /**
                     * Command timeout period. Default value: 60 seconds. Value range: [1, 86400].
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Whether to enable the custom parameter feature.
This cannot be modified once created.
Default value: `false`.
                     */
                    bool m_enableParameter;
                    bool m_enableParameterHasBeenSet;

                    /**
                     * Enable the custom parameter feature. default value of the custom parameter. field type is json encoded string. for example: {"varA": "222"}.
The key is the custom parameter name, and the value is the default. both kv are string-type.
If no parameter value is provided when invoking the command, the default value here will be used to replace it.
Parameters must not be specified simultaneously `DefaultParameters` and `DefaultParameterConfs`.
Allow settings only when the EnableParameter parameter is true.
Custom parameters can be up to 20.
The custom parameter name must meet the following standard: the number of characters has a cap of 64, and the optional range is [a-zA-Z0-9-_].
                     */
                    std::string m_defaultParameters;
                    bool m_defaultParametersHasBeenSet;

                    /**
                     * Custom parameter array.
If no parameter value is provided when invoking the command, the default value here will be used to replace it.
Parameters must not be specified simultaneously `DefaultParameters` and `DefaultParameterConfs`.
Allow settings only when the EnableParameter parameter is true.
Custom parameters can be up to 20.
                     */
                    std::vector<DefaultParameterConf> m_defaultParameterConfs;
                    bool m_defaultParameterConfsHasBeenSet;

                    /**
                     * Tags bound to the command. At most 10 tags are allowed.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * The username used to execute the command on the CVM or Lighthouse instance.
The principle of least privilege is the best practice for permission management. We recommend you execute TAT commands as a general user. By default, the root user is used to execute commands on Linux and the System user is used on Windows.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * The COS bucket URL for uploading logs. The URL must start with `https`, such as `https://BucketName-123454321.cos.ap-beijing.myqcloud.com`.
                     */
                    std::string m_outputCOSBucketUrl;
                    bool m_outputCOSBucketUrlHasBeenSet;

                    /**
                     * The COS bucket directory where the logs are saved. Check below for the rules of the directory name. 
1. It must be a combination of number, letters, and visible characters. Up to 60 characters are allowed.
2. Use a slash (/) to create a subdirectory.
3. Consecutive dots (.) and slashes (/) are not allowed. It can not start with a slash (/). 
                     */
                    std::string m_outputCOSKeyPrefix;
                    bool m_outputCOSKeyPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_CREATECOMMANDREQUEST_H_
