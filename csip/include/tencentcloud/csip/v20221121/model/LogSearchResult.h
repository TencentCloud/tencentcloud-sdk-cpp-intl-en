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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LOGSEARCHRESULT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LOGSEARCHRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LogHighLightItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Log retrieval results
                */
                class LogSearchResult : public AbstractModel
                {
                public:
                    LogSearchResult();
                    ~LogSearchResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Time</p>
                     * @return Time <p>Time</p>
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置<p>Time</p>
                     * @param _time <p>Time</p>
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
                     * 获取<p>Topic</p>
                     * @return TopicId <p>Topic</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>Topic</p>
                     * @param _topicId <p>Topic</p>
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
                     * 获取<p>Topic name.</p>
                     * @return TopicName <p>Topic name.</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>Topic name.</p>
                     * @param _topicName <p>Topic name.</p>
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
                     * 获取<p>Source.</p>
                     * @return Source <p>Source.</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>Source.</p>
                     * @param _source <p>Source.</p>
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
                     * 获取<p>File name</p>
                     * @return FileName <p>File name</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>File name</p>
                     * @param _fileName <p>File name</p>
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
                     * 获取<p>pkgid</p>
                     * @return PkgId <p>pkgid</p>
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置<p>pkgid</p>
                     * @param _pkgId <p>pkgid</p>
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
                     * 获取<p>pkglogid</p>
                     * @return PkgLogId <p>pkglogid</p>
                     * 
                     */
                    std::string GetPkgLogId() const;

                    /**
                     * 设置<p>pkglogid</p>
                     * @param _pkgLogId <p>pkglogid</p>
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
                     * 获取<p>json data</p>
                     * @return LogJson <p>json data</p>
                     * 
                     */
                    std::string GetLogJson() const;

                    /**
                     * 设置<p>json data</p>
                     * @param _logJson <p>json data</p>
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
                     * 获取<p>host name</p>
                     * @return HostName <p>host name</p>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置<p>host name</p>
                     * @param _hostName <p>host name</p>
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
                     * 获取<p>log message</p>
                     * @return RawLog <p>log message</p>
                     * 
                     */
                    std::string GetRawLog() const;

                    /**
                     * 设置<p>log message</p>
                     * @param _rawLog <p>log message</p>
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
                     * 获取<p>Index status.</p>
                     * @return IndexStatus <p>Index status.</p>
                     * 
                     */
                    std::string GetIndexStatus() const;

                    /**
                     * 设置<p>Index status.</p>
                     * @param _indexStatus <p>Index status.</p>
                     * 
                     */
                    void SetIndexStatus(const std::string& _indexStatus);

                    /**
                     * 判断参数 IndexStatus 是否已赋值
                     * @return IndexStatus 是否已赋值
                     * 
                     */
                    bool IndexStatusHasBeenSet() const;

                    /**
                     * 获取<p>Highlighted Information</p>
                     * @return HighLights <p>Highlighted Information</p>
                     * 
                     */
                    std::vector<LogHighLightItem> GetHighLights() const;

                    /**
                     * 设置<p>Highlighted Information</p>
                     * @param _highLights <p>Highlighted Information</p>
                     * 
                     */
                    void SetHighLights(const std::vector<LogHighLightItem>& _highLights);

                    /**
                     * 判断参数 HighLights 是否已赋值
                     * @return HighLights 是否已赋值
                     * 
                     */
                    bool HighLightsHasBeenSet() const;

                private:

                    /**
                     * <p>Time</p>
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>Topic</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Topic name.</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>Source.</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>File name</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>pkgid</p>
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * <p>pkglogid</p>
                     */
                    std::string m_pkgLogId;
                    bool m_pkgLogIdHasBeenSet;

                    /**
                     * <p>json data</p>
                     */
                    std::string m_logJson;
                    bool m_logJsonHasBeenSet;

                    /**
                     * <p>host name</p>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>log message</p>
                     */
                    std::string m_rawLog;
                    bool m_rawLogHasBeenSet;

                    /**
                     * <p>Index status.</p>
                     */
                    std::string m_indexStatus;
                    bool m_indexStatusHasBeenSet;

                    /**
                     * <p>Highlighted Information</p>
                     */
                    std::vector<LogHighLightItem> m_highLights;
                    bool m_highLightsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LOGSEARCHRESULT_H_
