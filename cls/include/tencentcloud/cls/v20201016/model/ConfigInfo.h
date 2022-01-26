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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONFIGINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ExtractRuleInfo.h>
#include <tencentcloud/cls/v20201016/model/ExcludePathInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Collection rule configuration information
                */
                class ConfigInfo : public AbstractModel
                {
                public:
                    ConfigInfo();
                    ~ConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Collection rule configuration ID
                     * @return ConfigId Collection rule configuration ID
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置Collection rule configuration ID
                     * @param ConfigId Collection rule configuration ID
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取Log formatting method
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return LogFormat Log formatting method
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetLogFormat() const;

                    /**
                     * 设置Log formatting method
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param LogFormat Log formatting method
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLogFormat(const std::string& _logFormat);

                    /**
                     * 判断参数 LogFormat 是否已赋值
                     * @return LogFormat 是否已赋值
                     */
                    bool LogFormatHasBeenSet() const;

                    /**
                     * 获取Log collection path
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Path Log collection path
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Log collection path
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Path Log collection path
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Type of the log to be collected. Valid values: `json_log`: log in JSON format; `delimiter_log`: log in delimited format; `minimalist_log`: minimalist log; `multiline_log`: log in multi-line format; `fullregex_log`: log in full regex format. Default value: `minimalist_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return LogType Type of the log to be collected. Valid values: `json_log`: log in JSON format; `delimiter_log`: log in delimited format; `minimalist_log`: minimalist log; `multiline_log`: log in multi-line format; `fullregex_log`: log in full regex format. Default value: `minimalist_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Type of the log to be collected. Valid values: `json_log`: log in JSON format; `delimiter_log`: log in delimited format; `minimalist_log`: minimalist log; `multiline_log`: log in multi-line format; `fullregex_log`: log in full regex format. Default value: `minimalist_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param LogType Type of the log to be collected. Valid values: `json_log`: log in JSON format; `delimiter_log`: log in delimited format; `minimalist_log`: minimalist log; `multiline_log`: log in multi-line format; `fullregex_log`: log in full regex format. Default value: `minimalist_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Extraction rule. If `ExtractRule` is set, `LogType` must be set
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ExtractRule Extraction rule. If `ExtractRule` is set, `LogType` must be set
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ExtractRuleInfo GetExtractRule() const;

                    /**
                     * 设置Extraction rule. If `ExtractRule` is set, `LogType` must be set
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ExtractRule Extraction rule. If `ExtractRule` is set, `LogType` must be set
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetExtractRule(const ExtractRuleInfo& _extractRule);

                    /**
                     * 判断参数 ExtractRule 是否已赋值
                     * @return ExtractRule 是否已赋值
                     */
                    bool ExtractRuleHasBeenSet() const;

                    /**
                     * 获取Collection path blocklist
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ExcludePaths Collection path blocklist
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ExcludePathInfo> GetExcludePaths() const;

                    /**
                     * 设置Collection path blocklist
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ExcludePaths Collection path blocklist
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetExcludePaths(const std::vector<ExcludePathInfo>& _excludePaths);

                    /**
                     * 判断参数 ExcludePaths 是否已赋值
                     * @return ExcludePaths 是否已赋值
                     */
                    bool ExcludePathsHasBeenSet() const;

                    /**
                     * 获取Log topic ID (TopicId) of collection configuration
                     * @return Output Log topic ID (TopicId) of collection configuration
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置Log topic ID (TopicId) of collection configuration
                     * @param Output Log topic ID (TopicId) of collection configuration
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Update time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param UpdateTime Update time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Custom parsing string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return UserDefineRule Custom parsing string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetUserDefineRule() const;

                    /**
                     * 设置Custom parsing string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param UserDefineRule Custom parsing string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetUserDefineRule(const std::string& _userDefineRule);

                    /**
                     * 判断参数 UserDefineRule 是否已赋值
                     * @return UserDefineRule 是否已赋值
                     */
                    bool UserDefineRuleHasBeenSet() const;

                private:

                    /**
                     * Collection rule configuration ID
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * Log formatting method
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_logFormat;
                    bool m_logFormatHasBeenSet;

                    /**
                     * Log collection path
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Type of the log to be collected. Valid values: `json_log`: log in JSON format; `delimiter_log`: log in delimited format; `minimalist_log`: minimalist log; `multiline_log`: log in multi-line format; `fullregex_log`: log in full regex format. Default value: `minimalist_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Extraction rule. If `ExtractRule` is set, `LogType` must be set
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ExtractRuleInfo m_extractRule;
                    bool m_extractRuleHasBeenSet;

                    /**
                     * Collection path blocklist
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ExcludePathInfo> m_excludePaths;
                    bool m_excludePathsHasBeenSet;

                    /**
                     * Log topic ID (TopicId) of collection configuration
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Update time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Custom parsing string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_userDefineRule;
                    bool m_userDefineRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONFIGINFO_H_
