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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_LOGCONFIG_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_LOGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Log collection configuration
                */
                class LogConfig : public AbstractModel
                {
                public:
                    LogConfig();
                    ~LogConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name.
                     * @return Name Name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name.
                     * @param _name Name.
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
                     * 获取Logset ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LogsetId Logset ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _logsetId Logset ID
Note: This field may return `null`, indicating that no valid values can be obtained.
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
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TopicId Log topic ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _topicId Log topic ID
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Log withdrawal mode. Values: `minimalist_log` (full text in a single line); `multiline_log` (full text in multiple lines); `fullregex_log` (regex in a single line); `multiline_fullregex_log` (regex in multiple lines), `json_log` (JSON); 
                     * @return LogType Log withdrawal mode. Values: `minimalist_log` (full text in a single line); `multiline_log` (full text in multiple lines); `fullregex_log` (regex in a single line); `multiline_fullregex_log` (regex in multiple lines), `json_log` (JSON); 
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Log withdrawal mode. Values: `minimalist_log` (full text in a single line); `multiline_log` (full text in multiple lines); `fullregex_log` (regex in a single line); `multiline_fullregex_log` (regex in multiple lines), `json_log` (JSON); 
                     * @param _logType Log withdrawal mode. Values: `minimalist_log` (full text in a single line); `multiline_log` (full text in multiple lines); `fullregex_log` (regex in a single line); `multiline_fullregex_log` (regex in multiple lines), `json_log` (JSON); 
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
                     * 获取First line regex. It’s valid when `LogType` is `multiline_log` or `multiline_fullregex_log`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return BeginningRegex First line regex. It’s valid when `LogType` is `multiline_log` or `multiline_fullregex_log`.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetBeginningRegex() const;

                    /**
                     * 设置First line regex. It’s valid when `LogType` is `multiline_log` or `multiline_fullregex_log`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _beginningRegex First line regex. It’s valid when `LogType` is `multiline_log` or `multiline_fullregex_log`.
Note: This field may return `null`, indicating that no valid value was found.
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
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LogPath Directory of files to collect. It’s valid when `InputType` is `container_file`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogPath() const;

                    /**
                     * 设置Directory of files to collect. It’s valid when `InputType` is `container_file`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _logPath Directory of files to collect. It’s valid when `InputType` is `container_file`.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return FilePattern Name pattern of files to collect. It’s valid when `InputType` is `container_file`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFilePattern() const;

                    /**
                     * 设置Name pattern of files to collect. It’s valid when `InputType` is `container_file`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _filePattern Name pattern of files to collect. It’s valid when `InputType` is `container_file`.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CreateDate Creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置Creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _createDate Creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     * 
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取Update time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ModifyDate Update time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifyDate() const;

                    /**
                     * 设置Update time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _modifyDate Update time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifyDate(const std::string& _modifyDate);

                    /**
                     * 判断参数 ModifyDate 是否已赋值
                     * @return ModifyDate 是否已赋值
                     * 
                     */
                    bool ModifyDateHasBeenSet() const;

                    /**
                     * 获取Application ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ApplicationId Application ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _applicationId Application ID
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ApplicationName Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _applicationName Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取Export rules
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ExtractRule Export rules
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    LogConfigExtractRule GetExtractRule() const;

                    /**
                     * 设置Export rules
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _extractRule Export rules
Note: This field may return `null`, indicating that no valid value was found.
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
                     * Name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Collection type. Values: `container_stdout` (standard); `container_file` (file)
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * Logset ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Log topic ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Log withdrawal mode. Values: `minimalist_log` (full text in a single line); `multiline_log` (full text in multiple lines); `fullregex_log` (regex in a single line); `multiline_fullregex_log` (regex in multiple lines), `json_log` (JSON); 
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * First line regex. It’s valid when `LogType` is `multiline_log` or `multiline_fullregex_log`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_beginningRegex;
                    bool m_beginningRegexHasBeenSet;

                    /**
                     * Directory of files to collect. It’s valid when `InputType` is `container_file`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_logPath;
                    bool m_logPathHasBeenSet;

                    /**
                     * Name pattern of files to collect. It’s valid when `InputType` is `container_file`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_filePattern;
                    bool m_filePatternHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * Update time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyDate;
                    bool m_modifyDateHasBeenSet;

                    /**
                     * Application ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Export rules
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    LogConfigExtractRule m_extractRule;
                    bool m_extractRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_LOGCONFIG_H_
