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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPORTINSTANCEERRORLOGSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPORTINSTANCEERRORLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ExportInstanceErrorLogs request structure.
                */
                class ExportInstanceErrorLogsRequest : public AbstractModel
                {
                public:
                    ExportInstanceErrorLogsRequest();
                    ~ExportInstanceErrorLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Log start time
                     * @return StartTime Log start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Log start time
                     * @param _startTime Log start time
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
                     * 获取Log end time
                     * @return EndTime Log end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Log end time
                     * @param _endTime Log end time
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
                     * 获取The max number of returned results
                     * @return Limit The max number of returned results
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The max number of returned results
                     * @param _limit The max number of returned results
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Log level
                     * @return LogLevels Log level
                     * 
                     */
                    std::vector<std::string> GetLogLevels() const;

                    /**
                     * 设置Log level
                     * @param _logLevels Log level
                     * 
                     */
                    void SetLogLevels(const std::vector<std::string>& _logLevels);

                    /**
                     * 判断参数 LogLevels 是否已赋值
                     * @return LogLevels 是否已赋值
                     * 
                     */
                    bool LogLevelsHasBeenSet() const;

                    /**
                     * 获取
                     * @return KeyWords 
                     * 
                     */
                    std::vector<std::string> GetKeyWords() const;

                    /**
                     * 设置
                     * @param _keyWords 
                     * 
                     */
                    void SetKeyWords(const std::vector<std::string>& _keyWords);

                    /**
                     * 判断参数 KeyWords 是否已赋值
                     * @return KeyWords 是否已赋值
                     * 
                     */
                    bool KeyWordsHasBeenSet() const;

                    /**
                     * 获取The template type. Valid values: `csv`, `original`.
                     * @return FileType The template type. Valid values: `csv`, `original`.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置The template type. Valid values: `csv`, `original`.
                     * @param _fileType The template type. Valid values: `csv`, `original`.
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取Valid value: `Timestamp`
                     * @return OrderBy Valid value: `Timestamp`
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Valid value: `Timestamp`
                     * @param _orderBy Valid value: `Timestamp`
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Sorting type. valid values: ASC or DESC.
                     * @return OrderByType Sorting type. valid values: ASC or DESC.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting type. valid values: ASC or DESC.
                     * @param _orderByType Sorting type. valid values: ASC or DESC.
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Log start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Log end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The max number of returned results
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Log level
                     */
                    std::vector<std::string> m_logLevels;
                    bool m_logLevelsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_keyWords;
                    bool m_keyWordsHasBeenSet;

                    /**
                     * The template type. Valid values: `csv`, `original`.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Valid value: `Timestamp`
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting type. valid values: ASC or DESC.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPORTINSTANCEERRORLOGSREQUEST_H_
