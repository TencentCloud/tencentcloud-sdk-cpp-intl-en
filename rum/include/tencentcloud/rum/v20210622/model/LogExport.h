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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_LOGEXPORT_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_LOGEXPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Log export record
                */
                class LogExport : public AbstractModel
                {
                public:
                    LogExport();
                    ~LogExport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log export path
                     * @return CosPath Log export path
                     * 
                     */
                    std::string GetCosPath() const;

                    /**
                     * 设置Log export path
                     * @param _cosPath Log export path
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
                     * 获取Number of logs to be exported
                     * @return Count Number of logs to be exported
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of logs to be exported
                     * @param _count Number of logs to be exported
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Log export task creation time
                     * @return CreateTime Log export task creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Log export task creation time
                     * @param _createTime Log export task creation time
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
                     * 获取Log export task ID
                     * @return ExportID Log export task ID
                     * 
                     */
                    std::string GetExportID() const;

                    /**
                     * 设置Log export task ID
                     * @param _exportID Log export task ID
                     * 
                     */
                    void SetExportID(const std::string& _exportID);

                    /**
                     * 判断参数 ExportID 是否已赋值
                     * @return ExportID 是否已赋值
                     * 
                     */
                    bool ExportIDHasBeenSet() const;

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
                    int64_t GetFileSize() const;

                    /**
                     * 设置Log file size
                     * @param _fileSize Log file size
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

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
                     * 获取Log export start time
                     * @return StartTime Log export start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Log export start time
                     * @param _startTime Log export start time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Log export end time
                     * @return EndTime Log export end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Log export end time
                     * @param _endTime Log export end time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Log download status. Valid values: Queuing: queuing; Processing: exporting; Complete: completed; Failed: failed; Expired: expired (3-day validity period).
                     * @return Status Log download status. Valid values: Queuing: queuing; Processing: exporting; Complete: completed; Failed: failed; Expired: expired (3-day validity period).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Log download status. Valid values: Queuing: queuing; Processing: exporting; Complete: completed; Failed: failed; Expired: expired (3-day validity period).
                     * @param _status Log download status. Valid values: Queuing: queuing; Processing: exporting; Complete: completed; Failed: failed; Expired: expired (3-day validity period).
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Log export path
                     */
                    std::string m_cosPath;
                    bool m_cosPathHasBeenSet;

                    /**
                     * Number of logs to be exported
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Log export task creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Log export task ID
                     */
                    std::string m_exportID;
                    bool m_exportIDHasBeenSet;

                    /**
                     * Log export filename
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Log file size
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Log export format
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Log export time sorting
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Log export query statement
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Log export start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Log export end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Log download status. Valid values: Queuing: queuing; Processing: exporting; Complete: completed; Failed: failed; Expired: expired (3-day validity period).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_LOGEXPORT_H_
