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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_EXPORTINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_EXPORTINFO_H_

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
                * Log export information
                */
                class ExportInfo : public AbstractModel
                {
                public:
                    ExportInfo();
                    ~ExportInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Log export task ID
                     * @return ExportId Log export task ID
                     * 
                     */
                    std::string GetExportId() const;

                    /**
                     * 设置Log export task ID
                     * @param _exportId Log export task ID
                     * 
                     */
                    void SetExportId(const std::string& _exportId);

                    /**
                     * 判断参数 ExportId 是否已赋值
                     * @return ExportId 是否已赋值
                     * 
                     */
                    bool ExportIdHasBeenSet() const;

                    /**
                     * 获取Log export query statement
                     * @return Query Log export query statement
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Log export query statement
                     * @param _query Log export query statement
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
                     * 获取Log export filename
                     * @return FileName Log export filename
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Log export filename
                     * @param _fileName Log export filename
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Log file size
                     * @return FileSize Log file size
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置Log file size
                     * @param _fileSize Log file size
                     * 
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取Log export time sorting
                     * @return Order Log export time sorting
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Log export time sorting
                     * @param _order Log export time sorting
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
                     * 获取Log export format
                     * @return Format Log export format
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Log export format
                     * @param _format Log export format
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
                     * 获取Number of logs to be exported
                     * @return Count Number of logs to be exported
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Number of logs to be exported
                     * @param _count Number of logs to be exported
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
                     * 获取Log download status. Valid values: `Processing`, `Completed`, `Failed`, `Expired` (three-day validity period), and `Queuing`.
                     * @return Status Log download status. Valid values: `Processing`, `Completed`, `Failed`, `Expired` (three-day validity period), and `Queuing`.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Log download status. Valid values: `Processing`, `Completed`, `Failed`, `Expired` (three-day validity period), and `Queuing`.
                     * @param _status Log download status. Valid values: `Processing`, `Completed`, `Failed`, `Expired` (three-day validity period), and `Queuing`.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Log export start time
                     * @return From Log export start time
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置Log export start time
                     * @param _from Log export start time
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
                     * 获取Log export end time
                     * @return To Log export end time
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置Log export end time
                     * @param _to Log export end time
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
                     * 获取Log export path, valid for one hour. Please download using this path as soon as possible.
                     * @return CosPath Log export path, valid for one hour. Please download using this path as soon as possible.
                     * 
                     */
                    std::string GetCosPath() const;

                    /**
                     * 设置Log export path, valid for one hour. Please download using this path as soon as possible.
                     * @param _cosPath Log export path, valid for one hour. Please download using this path as soon as possible.
                     * 
                     */
                    void SetCosPath(const std::string& _cosPath);

                    /**
                     * 判断参数 CosPath 是否已赋值
                     * @return CosPath 是否已赋值
                     * 
                     */
                    bool CosPathHasBeenSet() const;

                    /**
                     * 获取Log export creation time
                     * @return CreateTime Log export creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Log export creation time
                     * @param _createTime Log export creation time
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
                     * 获取Syntax rules. The default value is 0.0: Lucene syntax, 1: CQL syntax.
                     * @return SyntaxRule Syntax rules. The default value is 0.0: Lucene syntax, 1: CQL syntax.
                     * 
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置Syntax rules. The default value is 0.0: Lucene syntax, 1: CQL syntax.
                     * @param _syntaxRule Syntax rules. The default value is 0.0: Lucene syntax, 1: CQL syntax.
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
                     * Log export task ID
                     */
                    std::string m_exportId;
                    bool m_exportIdHasBeenSet;

                    /**
                     * Log export query statement
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Log export filename
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Log file size
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Log export time sorting
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Log export format
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Number of logs to be exported
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Log download status. Valid values: `Processing`, `Completed`, `Failed`, `Expired` (three-day validity period), and `Queuing`.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Log export start time
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * Log export end time
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * Log export path, valid for one hour. Please download using this path as soon as possible.
                     */
                    std::string m_cosPath;
                    bool m_cosPathHasBeenSet;

                    /**
                     * Log export creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Syntax rules. The default value is 0.0: Lucene syntax, 1: CQL syntax.
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_EXPORTINFO_H_
