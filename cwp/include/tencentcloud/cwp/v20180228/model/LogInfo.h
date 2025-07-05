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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_LOGINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_LOGINFO_H_

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
                * Log details
                */
                class LogInfo : public AbstractModel
                {
                public:
                    LogInfo();
                    ~LogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取JSON serialized string of the log content
                     * @return Content JSON serialized string of the log content
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置JSON serialized string of the log content
                     * @param _content JSON serialized string of the log content
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
                     * 获取Log file name
                     * @return FileName Log file name
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Log file name
                     * @param _fileName Log file name
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
                     * 获取Log source IP address
                     * @return Source Log source IP address
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Log source IP address
                     * @param _source Log source IP address
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
                     * 获取Log time, in milliseconds
                     * @return TimeStamp Log time, in milliseconds
                     * 
                     */
                    int64_t GetTimeStamp() const;

                    /**
                     * 设置Log time, in milliseconds
                     * @param _timeStamp Log time, in milliseconds
                     * 
                     */
                    void SetTimeStamp(const int64_t& _timeStamp);

                    /**
                     * 判断参数 TimeStamp 是否已赋值
                     * @return TimeStamp 是否已赋值
                     * 
                     */
                    bool TimeStampHasBeenSet() const;

                private:

                    /**
                     * JSON serialized string of the log content
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Log file name
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Log source IP address
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Log time, in milliseconds
                     */
                    int64_t m_timeStamp;
                    bool m_timeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_LOGINFO_H_
