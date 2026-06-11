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
                     * 获取<p>Log topic ID.</p>
                     * @return TopicId <p>Log topic ID.</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Log topic ID.</p>
                     * @param _topicId <p>Log topic ID.</p>
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
                     * 获取<p>Log export task ID</p>
                     * @return ExportId <p>Log export task ID</p>
                     * 
                     */
                    std::string GetExportId() const;

                    /**
                     * 设置<p>Log export task ID</p>
                     * @param _exportId <p>Log export task ID</p>
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
                     * 获取<p>Query statements of log export</p>
                     * @return Query <p>Query statements of log export</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>Query statements of log export</p>
                     * @param _query <p>Query statements of log export</p>
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
                     * 获取<p>Filenames of exported logs</p>
                     * @return FileName <p>Filenames of exported logs</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>Filenames of exported logs</p>
                     * @param _fileName <p>Filenames of exported logs</p>
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
                     * 获取<p>Log file size</p><p>Unit: Byte</p>
                     * @return FileSize <p>Log file size</p><p>Unit: Byte</p>
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置<p>Log file size</p><p>Unit: Byte</p>
                     * @param _fileSize <p>Log file size</p><p>Unit: Byte</p>
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
                     * 获取<p>Sorting of log export time</p>
                     * @return Order <p>Sorting of log export time</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sorting of log export time</p>
                     * @param _order <p>Sorting of log export time</p>
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
                     * 获取<p>Log export format</p>
                     * @return Format <p>Log export format</p>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>Log export format</p>
                     * @param _format <p>Log export format</p>
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
                     * 获取<p>Number of logs to be exported</p>
                     * @return Count <p>Number of logs to be exported</p>
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置<p>Number of logs to be exported</p>
                     * @param _count <p>Number of logs to be exported</p>
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
                     * 获取<p>Log download status. Processing: export in progress, Completed: export completed, Failed: export failure, Expired: log export expired (valid for 3 days), Queuing: queuing</p>
                     * @return Status <p>Log download status. Processing: export in progress, Completed: export completed, Failed: export failure, Expired: log export expired (valid for 3 days), Queuing: queuing</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Log download status. Processing: export in progress, Completed: export completed, Failed: export failure, Expired: log export expired (valid for 3 days), Queuing: queuing</p>
                     * @param _status <p>Log download status. Processing: export in progress, Completed: export completed, Failed: export failure, Expired: log export expired (valid for 3 days), Queuing: queuing</p>
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
                     * 获取<p>Start time of log export, with a timestamp in milliseconds</p>
                     * @return From <p>Start time of log export, with a timestamp in milliseconds</p>
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置<p>Start time of log export, with a timestamp in milliseconds</p>
                     * @param _from <p>Start time of log export, with a timestamp in milliseconds</p>
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
                     * 获取<p>End time of log export, timestamp in milliseconds</p>
                     * @return To <p>End time of log export, timestamp in milliseconds</p>
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置<p>End time of log export, timestamp in milliseconds</p>
                     * @param _to <p>End time of log export, timestamp in milliseconds</p>
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
                     * 获取<p>Log export path, valid for one hour. Please download using this path as soon as possible.</p>
                     * @return CosPath <p>Log export path, valid for one hour. Please download using this path as soon as possible.</p>
                     * 
                     */
                    std::string GetCosPath() const;

                    /**
                     * 设置<p>Log export path, valid for one hour. Please download using this path as soon as possible.</p>
                     * @param _cosPath <p>Log export path, valid for one hour. Please download using this path as soon as possible.</p>
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
                     * 获取<p>Log export creation time<br>Date and Time Formats: yyyy-MM-dd HH:mm:ss</p>
                     * @return CreateTime <p>Log export creation time<br>Date and Time Formats: yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Log export creation time<br>Date and Time Formats: yyyy-MM-dd HH:mm:ss</p>
                     * @param _createTime <p>Log export creation time<br>Date and Time Formats: yyyy-MM-dd HH:mm:ss</p>
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
                     * 获取<p>Syntax rule. Default value is 0.<br>0: Lucene syntax, 1: CQL syntax.</p>
                     * @return SyntaxRule <p>Syntax rule. Default value is 0.<br>0: Lucene syntax, 1: CQL syntax.</p>
                     * 
                     */
                    uint64_t GetSyntaxRule() const;

                    /**
                     * 设置<p>Syntax rule. Default value is 0.<br>0: Lucene syntax, 1: CQL syntax.</p>
                     * @param _syntaxRule <p>Syntax rule. Default value is 0.<br>0: Lucene syntax, 1: CQL syntax.</p>
                     * 
                     */
                    void SetSyntaxRule(const uint64_t& _syntaxRule);

                    /**
                     * 判断参数 SyntaxRule 是否已赋值
                     * @return SyntaxRule 是否已赋值
                     * 
                     */
                    bool SyntaxRuleHasBeenSet() const;

                    /**
                     * 获取<p>Export fields</p>
                     * @return DerivedFields <p>Export fields</p>
                     * 
                     */
                    std::vector<std::string> GetDerivedFields() const;

                    /**
                     * 设置<p>Export fields</p>
                     * @param _derivedFields <p>Export fields</p>
                     * 
                     */
                    void SetDerivedFields(const std::vector<std::string>& _derivedFields);

                    /**
                     * 判断参数 DerivedFields 是否已赋值
                     * @return DerivedFields 是否已赋值
                     * 
                     */
                    bool DerivedFieldsHasBeenSet() const;

                private:

                    /**
                     * <p>Log topic ID.</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Log export task ID</p>
                     */
                    std::string m_exportId;
                    bool m_exportIdHasBeenSet;

                    /**
                     * <p>Query statements of log export</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>Filenames of exported logs</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>Log file size</p><p>Unit: Byte</p>
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>Sorting of log export time</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Log export format</p>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>Number of logs to be exported</p>
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>Log download status. Processing: export in progress, Completed: export completed, Failed: export failure, Expired: log export expired (valid for 3 days), Queuing: queuing</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Start time of log export, with a timestamp in milliseconds</p>
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * <p>End time of log export, timestamp in milliseconds</p>
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * <p>Log export path, valid for one hour. Please download using this path as soon as possible.</p>
                     */
                    std::string m_cosPath;
                    bool m_cosPathHasBeenSet;

                    /**
                     * <p>Log export creation time<br>Date and Time Formats: yyyy-MM-dd HH:mm:ss</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Syntax rule. Default value is 0.<br>0: Lucene syntax, 1: CQL syntax.</p>
                     */
                    uint64_t m_syntaxRule;
                    bool m_syntaxRuleHasBeenSet;

                    /**
                     * <p>Export fields</p>
                     */
                    std::vector<std::string> m_derivedFields;
                    bool m_derivedFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_EXPORTINFO_H_
