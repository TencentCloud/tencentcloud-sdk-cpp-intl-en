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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_LOGCONTEXTINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_LOGCONTEXTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/HighLightItem.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Log context information
                */
                class LogContextInfo : public AbstractModel
                {
                public:
                    LogContextInfo();
                    ~LogContextInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log source device
                     * @return Source Log source device
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Log source device
                     * @param _source Log source device
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
                     * 获取Collection path
                     * @return Filename Collection path
                     * 
                     */
                    std::string GetFilename() const;

                    /**
                     * 设置Collection path
                     * @param _filename Collection path
                     * 
                     */
                    void SetFilename(const std::string& _filename);

                    /**
                     * 判断参数 Filename 是否已赋值
                     * @return Filename 是否已赋值
                     * 
                     */
                    bool FilenameHasBeenSet() const;

                    /**
                     * 获取Log content
                     * @return Content Log content
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Log content
                     * @param _content Log content
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Log package number
                     * @return PkgId Log package number
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置Log package number
                     * @param _pkgId Log package number
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
                     * 获取Log number in log package
                     * @return PkgLogId Log number in log package
                     * 
                     */
                    int64_t GetPkgLogId() const;

                    /**
                     * 设置Log number in log package
                     * @param _pkgLogId Log number in log package
                     * 
                     */
                    void SetPkgLogId(const int64_t& _pkgLogId);

                    /**
                     * 判断参数 PkgLogId 是否已赋值
                     * @return PkgLogId 是否已赋值
                     * 
                     */
                    bool PkgLogIdHasBeenSet() const;

                    /**
                     * 获取Log timestamp
                     * @return BTime Log timestamp
                     * 
                     */
                    int64_t GetBTime() const;

                    /**
                     * 设置Log timestamp
                     * @param _bTime Log timestamp
                     * 
                     */
                    void SetBTime(const int64_t& _bTime);

                    /**
                     * 判断参数 BTime 是否已赋值
                     * @return BTime 是否已赋值
                     * 
                     */
                    bool BTimeHasBeenSet() const;

                    /**
                     * 获取Log source host name
                     * @return HostName Log source host name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Log source host name
                     * @param _hostName Log source host name
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
                     * 获取Raw log (only available when there is an error in creating the log index).
                     * @return RawLog Raw log (only available when there is an error in creating the log index).
                     * 
                     */
                    std::string GetRawLog() const;

                    /**
                     * 设置Raw log (only available when there is an error in creating the log index).
                     * @param _rawLog Raw log (only available when there is an error in creating the log index).
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
                     * 获取Cause for log index creation exception. It has a value only when a log index creation exception occurs.
                     * @return IndexStatus Cause for log index creation exception. It has a value only when a log index creation exception occurs.
                     * 
                     */
                    std::string GetIndexStatus() const;

                    /**
                     * 设置Cause for log index creation exception. It has a value only when a log index creation exception occurs.
                     * @param _indexStatus Cause for log index creation exception. It has a value only when a log index creation exception occurs.
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
                     * 获取Highlighted description of the log content
                     * @return HighLights Highlighted description of the log content
                     * 
                     */
                    std::vector<HighLightItem> GetHighLights() const;

                    /**
                     * 设置Highlighted description of the log content
                     * @param _highLights Highlighted description of the log content
                     * 
                     */
                    void SetHighLights(const std::vector<HighLightItem>& _highLights);

                    /**
                     * 判断参数 HighLights 是否已赋值
                     * @return HighLights 是否已赋值
                     * 
                     */
                    bool HighLightsHasBeenSet() const;

                private:

                    /**
                     * Log source device
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Collection path
                     */
                    std::string m_filename;
                    bool m_filenameHasBeenSet;

                    /**
                     * Log content
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Log package number
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * Log number in log package
                     */
                    int64_t m_pkgLogId;
                    bool m_pkgLogIdHasBeenSet;

                    /**
                     * Log timestamp
                     */
                    int64_t m_bTime;
                    bool m_bTimeHasBeenSet;

                    /**
                     * Log source host name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Raw log (only available when there is an error in creating the log index).
                     */
                    std::string m_rawLog;
                    bool m_rawLogHasBeenSet;

                    /**
                     * Cause for log index creation exception. It has a value only when a log index creation exception occurs.
                     */
                    std::string m_indexStatus;
                    bool m_indexStatusHasBeenSet;

                    /**
                     * Highlighted description of the log content
                     */
                    std::vector<HighLightItem> m_highLights;
                    bool m_highLightsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_LOGCONTEXTINFO_H_
