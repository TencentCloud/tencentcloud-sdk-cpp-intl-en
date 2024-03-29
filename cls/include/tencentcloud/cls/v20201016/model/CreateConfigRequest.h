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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONFIGREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateConfig request structure.
                */
                class CreateConfigRequest : public AbstractModel
                {
                public:
                    CreateConfigRequest();
                    ~CreateConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Collection configuration name
                     * @return Name Collection configuration name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Collection configuration name
                     * @param _name Collection configuration name
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
                     * 获取Log topic ID (TopicId) of collection configuration
                     * @return Output Log topic ID (TopicId) of collection configuration
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置Log topic ID (TopicId) of collection configuration
                     * @param _output Log topic ID (TopicId) of collection configuration
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Log collection path containing the filename
                     * @return Path Log collection path containing the filename
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Log collection path containing the filename
                     * @param _path Log collection path containing the filename
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Type of the log to be collected. Valid values: `json_log`: log in JSON format; `delimiter_log`: log in delimited format; `minimalist_log`: minimalist log; `multiline_log`: log in multi-line format; `fullregex_log`: log in full regex format. Default value: `minimalist_log`
                     * @return LogType Type of the log to be collected. Valid values: `json_log`: log in JSON format; `delimiter_log`: log in delimited format; `minimalist_log`: minimalist log; `multiline_log`: log in multi-line format; `fullregex_log`: log in full regex format. Default value: `minimalist_log`
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Type of the log to be collected. Valid values: `json_log`: log in JSON format; `delimiter_log`: log in delimited format; `minimalist_log`: minimalist log; `multiline_log`: log in multi-line format; `fullregex_log`: log in full regex format. Default value: `minimalist_log`
                     * @param _logType Type of the log to be collected. Valid values: `json_log`: log in JSON format; `delimiter_log`: log in delimited format; `minimalist_log`: minimalist log; `multiline_log`: log in multi-line format; `fullregex_log`: log in full regex format. Default value: `minimalist_log`
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
                     * 获取Extraction rule. If `ExtractRule` is set, `LogType` must be set.
                     * @return ExtractRule Extraction rule. If `ExtractRule` is set, `LogType` must be set.
                     * 
                     */
                    ExtractRuleInfo GetExtractRule() const;

                    /**
                     * 设置Extraction rule. If `ExtractRule` is set, `LogType` must be set.
                     * @param _extractRule Extraction rule. If `ExtractRule` is set, `LogType` must be set.
                     * 
                     */
                    void SetExtractRule(const ExtractRuleInfo& _extractRule);

                    /**
                     * 判断参数 ExtractRule 是否已赋值
                     * @return ExtractRule 是否已赋值
                     * 
                     */
                    bool ExtractRuleHasBeenSet() const;

                    /**
                     * 获取Collection path blocklist
                     * @return ExcludePaths Collection path blocklist
                     * 
                     */
                    std::vector<ExcludePathInfo> GetExcludePaths() const;

                    /**
                     * 设置Collection path blocklist
                     * @param _excludePaths Collection path blocklist
                     * 
                     */
                    void SetExcludePaths(const std::vector<ExcludePathInfo>& _excludePaths);

                    /**
                     * 判断参数 ExcludePaths 是否已赋值
                     * @return ExcludePaths 是否已赋值
                     * 
                     */
                    bool ExcludePathsHasBeenSet() const;

                    /**
                     * 获取Custom collection rule, which is a serialized JSON string
                     * @return UserDefineRule Custom collection rule, which is a serialized JSON string
                     * 
                     */
                    std::string GetUserDefineRule() const;

                    /**
                     * 设置Custom collection rule, which is a serialized JSON string
                     * @param _userDefineRule Custom collection rule, which is a serialized JSON string
                     * 
                     */
                    void SetUserDefineRule(const std::string& _userDefineRule);

                    /**
                     * 判断参数 UserDefineRule 是否已赋值
                     * @return UserDefineRule 是否已赋值
                     * 
                     */
                    bool UserDefineRuleHasBeenSet() const;

                    /**
                     * 获取Advanced collection configuration
                     * @return AdvancedConfig Advanced collection configuration
                     * 
                     */
                    std::string GetAdvancedConfig() const;

                    /**
                     * 设置Advanced collection configuration
                     * @param _advancedConfig Advanced collection configuration
                     * 
                     */
                    void SetAdvancedConfig(const std::string& _advancedConfig);

                    /**
                     * 判断参数 AdvancedConfig 是否已赋值
                     * @return AdvancedConfig 是否已赋值
                     * 
                     */
                    bool AdvancedConfigHasBeenSet() const;

                private:

                    /**
                     * Collection configuration name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Log topic ID (TopicId) of collection configuration
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Log collection path containing the filename
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Type of the log to be collected. Valid values: `json_log`: log in JSON format; `delimiter_log`: log in delimited format; `minimalist_log`: minimalist log; `multiline_log`: log in multi-line format; `fullregex_log`: log in full regex format. Default value: `minimalist_log`
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Extraction rule. If `ExtractRule` is set, `LogType` must be set.
                     */
                    ExtractRuleInfo m_extractRule;
                    bool m_extractRuleHasBeenSet;

                    /**
                     * Collection path blocklist
                     */
                    std::vector<ExcludePathInfo> m_excludePaths;
                    bool m_excludePathsHasBeenSet;

                    /**
                     * Custom collection rule, which is a serialized JSON string
                     */
                    std::string m_userDefineRule;
                    bool m_userDefineRuleHasBeenSet;

                    /**
                     * Advanced collection configuration
                     */
                    std::string m_advancedConfig;
                    bool m_advancedConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONFIGREQUEST_H_
