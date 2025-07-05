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
#include <tencentcloud/cls/v20201016/model/MetaTagInfo.h>
#include <tencentcloud/cls/v20201016/model/EventLog.h>


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
                     * 获取Key name for the time field. TikeKey and TimeFormat must appear in pairsNote: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeKey Key name for the time field. TikeKey and TimeFormat must appear in pairsNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置Key name for the time field. TikeKey and TimeFormat must appear in pairsNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeKey Key name for the time field. TikeKey and TimeFormat must appear in pairsNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimeKey(const std::string& _timeKey);

                    /**
                     * 判断参数 TimeKey 是否已赋值
                     * @return TimeKey 是否已赋值
                     * 
                     */
                    bool TimeKeyHasBeenSet() const;

                    /**
                     * 获取Time field format. For more information, please see the output parameters of the time format description of the `strftime` function in C language
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TimeFormat Time field format. For more information, please see the output parameters of the time format description of the `strftime` function in C language
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置Time field format. For more information, please see the output parameters of the time format description of the `strftime` function in C language
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _timeFormat Time field format. For more information, please see the output parameters of the time format description of the `strftime` function in C language
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     * 
                     */
                    bool TimeFormatHasBeenSet() const;

                    /**
                     * 获取Delimiter for log type. Valid only when LogType is delimiter_logNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Delimiter Delimiter for log type. Valid only when LogType is delimiter_logNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置Delimiter for log type. Valid only when LogType is delimiter_logNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _delimiter Delimiter for log type. Valid only when LogType is delimiter_logNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDelimiter(const std::string& _delimiter);

                    /**
                     * 判断参数 Delimiter 是否已赋值
                     * @return Delimiter 是否已赋值
                     * 
                     */
                    bool DelimiterHasBeenSet() const;

                    /**
                     * 获取Full log matching rule. Valid only if LogType is fullregex_logNote: This field may return null, indicating that no valid values can be obtained.
                     * @return LogRegex Full log matching rule. Valid only if LogType is fullregex_logNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogRegex() const;

                    /**
                     * 设置Full log matching rule. Valid only if LogType is fullregex_logNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _logRegex Full log matching rule. Valid only if LogType is fullregex_logNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogRegex(const std::string& _logRegex);

                    /**
                     * 判断参数 LogRegex 是否已赋值
                     * @return LogRegex 是否已赋值
                     * 
                     */
                    bool LogRegexHasBeenSet() const;

                    /**
                     * 获取Line beginning matching rule, valid only if LogType is multiline_log or fullregex_logNote: This field may return null, indicating that no valid values can be obtained.
                     * @return BeginRegex Line beginning matching rule, valid only if LogType is multiline_log or fullregex_logNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBeginRegex() const;

                    /**
                     * 设置Line beginning matching rule, valid only if LogType is multiline_log or fullregex_logNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _beginRegex Line beginning matching rule, valid only if LogType is multiline_log or fullregex_logNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBeginRegex(const std::string& _beginRegex);

                    /**
                     * 判断参数 BeginRegex 是否已赋值
                     * @return BeginRegex 是否已赋值
                     * 
                     */
                    bool BeginRegexHasBeenSet() const;

                    /**
                     * 获取Key name of each extracted field. An empty key indicates discarding the field. Valid only if LogType is delimiter_log. json_log logs use the key of JSON itself. Limited to 100.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Keys Key name of each extracted field. An empty key indicates discarding the field. Valid only if LogType is delimiter_log. json_log logs use the key of JSON itself. Limited to 100.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置Key name of each extracted field. An empty key indicates discarding the field. Valid only if LogType is delimiter_log. json_log logs use the key of JSON itself. Limited to 100.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _keys Key name of each extracted field. An empty key indicates discarding the field. Valid only if LogType is delimiter_log. json_log logs use the key of JSON itself. Limited to 100.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKeys(const std::vector<std::string>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取Log filter rule list (previous version), keys to be filtered in the log and their corresponding regex.Note: For LogListener version 2.9.3 and later, it is recommended to use the AdvanceFilterRules configuration for log filtering.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FilterKeyRegex Log filter rule list (previous version), keys to be filtered in the log and their corresponding regex.Note: For LogListener version 2.9.3 and later, it is recommended to use the AdvanceFilterRules configuration for log filtering.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<KeyRegexInfo> GetFilterKeyRegex() const;

                    /**
                     * 设置Log filter rule list (previous version), keys to be filtered in the log and their corresponding regex.Note: For LogListener version 2.9.3 and later, it is recommended to use the AdvanceFilterRules configuration for log filtering.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _filterKeyRegex Log filter rule list (previous version), keys to be filtered in the log and their corresponding regex.Note: For LogListener version 2.9.3 and later, it is recommended to use the AdvanceFilterRules configuration for log filtering.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFilterKeyRegex(const std::vector<KeyRegexInfo>& _filterKeyRegex);

                    /**
                     * 判断参数 FilterKeyRegex 是否已赋值
                     * @return FilterKeyRegex 是否已赋值
                     * 
                     */
                    bool FilterKeyRegexHasBeenSet() const;

                    /**
                     * 获取Whether to upload the logs that failed to be parsed. Valid values: `true`: yes; `false`: no
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return UnMatchUpLoadSwitch Whether to upload the logs that failed to be parsed. Valid values: `true`: yes; `false`: no
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetUnMatchUpLoadSwitch() const;

                    /**
                     * 设置Whether to upload the logs that failed to be parsed. Valid values: `true`: yes; `false`: no
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _unMatchUpLoadSwitch Whether to upload the logs that failed to be parsed. Valid values: `true`: yes; `false`: no
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUnMatchUpLoadSwitch(const bool& _unMatchUpLoadSwitch);

                    /**
                     * 判断参数 UnMatchUpLoadSwitch 是否已赋值
                     * @return UnMatchUpLoadSwitch 是否已赋值
                     * 
                     */
                    bool UnMatchUpLoadSwitchHasBeenSet() const;

                    /**
                     * 获取Unmatched log key
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return UnMatchLogKey Unmatched log key
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUnMatchLogKey() const;

                    /**
                     * 设置Unmatched log key
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _unMatchLogKey Unmatched log key
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUnMatchLogKey(const std::string& _unMatchLogKey);

                    /**
                     * 判断参数 UnMatchLogKey 是否已赋值
                     * @return UnMatchLogKey 是否已赋值
                     * 
                     */
                    bool UnMatchLogKeyHasBeenSet() const;

                    /**
                     * 获取Backtracking data volume under incremental collection pattern, default -1 indicates full collection; other non-negative numbers indicate incremental collection (collect logs backward from the latest position by ${Backtracking} bytes) with a maximum support of 1073741824 (1G).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Backtracking Backtracking data volume under incremental collection pattern, default -1 indicates full collection; other non-negative numbers indicate incremental collection (collect logs backward from the latest position by ${Backtracking} bytes) with a maximum support of 1073741824 (1G).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBacktracking() const;

                    /**
                     * 设置Backtracking data volume under incremental collection pattern, default -1 indicates full collection; other non-negative numbers indicate incremental collection (collect logs backward from the latest position by ${Backtracking} bytes) with a maximum support of 1073741824 (1G).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backtracking Backtracking data volume under incremental collection pattern, default -1 indicates full collection; other non-negative numbers indicate incremental collection (collect logs backward from the latest position by ${Backtracking} bytes) with a maximum support of 1073741824 (1G).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBacktracking(const int64_t& _backtracking);

                    /**
                     * 判断参数 Backtracking 是否已赋值
                     * @return Backtracking 是否已赋值
                     * 
                     */
                    bool BacktrackingHasBeenSet() const;

                    /**
                     * 获取Whether to be encoded in GBK format. Valid values: `0` (No) and `1` (Yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsGBK Whether to be encoded in GBK format. Valid values: `0` (No) and `1` (Yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsGBK() const;

                    /**
                     * 设置Whether to be encoded in GBK format. Valid values: `0` (No) and `1` (Yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isGBK Whether to be encoded in GBK format. Valid values: `0` (No) and `1` (Yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsGBK(const int64_t& _isGBK);

                    /**
                     * 判断参数 IsGBK 是否已赋值
                     * @return IsGBK 是否已赋值
                     * 
                     */
                    bool IsGBKHasBeenSet() const;

                    /**
                     * 获取Whether to be formatted as JSON (standard). Valid values: `0` (No) and `1` (Yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JsonStandard Whether to be formatted as JSON (standard). Valid values: `0` (No) and `1` (Yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetJsonStandard() const;

                    /**
                     * 设置Whether to be formatted as JSON (standard). Valid values: `0` (No) and `1` (Yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jsonStandard Whether to be formatted as JSON (standard). Valid values: `0` (No) and `1` (Yes).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetJsonStandard(const int64_t& _jsonStandard);

                    /**
                     * 判断参数 JsonStandard 是否已赋值
                     * @return JsonStandard 是否已赋值
                     * 
                     */
                    bool JsonStandardHasBeenSet() const;

                    /**
                     * 获取Syslog protocol. Valid values: `tcp`, `udp`.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Syslog protocol. Valid values: `tcp`, `udp`.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Syslog protocol. Valid values: `tcp`, `udp`.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _protocol Syslog protocol. Valid values: `tcp`, `udp`.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Listening address and port specified by the syslog collection. Format: [ip]:[port]. Example: 127.0.0.1:9000.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Address Listening address and port specified by the syslog collection. Format: [ip]:[port]. Example: 127.0.0.1:9000.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Listening address and port specified by the syslog collection. Format: [ip]:[port]. Example: 127.0.0.1:9000.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _address Listening address and port specified by the syslog collection. Format: [ip]:[port]. Example: 127.0.0.1:9000.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
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
                     * 
                     */
                    std::string GetParseProtocol() const;

                    /**
                     * 设置`rfc3164`: Resolve logs by using the RFC 3164 protocol during the syslog collection.
`rfc5424`: Resolve logs by using the RFC 5424 protocol during the syslog collection.
`auto`: Automatically match either the RFC 3164 or RFC 5424 protocol.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _parseProtocol `rfc3164`: Resolve logs by using the RFC 3164 protocol during the syslog collection.
`rfc5424`: Resolve logs by using the RFC 5424 protocol during the syslog collection.
`auto`: Automatically match either the RFC 3164 or RFC 5424 protocol.
This field can be used when you create or modify collection rule configurations.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParseProtocol(const std::string& _parseProtocol);

                    /**
                     * 判断参数 ParseProtocol 是否已赋值
                     * @return ParseProtocol 是否已赋值
                     * 
                     */
                    bool ParseProtocolHasBeenSet() const;

                    /**
                     * 获取Metadata type. Valid values:
0: Do not use metadata.
1: Use machine group metadata.
2: Use user-defined metadata.
3: Use the collection path to extract metadata.
                     * @return MetadataType Metadata type. Valid values:
0: Do not use metadata.
1: Use machine group metadata.
2: Use user-defined metadata.
3: Use the collection path to extract metadata.
                     * 
                     */
                    int64_t GetMetadataType() const;

                    /**
                     * 设置Metadata type. Valid values:
0: Do not use metadata.
1: Use machine group metadata.
2: Use user-defined metadata.
3: Use the collection path to extract metadata.
                     * @param _metadataType Metadata type. Valid values:
0: Do not use metadata.
1: Use machine group metadata.
2: Use user-defined metadata.
3: Use the collection path to extract metadata.
                     * 
                     */
                    void SetMetadataType(const int64_t& _metadataType);

                    /**
                     * 判断参数 MetadataType 是否已赋值
                     * @return MetadataType 是否已赋值
                     * 
                     */
                    bool MetadataTypeHasBeenSet() const;

                    /**
                     * 获取Regular expression of the collection configuration path, which is required when `MetadataType` is set to `3`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PathRegex Regular expression of the collection configuration path, which is required when `MetadataType` is set to `3`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPathRegex() const;

                    /**
                     * 设置Regular expression of the collection configuration path, which is required when `MetadataType` is set to `3`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pathRegex Regular expression of the collection configuration path, which is required when `MetadataType` is set to `3`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPathRegex(const std::string& _pathRegex);

                    /**
                     * 判断参数 PathRegex 是否已赋值
                     * @return PathRegex 是否已赋值
                     * 
                     */
                    bool PathRegexHasBeenSet() const;

                    /**
                     * 获取User-defined metadata, which is required when `MetadataType` is set to `2`.
                     * @return MetaTags User-defined metadata, which is required when `MetadataType` is set to `2`.
                     * 
                     */
                    std::vector<MetaTagInfo> GetMetaTags() const;

                    /**
                     * 设置User-defined metadata, which is required when `MetadataType` is set to `2`.
                     * @param _metaTags User-defined metadata, which is required when `MetadataType` is set to `2`.
                     * 
                     */
                    void SetMetaTags(const std::vector<MetaTagInfo>& _metaTags);

                    /**
                     * 判断参数 MetaTags 是否已赋值
                     * @return MetaTags 是否已赋值
                     * 
                     */
                    bool MetaTagsHasBeenSet() const;

                    /**
                     * 获取Windows event log collection
                     * @return EventLogRules Windows event log collection
                     * 
                     */
                    std::vector<EventLog> GetEventLogRules() const;

                    /**
                     * 设置Windows event log collection
                     * @param _eventLogRules Windows event log collection
                     * 
                     */
                    void SetEventLogRules(const std::vector<EventLog>& _eventLogRules);

                    /**
                     * 判断参数 EventLogRules 是否已赋值
                     * @return EventLogRules 是否已赋值
                     * 
                     */
                    bool EventLogRulesHasBeenSet() const;

                private:

                    /**
                     * Key name for the time field. TikeKey and TimeFormat must appear in pairsNote: This field may return null, indicating that no valid values can be obtained.
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
                     * Delimiter for log type. Valid only when LogType is delimiter_logNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * Full log matching rule. Valid only if LogType is fullregex_logNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logRegex;
                    bool m_logRegexHasBeenSet;

                    /**
                     * Line beginning matching rule, valid only if LogType is multiline_log or fullregex_logNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_beginRegex;
                    bool m_beginRegexHasBeenSet;

                    /**
                     * Key name of each extracted field. An empty key indicates discarding the field. Valid only if LogType is delimiter_log. json_log logs use the key of JSON itself. Limited to 100.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * Log filter rule list (previous version), keys to be filtered in the log and their corresponding regex.Note: For LogListener version 2.9.3 and later, it is recommended to use the AdvanceFilterRules configuration for log filtering.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Backtracking data volume under incremental collection pattern, default -1 indicates full collection; other non-negative numbers indicate incremental collection (collect logs backward from the latest position by ${Backtracking} bytes) with a maximum support of 1073741824 (1G).Note: This field may return null, indicating that no valid values can be obtained.
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

                    /**
                     * Metadata type. Valid values:
0: Do not use metadata.
1: Use machine group metadata.
2: Use user-defined metadata.
3: Use the collection path to extract metadata.
                     */
                    int64_t m_metadataType;
                    bool m_metadataTypeHasBeenSet;

                    /**
                     * Regular expression of the collection configuration path, which is required when `MetadataType` is set to `3`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pathRegex;
                    bool m_pathRegexHasBeenSet;

                    /**
                     * User-defined metadata, which is required when `MetadataType` is set to `2`.
                     */
                    std::vector<MetaTagInfo> m_metaTags;
                    bool m_metaTagsHasBeenSet;

                    /**
                     * Windows event log collection
                     */
                    std::vector<EventLog> m_eventLogRules;
                    bool m_eventLogRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_EXTRACTRULEINFO_H_
