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
#include <tencentcloud/cls/v20201016/model/AdvanceFilterRuleInfo.h>


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
                     * 获取<p>key name for the time field. TimeKey and TimeFormat must appear in pairs</p>
                     * @return TimeKey <p>key name for the time field. TimeKey and TimeFormat must appear in pairs</p>
                     * 
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置<p>key name for the time field. TimeKey and TimeFormat must appear in pairs</p>
                     * @param _timeKey <p>key name for the time field. TimeKey and TimeFormat must appear in pairs</p>
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
                     * 获取<p>Time field format. Refer to the strftime function in C language for time format description output parameter</p><ul><li>See <a href="https://www.tencentcloud.com/document/product/614/38614?from_cn_redirect=1">configure time format</a> document</li></ul>
                     * @return TimeFormat <p>Time field format. Refer to the strftime function in C language for time format description output parameter</p><ul><li>See <a href="https://www.tencentcloud.com/document/product/614/38614?from_cn_redirect=1">configure time format</a> document</li></ul>
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置<p>Time field format. Refer to the strftime function in C language for time format description output parameter</p><ul><li>See <a href="https://www.tencentcloud.com/document/product/614/38614?from_cn_redirect=1">configure time format</a> document</li></ul>
                     * @param _timeFormat <p>Time field format. Refer to the strftime function in C language for time format description output parameter</p><ul><li>See <a href="https://www.tencentcloud.com/document/product/614/38614?from_cn_redirect=1">configure time format</a> document</li></ul>
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
                     * 获取<p>Delimiter for log type. Only valid when LogType is delimiter_log</p>
                     * @return Delimiter <p>Delimiter for log type. Only valid when LogType is delimiter_log</p>
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置<p>Delimiter for log type. Only valid when LogType is delimiter_log</p>
                     * @param _delimiter <p>Delimiter for log type. Only valid when LogType is delimiter_log</p>
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
                     * 获取<p>The whole log matching rule is only valid when LogType is fullregex_log</p>
                     * @return LogRegex <p>The whole log matching rule is only valid when LogType is fullregex_log</p>
                     * 
                     */
                    std::string GetLogRegex() const;

                    /**
                     * 设置<p>The whole log matching rule is only valid when LogType is fullregex_log</p>
                     * @param _logRegex <p>The whole log matching rule is only valid when LogType is fullregex_log</p>
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
                     * 获取<p>First-line matching rule. Valid only when LogType is multiline_log or fullregex_log.</p>
                     * @return BeginRegex <p>First-line matching rule. Valid only when LogType is multiline_log or fullregex_log.</p>
                     * 
                     */
                    std::string GetBeginRegex() const;

                    /**
                     * 设置<p>First-line matching rule. Valid only when LogType is multiline_log or fullregex_log.</p>
                     * @param _beginRegex <p>First-line matching rule. Valid only when LogType is multiline_log or fullregex_log.</p>
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
                     * 获取<p>The key name of each field. An empty key means to discard the field. Valid only when LogType is delimiter_log. For json_log, use the key in the json itself. Limited to 100.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Keys <p>The key name of each field. An empty key means to discard the field. Valid only when LogType is delimiter_log. For json_log, use the key in the json itself. Limited to 100.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置<p>The key name of each field. An empty key means to discard the field. Valid only when LogType is delimiter_log. For json_log, use the key in the json itself. Limited to 100.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _keys <p>The key name of each field. An empty key means to discard the field. Valid only when LogType is delimiter_log. For json_log, use the key in the json itself. Limited to 100.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Log filtering rule list (legacy version), keys to be filtered, and corresponding regex.<br> Note: For LogListener 2.9.3 and above versions, it is recommended to use log filtering rules configuration.</p>
                     * @return FilterKeyRegex <p>Log filtering rule list (legacy version), keys to be filtered, and corresponding regex.<br> Note: For LogListener 2.9.3 and above versions, it is recommended to use log filtering rules configuration.</p>
                     * 
                     */
                    std::vector<KeyRegexInfo> GetFilterKeyRegex() const;

                    /**
                     * 设置<p>Log filtering rule list (legacy version), keys to be filtered, and corresponding regex.<br> Note: For LogListener 2.9.3 and above versions, it is recommended to use log filtering rules configuration.</p>
                     * @param _filterKeyRegex <p>Log filtering rule list (legacy version), keys to be filtered, and corresponding regex.<br> Note: For LogListener 2.9.3 and above versions, it is recommended to use log filtering rules configuration.</p>
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
                     * 获取<p>Whether to upload logs that failed to be parsed, true for upload, false for not uploading</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnMatchUpLoadSwitch <p>Whether to upload logs that failed to be parsed, true for upload, false for not uploading</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetUnMatchUpLoadSwitch() const;

                    /**
                     * 设置<p>Whether to upload logs that failed to be parsed, true for upload, false for not uploading</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _unMatchUpLoadSwitch <p>Whether to upload logs that failed to be parsed, true for upload, false for not uploading</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>key of the failure log, required when UnMatchUpLoadSwitch is true</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnMatchLogKey <p>key of the failure log, required when UnMatchUpLoadSwitch is true</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUnMatchLogKey() const;

                    /**
                     * 设置<p>key of the failure log, required when UnMatchUpLoadSwitch is true</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _unMatchLogKey <p>key of the failure log, required when UnMatchUpLoadSwitch is true</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Backtracking data volume in incremental collection mode. Default: -1 (full collection). Other non-negative numbers indicate incremental collection (backward collection of ${Backtracking} Byte logs from the newest position). Supports up to 1073741824 (1G).<br>Note:</p><ul><li>COS import does not support this field.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Backtracking <p>Backtracking data volume in incremental collection mode. Default: -1 (full collection). Other non-negative numbers indicate incremental collection (backward collection of ${Backtracking} Byte logs from the newest position). Supports up to 1073741824 (1G).<br>Note:</p><ul><li>COS import does not support this field.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBacktracking() const;

                    /**
                     * 设置<p>Backtracking data volume in incremental collection mode. Default: -1 (full collection). Other non-negative numbers indicate incremental collection (backward collection of ${Backtracking} Byte logs from the newest position). Supports up to 1073741824 (1G).<br>Note:</p><ul><li>COS import does not support this field.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backtracking <p>Backtracking data volume in incremental collection mode. Default: -1 (full collection). Other non-negative numbers indicate incremental collection (backward collection of ${Backtracking} Byte logs from the newest position). Supports up to 1073741824 (1G).<br>Note:</p><ul><li>COS import does not support this field.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Whether it is Gbk encoding. 0: No; 1: Yes.<br>Note</p><ul><li>Currently, a value of 0 indicates UTF-8 encoding.</li><li>COS import does not support this field.</li></ul>
                     * @return IsGBK <p>Whether it is Gbk encoding. 0: No; 1: Yes.<br>Note</p><ul><li>Currently, a value of 0 indicates UTF-8 encoding.</li><li>COS import does not support this field.</li></ul>
                     * 
                     */
                    int64_t GetIsGBK() const;

                    /**
                     * 设置<p>Whether it is Gbk encoding. 0: No; 1: Yes.<br>Note</p><ul><li>Currently, a value of 0 indicates UTF-8 encoding.</li><li>COS import does not support this field.</li></ul>
                     * @param _isGBK <p>Whether it is Gbk encoding. 0: No; 1: Yes.<br>Note</p><ul><li>Currently, a value of 0 indicates UTF-8 encoding.</li><li>COS import does not support this field.</li></ul>
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
                     * 获取<p>Whether it is standard json. 0: No; 1: Yes.</p><ul><li>Standard json means the collector uses industry-standard open-source parsers for json parsing. Non-standard json means the collector uses CLS self-developed json parsers. There is no essential difference between the two parsers. We recommend customers use standard json for parsing.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JsonStandard <p>Whether it is standard json. 0: No; 1: Yes.</p><ul><li>Standard json means the collector uses industry-standard open-source parsers for json parsing. Non-standard json means the collector uses CLS self-developed json parsers. There is no essential difference between the two parsers. We recommend customers use standard json for parsing.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetJsonStandard() const;

                    /**
                     * 设置<p>Whether it is standard json. 0: No; 1: Yes.</p><ul><li>Standard json means the collector uses industry-standard open-source parsers for json parsing. Non-standard json means the collector uses CLS self-developed json parsers. There is no essential difference between the two parsers. We recommend customers use standard json for parsing.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _jsonStandard <p>Whether it is standard json. 0: No; 1: Yes.</p><ul><li>Standard json means the collector uses industry-standard open-source parsers for json parsing. Non-standard json means the collector uses CLS self-developed json parsers. There is no essential difference between the two parsers. We recommend customers use standard json for parsing.</li></ul>
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
                     * 获取<p>syslog transport protocol, valid values: tcp, udp, this parameter is valid only when LogType is service_syslog, not required for other types.<br>Note:</p><ul><li>This field applies to: create collection rule configuration, modify collection rule configuration.</li><li>COS import does not support this field.</li></ul>
                     * @return Protocol <p>syslog transport protocol, valid values: tcp, udp, this parameter is valid only when LogType is service_syslog, not required for other types.<br>Note:</p><ul><li>This field applies to: create collection rule configuration, modify collection rule configuration.</li><li>COS import does not support this field.</li></ul>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>syslog transport protocol, valid values: tcp, udp, this parameter is valid only when LogType is service_syslog, not required for other types.<br>Note:</p><ul><li>This field applies to: create collection rule configuration, modify collection rule configuration.</li><li>COS import does not support this field.</li></ul>
                     * @param _protocol <p>syslog transport protocol, valid values: tcp, udp, this parameter is valid only when LogType is service_syslog, not required for other types.<br>Note:</p><ul><li>This field applies to: create collection rule configuration, modify collection rule configuration.</li><li>COS import does not support this field.</li></ul>
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
                     * 获取<p>syslog system log collection specifies the address and port listened to by the collector, format: [ip]:[port]. This parameter is valid only when LogType is service_syslog. No need to specify for other types.<br>Note:</p><ul><li>This field applies to: create collection rule configuration, modify collection rule configuration.</li><li>COS import does not support this field.</li></ul>
                     * @return Address <p>syslog system log collection specifies the address and port listened to by the collector, format: [ip]:[port]. This parameter is valid only when LogType is service_syslog. No need to specify for other types.<br>Note:</p><ul><li>This field applies to: create collection rule configuration, modify collection rule configuration.</li><li>COS import does not support this field.</li></ul>
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置<p>syslog system log collection specifies the address and port listened to by the collector, format: [ip]:[port]. This parameter is valid only when LogType is service_syslog. No need to specify for other types.<br>Note:</p><ul><li>This field applies to: create collection rule configuration, modify collection rule configuration.</li><li>COS import does not support this field.</li></ul>
                     * @param _address <p>syslog system log collection specifies the address and port listened to by the collector, format: [ip]:[port]. This parameter is valid only when LogType is service_syslog. No need to specify for other types.<br>Note:</p><ul><li>This field applies to: create collection rule configuration, modify collection rule configuration.</li><li>COS import does not support this field.</li></ul>
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
                     * 获取<p>rfc3164: Specify system log collection using RFC3164 protocol parsing.<br>rfc5424: Specify system log collection using RFC5424 protocol parsing.<br>auto: Automatically match either RFC3164 or RFC5424 protocol.<br>This parameter is valid only when LogType is service_syslog. Not required for other types.<br>Note:</p><ul><li>This field is applicable to: create collection rule configuration, modify collection rule configuration.</li><li>COS import does not support this field.</li></ul>
                     * @return ParseProtocol <p>rfc3164: Specify system log collection using RFC3164 protocol parsing.<br>rfc5424: Specify system log collection using RFC5424 protocol parsing.<br>auto: Automatically match either RFC3164 or RFC5424 protocol.<br>This parameter is valid only when LogType is service_syslog. Not required for other types.<br>Note:</p><ul><li>This field is applicable to: create collection rule configuration, modify collection rule configuration.</li><li>COS import does not support this field.</li></ul>
                     * 
                     */
                    std::string GetParseProtocol() const;

                    /**
                     * 设置<p>rfc3164: Specify system log collection using RFC3164 protocol parsing.<br>rfc5424: Specify system log collection using RFC5424 protocol parsing.<br>auto: Automatically match either RFC3164 or RFC5424 protocol.<br>This parameter is valid only when LogType is service_syslog. Not required for other types.<br>Note:</p><ul><li>This field is applicable to: create collection rule configuration, modify collection rule configuration.</li><li>COS import does not support this field.</li></ul>
                     * @param _parseProtocol <p>rfc3164: Specify system log collection using RFC3164 protocol parsing.<br>rfc5424: Specify system log collection using RFC5424 protocol parsing.<br>auto: Automatically match either RFC3164 or RFC5424 protocol.<br>This parameter is valid only when LogType is service_syslog. Not required for other types.<br>Note:</p><ul><li>This field is applicable to: create collection rule configuration, modify collection rule configuration.</li><li>COS import does not support this field.</li></ul>
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
                     * 获取<p>Metadata type. 0: Not use metadata information; 1: Use machine group metadata; 2: Using custom metadata; 3: Use collection configuration path.<br>Note:</p><ul><li>COS import does not support this field.</li></ul>
                     * @return MetadataType <p>Metadata type. 0: Not use metadata information; 1: Use machine group metadata; 2: Using custom metadata; 3: Use collection configuration path.<br>Note:</p><ul><li>COS import does not support this field.</li></ul>
                     * 
                     */
                    int64_t GetMetadataType() const;

                    /**
                     * 设置<p>Metadata type. 0: Not use metadata information; 1: Use machine group metadata; 2: Using custom metadata; 3: Use collection configuration path.<br>Note:</p><ul><li>COS import does not support this field.</li></ul>
                     * @param _metadataType <p>Metadata type. 0: Not use metadata information; 1: Use machine group metadata; 2: Using custom metadata; 3: Use collection configuration path.<br>Note:</p><ul><li>COS import does not support this field.</li></ul>
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
                     * 获取<p>Collection configuration path regular expression.</p><p><pre><code>Use "()" to identify the regular expression corresponding to the target field in the path. During parsing, "()" is considered as a capture group and reported together with logs in the form of __TAG__.{i}:{target field name}, where i is the serial number of the capture group. If you do not want to use the serial number as the key name, you can define a custom key name through the named capturing group "(?&lt;{key name}&gt;{regular expression})" and report it together with logs in the form of __TAG__.{key name}:{target field name}. Supports up to 5 capture groups.</code></pre></p><p>Note:</p><ul><li>Required when MetadataType is 3.</li><li>This field is not supported in COS import.</li></ul>
                     * @return PathRegex <p>Collection configuration path regular expression.</p><p><pre><code>Use "()" to identify the regular expression corresponding to the target field in the path. During parsing, "()" is considered as a capture group and reported together with logs in the form of __TAG__.{i}:{target field name}, where i is the serial number of the capture group. If you do not want to use the serial number as the key name, you can define a custom key name through the named capturing group "(?&lt;{key name}&gt;{regular expression})" and report it together with logs in the form of __TAG__.{key name}:{target field name}. Supports up to 5 capture groups.</code></pre></p><p>Note:</p><ul><li>Required when MetadataType is 3.</li><li>This field is not supported in COS import.</li></ul>
                     * 
                     */
                    std::string GetPathRegex() const;

                    /**
                     * 设置<p>Collection configuration path regular expression.</p><p><pre><code>Use "()" to identify the regular expression corresponding to the target field in the path. During parsing, "()" is considered as a capture group and reported together with logs in the form of __TAG__.{i}:{target field name}, where i is the serial number of the capture group. If you do not want to use the serial number as the key name, you can define a custom key name through the named capturing group "(?&lt;{key name}&gt;{regular expression})" and report it together with logs in the form of __TAG__.{key name}:{target field name}. Supports up to 5 capture groups.</code></pre></p><p>Note:</p><ul><li>Required when MetadataType is 3.</li><li>This field is not supported in COS import.</li></ul>
                     * @param _pathRegex <p>Collection configuration path regular expression.</p><p><pre><code>Use "()" to identify the regular expression corresponding to the target field in the path. During parsing, "()" is considered as a capture group and reported together with logs in the form of __TAG__.{i}:{target field name}, where i is the serial number of the capture group. If you do not want to use the serial number as the key name, you can define a custom key name through the named capturing group "(?&lt;{key name}&gt;{regular expression})" and report it together with logs in the form of __TAG__.{key name}:{target field name}. Supports up to 5 capture groups.</code></pre></p><p>Note:</p><ul><li>Required when MetadataType is 3.</li><li>This field is not supported in COS import.</li></ul>
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
                     * 获取<p>User-defined metadata information.<br>Note:</p><ul><li>Required when MetadataType is 2.</li><li>This field is not supported for COS import.</li></ul>
                     * @return MetaTags <p>User-defined metadata information.<br>Note:</p><ul><li>Required when MetadataType is 2.</li><li>This field is not supported for COS import.</li></ul>
                     * 
                     */
                    std::vector<MetaTagInfo> GetMetaTags() const;

                    /**
                     * 设置<p>User-defined metadata information.<br>Note:</p><ul><li>Required when MetadataType is 2.</li><li>This field is not supported for COS import.</li></ul>
                     * @param _metaTags <p>User-defined metadata information.<br>Note:</p><ul><li>Required when MetadataType is 2.</li><li>This field is not supported for COS import.</li></ul>
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
                     * 获取<p>The Windows Event Log Collection rule is valid only when LogType is windows_event_log. No need to specify for other types.</p>
                     * @return EventLogRules <p>The Windows Event Log Collection rule is valid only when LogType is windows_event_log. No need to specify for other types.</p>
                     * 
                     */
                    std::vector<EventLog> GetEventLogRules() const;

                    /**
                     * 设置<p>The Windows Event Log Collection rule is valid only when LogType is windows_event_log. No need to specify for other types.</p>
                     * @param _eventLogRules <p>The Windows Event Log Collection rule is valid only when LogType is windows_event_log. No need to specify for other types.</p>
                     * 
                     */
                    void SetEventLogRules(const std::vector<EventLog>& _eventLogRules);

                    /**
                     * 判断参数 EventLogRules 是否已赋值
                     * @return EventLogRules 是否已赋值
                     * 
                     */
                    bool EventLogRulesHasBeenSet() const;

                    /**
                     * 获取<p>Log filtering rule list (new version).<br>Note:</p><ul><li>LogListener versions below 2.9.3 do not support this. Please use FilterKeyRegex to configure log filter rules.</li><li>Self-built k8s collection configuration (CreateConfigExtra, ModifyConfigExtra) does not support this field.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AdvanceFilterRules <p>Log filtering rule list (new version).<br>Note:</p><ul><li>LogListener versions below 2.9.3 do not support this. Please use FilterKeyRegex to configure log filter rules.</li><li>Self-built k8s collection configuration (CreateConfigExtra, ModifyConfigExtra) does not support this field.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AdvanceFilterRuleInfo> GetAdvanceFilterRules() const;

                    /**
                     * 设置<p>Log filtering rule list (new version).<br>Note:</p><ul><li>LogListener versions below 2.9.3 do not support this. Please use FilterKeyRegex to configure log filter rules.</li><li>Self-built k8s collection configuration (CreateConfigExtra, ModifyConfigExtra) does not support this field.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _advanceFilterRules <p>Log filtering rule list (new version).<br>Note:</p><ul><li>LogListener versions below 2.9.3 do not support this. Please use FilterKeyRegex to configure log filter rules.</li><li>Self-built k8s collection configuration (CreateConfigExtra, ModifyConfigExtra) does not support this field.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAdvanceFilterRules(const std::vector<AdvanceFilterRuleInfo>& _advanceFilterRules);

                    /**
                     * 判断参数 AdvanceFilterRules 是否已赋值
                     * @return AdvanceFilterRules 是否已赋值
                     * 
                     */
                    bool AdvanceFilterRulesHasBeenSet() const;

                    /**
                     * 获取<p>Key name of raw logs. All raw logs are uploaded with the Key name you specified, and the original log content as Value. If left empty, raw log upload is disabled.</p><ul><li>COS import does not support this field.</li></ul>
                     * @return RawLogKey <p>Key name of raw logs. All raw logs are uploaded with the Key name you specified, and the original log content as Value. If left empty, raw log upload is disabled.</p><ul><li>COS import does not support this field.</li></ul>
                     * 
                     */
                    std::string GetRawLogKey() const;

                    /**
                     * 设置<p>Key name of raw logs. All raw logs are uploaded with the Key name you specified, and the original log content as Value. If left empty, raw log upload is disabled.</p><ul><li>COS import does not support this field.</li></ul>
                     * @param _rawLogKey <p>Key name of raw logs. All raw logs are uploaded with the Key name you specified, and the original log content as Value. If left empty, raw log upload is disabled.</p><ul><li>COS import does not support this field.</li></ul>
                     * 
                     */
                    void SetRawLogKey(const std::string& _rawLogKey);

                    /**
                     * 判断参数 RawLogKey 是否已赋值
                     * @return RawLogKey 是否已赋值
                     * 
                     */
                    bool RawLogKeyHasBeenSet() const;

                private:

                    /**
                     * <p>key name for the time field. TimeKey and TimeFormat must appear in pairs</p>
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * <p>Time field format. Refer to the strftime function in C language for time format description output parameter</p><ul><li>See <a href="https://www.tencentcloud.com/document/product/614/38614?from_cn_redirect=1">configure time format</a> document</li></ul>
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * <p>Delimiter for log type. Only valid when LogType is delimiter_log</p>
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * <p>The whole log matching rule is only valid when LogType is fullregex_log</p>
                     */
                    std::string m_logRegex;
                    bool m_logRegexHasBeenSet;

                    /**
                     * <p>First-line matching rule. Valid only when LogType is multiline_log or fullregex_log.</p>
                     */
                    std::string m_beginRegex;
                    bool m_beginRegexHasBeenSet;

                    /**
                     * <p>The key name of each field. An empty key means to discard the field. Valid only when LogType is delimiter_log. For json_log, use the key in the json itself. Limited to 100.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * <p>Log filtering rule list (legacy version), keys to be filtered, and corresponding regex.<br> Note: For LogListener 2.9.3 and above versions, it is recommended to use log filtering rules configuration.</p>
                     */
                    std::vector<KeyRegexInfo> m_filterKeyRegex;
                    bool m_filterKeyRegexHasBeenSet;

                    /**
                     * <p>Whether to upload logs that failed to be parsed, true for upload, false for not uploading</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_unMatchUpLoadSwitch;
                    bool m_unMatchUpLoadSwitchHasBeenSet;

                    /**
                     * <p>key of the failure log, required when UnMatchUpLoadSwitch is true</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_unMatchLogKey;
                    bool m_unMatchLogKeyHasBeenSet;

                    /**
                     * <p>Backtracking data volume in incremental collection mode. Default: -1 (full collection). Other non-negative numbers indicate incremental collection (backward collection of ${Backtracking} Byte logs from the newest position). Supports up to 1073741824 (1G).<br>Note:</p><ul><li>COS import does not support this field.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_backtracking;
                    bool m_backtrackingHasBeenSet;

                    /**
                     * <p>Whether it is Gbk encoding. 0: No; 1: Yes.<br>Note</p><ul><li>Currently, a value of 0 indicates UTF-8 encoding.</li><li>COS import does not support this field.</li></ul>
                     */
                    int64_t m_isGBK;
                    bool m_isGBKHasBeenSet;

                    /**
                     * <p>Whether it is standard json. 0: No; 1: Yes.</p><ul><li>Standard json means the collector uses industry-standard open-source parsers for json parsing. Non-standard json means the collector uses CLS self-developed json parsers. There is no essential difference between the two parsers. We recommend customers use standard json for parsing.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_jsonStandard;
                    bool m_jsonStandardHasBeenSet;

                    /**
                     * <p>syslog transport protocol, valid values: tcp, udp, this parameter is valid only when LogType is service_syslog, not required for other types.<br>Note:</p><ul><li>This field applies to: create collection rule configuration, modify collection rule configuration.</li><li>COS import does not support this field.</li></ul>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>syslog system log collection specifies the address and port listened to by the collector, format: [ip]:[port]. This parameter is valid only when LogType is service_syslog. No need to specify for other types.<br>Note:</p><ul><li>This field applies to: create collection rule configuration, modify collection rule configuration.</li><li>COS import does not support this field.</li></ul>
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>rfc3164: Specify system log collection using RFC3164 protocol parsing.<br>rfc5424: Specify system log collection using RFC5424 protocol parsing.<br>auto: Automatically match either RFC3164 or RFC5424 protocol.<br>This parameter is valid only when LogType is service_syslog. Not required for other types.<br>Note:</p><ul><li>This field is applicable to: create collection rule configuration, modify collection rule configuration.</li><li>COS import does not support this field.</li></ul>
                     */
                    std::string m_parseProtocol;
                    bool m_parseProtocolHasBeenSet;

                    /**
                     * <p>Metadata type. 0: Not use metadata information; 1: Use machine group metadata; 2: Using custom metadata; 3: Use collection configuration path.<br>Note:</p><ul><li>COS import does not support this field.</li></ul>
                     */
                    int64_t m_metadataType;
                    bool m_metadataTypeHasBeenSet;

                    /**
                     * <p>Collection configuration path regular expression.</p><p><pre><code>Use "()" to identify the regular expression corresponding to the target field in the path. During parsing, "()" is considered as a capture group and reported together with logs in the form of __TAG__.{i}:{target field name}, where i is the serial number of the capture group. If you do not want to use the serial number as the key name, you can define a custom key name through the named capturing group "(?&lt;{key name}&gt;{regular expression})" and report it together with logs in the form of __TAG__.{key name}:{target field name}. Supports up to 5 capture groups.</code></pre></p><p>Note:</p><ul><li>Required when MetadataType is 3.</li><li>This field is not supported in COS import.</li></ul>
                     */
                    std::string m_pathRegex;
                    bool m_pathRegexHasBeenSet;

                    /**
                     * <p>User-defined metadata information.<br>Note:</p><ul><li>Required when MetadataType is 2.</li><li>This field is not supported for COS import.</li></ul>
                     */
                    std::vector<MetaTagInfo> m_metaTags;
                    bool m_metaTagsHasBeenSet;

                    /**
                     * <p>The Windows Event Log Collection rule is valid only when LogType is windows_event_log. No need to specify for other types.</p>
                     */
                    std::vector<EventLog> m_eventLogRules;
                    bool m_eventLogRulesHasBeenSet;

                    /**
                     * <p>Log filtering rule list (new version).<br>Note:</p><ul><li>LogListener versions below 2.9.3 do not support this. Please use FilterKeyRegex to configure log filter rules.</li><li>Self-built k8s collection configuration (CreateConfigExtra, ModifyConfigExtra) does not support this field.</li></ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AdvanceFilterRuleInfo> m_advanceFilterRules;
                    bool m_advanceFilterRulesHasBeenSet;

                    /**
                     * <p>Key name of raw logs. All raw logs are uploaded with the Key name you specified, and the original log content as Value. If left empty, raw log upload is disabled.</p><ul><li>COS import does not support this field.</li></ul>
                     */
                    std::string m_rawLogKey;
                    bool m_rawLogKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_EXTRACTRULEINFO_H_
