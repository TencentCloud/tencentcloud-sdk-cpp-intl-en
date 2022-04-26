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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_MODIFYCOMMANDREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_MODIFYCOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyCommand request structure.
                */
                class ModifyCommandRequest : public AbstractModel
                {
                public:
                    ModifyCommandRequest();
                    ~ModifyCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Command ID.
                     * @return CommandId Command ID.
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置Command ID.
                     * @param CommandId Command ID.
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取Command name. The name can be up to 60 bytes, and contain [a-z], [A-Z], [0-9] and [_-.].
                     * @return CommandName Command name. The name can be up to 60 bytes, and contain [a-z], [A-Z], [0-9] and [_-.].
                     */
                    std::string GetCommandName() const;

                    /**
                     * 设置Command name. The name can be up to 60 bytes, and contain [a-z], [A-Z], [0-9] and [_-.].
                     * @param CommandName Command name. The name can be up to 60 bytes, and contain [a-z], [A-Z], [0-9] and [_-.].
                     */
                    void SetCommandName(const std::string& _commandName);

                    /**
                     * 判断参数 CommandName 是否已赋值
                     * @return CommandName 是否已赋值
                     */
                    bool CommandNameHasBeenSet() const;

                    /**
                     * 获取Command description. The maximum length is 120 characters.
                     * @return Description Command description. The maximum length is 120 characters.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Command description. The maximum length is 120 characters.
                     * @param Description Command description. The maximum length is 120 characters.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Base64-encoded command. The maximum length is 64 KB.
                     * @return Content Base64-encoded command. The maximum length is 64 KB.
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Base64-encoded command. The maximum length is 64 KB.
                     * @param Content Base64-encoded command. The maximum length is 64 KB.
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Command type. `SHELL` and `POWERSHELL` are supported.
                     * @return CommandType Command type. `SHELL` and `POWERSHELL` are supported.
                     */
                    std::string GetCommandType() const;

                    /**
                     * 设置Command type. `SHELL` and `POWERSHELL` are supported.
                     * @param CommandType Command type. `SHELL` and `POWERSHELL` are supported.
                     */
                    void SetCommandType(const std::string& _commandType);

                    /**
                     * 判断参数 CommandType 是否已赋值
                     * @return CommandType 是否已赋值
                     */
                    bool CommandTypeHasBeenSet() const;

                    /**
                     * 获取Command execution path.
                     * @return WorkingDirectory Command execution path.
                     */
                    std::string GetWorkingDirectory() const;

                    /**
                     * 设置Command execution path.
                     * @param WorkingDirectory Command execution path.
                     */
                    void SetWorkingDirectory(const std::string& _workingDirectory);

                    /**
                     * 判断参数 WorkingDirectory 是否已赋值
                     * @return WorkingDirectory 是否已赋值
                     */
                    bool WorkingDirectoryHasBeenSet() const;

                    /**
                     * 获取Command timeout period. Value range: [1, 86400].
                     * @return Timeout Command timeout period. Value range: [1, 86400].
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置Command timeout period. Value range: [1, 86400].
                     * @param Timeout Command timeout period. Value range: [1, 86400].
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取The default value of the custom parameter value when it is enabled. The field type is JSON encoded string. For example, {\"varA\": \"222\"}.
All parameters are overwritten. All default values are required for modification.
Modification is only allowed when `EnableParameter` is `true`.
`key` is the name of the custom parameter and `value` is the default value. Both `key` and `value` are strings.
Up to 20 custom parameters are supported.
The name of the custom parameter cannot exceed 64 characters and can contain [a-z], [A-Z], [0-9] and [-_].
                     * @return DefaultParameters The default value of the custom parameter value when it is enabled. The field type is JSON encoded string. For example, {\"varA\": \"222\"}.
All parameters are overwritten. All default values are required for modification.
Modification is only allowed when `EnableParameter` is `true`.
`key` is the name of the custom parameter and `value` is the default value. Both `key` and `value` are strings.
Up to 20 custom parameters are supported.
The name of the custom parameter cannot exceed 64 characters and can contain [a-z], [A-Z], [0-9] and [-_].
                     */
                    std::string GetDefaultParameters() const;

                    /**
                     * 设置The default value of the custom parameter value when it is enabled. The field type is JSON encoded string. For example, {\"varA\": \"222\"}.
All parameters are overwritten. All default values are required for modification.
Modification is only allowed when `EnableParameter` is `true`.
`key` is the name of the custom parameter and `value` is the default value. Both `key` and `value` are strings.
Up to 20 custom parameters are supported.
The name of the custom parameter cannot exceed 64 characters and can contain [a-z], [A-Z], [0-9] and [-_].
                     * @param DefaultParameters The default value of the custom parameter value when it is enabled. The field type is JSON encoded string. For example, {\"varA\": \"222\"}.
All parameters are overwritten. All default values are required for modification.
Modification is only allowed when `EnableParameter` is `true`.
`key` is the name of the custom parameter and `value` is the default value. Both `key` and `value` are strings.
Up to 20 custom parameters are supported.
The name of the custom parameter cannot exceed 64 characters and can contain [a-z], [A-Z], [0-9] and [-_].
                     */
                    void SetDefaultParameters(const std::string& _defaultParameters);

                    /**
                     * 判断参数 DefaultParameters 是否已赋值
                     * @return DefaultParameters 是否已赋值
                     */
                    bool DefaultParametersHasBeenSet() const;

                    /**
                     * 获取The username used to execute the command on the CVM or Lighthouse instance.
The principle of least privilege is the best practice for permission management. We recommend you execute TAT commands as a general user.
                     * @return Username The username used to execute the command on the CVM or Lighthouse instance.
The principle of least privilege is the best practice for permission management. We recommend you execute TAT commands as a general user.
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置The username used to execute the command on the CVM or Lighthouse instance.
The principle of least privilege is the best practice for permission management. We recommend you execute TAT commands as a general user.
                     * @param Username The username used to execute the command on the CVM or Lighthouse instance.
The principle of least privilege is the best practice for permission management. We recommend you execute TAT commands as a general user.
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取The COS bucket URL for uploading logs. The URL must start with `https`, such as `https://BucketName-123454321.cos.ap-beijing.myqcloud.com`.
                     * @return OutputCOSBucketUrl The COS bucket URL for uploading logs. The URL must start with `https`, such as `https://BucketName-123454321.cos.ap-beijing.myqcloud.com`.
                     */
                    std::string GetOutputCOSBucketUrl() const;

                    /**
                     * 设置The COS bucket URL for uploading logs. The URL must start with `https`, such as `https://BucketName-123454321.cos.ap-beijing.myqcloud.com`.
                     * @param OutputCOSBucketUrl The COS bucket URL for uploading logs. The URL must start with `https`, such as `https://BucketName-123454321.cos.ap-beijing.myqcloud.com`.
                     */
                    void SetOutputCOSBucketUrl(const std::string& _outputCOSBucketUrl);

                    /**
                     * 判断参数 OutputCOSBucketUrl 是否已赋值
                     * @return OutputCOSBucketUrl 是否已赋值
                     */
                    bool OutputCOSBucketUrlHasBeenSet() const;

                    /**
                     * 获取The COS bucket directory where the logs are saved. Check below for the rules of the directory name. 
1. It must be a combination of number, letters, and visible characters. Up to 60 characters are allowed.
2. Use a slash (/) to create a subdirectory.
3. ".." can not be used as the folder name. It cannot start with a slash (/), and cannot contain consecutive slashes.
                     * @return OutputCOSKeyPrefix The COS bucket directory where the logs are saved. Check below for the rules of the directory name. 
1. It must be a combination of number, letters, and visible characters. Up to 60 characters are allowed.
2. Use a slash (/) to create a subdirectory.
3. ".." can not be used as the folder name. It cannot start with a slash (/), and cannot contain consecutive slashes.
                     */
                    std::string GetOutputCOSKeyPrefix() const;

                    /**
                     * 设置The COS bucket directory where the logs are saved. Check below for the rules of the directory name. 
1. It must be a combination of number, letters, and visible characters. Up to 60 characters are allowed.
2. Use a slash (/) to create a subdirectory.
3. ".." can not be used as the folder name. It cannot start with a slash (/), and cannot contain consecutive slashes.
                     * @param OutputCOSKeyPrefix The COS bucket directory where the logs are saved. Check below for the rules of the directory name. 
1. It must be a combination of number, letters, and visible characters. Up to 60 characters are allowed.
2. Use a slash (/) to create a subdirectory.
3. ".." can not be used as the folder name. It cannot start with a slash (/), and cannot contain consecutive slashes.
                     */
                    void SetOutputCOSKeyPrefix(const std::string& _outputCOSKeyPrefix);

                    /**
                     * 判断参数 OutputCOSKeyPrefix 是否已赋值
                     * @return OutputCOSKeyPrefix 是否已赋值
                     */
                    bool OutputCOSKeyPrefixHasBeenSet() const;

                private:

                    /**
                     * Command ID.
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * Command name. The name can be up to 60 bytes, and contain [a-z], [A-Z], [0-9] and [_-.].
                     */
                    std::string m_commandName;
                    bool m_commandNameHasBeenSet;

                    /**
                     * Command description. The maximum length is 120 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Base64-encoded command. The maximum length is 64 KB.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Command type. `SHELL` and `POWERSHELL` are supported.
                     */
                    std::string m_commandType;
                    bool m_commandTypeHasBeenSet;

                    /**
                     * Command execution path.
                     */
                    std::string m_workingDirectory;
                    bool m_workingDirectoryHasBeenSet;

                    /**
                     * Command timeout period. Value range: [1, 86400].
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * The default value of the custom parameter value when it is enabled. The field type is JSON encoded string. For example, {\"varA\": \"222\"}.
All parameters are overwritten. All default values are required for modification.
Modification is only allowed when `EnableParameter` is `true`.
`key` is the name of the custom parameter and `value` is the default value. Both `key` and `value` are strings.
Up to 20 custom parameters are supported.
The name of the custom parameter cannot exceed 64 characters and can contain [a-z], [A-Z], [0-9] and [-_].
                     */
                    std::string m_defaultParameters;
                    bool m_defaultParametersHasBeenSet;

                    /**
                     * The username used to execute the command on the CVM or Lighthouse instance.
The principle of least privilege is the best practice for permission management. We recommend you execute TAT commands as a general user.
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
3. ".." can not be used as the folder name. It cannot start with a slash (/), and cannot contain consecutive slashes.
                     */
                    std::string m_outputCOSKeyPrefix;
                    bool m_outputCOSKeyPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_MODIFYCOMMANDREQUEST_H_
