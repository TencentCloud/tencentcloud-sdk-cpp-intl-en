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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEEXPORTREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEEXPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateExport request structure.
                */
                class CreateExportRequest : public AbstractModel
                {
                public:
                    CreateExportRequest();
                    ~CreateExportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param _topicId Log topic ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Number of logs to be exported. Maximum value: 50 million
                     * @return Count Number of logs to be exported. Maximum value: 50 million
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Number of logs to be exported. Maximum value: 50 million
                     * @param _count Number of logs to be exported. Maximum value: 50 million
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Search statements for log export. <a href="https://intl.cloud.tencent.com/document/product/614/44061?from_cn_redirect=1" target="_blank">[SQL statements]</a> are not supported.
                     * @return Query Search statements for log export. <a href="https://intl.cloud.tencent.com/document/product/614/44061?from_cn_redirect=1" target="_blank">[SQL statements]</a> are not supported.
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Search statements for log export. <a href="https://intl.cloud.tencent.com/document/product/614/44061?from_cn_redirect=1" target="_blank">[SQL statements]</a> are not supported.
                     * @param _query Search statements for log export. <a href="https://intl.cloud.tencent.com/document/product/614/44061?from_cn_redirect=1" target="_blank">[SQL statements]</a> are not supported.
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取Start time of the log to be exported, which is a timestamp in milliseconds
                     * @return From Start time of the log to be exported, which is a timestamp in milliseconds
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置Start time of the log to be exported, which is a timestamp in milliseconds
                     * @param _from Start time of the log to be exported, which is a timestamp in milliseconds
                     * 
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取End time of the log to be exported, which is a timestamp in milliseconds
                     * @return To End time of the log to be exported, which is a timestamp in milliseconds
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置End time of the log to be exported, which is a timestamp in milliseconds
                     * @param _to End time of the log to be exported, which is a timestamp in milliseconds
                     * 
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取Exported log sorting order by time. Valid values: `asc`: ascending; `desc`: descending. Default value: `desc`
                     * @return Order Exported log sorting order by time. Valid values: `asc`: ascending; `desc`: descending. Default value: `desc`
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Exported log sorting order by time. Valid values: `asc`: ascending; `desc`: descending. Default value: `desc`
                     * @param _order Exported log sorting order by time. Valid values: `asc`: ascending; `desc`: descending. Default value: `desc`
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Exported log data format. Valid values: `json`, `csv`. Default value: `json`
                     * @return Format Exported log data format. Valid values: `json`, `csv`. Default value: `json`
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Exported log data format. Valid values: `json`, `csv`. Default value: `json`
                     * @param _format Exported log data format. Valid values: `json`, `csv`. Default value: `json`
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Syntax rules; the default value is 0.0: Lucene syntax; 1: CQL syntax.
                     * @return SyntaxRule Syntax rules; the default value is 0.0: Lucene syntax; 1: CQL syntax.
                     * 
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置Syntax rules; the default value is 0.0: Lucene syntax; 1: CQL syntax.
                     * @param _syntaxRule Syntax rules; the default value is 0.0: Lucene syntax; 1: CQL syntax.
                     * 
                     */
                    void SetSyntaxRule(const uint64_t& _syntaxRule);

                    /**
                     * 判断参数 SyntaxRule 是否已赋值
                     * @return SyntaxRule 是否已赋值
                     * 
                     */
                    bool SyntaxRuleHasBeenSet() const;

                private:

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Number of logs to be exported. Maximum value: 50 million
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Search statements for log export. <a href="https://intl.cloud.tencent.com/document/product/614/44061?from_cn_redirect=1" target="_blank">[SQL statements]</a> are not supported.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Start time of the log to be exported, which is a timestamp in milliseconds
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * End time of the log to be exported, which is a timestamp in milliseconds
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * Exported log sorting order by time. Valid values: `asc`: ascending; `desc`: descending. Default value: `desc`
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Exported log data format. Valid values: `json`, `csv`. Default value: `json`
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Syntax rules; the default value is 0.0: Lucene syntax; 1: CQL syntax.
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEEXPORTREQUEST_H_
