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
                     * 获取Import type. Valid values: `json_log` (JSON logs), `minimalist_log` (single-line full text), and fullregex_log u200d(single-line full regex)
                     * @return RechargeType Import type. Valid values: `json_log` (JSON logs), `minimalist_log` (single-line full text), and fullregex_log u200d(single-line full regex)
                     * 
                     */
                    std::string GetRechargeType() const;

                    /**
                     * 设置Import type. Valid values: `json_log` (JSON logs), `minimalist_log` (single-line full text), and fullregex_log u200d(single-line full regex)
                     * @param _rechargeType Import type. Valid values: `json_log` (JSON logs), `minimalist_log` (single-line full text), and fullregex_log u200d(single-line full regex)
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
                     * 获取Whether to use the default time. Valid values: `true` (default) and `false`.
                     * @return DefaultTimeSwitch Whether to use the default time. Valid values: `true` (default) and `false`.
                     * 
                     */
                    bool GetDefaultTimeSwitch() const;

                    /**
                     * 设置Whether to use the default time. Valid values: `true` (default) and `false`.
                     * @param _defaultTimeSwitch Whether to use the default time. Valid values: `true` (default) and `false`.
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
                     * 获取Full log matching rule, which is valid only if `RechargeType` is `fullregex_log`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogRegex Full log matching rule, which is valid only if `RechargeType` is `fullregex_log`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogRegex() const;

                    /**
                     * 设置Full log matching rule, which is valid only if `RechargeType` is `fullregex_log`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logRegex Full log matching rule, which is valid only if `RechargeType` is `fullregex_log`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Key of the log that failed to be parsed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnMatchLogKey Key of the log that failed to be parsed
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUnMatchLogKey() const;

                    /**
                     * 设置Key of the log that failed to be parsed
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _unMatchLogKey Key of the log that failed to be parsed
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
                     * 获取Time source of the log that failed to be parsed. Valid values: 0 (current system time) and 1 (Kafka message timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnMatchLogTimeSrc Time source of the log that failed to be parsed. Valid values: 0 (current system time) and 1 (Kafka message timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetUnMatchLogTimeSrc() const;

                    /**
                     * 设置Time source of the log that failed to be parsed. Valid values: 0 (current system time) and 1 (Kafka message timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _unMatchLogTimeSrc Time source of the log that failed to be parsed. Valid values: 0 (current system time) and 1 (Kafka message timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Default time source. Valid values: 0 (current system time) and 1 (Kafka message timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefaultTimeSrc Default time source. Valid values: 0 (current system time) and 1 (Kafka message timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDefaultTimeSrc() const;

                    /**
                     * 设置Default time source. Valid values: 0 (current system time) and 1 (Kafka message timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defaultTimeSrc Default time source. Valid values: 0 (current system time) and 1 (Kafka message timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Time field
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeKey Time field
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置Time field
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeKey Time field
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Time regular expression
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeRegex Time regular expression
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimeRegex() const;

                    /**
                     * 设置Time regular expression
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeRegex Time regular expression
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Time field format
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeFormat Time field format
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置Time field format
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeFormat Time field format
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Time zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeZone Time zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置Time zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeZone Time zone
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Metadata information. Kafka supports import of kafka_topic, kafka_partition, kafka_offset, and kafka_timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Metadata Metadata information. Kafka supports import of kafka_topic, kafka_partition, kafka_offset, and kafka_timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetMetadata() const;

                    /**
                     * 设置Metadata information. Kafka supports import of kafka_topic, kafka_partition, kafka_offset, and kafka_timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metadata Metadata information. Kafka supports import of kafka_topic, kafka_partition, kafka_offset, and kafka_timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of log keys, which is required when `RechargeType` is set to `full_regex_log`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Keys List of log keys, which is required when `RechargeType` is set to `full_regex_log`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置List of log keys, which is required when `RechargeType` is set to `full_regex_log`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _keys List of log keys, which is required when `RechargeType` is set to `full_regex_log`
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

                private:

                    /**
                     * Import type. Valid values: `json_log` (JSON logs), `minimalist_log` (single-line full text), and fullregex_log u200d(single-line full regex)
                     */
                    std::string m_rechargeType;
                    bool m_rechargeTypeHasBeenSet;

                    /**
                     * Encoding format. Valid values: 0 (default, UTF-8) and 1 GBK).
                     */
                    uint64_t m_encodingFormat;
                    bool m_encodingFormatHasBeenSet;

                    /**
                     * Whether to use the default time. Valid values: `true` (default) and `false`.
                     */
                    bool m_defaultTimeSwitch;
                    bool m_defaultTimeSwitchHasBeenSet;

                    /**
                     * Full log matching rule, which is valid only if `RechargeType` is `fullregex_log`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logRegex;
                    bool m_logRegexHasBeenSet;

                    /**
                     * Whether to upload the logs that failed to be parsed. Valid values: `true` and `false`.
                     */
                    bool m_unMatchLogSwitch;
                    bool m_unMatchLogSwitchHasBeenSet;

                    /**
                     * Key of the log that failed to be parsed
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_unMatchLogKey;
                    bool m_unMatchLogKeyHasBeenSet;

                    /**
                     * Time source of the log that failed to be parsed. Valid values: 0 (current system time) and 1 (Kafka message timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_unMatchLogTimeSrc;
                    bool m_unMatchLogTimeSrcHasBeenSet;

                    /**
                     * Default time source. Valid values: 0 (current system time) and 1 (Kafka message timestamp).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_defaultTimeSrc;
                    bool m_defaultTimeSrcHasBeenSet;

                    /**
                     * Time field
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * Time regular expression
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_timeRegex;
                    bool m_timeRegexHasBeenSet;

                    /**
                     * Time field format
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * Time zone
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * Metadata information. Kafka supports import of kafka_topic, kafka_partition, kafka_offset, and kafka_timestamp.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * List of log keys, which is required when `RechargeType` is set to `full_regex_log`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_LOGRECHARGERULEINFO_H_
