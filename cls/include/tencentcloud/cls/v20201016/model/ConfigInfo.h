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
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置Collection rule configuration ID
                     * @param _configId Collection rule configuration ID
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取Collection rule configuration name
                     * @return Name Collection rule configuration name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Collection rule configuration name
                     * @param _name Collection rule configuration name
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
                     * 获取Log formatting method
                     * @return LogFormat Log formatting method
                     * 
                     */
                    std::string GetLogFormat() const;

                    /**
                     * 设置Log formatting method
                     * @param _logFormat Log formatting method
                     * 
                     */
                    void SetLogFormat(const std::string& _logFormat);

                    /**
                     * 判断参数 LogFormat 是否已赋值
                     * @return LogFormat 是否已赋值
                     * 
                     */
                    bool LogFormatHasBeenSet() const;

                    /**
                     * 获取log collection path
                     * @return Path log collection path
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置log collection path
                     * @param _path log collection path
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
                     * 获取Type of log collected.
-json_log represents JSON file logs (see [Use JSON extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17419?from_cn_redirect=1)).
-delimiter_log represents: delimiter-file logs (see [use delimiter extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17420?from_cn_redirect=1)).
-minimalist_log represents single-line full-text file logs (see [use single-line full-text extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17421?from_cn_redirect=1)).
-fullregex_log represents single-line full regex-file logs (see [Collect logs using single-line full regex extraction mode](https://www.tencentcloud.com/document/product/614/52365?from_cn_redirect=1)).
-multiline_log represents multi-line full-text file logs (see [use multi-line full-text extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17422?from_cn_redirect=1)).
-multiline_fullregex_log represents: Multiline full regex-file log (see [Collect logs using multiline-full regex extraction mode](https://www.tencentcloud.com/document/product/614/52366?from_cn_redirect=1));
-user_define_log represents: combined parsing mode (suitable for logs with multiple nested formats, see [Collecting logs using combined parsing extraction mode](https://www.tencentcloud.com/document/product/614/61310?from_cn_redirect=1));
-service_syslog represents syslog collection (see [Collect Syslog](https://www.tencentcloud.com/document/product/614/81454?from_cn_redirect=1)).
- windows_event_log: Windows event log (see [Collecting Windows Event Logs](https://www.tencentcloud.com/document/product/614/96678?from_cn_redirect=1)).
                     * @return LogType Type of log collected.
-json_log represents JSON file logs (see [Use JSON extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17419?from_cn_redirect=1)).
-delimiter_log represents: delimiter-file logs (see [use delimiter extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17420?from_cn_redirect=1)).
-minimalist_log represents single-line full-text file logs (see [use single-line full-text extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17421?from_cn_redirect=1)).
-fullregex_log represents single-line full regex-file logs (see [Collect logs using single-line full regex extraction mode](https://www.tencentcloud.com/document/product/614/52365?from_cn_redirect=1)).
-multiline_log represents multi-line full-text file logs (see [use multi-line full-text extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17422?from_cn_redirect=1)).
-multiline_fullregex_log represents: Multiline full regex-file log (see [Collect logs using multiline-full regex extraction mode](https://www.tencentcloud.com/document/product/614/52366?from_cn_redirect=1));
-user_define_log represents: combined parsing mode (suitable for logs with multiple nested formats, see [Collecting logs using combined parsing extraction mode](https://www.tencentcloud.com/document/product/614/61310?from_cn_redirect=1));
-service_syslog represents syslog collection (see [Collect Syslog](https://www.tencentcloud.com/document/product/614/81454?from_cn_redirect=1)).
- windows_event_log: Windows event log (see [Collecting Windows Event Logs](https://www.tencentcloud.com/document/product/614/96678?from_cn_redirect=1)).
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Type of log collected.
-json_log represents JSON file logs (see [Use JSON extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17419?from_cn_redirect=1)).
-delimiter_log represents: delimiter-file logs (see [use delimiter extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17420?from_cn_redirect=1)).
-minimalist_log represents single-line full-text file logs (see [use single-line full-text extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17421?from_cn_redirect=1)).
-fullregex_log represents single-line full regex-file logs (see [Collect logs using single-line full regex extraction mode](https://www.tencentcloud.com/document/product/614/52365?from_cn_redirect=1)).
-multiline_log represents multi-line full-text file logs (see [use multi-line full-text extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17422?from_cn_redirect=1)).
-multiline_fullregex_log represents: Multiline full regex-file log (see [Collect logs using multiline-full regex extraction mode](https://www.tencentcloud.com/document/product/614/52366?from_cn_redirect=1));
-user_define_log represents: combined parsing mode (suitable for logs with multiple nested formats, see [Collecting logs using combined parsing extraction mode](https://www.tencentcloud.com/document/product/614/61310?from_cn_redirect=1));
-service_syslog represents syslog collection (see [Collect Syslog](https://www.tencentcloud.com/document/product/614/81454?from_cn_redirect=1)).
- windows_event_log: Windows event log (see [Collecting Windows Event Logs](https://www.tencentcloud.com/document/product/614/96678?from_cn_redirect=1)).
                     * @param _logType Type of log collected.
-json_log represents JSON file logs (see [Use JSON extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17419?from_cn_redirect=1)).
-delimiter_log represents: delimiter-file logs (see [use delimiter extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17420?from_cn_redirect=1)).
-minimalist_log represents single-line full-text file logs (see [use single-line full-text extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17421?from_cn_redirect=1)).
-fullregex_log represents single-line full regex-file logs (see [Collect logs using single-line full regex extraction mode](https://www.tencentcloud.com/document/product/614/52365?from_cn_redirect=1)).
-multiline_log represents multi-line full-text file logs (see [use multi-line full-text extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17422?from_cn_redirect=1)).
-multiline_fullregex_log represents: Multiline full regex-file log (see [Collect logs using multiline-full regex extraction mode](https://www.tencentcloud.com/document/product/614/52366?from_cn_redirect=1));
-user_define_log represents: combined parsing mode (suitable for logs with multiple nested formats, see [Collecting logs using combined parsing extraction mode](https://www.tencentcloud.com/document/product/614/61310?from_cn_redirect=1));
-service_syslog represents syslog collection (see [Collect Syslog](https://www.tencentcloud.com/document/product/614/81454?from_cn_redirect=1)).
- windows_event_log: Windows event log (see [Collecting Windows Event Logs](https://www.tencentcloud.com/document/product/614/96678?from_cn_redirect=1)).
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
                     * 获取Extraction rule. If ExtractRule is set, then LogType must be set.
                     * @return ExtractRule Extraction rule. If ExtractRule is set, then LogType must be set.
                     * 
                     */
                    ExtractRuleInfo GetExtractRule() const;

                    /**
                     * 设置Extraction rule. If ExtractRule is set, then LogType must be set.
                     * @param _extractRule Extraction rule. If ExtractRule is set, then LogType must be set.
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
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ExcludePaths Collection path blocklist
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ExcludePathInfo> GetExcludePaths() const;

                    /**
                     * 设置Collection path blocklist
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _excludePaths Collection path blocklist
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Update time
-Time format: yyyy-MM-dd HH:mm:ss
                     * @return UpdateTime Update time
-Time format: yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
-Time format: yyyy-MM-dd HH:mm:ss
                     * @param _updateTime Update time
-Time format: yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Creation time.
-Time format: yyyy-MM-dd HH:mm:ss
                     * @return CreateTime Creation time.
-Time format: yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
-Time format: yyyy-MM-dd HH:mm:ss
                     * @param _createTime Creation time.
-Time format: yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Custom parsing string. For more information, see [Collecting logs using combined parsing extraction mode](https://www.tencentcloud.com/document/product/614/61310?from_cn_redirect=1).
                     * @return UserDefineRule Custom parsing string. For more information, see [Collecting logs using combined parsing extraction mode](https://www.tencentcloud.com/document/product/614/61310?from_cn_redirect=1).
                     * 
                     */
                    std::string GetUserDefineRule() const;

                    /**
                     * 设置Custom parsing string. For more information, see [Collecting logs using combined parsing extraction mode](https://www.tencentcloud.com/document/product/614/61310?from_cn_redirect=1).
                     * @param _userDefineRule Custom parsing string. For more information, see [Collecting logs using combined parsing extraction mode](https://www.tencentcloud.com/document/product/614/61310?from_cn_redirect=1).
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
                     * 获取Advanced collection configuration. Json string, Key/Value is defined as follows:
-ClsAgentFileTimeout (timeout attribute). Value ranges from 0 to integer. 0 means no timeout.
-ClsAgentMaxDepth (maximum directory depth), value ranges from 0 to integer
-ClsAgentParseFailMerge (merge parsing failure logs). Value ranges from true to false.
Example:
`{\"ClsAgentFileTimeout\":0,\"ClsAgentMaxDepth\":10,\"ClsAgentParseFailMerge\":true}`

Default placeholder value in console: `{\"ClsAgentDefault\":0}`
                     * @return AdvancedConfig Advanced collection configuration. Json string, Key/Value is defined as follows:
-ClsAgentFileTimeout (timeout attribute). Value ranges from 0 to integer. 0 means no timeout.
-ClsAgentMaxDepth (maximum directory depth), value ranges from 0 to integer
-ClsAgentParseFailMerge (merge parsing failure logs). Value ranges from true to false.
Example:
`{\"ClsAgentFileTimeout\":0,\"ClsAgentMaxDepth\":10,\"ClsAgentParseFailMerge\":true}`

Default placeholder value in console: `{\"ClsAgentDefault\":0}`
                     * 
                     */
                    std::string GetAdvancedConfig() const;

                    /**
                     * 设置Advanced collection configuration. Json string, Key/Value is defined as follows:
-ClsAgentFileTimeout (timeout attribute). Value ranges from 0 to integer. 0 means no timeout.
-ClsAgentMaxDepth (maximum directory depth), value ranges from 0 to integer
-ClsAgentParseFailMerge (merge parsing failure logs). Value ranges from true to false.
Example:
`{\"ClsAgentFileTimeout\":0,\"ClsAgentMaxDepth\":10,\"ClsAgentParseFailMerge\":true}`

Default placeholder value in console: `{\"ClsAgentDefault\":0}`
                     * @param _advancedConfig Advanced collection configuration. Json string, Key/Value is defined as follows:
-ClsAgentFileTimeout (timeout attribute). Value ranges from 0 to integer. 0 means no timeout.
-ClsAgentMaxDepth (maximum directory depth), value ranges from 0 to integer
-ClsAgentParseFailMerge (merge parsing failure logs). Value ranges from true to false.
Example:
`{\"ClsAgentFileTimeout\":0,\"ClsAgentMaxDepth\":10,\"ClsAgentParseFailMerge\":true}`

Default placeholder value in console: `{\"ClsAgentDefault\":0}`
                     * 
                     */
                    void SetAdvancedConfig(const std::string& _advancedConfig);

                    /**
                     * 判断参数 AdvancedConfig 是否已赋值
                     * @return AdvancedConfig 是否已赋值
                     * 
                     */
                    bool AdvancedConfigHasBeenSet() const;

                    /**
                     * 获取Log input type (<span style="color:red; font-weight:bold">Note: required for Windows scenario and only supports file and windows_event event type</span>)
-file type collection
-windows event collection
-syslog: System log collection
                     * @return InputType Log input type (<span style="color:red; font-weight:bold">Note: required for Windows scenario and only supports file and windows_event event type</span>)
-file type collection
-windows event collection
-syslog: System log collection
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置Log input type (<span style="color:red; font-weight:bold">Note: required for Windows scenario and only supports file and windows_event event type</span>)
-file type collection
-windows event collection
-syslog: System log collection
                     * @param _inputType Log input type (<span style="color:red; font-weight:bold">Note: required for Windows scenario and only supports file and windows_event event type</span>)
-file type collection
-windows event collection
-syslog: System log collection
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                private:

                    /**
                     * Collection rule configuration ID
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * Collection rule configuration name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Log formatting method
                     */
                    std::string m_logFormat;
                    bool m_logFormatHasBeenSet;

                    /**
                     * log collection path
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Type of log collected.
-json_log represents JSON file logs (see [Use JSON extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17419?from_cn_redirect=1)).
-delimiter_log represents: delimiter-file logs (see [use delimiter extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17420?from_cn_redirect=1)).
-minimalist_log represents single-line full-text file logs (see [use single-line full-text extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17421?from_cn_redirect=1)).
-fullregex_log represents single-line full regex-file logs (see [Collect logs using single-line full regex extraction mode](https://www.tencentcloud.com/document/product/614/52365?from_cn_redirect=1)).
-multiline_log represents multi-line full-text file logs (see [use multi-line full-text extraction mode to collect logs](https://www.tencentcloud.com/document/product/614/17422?from_cn_redirect=1)).
-multiline_fullregex_log represents: Multiline full regex-file log (see [Collect logs using multiline-full regex extraction mode](https://www.tencentcloud.com/document/product/614/52366?from_cn_redirect=1));
-user_define_log represents: combined parsing mode (suitable for logs with multiple nested formats, see [Collecting logs using combined parsing extraction mode](https://www.tencentcloud.com/document/product/614/61310?from_cn_redirect=1));
-service_syslog represents syslog collection (see [Collect Syslog](https://www.tencentcloud.com/document/product/614/81454?from_cn_redirect=1)).
- windows_event_log: Windows event log (see [Collecting Windows Event Logs](https://www.tencentcloud.com/document/product/614/96678?from_cn_redirect=1)).
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Extraction rule. If ExtractRule is set, then LogType must be set.
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
-Time format: yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Creation time.
-Time format: yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Custom parsing string. For more information, see [Collecting logs using combined parsing extraction mode](https://www.tencentcloud.com/document/product/614/61310?from_cn_redirect=1).
                     */
                    std::string m_userDefineRule;
                    bool m_userDefineRuleHasBeenSet;

                    /**
                     * Advanced collection configuration. Json string, Key/Value is defined as follows:
-ClsAgentFileTimeout (timeout attribute). Value ranges from 0 to integer. 0 means no timeout.
-ClsAgentMaxDepth (maximum directory depth), value ranges from 0 to integer
-ClsAgentParseFailMerge (merge parsing failure logs). Value ranges from true to false.
Example:
`{\"ClsAgentFileTimeout\":0,\"ClsAgentMaxDepth\":10,\"ClsAgentParseFailMerge\":true}`

Default placeholder value in console: `{\"ClsAgentDefault\":0}`
                     */
                    std::string m_advancedConfig;
                    bool m_advancedConfigHasBeenSet;

                    /**
                     * Log input type (<span style="color:red; font-weight:bold">Note: required for Windows scenario and only supports file and windows_event event type</span>)
-file type collection
-windows event collection
-syslog: System log collection
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONFIGINFO_H_
