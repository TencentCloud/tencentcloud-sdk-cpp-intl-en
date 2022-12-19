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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_EXTRACTRULEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_EXTRACTRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/KeyRegexInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Log extraction rule
                */
                class ExtractRuleInfo : public AbstractModel
                {
                public:
                    ExtractRuleInfo();
                    ~ExtractRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time field key name. `time_key` and `time_format` must appear in pairs
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TimeKey Time field key name. `time_key` and `time_format` must appear in pairs
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置Time field key name. `time_key` and `time_format` must appear in pairs
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param TimeKey Time field key name. `time_key` and `time_format` must appear in pairs
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTimeKey(const std::string& _timeKey);

                    /**
                     * 判断参数 TimeKey 是否已赋值
                     * @return TimeKey 是否已赋值
                     */
                    bool TimeKeyHasBeenSet() const;

                    /**
                     * 获取Time field format. For more information, please see the output parameters of the time format description of the `strftime` function in C language
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TimeFormat Time field format. For more information, please see the output parameters of the time format description of the `strftime` function in C language
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置Time field format. For more information, please see the output parameters of the time format description of the `strftime` function in C language
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param TimeFormat Time field format. For more information, please see the output parameters of the time format description of the `strftime` function in C language
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     */
                    bool TimeFormatHasBeenSet() const;

                    /**
                     * 获取Delimiter for delimited log, which is valid only if `log_type` is `delimiter_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Delimiter Delimiter for delimited log, which is valid only if `log_type` is `delimiter_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置Delimiter for delimited log, which is valid only if `log_type` is `delimiter_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Delimiter Delimiter for delimited log, which is valid only if `log_type` is `delimiter_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDelimiter(const std::string& _delimiter);

                    /**
                     * 判断参数 Delimiter 是否已赋值
                     * @return Delimiter 是否已赋值
                     */
                    bool DelimiterHasBeenSet() const;

                    /**
                     * 获取Full log matching rule, which is valid only if `log_type` is `fullregex_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return LogRegex Full log matching rule, which is valid only if `log_type` is `fullregex_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetLogRegex() const;

                    /**
                     * 设置Full log matching rule, which is valid only if `log_type` is `fullregex_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param LogRegex Full log matching rule, which is valid only if `log_type` is `fullregex_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLogRegex(const std::string& _logRegex);

                    /**
                     * 判断参数 LogRegex 是否已赋值
                     * @return LogRegex 是否已赋值
                     */
                    bool LogRegexHasBeenSet() const;

                    /**
                     * 获取First-Line matching rule, which is valid only if `log_type` is `multiline_log` or `fullregex_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return BeginRegex First-Line matching rule, which is valid only if `log_type` is `multiline_log` or `fullregex_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetBeginRegex() const;

                    /**
                     * 设置First-Line matching rule, which is valid only if `log_type` is `multiline_log` or `fullregex_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param BeginRegex First-Line matching rule, which is valid only if `log_type` is `multiline_log` or `fullregex_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetBeginRegex(const std::string& _beginRegex);

                    /**
                     * 判断参数 BeginRegex 是否已赋值
                     * @return BeginRegex 是否已赋值
                     */
                    bool BeginRegexHasBeenSet() const;

                    /**
                     * 获取Key name of each extracted field. An empty key indicates to discard the field. This parameter is valid only if `log_type` is `delimiter_log`. `json_log` logs use the key of JSON itself
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Keys Key name of each extracted field. An empty key indicates to discard the field. This parameter is valid only if `log_type` is `delimiter_log`. `json_log` logs use the key of JSON itself
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置Key name of each extracted field. An empty key indicates to discard the field. This parameter is valid only if `log_type` is `delimiter_log`. `json_log` logs use the key of JSON itself
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Keys Key name of each extracted field. An empty key indicates to discard the field. This parameter is valid only if `log_type` is `delimiter_log`. `json_log` logs use the key of JSON itself
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetKeys(const std::vector<std::string>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取Log keys to be filtered and the corresponding regex
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return FilterKeyRegex Log keys to be filtered and the corresponding regex
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<KeyRegexInfo> GetFilterKeyRegex() const;

                    /**
                     * 设置Log keys to be filtered and the corresponding regex
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param FilterKeyRegex Log keys to be filtered and the corresponding regex
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetFilterKeyRegex(const std::vector<KeyRegexInfo>& _filterKeyRegex);

                    /**
                     * 判断参数 FilterKeyRegex 是否已赋值
                     * @return FilterKeyRegex 是否已赋值
                     */
                    bool FilterKeyRegexHasBeenSet() const;

                    /**
                     * 获取Whether to upload the logs that failed to be parsed. Valid values: `true`: yes; `false`: no
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return UnMatchUpLoadSwitch Whether to upload the logs that failed to be parsed. Valid values: `true`: yes; `false`: no
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetUnMatchUpLoadSwitch() const;

                    /**
                     * 设置Whether to upload the logs that failed to be parsed. Valid values: `true`: yes; `false`: no
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param UnMatchUpLoadSwitch Whether to upload the logs that failed to be parsed. Valid values: `true`: yes; `false`: no
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetUnMatchUpLoadSwitch(const bool& _unMatchUpLoadSwitch);

                    /**
                     * 判断参数 UnMatchUpLoadSwitch 是否已赋值
                     * @return UnMatchUpLoadSwitch 是否已赋值
                     */
                    bool UnMatchUpLoadSwitchHasBeenSet() const;

                    /**
                     * 获取Unmatched log key
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return UnMatchLogKey Unmatched log key
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetUnMatchLogKey() const;

                    /**
                     * 设置Unmatched log key
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param UnMatchLogKey Unmatched log key
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetUnMatchLogKey(const std::string& _unMatchLogKey);

                    /**
                     * 判断参数 UnMatchLogKey 是否已赋值
                     * @return UnMatchLogKey 是否已赋值
                     */
                    bool UnMatchLogKeyHasBeenSet() const;

                    /**
                     * 获取Size of the data to be rewound in incremental collection mode. Default value: -1 (full collection)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Backtracking Size of the data to be rewound in incremental collection mode. Default value: -1 (full collection)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetBacktracking() const;

                    /**
                     * 设置Size of the data to be rewound in incremental collection mode. Default value: -1 (full collection)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Backtracking Size of the data to be rewound in incremental collection mode. Default value: -1 (full collection)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetBacktracking(const int64_t& _backtracking);

                    /**
                     * 判断参数 Backtracking 是否已赋值
                     * @return Backtracking 是否已赋值
                     */
                    bool BacktrackingHasBeenSet() const;

                    /**
                     * 获取Whether to be encoded in GBK format. Valid values: `0` (No) and `1` (Yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsGBK Whether to be encoded in GBK format. Valid values: `0` (No) and `1` (Yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetIsGBK() const;

                    /**
                     * 设置Whether to be encoded in GBK format. Valid values: `0` (No) and `1` (Yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param IsGBK Whether to be encoded in GBK format. Valid values: `0` (No) and `1` (Yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsGBK(const int64_t& _isGBK);

                    /**
                     * 判断参数 IsGBK 是否已赋值
                     * @return IsGBK 是否已赋值
                     */
                    bool IsGBKHasBeenSet() const;

                    /**
                     * 获取Whether to be formatted as JSON (standard). Valid values: `0` (No) and `1` (Yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JsonStandard Whether to be formatted as JSON (standard). Valid values: `0` (No) and `1` (Yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetJsonStandard() const;

                    /**
                     * 设置Whether to be formatted as JSON (standard). Valid values: `0` (No) and `1` (Yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param JsonStandard Whether to be formatted as JSON (standard). Valid values: `0` (No) and `1` (Yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetJsonStandard(const int64_t& _jsonStandard);

                    /**
                     * 判断参数 JsonStandard 是否已赋值
                     * @return JsonStandard 是否已赋值
                     */
                    bool JsonStandardHasBeenSet() const;

                    /**
                     * 获取Syslog protocol. Valid values: `tcp`, `udp`.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Syslog protocol. Valid values: `tcp`, `udp`.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Syslog protocol. Valid values: `tcp`, `udp`.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Protocol Syslog protocol. Valid values: `tcp`, `udp`.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Listening address and port specified by the syslog collection. Format: [ip]:[port]. Example: 127.0.0.1:9000.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Address Listening address and port specified by the syslog collection. Format: [ip]:[port]. Example: 127.0.0.1:9000.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Listening address and port specified by the syslog collection. Format: [ip]:[port]. Example: 127.0.0.1:9000.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Address Listening address and port specified by the syslog collection. Format: [ip]:[port]. Example: 127.0.0.1:9000.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取`rfc3164`: Resolve logs by using the RFC 3164 protocol during the syslog collection.
`rfc5424`: Resolve logs by using the RFC 5424 protocol during the syslog collection.
`auto`: Automatically match either the RFC 3164 or RFC 5424 protocol.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParseProtocol `rfc3164`: Resolve logs by using the RFC 3164 protocol during the syslog collection.
`rfc5424`: Resolve logs by using the RFC 5424 protocol during the syslog collection.
`auto`: Automatically match either the RFC 3164 or RFC 5424 protocol.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetParseProtocol() const;

                    /**
                     * 设置`rfc3164`: Resolve logs by using the RFC 3164 protocol during the syslog collection.
`rfc5424`: Resolve logs by using the RFC 5424 protocol during the syslog collection.
`auto`: Automatically match either the RFC 3164 or RFC 5424 protocol.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ParseProtocol `rfc3164`: Resolve logs by using the RFC 3164 protocol during the syslog collection.
`rfc5424`: Resolve logs by using the RFC 5424 protocol during the syslog collection.
`auto`: Automatically match either the RFC 3164 or RFC 5424 protocol.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetParseProtocol(const std::string& _parseProtocol);

                    /**
                     * 判断参数 ParseProtocol 是否已赋值
                     * @return ParseProtocol 是否已赋值
                     */
                    bool ParseProtocolHasBeenSet() const;

                private:

                    /**
                     * Time field key name. `time_key` and `time_format` must appear in pairs
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * Time field format. For more information, please see the output parameters of the time format description of the `strftime` function in C language
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * Delimiter for delimited log, which is valid only if `log_type` is `delimiter_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * Full log matching rule, which is valid only if `log_type` is `fullregex_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_logRegex;
                    bool m_logRegexHasBeenSet;

                    /**
                     * First-Line matching rule, which is valid only if `log_type` is `multiline_log` or `fullregex_log`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_beginRegex;
                    bool m_beginRegexHasBeenSet;

                    /**
                     * Key name of each extracted field. An empty key indicates to discard the field. This parameter is valid only if `log_type` is `delimiter_log`. `json_log` logs use the key of JSON itself
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * Log keys to be filtered and the corresponding regex
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<KeyRegexInfo> m_filterKeyRegex;
                    bool m_filterKeyRegexHasBeenSet;

                    /**
                     * Whether to upload the logs that failed to be parsed. Valid values: `true`: yes; `false`: no
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_unMatchUpLoadSwitch;
                    bool m_unMatchUpLoadSwitchHasBeenSet;

                    /**
                     * Unmatched log key
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_unMatchLogKey;
                    bool m_unMatchLogKeyHasBeenSet;

                    /**
                     * Size of the data to be rewound in incremental collection mode. Default value: -1 (full collection)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_backtracking;
                    bool m_backtrackingHasBeenSet;

                    /**
                     * Whether to be encoded in GBK format. Valid values: `0` (No) and `1` (Yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isGBK;
                    bool m_isGBKHasBeenSet;

                    /**
                     * Whether to be formatted as JSON (standard). Valid values: `0` (No) and `1` (Yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_jsonStandard;
                    bool m_jsonStandardHasBeenSet;

                    /**
                     * Syslog protocol. Valid values: `tcp`, `udp`.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Listening address and port specified by the syslog collection. Format: [ip]:[port]. Example: 127.0.0.1:9000.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * `rfc3164`: Resolve logs by using the RFC 3164 protocol during the syslog collection.
`rfc5424`: Resolve logs by using the RFC 5424 protocol during the syslog collection.
`auto`: Automatically match either the RFC 3164 or RFC 5424 protocol.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_parseProtocol;
                    bool m_parseProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_EXTRACTRULEINFO_H_
