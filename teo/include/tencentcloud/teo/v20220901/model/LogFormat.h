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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_LOGFORMAT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_LOGFORMAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Output format for real-time log delivery. You can directly use the specified predefined log output format (JSON Lines / csv) through the FormatType parameter, or define a variant output format through additional parameters based on the predefined log output format. For usage details, see Custom Log Output Format (https://www.tencentcloud.com/document/product/1552/110448?from_cn_redirect=1).
                */
                class LogFormat : public AbstractModel
                {
                public:
                    LogFormat();
                    ~LogFormat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Log output format. Valid values:</p><ul><li>json: Use the predefined log output format JSON Lines, where each log entry is presented as key-value pairs;</li><li>csv: Use the predefined log output format CSV, where each log entry presents only field values, not field names.</li><li>template: Use a user-customized output template. Each log entry supports custom layout and concatenation based on the custom template, in conjunction with the RecordTemplate field.</li></ul>
                     * @return FormatType <p>Log output format. Valid values:</p><ul><li>json: Use the predefined log output format JSON Lines, where each log entry is presented as key-value pairs;</li><li>csv: Use the predefined log output format CSV, where each log entry presents only field values, not field names.</li><li>template: Use a user-customized output template. Each log entry supports custom layout and concatenation based on the custom template, in conjunction with the RecordTemplate field.</li></ul>
                     * 
                     */
                    std::string GetFormatType() const;

                    /**
                     * 设置<p>Log output format. Valid values:</p><ul><li>json: Use the predefined log output format JSON Lines, where each log entry is presented as key-value pairs;</li><li>csv: Use the predefined log output format CSV, where each log entry presents only field values, not field names.</li><li>template: Use a user-customized output template. Each log entry supports custom layout and concatenation based on the custom template, in conjunction with the RecordTemplate field.</li></ul>
                     * @param _formatType <p>Log output format. Valid values:</p><ul><li>json: Use the predefined log output format JSON Lines, where each log entry is presented as key-value pairs;</li><li>csv: Use the predefined log output format CSV, where each log entry presents only field values, not field names.</li><li>template: Use a user-customized output template. Each log entry supports custom layout and concatenation based on the custom template, in conjunction with the RecordTemplate field.</li></ul>
                     * 
                     */
                    void SetFormatType(const std::string& _formatType);

                    /**
                     * 判断参数 FormatType 是否已赋值
                     * @return FormatType 是否已赋值
                     * 
                     */
                    bool FormatTypeHasBeenSet() const;

                    /**
                     * 获取<p>A string added before each log delivery batch. Each log delivery batch may contain multiple log records.</p>
                     * @return BatchPrefix <p>A string added before each log delivery batch. Each log delivery batch may contain multiple log records.</p>
                     * 
                     */
                    std::string GetBatchPrefix() const;

                    /**
                     * 设置<p>A string added before each log delivery batch. Each log delivery batch may contain multiple log records.</p>
                     * @param _batchPrefix <p>A string added before each log delivery batch. Each log delivery batch may contain multiple log records.</p>
                     * 
                     */
                    void SetBatchPrefix(const std::string& _batchPrefix);

                    /**
                     * 判断参数 BatchPrefix 是否已赋值
                     * @return BatchPrefix 是否已赋值
                     * 
                     */
                    bool BatchPrefixHasBeenSet() const;

                    /**
                     * 获取<p>A string appended after each log delivery batch.</p>
                     * @return BatchSuffix <p>A string appended after each log delivery batch.</p>
                     * 
                     */
                    std::string GetBatchSuffix() const;

                    /**
                     * 设置<p>A string appended after each log delivery batch.</p>
                     * @param _batchSuffix <p>A string appended after each log delivery batch.</p>
                     * 
                     */
                    void SetBatchSuffix(const std::string& _batchSuffix);

                    /**
                     * 判断参数 BatchSuffix 是否已赋值
                     * @return BatchSuffix 是否已赋值
                     * 
                     */
                    bool BatchSuffixHasBeenSet() const;

                    /**
                     * 获取<p>Log prefix, a string added before each log record.</p>
                     * @return RecordPrefix <p>Log prefix, a string added before each log record.</p>
                     * 
                     */
                    std::string GetRecordPrefix() const;

                    /**
                     * 设置<p>Log prefix, a string added before each log record.</p>
                     * @param _recordPrefix <p>Log prefix, a string added before each log record.</p>
                     * 
                     */
                    void SetRecordPrefix(const std::string& _recordPrefix);

                    /**
                     * 判断参数 RecordPrefix 是否已赋值
                     * @return RecordPrefix 是否已赋值
                     * 
                     */
                    bool RecordPrefixHasBeenSet() const;

                    /**
                     * 获取<p>Single-line log suffix, a string appended after each log record.</p>
                     * @return RecordSuffix <p>Single-line log suffix, a string appended after each log record.</p>
                     * 
                     */
                    std::string GetRecordSuffix() const;

                    /**
                     * 设置<p>Single-line log suffix, a string appended after each log record.</p>
                     * @param _recordSuffix <p>Single-line log suffix, a string appended after each log record.</p>
                     * 
                     */
                    void SetRecordSuffix(const std::string& _recordSuffix);

                    /**
                     * 判断参数 RecordSuffix 是否已赋值
                     * @return RecordSuffix 是否已赋值
                     * 
                     */
                    bool RecordSuffixHasBeenSet() const;

                    /**
                     * 获取<p>Log separator, a string inserted between log records as a separator. Valid values:</p><ul><li>\n: line break;</li><li>\t: tab character;</li><li>,: half-width comma.</li></ul>
                     * @return RecordDelimiter <p>Log separator, a string inserted between log records as a separator. Valid values:</p><ul><li>\n: line break;</li><li>\t: tab character;</li><li>,: half-width comma.</li></ul>
                     * 
                     */
                    std::string GetRecordDelimiter() const;

                    /**
                     * 设置<p>Log separator, a string inserted between log records as a separator. Valid values:</p><ul><li>\n: line break;</li><li>\t: tab character;</li><li>,: half-width comma.</li></ul>
                     * @param _recordDelimiter <p>Log separator, a string inserted between log records as a separator. Valid values:</p><ul><li>\n: line break;</li><li>\t: tab character;</li><li>,: half-width comma.</li></ul>
                     * 
                     */
                    void SetRecordDelimiter(const std::string& _recordDelimiter);

                    /**
                     * 判断参数 RecordDelimiter 是否已赋值
                     * @return RecordDelimiter 是否已赋值
                     * 
                     */
                    bool RecordDelimiterHasBeenSet() const;

                    /**
                     * 获取<p>Log template, output template for a single log, length limited to 4KB, takes effect only when FormatType = template. Supports custom layout and concatenation of configured push fields according to the template.</p>
                     * @return RecordTemplate <p>Log template, output template for a single log, length limited to 4KB, takes effect only when FormatType = template. Supports custom layout and concatenation of configured push fields according to the template.</p>
                     * 
                     */
                    std::string GetRecordTemplate() const;

                    /**
                     * 设置<p>Log template, output template for a single log, length limited to 4KB, takes effect only when FormatType = template. Supports custom layout and concatenation of configured push fields according to the template.</p>
                     * @param _recordTemplate <p>Log template, output template for a single log, length limited to 4KB, takes effect only when FormatType = template. Supports custom layout and concatenation of configured push fields according to the template.</p>
                     * 
                     */
                    void SetRecordTemplate(const std::string& _recordTemplate);

                    /**
                     * 判断参数 RecordTemplate 是否已赋值
                     * @return RecordTemplate 是否已赋值
                     * 
                     */
                    bool RecordTemplateHasBeenSet() const;

                    /**
                     * 获取<p>Field separator, a string inserted between fields within a single log record as a separator. It takes effect only when FormatType = csv. Valid values:</p><ul><li>\t: tab character;</li><li>,: half-width comma;</li><li>;: half-width semicolon.</li></ul>
                     * @return FieldDelimiter <p>Field separator, a string inserted between fields within a single log record as a separator. It takes effect only when FormatType = csv. Valid values:</p><ul><li>\t: tab character;</li><li>,: half-width comma;</li><li>;: half-width semicolon.</li></ul>
                     * 
                     */
                    std::string GetFieldDelimiter() const;

                    /**
                     * 设置<p>Field separator, a string inserted between fields within a single log record as a separator. It takes effect only when FormatType = csv. Valid values:</p><ul><li>\t: tab character;</li><li>,: half-width comma;</li><li>;: half-width semicolon.</li></ul>
                     * @param _fieldDelimiter <p>Field separator, a string inserted between fields within a single log record as a separator. It takes effect only when FormatType = csv. Valid values:</p><ul><li>\t: tab character;</li><li>,: half-width comma;</li><li>;: half-width semicolon.</li></ul>
                     * 
                     */
                    void SetFieldDelimiter(const std::string& _fieldDelimiter);

                    /**
                     * 判断参数 FieldDelimiter 是否已赋值
                     * @return FieldDelimiter 是否已赋值
                     * 
                     */
                    bool FieldDelimiterHasBeenSet() const;

                private:

                    /**
                     * <p>Log output format. Valid values:</p><ul><li>json: Use the predefined log output format JSON Lines, where each log entry is presented as key-value pairs;</li><li>csv: Use the predefined log output format CSV, where each log entry presents only field values, not field names.</li><li>template: Use a user-customized output template. Each log entry supports custom layout and concatenation based on the custom template, in conjunction with the RecordTemplate field.</li></ul>
                     */
                    std::string m_formatType;
                    bool m_formatTypeHasBeenSet;

                    /**
                     * <p>A string added before each log delivery batch. Each log delivery batch may contain multiple log records.</p>
                     */
                    std::string m_batchPrefix;
                    bool m_batchPrefixHasBeenSet;

                    /**
                     * <p>A string appended after each log delivery batch.</p>
                     */
                    std::string m_batchSuffix;
                    bool m_batchSuffixHasBeenSet;

                    /**
                     * <p>Log prefix, a string added before each log record.</p>
                     */
                    std::string m_recordPrefix;
                    bool m_recordPrefixHasBeenSet;

                    /**
                     * <p>Single-line log suffix, a string appended after each log record.</p>
                     */
                    std::string m_recordSuffix;
                    bool m_recordSuffixHasBeenSet;

                    /**
                     * <p>Log separator, a string inserted between log records as a separator. Valid values:</p><ul><li>\n: line break;</li><li>\t: tab character;</li><li>,: half-width comma.</li></ul>
                     */
                    std::string m_recordDelimiter;
                    bool m_recordDelimiterHasBeenSet;

                    /**
                     * <p>Log template, output template for a single log, length limited to 4KB, takes effect only when FormatType = template. Supports custom layout and concatenation of configured push fields according to the template.</p>
                     */
                    std::string m_recordTemplate;
                    bool m_recordTemplateHasBeenSet;

                    /**
                     * <p>Field separator, a string inserted between fields within a single log record as a separator. It takes effect only when FormatType = csv. Valid values:</p><ul><li>\t: tab character;</li><li>,: half-width comma;</li><li>;: half-width semicolon.</li></ul>
                     */
                    std::string m_fieldDelimiter;
                    bool m_fieldDelimiterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_LOGFORMAT_H_
