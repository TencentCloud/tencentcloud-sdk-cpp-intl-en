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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_CREATELOGCONFIGREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_CREATELOGCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/LogConfigExtractRule.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * CreateLogConfig request structure.
                */
                class CreateLogConfigRequest : public AbstractModel
                {
                public:
                    CreateLogConfigRequest();
                    ~CreateLogConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Environment ID
                     * @return EnvironmentId Environment ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment ID
                     * @param _environmentId Environment ID
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Configuration name
                     * @return Name Configuration name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Configuration name
                     * @param _name Configuration name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Collection type. Values: `container_stdout` (standard); `container_file` (file)
                     * @return InputType Collection type. Values: `container_stdout` (standard); `container_file` (file)
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置Collection type. Values: `container_stdout` (standard); `container_file` (file)
                     * @param _inputType Collection type. Values: `container_stdout` (standard); `container_file` (file)
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取Application ID
                     * @return ApplicationId Application ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID
                     * @param _applicationId Application ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Logset ID
                     * @return LogsetId Logset ID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID
                     * @param _logsetId Logset ID
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param _topicId Log topic ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Log withdrawal mode. Values: `minimalist_log` (full text in a single line); `multiline_log` (full text in multiple lines); `json_log` (JSON); `fullregex_log` (regex in a single line); `multiline_fullregex_log` (regex in multiple lines)
                     * @return LogType Log withdrawal mode. Values: `minimalist_log` (full text in a single line); `multiline_log` (full text in multiple lines); `json_log` (JSON); `fullregex_log` (regex in a single line); `multiline_fullregex_log` (regex in multiple lines)
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Log withdrawal mode. Values: `minimalist_log` (full text in a single line); `multiline_log` (full text in multiple lines); `json_log` (JSON); `fullregex_log` (regex in a single line); `multiline_fullregex_log` (regex in multiple lines)
                     * @param _logType Log withdrawal mode. Values: `minimalist_log` (full text in a single line); `multiline_log` (full text in multiple lines); `json_log` (JSON); `fullregex_log` (regex in a single line); `multiline_fullregex_log` (regex in multiple lines)
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取The first line regex. It’s valid when `LogType` is `multiline_log`.
                     * @return BeginningRegex The first line regex. It’s valid when `LogType` is `multiline_log`.
                     * 
                     */
                    std::string GetBeginningRegex() const;

                    /**
                     * 设置The first line regex. It’s valid when `LogType` is `multiline_log`.
                     * @param _beginningRegex The first line regex. It’s valid when `LogType` is `multiline_log`.
                     * 
                     */
                    void SetBeginningRegex(const std::string& _beginningRegex);

                    /**
                     * 判断参数 BeginningRegex 是否已赋值
                     * @return BeginningRegex 是否已赋值
                     * 
                     */
                    bool BeginningRegexHasBeenSet() const;

                    /**
                     * 获取Directory of files to collect. It’s valid when `InputType` is `container_file`.
                     * @return LogPath Directory of files to collect. It’s valid when `InputType` is `container_file`.
                     * 
                     */
                    std::string GetLogPath() const;

                    /**
                     * 设置Directory of files to collect. It’s valid when `InputType` is `container_file`.
                     * @param _logPath Directory of files to collect. It’s valid when `InputType` is `container_file`.
                     * 
                     */
                    void SetLogPath(const std::string& _logPath);

                    /**
                     * 判断参数 LogPath 是否已赋值
                     * @return LogPath 是否已赋值
                     * 
                     */
                    bool LogPathHasBeenSet() const;

                    /**
                     * 获取Name pattern of files to collect. It’s valid when `InputType` is `container_file`.
                     * @return FilePattern Name pattern of files to collect. It’s valid when `InputType` is `container_file`.
                     * 
                     */
                    std::string GetFilePattern() const;

                    /**
                     * 设置Name pattern of files to collect. It’s valid when `InputType` is `container_file`.
                     * @param _filePattern Name pattern of files to collect. It’s valid when `InputType` is `container_file`.
                     * 
                     */
                    void SetFilePattern(const std::string& _filePattern);

                    /**
                     * 判断参数 FilePattern 是否已赋值
                     * @return FilePattern 是否已赋值
                     * 
                     */
                    bool FilePatternHasBeenSet() const;

                    /**
                     * 获取Export
                     * @return ExtractRule Export
                     * 
                     */
                    LogConfigExtractRule GetExtractRule() const;

                    /**
                     * 设置Export
                     * @param _extractRule Export
                     * 
                     */
                    void SetExtractRule(const LogConfigExtractRule& _extractRule);

                    /**
                     * 判断参数 ExtractRule 是否已赋值
                     * @return ExtractRule 是否已赋值
                     * 
                     */
                    bool ExtractRuleHasBeenSet() const;

                private:

                    /**
                     * Environment ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Configuration name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Collection type. Values: `container_stdout` (standard); `container_file` (file)
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * Application ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Logset ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Log withdrawal mode. Values: `minimalist_log` (full text in a single line); `multiline_log` (full text in multiple lines); `json_log` (JSON); `fullregex_log` (regex in a single line); `multiline_fullregex_log` (regex in multiple lines)
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * The first line regex. It’s valid when `LogType` is `multiline_log`.
                     */
                    std::string m_beginningRegex;
                    bool m_beginningRegexHasBeenSet;

                    /**
                     * Directory of files to collect. It’s valid when `InputType` is `container_file`.
                     */
                    std::string m_logPath;
                    bool m_logPathHasBeenSet;

                    /**
                     * Name pattern of files to collect. It’s valid when `InputType` is `container_file`.
                     */
                    std::string m_filePattern;
                    bool m_filePatternHasBeenSet;

                    /**
                     * Export
                     */
                    LogConfigExtractRule m_extractRule;
                    bool m_extractRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_CREATELOGCONFIGREQUEST_H_
