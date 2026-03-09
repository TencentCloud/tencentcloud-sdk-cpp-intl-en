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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_MODIFYCOMMANDREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_MODIFYCOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/DefaultParameterConf.h>


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
                     * 获取<p>Command ID. call the <a href="https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1">DescribeCommands</a> api to query command details.</p>.
                     * @return CommandId <p>Command ID. call the <a href="https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1">DescribeCommands</a> api to query command details.</p>.
                     * 
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置<p>Command ID. call the <a href="https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1">DescribeCommands</a> api to query command details.</p>.
                     * @param _commandId <p>Command ID. call the <a href="https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1">DescribeCommands</a> api to query command details.</p>.
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
                     * 获取<p>Command name. name only supports chinese, english, digits, underscore, separator "-", and decimal point. the maximum length cannot exceed 60 bytes.</p>.
                     * @return CommandName <p>Command name. name only supports chinese, english, digits, underscore, separator "-", and decimal point. the maximum length cannot exceed 60 bytes.</p>.
                     * 
                     */
                    std::string GetCommandName() const;

                    /**
                     * 设置<p>Command name. name only supports chinese, english, digits, underscore, separator "-", and decimal point. the maximum length cannot exceed 60 bytes.</p>.
                     * @param _commandName <p>Command name. name only supports chinese, english, digits, underscore, separator "-", and decimal point. the maximum length cannot exceed 60 bytes.</p>.
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
                     * 获取<P>Command description. no more than 120 characters.</p>.
                     * @return Description <P>Command description. no more than 120 characters.</p>.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<P>Command description. no more than 120 characters.</p>.
                     * @param _description <P>Command description. no more than 120 characters.</p>.
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
                     * 获取<p>The Base64-encoded command content, length cannot exceed 64KB.</p>.
                     * @return Content <p>The Base64-encoded command content, length cannot exceed 64KB.</p>.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>The Base64-encoded command content, length cannot exceed 64KB.</p>.
                     * @param _content <p>The Base64-encoded command content, length cannot exceed 64KB.</p>.
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
                     * 获取<p>Command type. currently supports SHELL, POWERSHELL, BAT.</p>.
                     * @return CommandType <p>Command type. currently supports SHELL, POWERSHELL, BAT.</p>.
                     * 
                     */
                    std::string GetCommandType() const;

                    /**
                     * 设置<p>Command type. currently supports SHELL, POWERSHELL, BAT.</p>.
                     * @param _commandType <p>Command type. currently supports SHELL, POWERSHELL, BAT.</p>.
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
                     * 获取<p>Command timeout time.</p><p>value range: [1, 86400].</p><p>unit: seconds.</p><p>default value: 60.</p><p>when specifying the OutputCOSBucketUrl parameter, the timeout period includes the time taken to upload command output to COS.</p>.
                     * @return Timeout <p>Command timeout time.</p><p>value range: [1, 86400].</p><p>unit: seconds.</p><p>default value: 60.</p><p>when specifying the OutputCOSBucketUrl parameter, the timeout period includes the time taken to upload command output to COS.</p>.
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>Command timeout time.</p><p>value range: [1, 86400].</p><p>unit: seconds.</p><p>default value: 60.</p><p>when specifying the OutputCOSBucketUrl parameter, the timeout period includes the time taken to upload command output to COS.</p>.
                     * @param _timeout <p>Command timeout time.</p><p>value range: [1, 86400].</p><p>unit: seconds.</p><p>default value: 60.</p><p>when specifying the OutputCOSBucketUrl parameter, the timeout period includes the time taken to upload command output to COS.</p>.
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
                     * 获取<p>The default value of custom parameters when the custom parameter feature is enabled. the field type is a json-encoded string, for example: {"varA": "222"}.<br>parameters must not be specified simultaneously for <code>DefaultParameters</code> and <code>DefaultParameterConfs</code>.<br>a comprehensive modification is applied, meaning all new default values must be provided when modifying.<br>this parameter can be modified only when EnableParameter of the command is true. obtain the EnableParameter settings of the command through the <a href="https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1">DescribeCommands (query command details)</a> api.<br>the key is the custom parameter name, and the value is the default value of this parameter. both key and value are string-type.<br>there is an upper limit of 20 custom parameters.<br>custom parameter names must meet the following requirements: the upper limit of character quantity is 64, and the optional range is [a-zA-Z0-9-_].</p>.
                     * @return DefaultParameters <p>The default value of custom parameters when the custom parameter feature is enabled. the field type is a json-encoded string, for example: {"varA": "222"}.<br>parameters must not be specified simultaneously for <code>DefaultParameters</code> and <code>DefaultParameterConfs</code>.<br>a comprehensive modification is applied, meaning all new default values must be provided when modifying.<br>this parameter can be modified only when EnableParameter of the command is true. obtain the EnableParameter settings of the command through the <a href="https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1">DescribeCommands (query command details)</a> api.<br>the key is the custom parameter name, and the value is the default value of this parameter. both key and value are string-type.<br>there is an upper limit of 20 custom parameters.<br>custom parameter names must meet the following requirements: the upper limit of character quantity is 64, and the optional range is [a-zA-Z0-9-_].</p>.
                     * 
                     */
                    std::string GetDefaultParameters() const;

                    /**
                     * 设置<p>The default value of custom parameters when the custom parameter feature is enabled. the field type is a json-encoded string, for example: {"varA": "222"}.<br>parameters must not be specified simultaneously for <code>DefaultParameters</code> and <code>DefaultParameterConfs</code>.<br>a comprehensive modification is applied, meaning all new default values must be provided when modifying.<br>this parameter can be modified only when EnableParameter of the command is true. obtain the EnableParameter settings of the command through the <a href="https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1">DescribeCommands (query command details)</a> api.<br>the key is the custom parameter name, and the value is the default value of this parameter. both key and value are string-type.<br>there is an upper limit of 20 custom parameters.<br>custom parameter names must meet the following requirements: the upper limit of character quantity is 64, and the optional range is [a-zA-Z0-9-_].</p>.
                     * @param _defaultParameters <p>The default value of custom parameters when the custom parameter feature is enabled. the field type is a json-encoded string, for example: {"varA": "222"}.<br>parameters must not be specified simultaneously for <code>DefaultParameters</code> and <code>DefaultParameterConfs</code>.<br>a comprehensive modification is applied, meaning all new default values must be provided when modifying.<br>this parameter can be modified only when EnableParameter of the command is true. obtain the EnableParameter settings of the command through the <a href="https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1">DescribeCommands (query command details)</a> api.<br>the key is the custom parameter name, and the value is the default value of this parameter. both key and value are string-type.<br>there is an upper limit of 20 custom parameters.<br>custom parameter names must meet the following requirements: the upper limit of character quantity is 64, and the optional range is [a-zA-Z0-9-_].</p>.
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
                     * 获取<p>Custom parameter array. if no parameter value is provided when invoking the command, the default value here will be used to replace it.<br>parameters do not support specifying both <code>DefaultParameters</code> and <code>DefaultParameterConfs</code>.<br>this parameter can be modified only when EnableParameter of the command is true. obtain the EnableParameter settings through the <a href="https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1">DescribeCommands (query command details)</a> api.<br>up to 20 custom parameters are allowed.</p>.
                     * @return DefaultParameterConfs <p>Custom parameter array. if no parameter value is provided when invoking the command, the default value here will be used to replace it.<br>parameters do not support specifying both <code>DefaultParameters</code> and <code>DefaultParameterConfs</code>.<br>this parameter can be modified only when EnableParameter of the command is true. obtain the EnableParameter settings through the <a href="https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1">DescribeCommands (query command details)</a> api.<br>up to 20 custom parameters are allowed.</p>.
                     * 
                     */
                    std::vector<DefaultParameterConf> GetDefaultParameterConfs() const;

                    /**
                     * 设置<p>Custom parameter array. if no parameter value is provided when invoking the command, the default value here will be used to replace it.<br>parameters do not support specifying both <code>DefaultParameters</code> and <code>DefaultParameterConfs</code>.<br>this parameter can be modified only when EnableParameter of the command is true. obtain the EnableParameter settings through the <a href="https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1">DescribeCommands (query command details)</a> api.<br>up to 20 custom parameters are allowed.</p>.
                     * @param _defaultParameterConfs <p>Custom parameter array. if no parameter value is provided when invoking the command, the default value here will be used to replace it.<br>parameters do not support specifying both <code>DefaultParameters</code> and <code>DefaultParameterConfs</code>.<br>this parameter can be modified only when EnableParameter of the command is true. obtain the EnableParameter settings through the <a href="https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1">DescribeCommands (query command details)</a> api.<br>up to 20 custom parameters are allowed.</p>.
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
                     * 获取<p>The username to run commands in a CVM or Lighthouse instance.<br>using minimum permission to execute commands is the best practice for permission management. we recommend running cloud assistant commands as a regular user identity.</p>.
                     * @return Username <p>The username to run commands in a CVM or Lighthouse instance.<br>using minimum permission to execute commands is the best practice for permission management. we recommend running cloud assistant commands as a regular user identity.</p>.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>The username to run commands in a CVM or Lighthouse instance.<br>using minimum permission to execute commands is the best practice for permission management. we recommend running cloud assistant commands as a regular user identity.</p>.
                     * @param _username <p>The username to run commands in a CVM or Lighthouse instance.<br>using minimum permission to execute commands is the best practice for permission management. we recommend running cloud assistant commands as a regular user identity.</p>.
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
                     * 获取<p>Specifies the cos bucket address for the uploaded log, which must start with https, such as https://BucketName-123454321.cos.ap-beijing.myqcloud.com.</p>.
                     * @return OutputCOSBucketUrl <p>Specifies the cos bucket address for the uploaded log, which must start with https, such as https://BucketName-123454321.cos.ap-beijing.myqcloud.com.</p>.
                     * 
                     */
                    std::string GetOutputCOSBucketUrl() const;

                    /**
                     * 设置<p>Specifies the cos bucket address for the uploaded log, which must start with https, such as https://BucketName-123454321.cos.ap-beijing.myqcloud.com.</p>.
                     * @param _outputCOSBucketUrl <p>Specifies the cos bucket address for the uploaded log, which must start with https, such as https://BucketName-123454321.cos.ap-beijing.myqcloud.com.</p>.
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
                     * 获取<P>Specify the directory for logs in the cos bucket. the directory naming has the following rules:</p><ol><li>use a combination of numbers, chinese and english, and visible characters, with a maximum length of 60.</li><li>use / to split the path and quickly create subdirectories.</li><li>consecutive / are not allowed; cannot start with /; cannot use .. as the folder name.</li></ol>.
                     * @return OutputCOSKeyPrefix <P>Specify the directory for logs in the cos bucket. the directory naming has the following rules:</p><ol><li>use a combination of numbers, chinese and english, and visible characters, with a maximum length of 60.</li><li>use / to split the path and quickly create subdirectories.</li><li>consecutive / are not allowed; cannot start with /; cannot use .. as the folder name.</li></ol>.
                     * 
                     */
                    std::string GetOutputCOSKeyPrefix() const;

                    /**
                     * 设置<P>Specify the directory for logs in the cos bucket. the directory naming has the following rules:</p><ol><li>use a combination of numbers, chinese and english, and visible characters, with a maximum length of 60.</li><li>use / to split the path and quickly create subdirectories.</li><li>consecutive / are not allowed; cannot start with /; cannot use .. as the folder name.</li></ol>.
                     * @param _outputCOSKeyPrefix <P>Specify the directory for logs in the cos bucket. the directory naming has the following rules:</p><ol><li>use a combination of numbers, chinese and english, and visible characters, with a maximum length of 60.</li><li>use / to split the path and quickly create subdirectories.</li><li>consecutive / are not allowed; cannot start with /; cannot use .. as the folder name.</li></ol>.
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
                     * <p>Command ID. call the <a href="https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1">DescribeCommands</a> api to query command details.</p>.
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * <p>Command name. name only supports chinese, english, digits, underscore, separator "-", and decimal point. the maximum length cannot exceed 60 bytes.</p>.
                     */
                    std::string m_commandName;
                    bool m_commandNameHasBeenSet;

                    /**
                     * <P>Command description. no more than 120 characters.</p>.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>The Base64-encoded command content, length cannot exceed 64KB.</p>.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>Command type. currently supports SHELL, POWERSHELL, BAT.</p>.
                     */
                    std::string m_commandType;
                    bool m_commandTypeHasBeenSet;

                    /**
                     * <P>Command execution path.</p>.
                     */
                    std::string m_workingDirectory;
                    bool m_workingDirectoryHasBeenSet;

                    /**
                     * <p>Command timeout time.</p><p>value range: [1, 86400].</p><p>unit: seconds.</p><p>default value: 60.</p><p>when specifying the OutputCOSBucketUrl parameter, the timeout period includes the time taken to upload command output to COS.</p>.
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>The default value of custom parameters when the custom parameter feature is enabled. the field type is a json-encoded string, for example: {"varA": "222"}.<br>parameters must not be specified simultaneously for <code>DefaultParameters</code> and <code>DefaultParameterConfs</code>.<br>a comprehensive modification is applied, meaning all new default values must be provided when modifying.<br>this parameter can be modified only when EnableParameter of the command is true. obtain the EnableParameter settings of the command through the <a href="https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1">DescribeCommands (query command details)</a> api.<br>the key is the custom parameter name, and the value is the default value of this parameter. both key and value are string-type.<br>there is an upper limit of 20 custom parameters.<br>custom parameter names must meet the following requirements: the upper limit of character quantity is 64, and the optional range is [a-zA-Z0-9-_].</p>.
                     */
                    std::string m_defaultParameters;
                    bool m_defaultParametersHasBeenSet;

                    /**
                     * <p>Custom parameter array. if no parameter value is provided when invoking the command, the default value here will be used to replace it.<br>parameters do not support specifying both <code>DefaultParameters</code> and <code>DefaultParameterConfs</code>.<br>this parameter can be modified only when EnableParameter of the command is true. obtain the EnableParameter settings through the <a href="https://www.tencentcloud.comom/document/api/1340/52681?from_cn_redirect=1">DescribeCommands (query command details)</a> api.<br>up to 20 custom parameters are allowed.</p>.
                     */
                    std::vector<DefaultParameterConf> m_defaultParameterConfs;
                    bool m_defaultParameterConfsHasBeenSet;

                    /**
                     * <p>The username to run commands in a CVM or Lighthouse instance.<br>using minimum permission to execute commands is the best practice for permission management. we recommend running cloud assistant commands as a regular user identity.</p>.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>Specifies the cos bucket address for the uploaded log, which must start with https, such as https://BucketName-123454321.cos.ap-beijing.myqcloud.com.</p>.
                     */
                    std::string m_outputCOSBucketUrl;
                    bool m_outputCOSBucketUrlHasBeenSet;

                    /**
                     * <P>Specify the directory for logs in the cos bucket. the directory naming has the following rules:</p><ol><li>use a combination of numbers, chinese and english, and visible characters, with a maximum length of 60.</li><li>use / to split the path and quickly create subdirectories.</li><li>consecutive / are not allowed; cannot start with /; cannot use .. as the folder name.</li></ol>.
                     */
                    std::string m_outputCOSKeyPrefix;
                    bool m_outputCOSKeyPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_MODIFYCOMMANDREQUEST_H_
