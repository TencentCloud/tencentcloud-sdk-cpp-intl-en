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
                * Output format for real-time log delivery. You can directly use the specified predefined log output format (JSON Lines / csv) through the FormatType parameter, or define a variant output format through additional parameters based on the predefined log output format.
                */
                class LogFormat : public AbstractModel
                {
                public:
                    LogFormat();
                    ~LogFormat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Predefined output format for log shipping. Valid values:
<li>json: Use JSON Lines as the predefined log output format. In each log entry, fields are displayed as key-value pairs.</li>
<li>csv: Use the predefined log output format csv, where each log entry only is presented as field values only, excluding field names. </li>
                     * @return FormatType Predefined output format for log shipping. Valid values:
<li>json: Use JSON Lines as the predefined log output format. In each log entry, fields are displayed as key-value pairs.</li>
<li>csv: Use the predefined log output format csv, where each log entry only is presented as field values only, excluding field names. </li>
                     * 
                     */
                    std::string GetFormatType() const;

                    /**
                     * 设置Predefined output format for log shipping. Valid values:
<li>json: Use JSON Lines as the predefined log output format. In each log entry, fields are displayed as key-value pairs.</li>
<li>csv: Use the predefined log output format csv, where each log entry only is presented as field values only, excluding field names. </li>
                     * @param _formatType Predefined output format for log shipping. Valid values:
<li>json: Use JSON Lines as the predefined log output format. In each log entry, fields are displayed as key-value pairs.</li>
<li>csv: Use the predefined log output format csv, where each log entry only is presented as field values only, excluding field names. </li>
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
                     * 获取A string added before each log delivery batch. Each log delivery batch may contain multiple log records.
                     * @return BatchPrefix A string added before each log delivery batch. Each log delivery batch may contain multiple log records.
                     * 
                     */
                    std::string GetBatchPrefix() const;

                    /**
                     * 设置A string added before each log delivery batch. Each log delivery batch may contain multiple log records.
                     * @param _batchPrefix A string added before each log delivery batch. Each log delivery batch may contain multiple log records.
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
                     * 获取A string appended after each log delivery batch.
                     * @return BatchSuffix A string appended after each log delivery batch.
                     * 
                     */
                    std::string GetBatchSuffix() const;

                    /**
                     * 设置A string appended after each log delivery batch.
                     * @param _batchSuffix A string appended after each log delivery batch.
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
                     * 获取A string added before each log record.
                     * @return RecordPrefix A string added before each log record.
                     * 
                     */
                    std::string GetRecordPrefix() const;

                    /**
                     * 设置A string added before each log record.
                     * @param _recordPrefix A string added before each log record.
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
                     * 获取A string appended after each log record.
                     * @return RecordSuffix A string appended after each log record.
                     * 
                     */
                    std::string GetRecordSuffix() const;

                    /**
                     * 设置A string appended after each log record.
                     * @param _recordSuffix A string appended after each log record.
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
                     * 获取A string inserted between log records as a separator. Valid values:
<li>\n: line break;</li>
<li>\t: tab character;</li>
<li>,: Half-width comma. </li>
                     * @return RecordDelimiter A string inserted between log records as a separator. Valid values:
<li>\n: line break;</li>
<li>\t: tab character;</li>
<li>,: Half-width comma. </li>
                     * 
                     */
                    std::string GetRecordDelimiter() const;

                    /**
                     * 设置A string inserted between log records as a separator. Valid values:
<li>\n: line break;</li>
<li>\t: tab character;</li>
<li>,: Half-width comma. </li>
                     * @param _recordDelimiter A string inserted between log records as a separator. Valid values:
<li>\n: line break;</li>
<li>\t: tab character;</li>
<li>,: Half-width comma. </li>
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
                     * 获取A string inserted between fields as a separator within a single log record. Valid values:
<li>\t: tab character;</li>
<li>,: half-width comma;</li>
<li>;: Half-width semicolon. </li>
                     * @return FieldDelimiter A string inserted between fields as a separator within a single log record. Valid values:
<li>\t: tab character;</li>
<li>,: half-width comma;</li>
<li>;: Half-width semicolon. </li>
                     * 
                     */
                    std::string GetFieldDelimiter() const;

                    /**
                     * 设置A string inserted between fields as a separator within a single log record. Valid values:
<li>\t: tab character;</li>
<li>,: half-width comma;</li>
<li>;: Half-width semicolon. </li>
                     * @param _fieldDelimiter A string inserted between fields as a separator within a single log record. Valid values:
<li>\t: tab character;</li>
<li>,: half-width comma;</li>
<li>;: Half-width semicolon. </li>
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
                     * Predefined output format for log shipping. Valid values:
<li>json: Use JSON Lines as the predefined log output format. In each log entry, fields are displayed as key-value pairs.</li>
<li>csv: Use the predefined log output format csv, where each log entry only is presented as field values only, excluding field names. </li>
                     */
                    std::string m_formatType;
                    bool m_formatTypeHasBeenSet;

                    /**
                     * A string added before each log delivery batch. Each log delivery batch may contain multiple log records.
                     */
                    std::string m_batchPrefix;
                    bool m_batchPrefixHasBeenSet;

                    /**
                     * A string appended after each log delivery batch.
                     */
                    std::string m_batchSuffix;
                    bool m_batchSuffixHasBeenSet;

                    /**
                     * A string added before each log record.
                     */
                    std::string m_recordPrefix;
                    bool m_recordPrefixHasBeenSet;

                    /**
                     * A string appended after each log record.
                     */
                    std::string m_recordSuffix;
                    bool m_recordSuffixHasBeenSet;

                    /**
                     * A string inserted between log records as a separator. Valid values:
<li>\n: line break;</li>
<li>\t: tab character;</li>
<li>,: Half-width comma. </li>
                     */
                    std::string m_recordDelimiter;
                    bool m_recordDelimiterHasBeenSet;

                    /**
                     * A string inserted between fields as a separator within a single log record. Valid values:
<li>\t: tab character;</li>
<li>,: half-width comma;</li>
<li>;: Half-width semicolon. </li>
                     */
                    std::string m_fieldDelimiter;
                    bool m_fieldDelimiterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_LOGFORMAT_H_
