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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_LOGINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_LOGINFO_H_

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
                * Log result information
                */
                class LogInfo : public AbstractModel
                {
                public:
                    LogInfo();
                    ~LogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log time in milliseconds
                     * @return Time Log time in milliseconds
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置Log time in milliseconds
                     * @param _time Log time in milliseconds
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

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
                     * 获取Log topic name
                     * @return TopicName Log topic name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Log topic name
                     * @param _topicName Log topic name
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Log source IP
                     * @return Source Log source IP
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Log source IP
                     * @param _source Log source IP
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Log filename
                     * @return FileName Log filename
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Log filename
                     * @param _fileName Log filename
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
                     * 获取ID of the request package for log reporting
                     * @return PkgId ID of the request package for log reporting
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置ID of the request package for log reporting
                     * @param _pkgId ID of the request package for log reporting
                     * 
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     * 
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取Log ID in request package
                     * @return PkgLogId Log ID in request package
                     * 
                     */
                    std::string GetPkgLogId() const;

                    /**
                     * 设置Log ID in request package
                     * @param _pkgLogId Log ID in request package
                     * 
                     */
                    void SetPkgLogId(const std::string& _pkgLogId);

                    /**
                     * 判断参数 PkgLogId 是否已赋值
                     * @return PkgLogId 是否已赋值
                     * 
                     */
                    bool PkgLogIdHasBeenSet() const;

                    /**
                     * 获取Serialized JSON string of log content
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return LogJson Serialized JSON string of log content
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogJson() const;

                    /**
                     * 设置Serialized JSON string of log content
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _logJson Serialized JSON string of log content
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogJson(const std::string& _logJson);

                    /**
                     * 判断参数 LogJson 是否已赋值
                     * @return LogJson 是否已赋值
                     * 
                     */
                    bool LogJsonHasBeenSet() const;

                    /**
                     * 获取Source host name of logs
Note: This field may return `null`, indicating that no valid value was found.
                     * @return HostName Source host name of logs
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Source host name of logs
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _hostName Source host name of logs
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Raw log (this parameter has a value only when an exception occurred while creating indexes for logs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RawLog Raw log (this parameter has a value only when an exception occurred while creating indexes for logs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRawLog() const;

                    /**
                     * 设置Raw log (this parameter has a value only when an exception occurred while creating indexes for logs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rawLog Raw log (this parameter has a value only when an exception occurred while creating indexes for logs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRawLog(const std::string& _rawLog);

                    /**
                     * 判断参数 RawLog 是否已赋值
                     * @return RawLog 是否已赋值
                     * 
                     */
                    bool RawLogHasBeenSet() const;

                    /**
                     * 获取The cause of index creation exception (this parameter has a value only when an exception occurred while creating indexes for logs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IndexStatus The cause of index creation exception (this parameter has a value only when an exception occurred while creating indexes for logs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIndexStatus() const;

                    /**
                     * 设置The cause of index creation exception (this parameter has a value only when an exception occurred while creating indexes for logs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _indexStatus The cause of index creation exception (this parameter has a value only when an exception occurred while creating indexes for logs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIndexStatus(const std::string& _indexStatus);

                    /**
                     * 判断参数 IndexStatus 是否已赋值
                     * @return IndexStatus 是否已赋值
                     * 
                     */
                    bool IndexStatusHasBeenSet() const;

                private:

                    /**
                     * Log time in milliseconds
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Log topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Log source IP
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Log filename
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * ID of the request package for log reporting
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * Log ID in request package
                     */
                    std::string m_pkgLogId;
                    bool m_pkgLogIdHasBeenSet;

                    /**
                     * Serialized JSON string of log content
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_logJson;
                    bool m_logJsonHasBeenSet;

                    /**
                     * Source host name of logs
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Raw log (this parameter has a value only when an exception occurred while creating indexes for logs).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_rawLog;
                    bool m_rawLogHasBeenSet;

                    /**
                     * The cause of index creation exception (this parameter has a value only when an exception occurred while creating indexes for logs).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_indexStatus;
                    bool m_indexStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_LOGINFO_H_
