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
                     * 获取Import type. Valid values: `json_log` (JSON logs), `minimalist_log` (single-line full text), and fullregex_log (single-line full regex)
                     * @return RechargeType Import type. Valid values: `json_log` (JSON logs), `minimalist_log` (single-line full text), and fullregex_log (single-line full regex)
                     * 
                     */
                    std::string GetRechargeType() const;

                    /**
                     * 设置Import type. Valid values: `json_log` (JSON logs), `minimalist_log` (single-line full text), and fullregex_log (single-line full regex)
                     * @param _rechargeType Import type. Valid values: `json_log` (JSON logs), `minimalist_log` (single-line full text), and fullregex_log (single-line full regex)
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
                     * 获取Encoding format. Valid values: 0 (default, UTF-8) and 1 GBK).
                     * @return EncodingFormat Encoding format. Valid values: 0 (default, UTF-8) and 1 GBK).
                     * 
                     */
                    uint64_t GetEncodingFormat() const;

                    /**
                     * 设置Encoding format. Valid values: 0 (default, UTF-8) and 1 GBK).
                     * @param _encodingFormat Encoding format. Valid values: 0 (default, UTF-8) and 1 GBK).
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
                     * 获取Use default time status. true: when enabled, current system time or Kafka message timestamp will be used as log timestamp. false: when disabled, time field in the log will be used as log timestamp. Default: true.
                     * @return DefaultTimeSwitch Use default time status. true: when enabled, current system time or Kafka message timestamp will be used as log timestamp. false: when disabled, time field in the log will be used as log timestamp. Default: true.
                     * 
                     */
                    bool GetDefaultTimeSwitch() const;

                    /**
                     * 设置Use default time status. true: when enabled, current system time or Kafka message timestamp will be used as log timestamp. false: when disabled, time field in the log will be used as log timestamp. Default: true.
                     * @param _defaultTimeSwitch Use default time status. true: when enabled, current system time or Kafka message timestamp will be used as log timestamp. false: when disabled, time field in the log will be used as log timestamp. Default: true.
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
                     * 获取Full log matching rule. It is valid only when RechargeType is fullregex_log.
                     * @return LogRegex Full log matching rule. It is valid only when RechargeType is fullregex_log.
                     * 
                     */
                    std::string GetLogRegex() const;

                    /**
                     * 设置Full log matching rule. It is valid only when RechargeType is fullregex_log.
                     * @param _logRegex Full log matching rule. It is valid only when RechargeType is fullregex_log.
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
                     * 获取Whether to upload the logs that failed to be parsed. Valid values: `true` and `false`.
                     * @return UnMatchLogSwitch Whether to upload the logs that failed to be parsed. Valid values: `true` and `false`.
                     * 
                     */
                    bool GetUnMatchLogSwitch() const;

                    /**
                     * 设置Whether to upload the logs that failed to be parsed. Valid values: `true` and `false`.
                     * @param _unMatchLogSwitch Whether to upload the logs that failed to be parsed. Valid values: `true` and `false`.
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
                     * 获取key name of parsing-failed logs
                     * @return UnMatchLogKey key name of parsing-failed logs
                     * 
                     */
                    std::string GetUnMatchLogKey() const;

                    /**
                     * 设置key name of parsing-failed logs
                     * @param _unMatchLogKey key name of parsing-failed logs
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
                     * 获取Time source for parsing failure logs. 0: current time of the system; 1: Kafka message timestamp.
                     * @return UnMatchLogTimeSrc Time source for parsing failure logs. 0: current time of the system; 1: Kafka message timestamp.
                     * 
                     */
                    uint64_t GetUnMatchLogTimeSrc() const;

                    /**
                     * 设置Time source for parsing failure logs. 0: current time of the system; 1: Kafka message timestamp.
                     * @param _unMatchLogTimeSrc Time source for parsing failure logs. 0: current time of the system; 1: Kafka message timestamp.
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
                     * 获取Default time source. 0: Current system time; 1: Kafka message timestamp.
                     * @return DefaultTimeSrc Default time source. 0: Current system time; 1: Kafka message timestamp.
                     * 
                     */
                    uint64_t GetDefaultTimeSrc() const;

                    /**
                     * 设置Default time source. 0: Current system time; 1: Kafka message timestamp.
                     * @param _defaultTimeSrc Default time source. 0: Current system time; 1: Kafka message timestamp.
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
                     * 获取Time field. Field name representing time in logs.

-When DefaultTimeSwitch is false and RechargeType data extraction mode is `json_log` JSON file log or `fullregex_log` single-line full regex file log, TimeKey cannot be empty.
                     * @return TimeKey Time field. Field name representing time in logs.

-When DefaultTimeSwitch is false and RechargeType data extraction mode is `json_log` JSON file log or `fullregex_log` single-line full regex file log, TimeKey cannot be empty.
                     * 
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置Time field. Field name representing time in logs.

-When DefaultTimeSwitch is false and RechargeType data extraction mode is `json_log` JSON file log or `fullregex_log` single-line full regex file log, TimeKey cannot be empty.
                     * @param _timeKey Time field. Field name representing time in logs.

-When DefaultTimeSwitch is false and RechargeType data extraction mode is `json_log` JSON file log or `fullregex_log` single-line full regex file log, TimeKey cannot be empty.
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
                     * 获取Time extraction regular expression.
-When DefaultTimeSwitch is false and the data extraction mode of RechargeType is `minimalist_log` (single-line full text - file log), TimeRegex cannot be empty.
-Only need to input the regular expression representing the time field in logs. If multiple fields are matched to, the first will be used.
Example: The original log is "message with time 2022-08-08 14:20:20". You can set the retrieval time regex to \d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d.

                     * @return TimeRegex Time extraction regular expression.
-When DefaultTimeSwitch is false and the data extraction mode of RechargeType is `minimalist_log` (single-line full text - file log), TimeRegex cannot be empty.
-Only need to input the regular expression representing the time field in logs. If multiple fields are matched to, the first will be used.
Example: The original log is "message with time 2022-08-08 14:20:20". You can set the retrieval time regex to \d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d.

                     * 
                     */
                    std::string GetTimeRegex() const;

                    /**
                     * 设置Time extraction regular expression.
-When DefaultTimeSwitch is false and the data extraction mode of RechargeType is `minimalist_log` (single-line full text - file log), TimeRegex cannot be empty.
-Only need to input the regular expression representing the time field in logs. If multiple fields are matched to, the first will be used.
Example: The original log is "message with time 2022-08-08 14:20:20". You can set the retrieval time regex to \d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d.

                     * @param _timeRegex Time extraction regular expression.
-When DefaultTimeSwitch is false and the data extraction mode of RechargeType is `minimalist_log` (single-line full text - file log), TimeRegex cannot be empty.
-Only need to input the regular expression representing the time field in logs. If multiple fields are matched to, the first will be used.
Example: The original log is "message with time 2022-08-08 14:20:20". You can set the retrieval time regex to \d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d.

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
                     * 获取Time field format.
-When DefaultTimeSwitch is false, TimeFormat cannot be empty.
                     * @return TimeFormat Time field format.
-When DefaultTimeSwitch is false, TimeFormat cannot be empty.
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置Time field format.
-When DefaultTimeSwitch is false, TimeFormat cannot be empty.
                     * @param _timeFormat Time field format.
-When DefaultTimeSwitch is false, TimeFormat cannot be empty.
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
                     * 获取Time field time zone.
-When DefaultTimeSwitch is false, TimeZone cannot be empty.
-Time zone format rule
Prefix: Use GMT or UTC as the time zone benchmark.
Offset:
-`-` indicates a western time zone (later than the benchmark time).
-`+` means the east time zone (earlier than the benchmark time).
-Format ±HH:MM (hr:min)

-Currently supported:
```
"GMT-12:00" 
"GMT-11:00" 
"GMT-10:00" 
"GMT-09:30" 
"GMT-09:00" 
"GMT-08:00" 
"GMT-07:00" 
"GMT-06:00" 
"GMT-05:00" 
"GMT-04:00" 
"GMT-03:30" 
"GMT-03:00" 
"GMT-02:00" 
"GMT-01:00" 
"GMT+00:00"
"GMT+01:00"
"GMT+02:00"
"GMT+03:30"
"GMT+04:00"
"GMT+04:30"
"GMT+05:00"
"GMT+05:30"
"GMT+05:45"
"GMT+06:00"
"GMT+06:30"
"GMT+07:00"
"GMT+08:00"
"GMT+09:00"
"GMT+09:30"
"GMT+10:00"
"GMT+10:30"
"GMT+11:00"
"GMT+11:30"
"GMT+12:00"
"GMT+12:45"
"GMT+13:00"
"GMT+14:00"
"UTC-11:00"
"UTC-10:00"
"UTC-09:00"
"UTC-08:00"
"UTC-12:00"
"UTC-07:00"
"UTC-06:00"
"UTC-05:00"
"UTC-04:30"
"UTC-04:00"
"UTC-03:30"
"UTC-03:00"
"UTC-02:00"
"UTC-01:00"
"UTC+00:00"
"UTC+01:00"
"UTC+02:00"
"UTC+03:00"
"UTC+03:30"
"UTC+04:00"
"UTC+04:30"
"UTC+05:00"
"UTC+05:45"
"UTC+06:00"
"UTC+06:30"
"UTC+07:00"
"UTC+08:00"
"UTC+09:00"
"UTC+09:30"
"UTC+10:00"
"UTC+11:00"
"UTC+12:00"
"UTC+13:00"
```
                     * @return TimeZone Time field time zone.
-When DefaultTimeSwitch is false, TimeZone cannot be empty.
-Time zone format rule
Prefix: Use GMT or UTC as the time zone benchmark.
Offset:
-`-` indicates a western time zone (later than the benchmark time).
-`+` means the east time zone (earlier than the benchmark time).
-Format ±HH:MM (hr:min)

-Currently supported:
```
"GMT-12:00" 
"GMT-11:00" 
"GMT-10:00" 
"GMT-09:30" 
"GMT-09:00" 
"GMT-08:00" 
"GMT-07:00" 
"GMT-06:00" 
"GMT-05:00" 
"GMT-04:00" 
"GMT-03:30" 
"GMT-03:00" 
"GMT-02:00" 
"GMT-01:00" 
"GMT+00:00"
"GMT+01:00"
"GMT+02:00"
"GMT+03:30"
"GMT+04:00"
"GMT+04:30"
"GMT+05:00"
"GMT+05:30"
"GMT+05:45"
"GMT+06:00"
"GMT+06:30"
"GMT+07:00"
"GMT+08:00"
"GMT+09:00"
"GMT+09:30"
"GMT+10:00"
"GMT+10:30"
"GMT+11:00"
"GMT+11:30"
"GMT+12:00"
"GMT+12:45"
"GMT+13:00"
"GMT+14:00"
"UTC-11:00"
"UTC-10:00"
"UTC-09:00"
"UTC-08:00"
"UTC-12:00"
"UTC-07:00"
"UTC-06:00"
"UTC-05:00"
"UTC-04:30"
"UTC-04:00"
"UTC-03:30"
"UTC-03:00"
"UTC-02:00"
"UTC-01:00"
"UTC+00:00"
"UTC+01:00"
"UTC+02:00"
"UTC+03:00"
"UTC+03:30"
"UTC+04:00"
"UTC+04:30"
"UTC+05:00"
"UTC+05:45"
"UTC+06:00"
"UTC+06:30"
"UTC+07:00"
"UTC+08:00"
"UTC+09:00"
"UTC+09:30"
"UTC+10:00"
"UTC+11:00"
"UTC+12:00"
"UTC+13:00"
```
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置Time field time zone.
-When DefaultTimeSwitch is false, TimeZone cannot be empty.
-Time zone format rule
Prefix: Use GMT or UTC as the time zone benchmark.
Offset:
-`-` indicates a western time zone (later than the benchmark time).
-`+` means the east time zone (earlier than the benchmark time).
-Format ±HH:MM (hr:min)

-Currently supported:
```
"GMT-12:00" 
"GMT-11:00" 
"GMT-10:00" 
"GMT-09:30" 
"GMT-09:00" 
"GMT-08:00" 
"GMT-07:00" 
"GMT-06:00" 
"GMT-05:00" 
"GMT-04:00" 
"GMT-03:30" 
"GMT-03:00" 
"GMT-02:00" 
"GMT-01:00" 
"GMT+00:00"
"GMT+01:00"
"GMT+02:00"
"GMT+03:30"
"GMT+04:00"
"GMT+04:30"
"GMT+05:00"
"GMT+05:30"
"GMT+05:45"
"GMT+06:00"
"GMT+06:30"
"GMT+07:00"
"GMT+08:00"
"GMT+09:00"
"GMT+09:30"
"GMT+10:00"
"GMT+10:30"
"GMT+11:00"
"GMT+11:30"
"GMT+12:00"
"GMT+12:45"
"GMT+13:00"
"GMT+14:00"
"UTC-11:00"
"UTC-10:00"
"UTC-09:00"
"UTC-08:00"
"UTC-12:00"
"UTC-07:00"
"UTC-06:00"
"UTC-05:00"
"UTC-04:30"
"UTC-04:00"
"UTC-03:30"
"UTC-03:00"
"UTC-02:00"
"UTC-01:00"
"UTC+00:00"
"UTC+01:00"
"UTC+02:00"
"UTC+03:00"
"UTC+03:30"
"UTC+04:00"
"UTC+04:30"
"UTC+05:00"
"UTC+05:45"
"UTC+06:00"
"UTC+06:30"
"UTC+07:00"
"UTC+08:00"
"UTC+09:00"
"UTC+09:30"
"UTC+10:00"
"UTC+11:00"
"UTC+12:00"
"UTC+13:00"
```
                     * @param _timeZone Time field time zone.
-When DefaultTimeSwitch is false, TimeZone cannot be empty.
-Time zone format rule
Prefix: Use GMT or UTC as the time zone benchmark.
Offset:
-`-` indicates a western time zone (later than the benchmark time).
-`+` means the east time zone (earlier than the benchmark time).
-Format ±HH:MM (hr:min)

-Currently supported:
```
"GMT-12:00" 
"GMT-11:00" 
"GMT-10:00" 
"GMT-09:30" 
"GMT-09:00" 
"GMT-08:00" 
"GMT-07:00" 
"GMT-06:00" 
"GMT-05:00" 
"GMT-04:00" 
"GMT-03:30" 
"GMT-03:00" 
"GMT-02:00" 
"GMT-01:00" 
"GMT+00:00"
"GMT+01:00"
"GMT+02:00"
"GMT+03:30"
"GMT+04:00"
"GMT+04:30"
"GMT+05:00"
"GMT+05:30"
"GMT+05:45"
"GMT+06:00"
"GMT+06:30"
"GMT+07:00"
"GMT+08:00"
"GMT+09:00"
"GMT+09:30"
"GMT+10:00"
"GMT+10:30"
"GMT+11:00"
"GMT+11:30"
"GMT+12:00"
"GMT+12:45"
"GMT+13:00"
"GMT+14:00"
"UTC-11:00"
"UTC-10:00"
"UTC-09:00"
"UTC-08:00"
"UTC-12:00"
"UTC-07:00"
"UTC-06:00"
"UTC-05:00"
"UTC-04:30"
"UTC-04:00"
"UTC-03:30"
"UTC-03:00"
"UTC-02:00"
"UTC-01:00"
"UTC+00:00"
"UTC+01:00"
"UTC+02:00"
"UTC+03:00"
"UTC+03:30"
"UTC+04:00"
"UTC+04:30"
"UTC+05:00"
"UTC+05:45"
"UTC+06:00"
"UTC+06:30"
"UTC+07:00"
"UTC+08:00"
"UTC+09:00"
"UTC+09:30"
"UTC+10:00"
"UTC+11:00"
"UTC+12:00"
"UTC+13:00"
```
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
                     * 获取Metadata information. Kafka import supports kafka_topic, kafka_partition, kafka_offset, and kafka_timestamp.
                     * @return Metadata Metadata information. Kafka import supports kafka_topic, kafka_partition, kafka_offset, and kafka_timestamp.
                     * 
                     */
                    std::vector<std::string> GetMetadata() const;

                    /**
                     * 设置Metadata information. Kafka import supports kafka_topic, kafka_partition, kafka_offset, and kafka_timestamp.
                     * @param _metadata Metadata information. Kafka import supports kafka_topic, kafka_partition, kafka_offset, and kafka_timestamp.
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
                     * 获取log Key list. It is required when RechargeType is full_regex_log or delimiter_log.
                     * @return Keys log Key list. It is required when RechargeType is full_regex_log or delimiter_log.
                     * 
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置log Key list. It is required when RechargeType is full_regex_log or delimiter_log.
                     * @param _keys log Key list. It is required when RechargeType is full_regex_log or delimiter_log.
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
                     * 获取JSON parsing mode. The first-level data parsing is enabled.
                     * @return ParseArray JSON parsing mode. The first-level data parsing is enabled.
                     * 
                     */
                    bool GetParseArray() const;

                    /**
                     * 设置JSON parsing mode. The first-level data parsing is enabled.
                     * @param _parseArray JSON parsing mode. The first-level data parsing is enabled.
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
                     * 获取Delimiter parsing mode - Separator
This field is required when the parsing format is delimiter extraction.
                     * @return Delimiter Delimiter parsing mode - Separator
This field is required when the parsing format is delimiter extraction.
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置Delimiter parsing mode - Separator
This field is required when the parsing format is delimiter extraction.
                     * @param _delimiter Delimiter parsing mode - Separator
This field is required when the parsing format is delimiter extraction.
                     * 
                     */
                    void SetDelimiter(const std::string& _delimiter);

                    /**
                     * 判断参数 Delimiter 是否已赋值
                     * @return Delimiter 是否已赋值
                     * 
                     */
                    bool DelimiterHasBeenSet() const;

                private:

                    /**
                     * Import type. Valid values: `json_log` (JSON logs), `minimalist_log` (single-line full text), and fullregex_log (single-line full regex)
                     */
                    std::string m_rechargeType;
                    bool m_rechargeTypeHasBeenSet;

                    /**
                     * Encoding format. Valid values: 0 (default, UTF-8) and 1 GBK).
                     */
                    uint64_t m_encodingFormat;
                    bool m_encodingFormatHasBeenSet;

                    /**
                     * Use default time status. true: when enabled, current system time or Kafka message timestamp will be used as log timestamp. false: when disabled, time field in the log will be used as log timestamp. Default: true.
                     */
                    bool m_defaultTimeSwitch;
                    bool m_defaultTimeSwitchHasBeenSet;

                    /**
                     * Full log matching rule. It is valid only when RechargeType is fullregex_log.
                     */
                    std::string m_logRegex;
                    bool m_logRegexHasBeenSet;

                    /**
                     * Whether to upload the logs that failed to be parsed. Valid values: `true` and `false`.
                     */
                    bool m_unMatchLogSwitch;
                    bool m_unMatchLogSwitchHasBeenSet;

                    /**
                     * key name of parsing-failed logs
                     */
                    std::string m_unMatchLogKey;
                    bool m_unMatchLogKeyHasBeenSet;

                    /**
                     * Time source for parsing failure logs. 0: current time of the system; 1: Kafka message timestamp.
                     */
                    uint64_t m_unMatchLogTimeSrc;
                    bool m_unMatchLogTimeSrcHasBeenSet;

                    /**
                     * Default time source. 0: Current system time; 1: Kafka message timestamp.
                     */
                    uint64_t m_defaultTimeSrc;
                    bool m_defaultTimeSrcHasBeenSet;

                    /**
                     * Time field. Field name representing time in logs.

-When DefaultTimeSwitch is false and RechargeType data extraction mode is `json_log` JSON file log or `fullregex_log` single-line full regex file log, TimeKey cannot be empty.
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * Time extraction regular expression.
-When DefaultTimeSwitch is false and the data extraction mode of RechargeType is `minimalist_log` (single-line full text - file log), TimeRegex cannot be empty.
-Only need to input the regular expression representing the time field in logs. If multiple fields are matched to, the first will be used.
Example: The original log is "message with time 2022-08-08 14:20:20". You can set the retrieval time regex to \d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d.

                     */
                    std::string m_timeRegex;
                    bool m_timeRegexHasBeenSet;

                    /**
                     * Time field format.
-When DefaultTimeSwitch is false, TimeFormat cannot be empty.
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * Time field time zone.
-When DefaultTimeSwitch is false, TimeZone cannot be empty.
-Time zone format rule
Prefix: Use GMT or UTC as the time zone benchmark.
Offset:
-`-` indicates a western time zone (later than the benchmark time).
-`+` means the east time zone (earlier than the benchmark time).
-Format ±HH:MM (hr:min)

-Currently supported:
```
"GMT-12:00" 
"GMT-11:00" 
"GMT-10:00" 
"GMT-09:30" 
"GMT-09:00" 
"GMT-08:00" 
"GMT-07:00" 
"GMT-06:00" 
"GMT-05:00" 
"GMT-04:00" 
"GMT-03:30" 
"GMT-03:00" 
"GMT-02:00" 
"GMT-01:00" 
"GMT+00:00"
"GMT+01:00"
"GMT+02:00"
"GMT+03:30"
"GMT+04:00"
"GMT+04:30"
"GMT+05:00"
"GMT+05:30"
"GMT+05:45"
"GMT+06:00"
"GMT+06:30"
"GMT+07:00"
"GMT+08:00"
"GMT+09:00"
"GMT+09:30"
"GMT+10:00"
"GMT+10:30"
"GMT+11:00"
"GMT+11:30"
"GMT+12:00"
"GMT+12:45"
"GMT+13:00"
"GMT+14:00"
"UTC-11:00"
"UTC-10:00"
"UTC-09:00"
"UTC-08:00"
"UTC-12:00"
"UTC-07:00"
"UTC-06:00"
"UTC-05:00"
"UTC-04:30"
"UTC-04:00"
"UTC-03:30"
"UTC-03:00"
"UTC-02:00"
"UTC-01:00"
"UTC+00:00"
"UTC+01:00"
"UTC+02:00"
"UTC+03:00"
"UTC+03:30"
"UTC+04:00"
"UTC+04:30"
"UTC+05:00"
"UTC+05:45"
"UTC+06:00"
"UTC+06:30"
"UTC+07:00"
"UTC+08:00"
"UTC+09:00"
"UTC+09:30"
"UTC+10:00"
"UTC+11:00"
"UTC+12:00"
"UTC+13:00"
```
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * Metadata information. Kafka import supports kafka_topic, kafka_partition, kafka_offset, and kafka_timestamp.
                     */
                    std::vector<std::string> m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * log Key list. It is required when RechargeType is full_regex_log or delimiter_log.
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * JSON parsing mode. The first-level data parsing is enabled.
                     */
                    bool m_parseArray;
                    bool m_parseArrayHasBeenSet;

                    /**
                     * Delimiter parsing mode - Separator
This field is required when the parsing format is delimiter extraction.
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_LOGRECHARGERULEINFO_H_
