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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Task list of downloaded logs
                */
                class ExportInfo : public AbstractModel
                {
                public:
                    ExportInfo();
                    ~ExportInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID of exported logs
                     * @return ExportId Task ID of exported logs
                     * 
                     */
                    std::string GetExportId() const;

                    /**
                     * 设置Task ID of exported logs
                     * @param _exportId Task ID of exported logs
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
                     * 获取Query statements of log export
                     * @return Query Query statements of log export
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query statements of log export
                     * @param _query Query statements of log export
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
                     * 获取Filenames of exported logs
                     * @return FileName Filenames of exported logs
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Filenames of exported logs
                     * @param _fileName Filenames of exported logs
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
                     * 获取Sorting of log export time
                     * @return Order Sorting of log export time
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting of log export time
                     * @param _order Sorting of log export time
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
                     * 获取Log download status. Processing: export in progress; Completed: export completed; Failed: export failed; Expired: log export expired (valid for 3 days).
                     * @return Status Log download status. Processing: export in progress; Completed: export completed; Failed: export failed; Expired: log export expired (valid for 3 days).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Log download status. Processing: export in progress; Completed: export completed; Failed: export failed; Expired: log export expired (valid for 3 days).
                     * @param _status Log download status. Processing: export in progress; Completed: export completed; Failed: export failed; Expired: log export expired (valid for 3 days).
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
                     * 获取Start time of log export, with a millisecond-level UNIX timestamp
                     * @return StartTime Start time of log export, with a millisecond-level UNIX timestamp
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time of log export, with a millisecond-level UNIX timestamp
                     * @param _startTime Start time of log export, with a millisecond-level UNIX timestamp
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of log export, with a millisecond-level UNIX timestamp
                     * @return EndTime End time of log export, with a millisecond-level UNIX timestamp
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time of log export, with a millisecond-level UNIX timestamp
                     * @param _endTime End time of log export, with a millisecond-level UNIX timestamp
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

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
                     * 获取Creation time of log export
                     * @return CreateTime Creation time of log export
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of log export
                     * @param _createTime Creation time of log export
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Task ID of exported logs
                     */
                    std::string m_exportId;
                    bool m_exportIdHasBeenSet;

                    /**
                     * Query statements of log export
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Filenames of exported logs
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Log file size
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Sorting of log export time
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
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Log download status. Processing: export in progress; Completed: export completed; Failed: export failed; Expired: log export expired (valid for 3 days).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Start time of log export, with a millisecond-level UNIX timestamp
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of log export, with a millisecond-level UNIX timestamp
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Log export path
                     */
                    std::string m_cosPath;
                    bool m_cosPathHasBeenSet;

                    /**
                     * Creation time of log export
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTINFO_H_
