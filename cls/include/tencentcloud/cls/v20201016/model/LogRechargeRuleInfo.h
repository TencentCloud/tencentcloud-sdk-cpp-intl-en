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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_LOGRECHARGERULEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_LOGRECHARGERULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/JsonExpandInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Log import rule
                */
                class LogRechargeRuleInfo : public AbstractModel
                {
                public:
                    LogRechargeRuleInfo();
                    ~LogRechargeRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Import type, support json_log: JSON logs, minimalist_log: single-line full-text log, fullregex_log: single-line full regular expression</p>
                     * @return RechargeType <p>Import type, support json_log: JSON logs, minimalist_log: single-line full-text log, fullregex_log: single-line full regular expression</p>
                     * 
                     */
                    std::string GetRechargeType() const;

                    /**
                     * 设置<p>Import type, support json_log: JSON logs, minimalist_log: single-line full-text log, fullregex_log: single-line full regular expression</p>
                     * @param _rechargeType <p>Import type, support json_log: JSON logs, minimalist_log: single-line full-text log, fullregex_log: single-line full regular expression</p>
                     * 
                     */
                    void SetRechargeType(const std::string& _rechargeType);

                    /**
                     * 判断参数 RechargeType 是否已赋值
                     * @return RechargeType 是否已赋值
                     * 
                     */
                    bool RechargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Parse encoding format. 0: UTF-8 (default value), 1: GBK</p>
                     * @return EncodingFormat <p>Parse encoding format. 0: UTF-8 (default value), 1: GBK</p>
                     * 
                     */
                    uint64_t GetEncodingFormat() const;

                    /**
                     * 设置<p>Parse encoding format. 0: UTF-8 (default value), 1: GBK</p>
                     * @param _encodingFormat <p>Parse encoding format. 0: UTF-8 (default value), 1: GBK</p>
                     * 
                     */
                    void SetEncodingFormat(const uint64_t& _encodingFormat);

                    /**
                     * 判断参数 EncodingFormat 是否已赋值
                     * @return EncodingFormat 是否已赋值
                     * 
                     */
                    bool EncodingFormatHasBeenSet() const;

                    /**
                     * 获取<p>Use default time status. true: once enabled, current system time or Kafka message timestamp will be used as log timestamp; false: when turned off, time field in the log will be used as log timestamp. Default: true</p>
                     * @return DefaultTimeSwitch <p>Use default time status. true: once enabled, current system time or Kafka message timestamp will be used as log timestamp; false: when turned off, time field in the log will be used as log timestamp. Default: true</p>
                     * 
                     */
                    bool GetDefaultTimeSwitch() const;

                    /**
                     * 设置<p>Use default time status. true: once enabled, current system time or Kafka message timestamp will be used as log timestamp; false: when turned off, time field in the log will be used as log timestamp. Default: true</p>
                     * @param _defaultTimeSwitch <p>Use default time status. true: once enabled, current system time or Kafka message timestamp will be used as log timestamp; false: when turned off, time field in the log will be used as log timestamp. Default: true</p>
                     * 
                     */
                    void SetDefaultTimeSwitch(const bool& _defaultTimeSwitch);

                    /**
                     * 判断参数 DefaultTimeSwitch 是否已赋值
                     * @return DefaultTimeSwitch 是否已赋值
                     * 
                     */
                    bool DefaultTimeSwitchHasBeenSet() const;

                    /**
                     * 获取<p>The whole log matching rule is valid only when RechargeType is fullregex_log.</p>
                     * @return LogRegex <p>The whole log matching rule is valid only when RechargeType is fullregex_log.</p>
                     * 
                     */
                    std::string GetLogRegex() const;

                    /**
                     * 设置<p>The whole log matching rule is valid only when RechargeType is fullregex_log.</p>
                     * @param _logRegex <p>The whole log matching rule is valid only when RechargeType is fullregex_log.</p>
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
                     * 获取<p>Whether to upload logs that failed to be parsed. true for upload, false for not uploading.</p>
                     * @return UnMatchLogSwitch <p>Whether to upload logs that failed to be parsed. true for upload, false for not uploading.</p>
                     * 
                     */
                    bool GetUnMatchLogSwitch() const;

                    /**
                     * 设置<p>Whether to upload logs that failed to be parsed. true for upload, false for not uploading.</p>
                     * @param _unMatchLogSwitch <p>Whether to upload logs that failed to be parsed. true for upload, false for not uploading.</p>
                     * 
                     */
                    void SetUnMatchLogSwitch(const bool& _unMatchLogSwitch);

                    /**
                     * 判断参数 UnMatchLogSwitch 是否已赋值
                     * @return UnMatchLogSwitch 是否已赋值
                     * 
                     */
                    bool UnMatchLogSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Key name of parsing-failed logs</p>
                     * @return UnMatchLogKey <p>Key name of parsing-failed logs</p>
                     * 
                     */
                    std::string GetUnMatchLogKey() const;

                    /**
                     * 设置<p>Key name of parsing-failed logs</p>
                     * @param _unMatchLogKey <p>Key name of parsing-failed logs</p>
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
                     * 获取<p>Parsing failure log time source. 0: Current system time. 1: Kafka message timestamp.</p>
                     * @return UnMatchLogTimeSrc <p>Parsing failure log time source. 0: Current system time. 1: Kafka message timestamp.</p>
                     * 
                     */
                    uint64_t GetUnMatchLogTimeSrc() const;

                    /**
                     * 设置<p>Parsing failure log time source. 0: Current system time. 1: Kafka message timestamp.</p>
                     * @param _unMatchLogTimeSrc <p>Parsing failure log time source. 0: Current system time. 1: Kafka message timestamp.</p>
                     * 
                     */
                    void SetUnMatchLogTimeSrc(const uint64_t& _unMatchLogTimeSrc);

                    /**
                     * 判断参数 UnMatchLogTimeSrc 是否已赋值
                     * @return UnMatchLogTimeSrc 是否已赋值
                     * 
                     */
                    bool UnMatchLogTimeSrcHasBeenSet() const;

                    /**
                     * 获取<p>Default time source. 0: Current system time, 1: Kafka message timestamp</p>
                     * @return DefaultTimeSrc <p>Default time source. 0: Current system time, 1: Kafka message timestamp</p>
                     * 
                     */
                    uint64_t GetDefaultTimeSrc() const;

                    /**
                     * 设置<p>Default time source. 0: Current system time, 1: Kafka message timestamp</p>
                     * @param _defaultTimeSrc <p>Default time source. 0: Current system time, 1: Kafka message timestamp</p>
                     * 
                     */
                    void SetDefaultTimeSrc(const uint64_t& _defaultTimeSrc);

                    /**
                     * 判断参数 DefaultTimeSrc 是否已赋值
                     * @return DefaultTimeSrc 是否已赋值
                     * 
                     */
                    bool DefaultTimeSrcHasBeenSet() const;

                    /**
                     * 获取<p>Time field. Field name that represents time in logs.</p><ul><li>When DefaultTimeSwitch is false and the RechargeType data extraction mode is <code>json_log</code> JSON-file log or <code>fullregex_log</code> single-line full regex-file log, the TimeKey cannot be empty.</li></ul>
                     * @return TimeKey <p>Time field. Field name that represents time in logs.</p><ul><li>When DefaultTimeSwitch is false and the RechargeType data extraction mode is <code>json_log</code> JSON-file log or <code>fullregex_log</code> single-line full regex-file log, the TimeKey cannot be empty.</li></ul>
                     * 
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置<p>Time field. Field name that represents time in logs.</p><ul><li>When DefaultTimeSwitch is false and the RechargeType data extraction mode is <code>json_log</code> JSON-file log or <code>fullregex_log</code> single-line full regex-file log, the TimeKey cannot be empty.</li></ul>
                     * @param _timeKey <p>Time field. Field name that represents time in logs.</p><ul><li>When DefaultTimeSwitch is false and the RechargeType data extraction mode is <code>json_log</code> JSON-file log or <code>fullregex_log</code> single-line full regex-file log, the TimeKey cannot be empty.</li></ul>
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
                     * 获取<p>Time extraction regular expression.</p><ul><li>When DefaultTimeSwitch is false and the RechargeType data extraction mode is <code>minimalist_log</code> single-line full text - file log, the TimeRegex cannot be empty.</li><li>Only need to input the regular expression for the field representing time in logs. If multiple fields are matched to, the first one will be used.<br> For example: If the original log is: message with time 2022-08-08 14:20:20, you can set the retrieval time regular expression to \d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d</li></ul>
                     * @return TimeRegex <p>Time extraction regular expression.</p><ul><li>When DefaultTimeSwitch is false and the RechargeType data extraction mode is <code>minimalist_log</code> single-line full text - file log, the TimeRegex cannot be empty.</li><li>Only need to input the regular expression for the field representing time in logs. If multiple fields are matched to, the first one will be used.<br> For example: If the original log is: message with time 2022-08-08 14:20:20, you can set the retrieval time regular expression to \d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d</li></ul>
                     * 
                     */
                    std::string GetTimeRegex() const;

                    /**
                     * 设置<p>Time extraction regular expression.</p><ul><li>When DefaultTimeSwitch is false and the RechargeType data extraction mode is <code>minimalist_log</code> single-line full text - file log, the TimeRegex cannot be empty.</li><li>Only need to input the regular expression for the field representing time in logs. If multiple fields are matched to, the first one will be used.<br> For example: If the original log is: message with time 2022-08-08 14:20:20, you can set the retrieval time regular expression to \d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d</li></ul>
                     * @param _timeRegex <p>Time extraction regular expression.</p><ul><li>When DefaultTimeSwitch is false and the RechargeType data extraction mode is <code>minimalist_log</code> single-line full text - file log, the TimeRegex cannot be empty.</li><li>Only need to input the regular expression for the field representing time in logs. If multiple fields are matched to, the first one will be used.<br> For example: If the original log is: message with time 2022-08-08 14:20:20, you can set the retrieval time regular expression to \d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d</li></ul>
                     * 
                     */
                    void SetTimeRegex(const std::string& _timeRegex);

                    /**
                     * 判断参数 TimeRegex 是否已赋值
                     * @return TimeRegex 是否已赋值
                     * 
                     */
                    bool TimeRegexHasBeenSet() const;

                    /**
                     * 获取<p>Time field format.</p><ul><li>When DefaultTimeSwitch is false, TimeFormat cannot be empty.</li></ul>
                     * @return TimeFormat <p>Time field format.</p><ul><li>When DefaultTimeSwitch is false, TimeFormat cannot be empty.</li></ul>
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置<p>Time field format.</p><ul><li>When DefaultTimeSwitch is false, TimeFormat cannot be empty.</li></ul>
                     * @param _timeFormat <p>Time field format.</p><ul><li>When DefaultTimeSwitch is false, TimeFormat cannot be empty.</li></ul>
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
                     * 获取<p>Time field time zone.</p><ul><li><p>When DefaultTimeSwitch is false, TimeZone cannot be empty.</p></li><li><p>Time zone format rule<br>Prefix: Use GMT or UTC as the time zone benchmark<br>Offset:</p><ul><li><code>-</code> indicates a western time zone (later than the benchmark time)</li><li><code>+</code> indicates an eastern time zone (earlier than the benchmark time)</li><li>Format is ±HH:MM (hour:minute)</li></ul></li><li><p>Currently supported:<br><pre><code>&quot;GMT-12:00&quot; &quot;GMT-11:00&quot; &quot;GMT-10:00&quot; &quot;GMT-09:30&quot; &quot;GMT-09:00&quot; &quot;GMT-08:00&quot; &quot;GMT-07:00&quot; &quot;GMT-06:00&quot; &quot;GMT-05:00&quot; &quot;GMT-04:00&quot; &quot;GMT-03:30&quot; &quot;GMT-03:00&quot; &quot;GMT-02:00&quot; &quot;GMT-01:00&quot; &quot;GMT+00:00&quot;&quot;GMT+01:00&quot;&quot;GMT+02:00&quot;&quot;GMT+03:30&quot;&quot;GMT+04:00&quot;&quot;GMT+04:30&quot;&quot;GMT+05:00&quot;&quot;GMT+05:30&quot;&quot;GMT+05:45&quot;&quot;GMT+06:00&quot;&quot;GMT+06:30&quot;&quot;GMT+07:00&quot;&quot;GMT+08:00&quot;&quot;GMT+09:00&quot;&quot;GMT+09:30&quot;&quot;GMT+10:00&quot;&quot;GMT+10:30&quot;&quot;GMT+11:00&quot;&quot;GMT+11:30&quot;&quot;GMT+12:00&quot;&quot;GMT+12:45&quot;&quot;GMT+13:00&quot;&quot;GMT+14:00&quot;&quot;UTC-11:00&quot;&quot;UTC-10:00&quot;&quot;UTC-09:00&quot;&quot;UTC-08:00&quot;&quot;UTC-12:00&quot;&quot;UTC-07:00&quot;&quot;UTC-06:00&quot;&quot;UTC-05:00&quot;&quot;UTC-04:30&quot;&quot;UTC-04:00&quot;&quot;UTC-03:30&quot;&quot;UTC-03:00&quot;&quot;UTC-02:00&quot;&quot;UTC-01:00&quot;&quot;UTC+00:00&quot;&quot;UTC+01:00&quot;&quot;UTC+02:00&quot;&quot;UTC+03:00&quot;&quot;UTC+03:30&quot;&quot;UTC+04:00&quot;&quot;UTC+04:30&quot;&quot;UTC+05:00&quot;&quot;UTC+05:45&quot;&quot;UTC+06:00&quot;&quot;UTC+06:30&quot;&quot;UTC+07:00&quot;&quot;UTC+08:00&quot;&quot;UTC+09:00&quot;&quot;UTC+09:30&quot;&quot;UTC+10:00&quot;&quot;UTC+11:00&quot;&quot;UTC+12:00&quot;&quot;UTC+13:00&quot;</code></pre></p></li></ul>
                     * @return TimeZone <p>Time field time zone.</p><ul><li><p>When DefaultTimeSwitch is false, TimeZone cannot be empty.</p></li><li><p>Time zone format rule<br>Prefix: Use GMT or UTC as the time zone benchmark<br>Offset:</p><ul><li><code>-</code> indicates a western time zone (later than the benchmark time)</li><li><code>+</code> indicates an eastern time zone (earlier than the benchmark time)</li><li>Format is ±HH:MM (hour:minute)</li></ul></li><li><p>Currently supported:<br><pre><code>&quot;GMT-12:00&quot; &quot;GMT-11:00&quot; &quot;GMT-10:00&quot; &quot;GMT-09:30&quot; &quot;GMT-09:00&quot; &quot;GMT-08:00&quot; &quot;GMT-07:00&quot; &quot;GMT-06:00&quot; &quot;GMT-05:00&quot; &quot;GMT-04:00&quot; &quot;GMT-03:30&quot; &quot;GMT-03:00&quot; &quot;GMT-02:00&quot; &quot;GMT-01:00&quot; &quot;GMT+00:00&quot;&quot;GMT+01:00&quot;&quot;GMT+02:00&quot;&quot;GMT+03:30&quot;&quot;GMT+04:00&quot;&quot;GMT+04:30&quot;&quot;GMT+05:00&quot;&quot;GMT+05:30&quot;&quot;GMT+05:45&quot;&quot;GMT+06:00&quot;&quot;GMT+06:30&quot;&quot;GMT+07:00&quot;&quot;GMT+08:00&quot;&quot;GMT+09:00&quot;&quot;GMT+09:30&quot;&quot;GMT+10:00&quot;&quot;GMT+10:30&quot;&quot;GMT+11:00&quot;&quot;GMT+11:30&quot;&quot;GMT+12:00&quot;&quot;GMT+12:45&quot;&quot;GMT+13:00&quot;&quot;GMT+14:00&quot;&quot;UTC-11:00&quot;&quot;UTC-10:00&quot;&quot;UTC-09:00&quot;&quot;UTC-08:00&quot;&quot;UTC-12:00&quot;&quot;UTC-07:00&quot;&quot;UTC-06:00&quot;&quot;UTC-05:00&quot;&quot;UTC-04:30&quot;&quot;UTC-04:00&quot;&quot;UTC-03:30&quot;&quot;UTC-03:00&quot;&quot;UTC-02:00&quot;&quot;UTC-01:00&quot;&quot;UTC+00:00&quot;&quot;UTC+01:00&quot;&quot;UTC+02:00&quot;&quot;UTC+03:00&quot;&quot;UTC+03:30&quot;&quot;UTC+04:00&quot;&quot;UTC+04:30&quot;&quot;UTC+05:00&quot;&quot;UTC+05:45&quot;&quot;UTC+06:00&quot;&quot;UTC+06:30&quot;&quot;UTC+07:00&quot;&quot;UTC+08:00&quot;&quot;UTC+09:00&quot;&quot;UTC+09:30&quot;&quot;UTC+10:00&quot;&quot;UTC+11:00&quot;&quot;UTC+12:00&quot;&quot;UTC+13:00&quot;</code></pre></p></li></ul>
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置<p>Time field time zone.</p><ul><li><p>When DefaultTimeSwitch is false, TimeZone cannot be empty.</p></li><li><p>Time zone format rule<br>Prefix: Use GMT or UTC as the time zone benchmark<br>Offset:</p><ul><li><code>-</code> indicates a western time zone (later than the benchmark time)</li><li><code>+</code> indicates an eastern time zone (earlier than the benchmark time)</li><li>Format is ±HH:MM (hour:minute)</li></ul></li><li><p>Currently supported:<br><pre><code>&quot;GMT-12:00&quot; &quot;GMT-11:00&quot; &quot;GMT-10:00&quot; &quot;GMT-09:30&quot; &quot;GMT-09:00&quot; &quot;GMT-08:00&quot; &quot;GMT-07:00&quot; &quot;GMT-06:00&quot; &quot;GMT-05:00&quot; &quot;GMT-04:00&quot; &quot;GMT-03:30&quot; &quot;GMT-03:00&quot; &quot;GMT-02:00&quot; &quot;GMT-01:00&quot; &quot;GMT+00:00&quot;&quot;GMT+01:00&quot;&quot;GMT+02:00&quot;&quot;GMT+03:30&quot;&quot;GMT+04:00&quot;&quot;GMT+04:30&quot;&quot;GMT+05:00&quot;&quot;GMT+05:30&quot;&quot;GMT+05:45&quot;&quot;GMT+06:00&quot;&quot;GMT+06:30&quot;&quot;GMT+07:00&quot;&quot;GMT+08:00&quot;&quot;GMT+09:00&quot;&quot;GMT+09:30&quot;&quot;GMT+10:00&quot;&quot;GMT+10:30&quot;&quot;GMT+11:00&quot;&quot;GMT+11:30&quot;&quot;GMT+12:00&quot;&quot;GMT+12:45&quot;&quot;GMT+13:00&quot;&quot;GMT+14:00&quot;&quot;UTC-11:00&quot;&quot;UTC-10:00&quot;&quot;UTC-09:00&quot;&quot;UTC-08:00&quot;&quot;UTC-12:00&quot;&quot;UTC-07:00&quot;&quot;UTC-06:00&quot;&quot;UTC-05:00&quot;&quot;UTC-04:30&quot;&quot;UTC-04:00&quot;&quot;UTC-03:30&quot;&quot;UTC-03:00&quot;&quot;UTC-02:00&quot;&quot;UTC-01:00&quot;&quot;UTC+00:00&quot;&quot;UTC+01:00&quot;&quot;UTC+02:00&quot;&quot;UTC+03:00&quot;&quot;UTC+03:30&quot;&quot;UTC+04:00&quot;&quot;UTC+04:30&quot;&quot;UTC+05:00&quot;&quot;UTC+05:45&quot;&quot;UTC+06:00&quot;&quot;UTC+06:30&quot;&quot;UTC+07:00&quot;&quot;UTC+08:00&quot;&quot;UTC+09:00&quot;&quot;UTC+09:30&quot;&quot;UTC+10:00&quot;&quot;UTC+11:00&quot;&quot;UTC+12:00&quot;&quot;UTC+13:00&quot;</code></pre></p></li></ul>
                     * @param _timeZone <p>Time field time zone.</p><ul><li><p>When DefaultTimeSwitch is false, TimeZone cannot be empty.</p></li><li><p>Time zone format rule<br>Prefix: Use GMT or UTC as the time zone benchmark<br>Offset:</p><ul><li><code>-</code> indicates a western time zone (later than the benchmark time)</li><li><code>+</code> indicates an eastern time zone (earlier than the benchmark time)</li><li>Format is ±HH:MM (hour:minute)</li></ul></li><li><p>Currently supported:<br><pre><code>&quot;GMT-12:00&quot; &quot;GMT-11:00&quot; &quot;GMT-10:00&quot; &quot;GMT-09:30&quot; &quot;GMT-09:00&quot; &quot;GMT-08:00&quot; &quot;GMT-07:00&quot; &quot;GMT-06:00&quot; &quot;GMT-05:00&quot; &quot;GMT-04:00&quot; &quot;GMT-03:30&quot; &quot;GMT-03:00&quot; &quot;GMT-02:00&quot; &quot;GMT-01:00&quot; &quot;GMT+00:00&quot;&quot;GMT+01:00&quot;&quot;GMT+02:00&quot;&quot;GMT+03:30&quot;&quot;GMT+04:00&quot;&quot;GMT+04:30&quot;&quot;GMT+05:00&quot;&quot;GMT+05:30&quot;&quot;GMT+05:45&quot;&quot;GMT+06:00&quot;&quot;GMT+06:30&quot;&quot;GMT+07:00&quot;&quot;GMT+08:00&quot;&quot;GMT+09:00&quot;&quot;GMT+09:30&quot;&quot;GMT+10:00&quot;&quot;GMT+10:30&quot;&quot;GMT+11:00&quot;&quot;GMT+11:30&quot;&quot;GMT+12:00&quot;&quot;GMT+12:45&quot;&quot;GMT+13:00&quot;&quot;GMT+14:00&quot;&quot;UTC-11:00&quot;&quot;UTC-10:00&quot;&quot;UTC-09:00&quot;&quot;UTC-08:00&quot;&quot;UTC-12:00&quot;&quot;UTC-07:00&quot;&quot;UTC-06:00&quot;&quot;UTC-05:00&quot;&quot;UTC-04:30&quot;&quot;UTC-04:00&quot;&quot;UTC-03:30&quot;&quot;UTC-03:00&quot;&quot;UTC-02:00&quot;&quot;UTC-01:00&quot;&quot;UTC+00:00&quot;&quot;UTC+01:00&quot;&quot;UTC+02:00&quot;&quot;UTC+03:00&quot;&quot;UTC+03:30&quot;&quot;UTC+04:00&quot;&quot;UTC+04:30&quot;&quot;UTC+05:00&quot;&quot;UTC+05:45&quot;&quot;UTC+06:00&quot;&quot;UTC+06:30&quot;&quot;UTC+07:00&quot;&quot;UTC+08:00&quot;&quot;UTC+09:00&quot;&quot;UTC+09:30&quot;&quot;UTC+10:00&quot;&quot;UTC+11:00&quot;&quot;UTC+12:00&quot;&quot;UTC+13:00&quot;</code></pre></p></li></ul>
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取<p>Metadata information, Kafka import supports kafka_topic, kafka_partition, kafka_offset, kafka_timestamp</p>
                     * @return Metadata <p>Metadata information, Kafka import supports kafka_topic, kafka_partition, kafka_offset, kafka_timestamp</p>
                     * 
                     */
                    std::vector<std::string> GetMetadata() const;

                    /**
                     * 设置<p>Metadata information, Kafka import supports kafka_topic, kafka_partition, kafka_offset, kafka_timestamp</p>
                     * @param _metadata <p>Metadata information, Kafka import supports kafka_topic, kafka_partition, kafka_offset, kafka_timestamp</p>
                     * 
                     */
                    void SetMetadata(const std::vector<std::string>& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取<p>log Key list, required when RechargeType is full_regex_log or delimiter_log.</p>
                     * @return Keys <p>log Key list, required when RechargeType is full_regex_log or delimiter_log.</p>
                     * 
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置<p>log Key list, required when RechargeType is full_regex_log or delimiter_log.</p>
                     * @param _keys <p>log Key list, required when RechargeType is full_regex_log or delimiter_log.</p>
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
                     * 获取<p>json parsing mode, enable first level data parsing</p>
                     * @return ParseArray <p>json parsing mode, enable first level data parsing</p>
                     * 
                     */
                    bool GetParseArray() const;

                    /**
                     * 设置<p>json parsing mode, enable first level data parsing</p>
                     * @param _parseArray <p>json parsing mode, enable first level data parsing</p>
                     * 
                     */
                    void SetParseArray(const bool& _parseArray);

                    /**
                     * 判断参数 ParseArray 是否已赋值
                     * @return ParseArray 是否已赋值
                     * 
                     */
                    bool ParseArrayHasBeenSet() const;

                    /**
                     * 获取<p>Delimiter parsing mode - Separator<br>This field is required when the parsing format is delimiter extraction.</p>
                     * @return Delimiter <p>Delimiter parsing mode - Separator<br>This field is required when the parsing format is delimiter extraction.</p>
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置<p>Delimiter parsing mode - Separator<br>This field is required when the parsing format is delimiter extraction.</p>
                     * @param _delimiter <p>Delimiter parsing mode - Separator<br>This field is required when the parsing format is delimiter extraction.</p>
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
                     * 获取<p>JSON nest unfold configuration. This parameter is valid only when RechargeType is json_log. If it is not passed, it is disabled.</p>
                     * @return JsonExpand <p>JSON nest unfold configuration. This parameter is valid only when RechargeType is json_log. If it is not passed, it is disabled.</p>
                     * 
                     */
                    JsonExpandInfo GetJsonExpand() const;

                    /**
                     * 设置<p>JSON nest unfold configuration. This parameter is valid only when RechargeType is json_log. If it is not passed, it is disabled.</p>
                     * @param _jsonExpand <p>JSON nest unfold configuration. This parameter is valid only when RechargeType is json_log. If it is not passed, it is disabled.</p>
                     * 
                     */
                    void SetJsonExpand(const JsonExpandInfo& _jsonExpand);

                    /**
                     * 判断参数 JsonExpand 是否已赋值
                     * @return JsonExpand 是否已赋值
                     * 
                     */
                    bool JsonExpandHasBeenSet() const;

                private:

                    /**
                     * <p>Import type, support json_log: JSON logs, minimalist_log: single-line full-text log, fullregex_log: single-line full regular expression</p>
                     */
                    std::string m_rechargeType;
                    bool m_rechargeTypeHasBeenSet;

                    /**
                     * <p>Parse encoding format. 0: UTF-8 (default value), 1: GBK</p>
                     */
                    uint64_t m_encodingFormat;
                    bool m_encodingFormatHasBeenSet;

                    /**
                     * <p>Use default time status. true: once enabled, current system time or Kafka message timestamp will be used as log timestamp; false: when turned off, time field in the log will be used as log timestamp. Default: true</p>
                     */
                    bool m_defaultTimeSwitch;
                    bool m_defaultTimeSwitchHasBeenSet;

                    /**
                     * <p>The whole log matching rule is valid only when RechargeType is fullregex_log.</p>
                     */
                    std::string m_logRegex;
                    bool m_logRegexHasBeenSet;

                    /**
                     * <p>Whether to upload logs that failed to be parsed. true for upload, false for not uploading.</p>
                     */
                    bool m_unMatchLogSwitch;
                    bool m_unMatchLogSwitchHasBeenSet;

                    /**
                     * <p>Key name of parsing-failed logs</p>
                     */
                    std::string m_unMatchLogKey;
                    bool m_unMatchLogKeyHasBeenSet;

                    /**
                     * <p>Parsing failure log time source. 0: Current system time. 1: Kafka message timestamp.</p>
                     */
                    uint64_t m_unMatchLogTimeSrc;
                    bool m_unMatchLogTimeSrcHasBeenSet;

                    /**
                     * <p>Default time source. 0: Current system time, 1: Kafka message timestamp</p>
                     */
                    uint64_t m_defaultTimeSrc;
                    bool m_defaultTimeSrcHasBeenSet;

                    /**
                     * <p>Time field. Field name that represents time in logs.</p><ul><li>When DefaultTimeSwitch is false and the RechargeType data extraction mode is <code>json_log</code> JSON-file log or <code>fullregex_log</code> single-line full regex-file log, the TimeKey cannot be empty.</li></ul>
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * <p>Time extraction regular expression.</p><ul><li>When DefaultTimeSwitch is false and the RechargeType data extraction mode is <code>minimalist_log</code> single-line full text - file log, the TimeRegex cannot be empty.</li><li>Only need to input the regular expression for the field representing time in logs. If multiple fields are matched to, the first one will be used.<br> For example: If the original log is: message with time 2022-08-08 14:20:20, you can set the retrieval time regular expression to \d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d</li></ul>
                     */
                    std::string m_timeRegex;
                    bool m_timeRegexHasBeenSet;

                    /**
                     * <p>Time field format.</p><ul><li>When DefaultTimeSwitch is false, TimeFormat cannot be empty.</li></ul>
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * <p>Time field time zone.</p><ul><li><p>When DefaultTimeSwitch is false, TimeZone cannot be empty.</p></li><li><p>Time zone format rule<br>Prefix: Use GMT or UTC as the time zone benchmark<br>Offset:</p><ul><li><code>-</code> indicates a western time zone (later than the benchmark time)</li><li><code>+</code> indicates an eastern time zone (earlier than the benchmark time)</li><li>Format is ±HH:MM (hour:minute)</li></ul></li><li><p>Currently supported:<br><pre><code>&quot;GMT-12:00&quot; &quot;GMT-11:00&quot; &quot;GMT-10:00&quot; &quot;GMT-09:30&quot; &quot;GMT-09:00&quot; &quot;GMT-08:00&quot; &quot;GMT-07:00&quot; &quot;GMT-06:00&quot; &quot;GMT-05:00&quot; &quot;GMT-04:00&quot; &quot;GMT-03:30&quot; &quot;GMT-03:00&quot; &quot;GMT-02:00&quot; &quot;GMT-01:00&quot; &quot;GMT+00:00&quot;&quot;GMT+01:00&quot;&quot;GMT+02:00&quot;&quot;GMT+03:30&quot;&quot;GMT+04:00&quot;&quot;GMT+04:30&quot;&quot;GMT+05:00&quot;&quot;GMT+05:30&quot;&quot;GMT+05:45&quot;&quot;GMT+06:00&quot;&quot;GMT+06:30&quot;&quot;GMT+07:00&quot;&quot;GMT+08:00&quot;&quot;GMT+09:00&quot;&quot;GMT+09:30&quot;&quot;GMT+10:00&quot;&quot;GMT+10:30&quot;&quot;GMT+11:00&quot;&quot;GMT+11:30&quot;&quot;GMT+12:00&quot;&quot;GMT+12:45&quot;&quot;GMT+13:00&quot;&quot;GMT+14:00&quot;&quot;UTC-11:00&quot;&quot;UTC-10:00&quot;&quot;UTC-09:00&quot;&quot;UTC-08:00&quot;&quot;UTC-12:00&quot;&quot;UTC-07:00&quot;&quot;UTC-06:00&quot;&quot;UTC-05:00&quot;&quot;UTC-04:30&quot;&quot;UTC-04:00&quot;&quot;UTC-03:30&quot;&quot;UTC-03:00&quot;&quot;UTC-02:00&quot;&quot;UTC-01:00&quot;&quot;UTC+00:00&quot;&quot;UTC+01:00&quot;&quot;UTC+02:00&quot;&quot;UTC+03:00&quot;&quot;UTC+03:30&quot;&quot;UTC+04:00&quot;&quot;UTC+04:30&quot;&quot;UTC+05:00&quot;&quot;UTC+05:45&quot;&quot;UTC+06:00&quot;&quot;UTC+06:30&quot;&quot;UTC+07:00&quot;&quot;UTC+08:00&quot;&quot;UTC+09:00&quot;&quot;UTC+09:30&quot;&quot;UTC+10:00&quot;&quot;UTC+11:00&quot;&quot;UTC+12:00&quot;&quot;UTC+13:00&quot;</code></pre></p></li></ul>
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * <p>Metadata information, Kafka import supports kafka_topic, kafka_partition, kafka_offset, kafka_timestamp</p>
                     */
                    std::vector<std::string> m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>log Key list, required when RechargeType is full_regex_log or delimiter_log.</p>
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * <p>json parsing mode, enable first level data parsing</p>
                     */
                    bool m_parseArray;
                    bool m_parseArrayHasBeenSet;

                    /**
                     * <p>Delimiter parsing mode - Separator<br>This field is required when the parsing format is delimiter extraction.</p>
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * <p>JSON nest unfold configuration. This parameter is valid only when RechargeType is json_log. If it is not passed, it is disabled.</p>
                     */
                    JsonExpandInfo m_jsonExpand;
                    bool m_jsonExpandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_LOGRECHARGERULEINFO_H_
