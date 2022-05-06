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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_LOGCONTEXTINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_LOGCONTEXTINFO_H_

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
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Log source device
                     * @param Source Log source device
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Collection path
                     * @return Filename Collection path
                     */
                    std::string GetFilename() const;

                    /**
                     * 设置Collection path
                     * @param Filename Collection path
                     */
                    void SetFilename(const std::string& _filename);

                    /**
                     * 判断参数 Filename 是否已赋值
                     * @return Filename 是否已赋值
                     */
                    bool FilenameHasBeenSet() const;

                    /**
                     * 获取Log content
                     * @return Content Log content
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Log content
                     * @param Content Log content
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Log package number
                     * @return PkgId Log package number
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置Log package number
                     * @param PkgId Log package number
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取Log number in log package
                     * @return PkgLogId Log number in log package
                     */
                    int64_t GetPkgLogId() const;

                    /**
                     * 设置Log number in log package
                     * @param PkgLogId Log number in log package
                     */
                    void SetPkgLogId(const int64_t& _pkgLogId);

                    /**
                     * 判断参数 PkgLogId 是否已赋值
                     * @return PkgLogId 是否已赋值
                     */
                    bool PkgLogIdHasBeenSet() const;

                    /**
                     * 获取Log timestamp
                     * @return BTime Log timestamp
                     */
                    int64_t GetBTime() const;

                    /**
                     * 设置Log timestamp
                     * @param BTime Log timestamp
                     */
                    void SetBTime(const int64_t& _bTime);

                    /**
                     * 判断参数 BTime 是否已赋值
                     * @return BTime 是否已赋值
                     */
                    bool BTimeHasBeenSet() const;

                    /**
                     * 获取Source host name of logs
Note: This field may return `null`, indicating that no valid value was found.
                     * @return HostName Source host name of logs
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Source host name of logs
Note: This field may return `null`, indicating that no valid value was found.
                     * @param HostName Source host name of logs
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

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
                     * Source host name of logs
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_LOGCONTEXTINFO_H_
