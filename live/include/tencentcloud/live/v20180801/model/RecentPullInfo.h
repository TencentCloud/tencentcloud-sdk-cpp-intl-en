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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_RECENTPULLINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_RECENTPULLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * The latest pull information.
                */
                class RecentPullInfo : public AbstractModel
                {
                public:
                    RecentPullInfo();
                    ~RecentPullInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The URL of the file currently pulled.
                     * @return FileUrl The URL of the file currently pulled.
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置The URL of the file currently pulled.
                     * @param _fileUrl The URL of the file currently pulled.
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取The offset of the file currently pulled.
                     * @return OffsetTime The offset of the file currently pulled.
                     * 
                     */
                    uint64_t GetOffsetTime() const;

                    /**
                     * 设置The offset of the file currently pulled.
                     * @param _offsetTime The offset of the file currently pulled.
                     * 
                     */
                    void SetOffsetTime(const uint64_t& _offsetTime);

                    /**
                     * 判断参数 OffsetTime 是否已赋值
                     * @return OffsetTime 是否已赋值
                     * 
                     */
                    bool OffsetTimeHasBeenSet() const;

                    /**
                     * 获取The time when the offset is reported, in UTC format.
Example: 2020-07-23T03:20:39Z
Note: Beijing time is 8 hours ahead of UTC.
                     * @return ReportTime The time when the offset is reported, in UTC format.
Example: 2020-07-23T03:20:39Z
Note: Beijing time is 8 hours ahead of UTC.
                     * 
                     */
                    std::string GetReportTime() const;

                    /**
                     * 设置The time when the offset is reported, in UTC format.
Example: 2020-07-23T03:20:39Z
Note: Beijing time is 8 hours ahead of UTC.
                     * @param _reportTime The time when the offset is reported, in UTC format.
Example: 2020-07-23T03:20:39Z
Note: Beijing time is 8 hours ahead of UTC.
                     * 
                     */
                    void SetReportTime(const std::string& _reportTime);

                    /**
                     * 判断参数 ReportTime 是否已赋值
                     * @return ReportTime 是否已赋值
                     * 
                     */
                    bool ReportTimeHasBeenSet() const;

                    /**
                     * 获取The number of times looped.
                     * @return LoopedTimes The number of times looped.
                     * 
                     */
                    int64_t GetLoopedTimes() const;

                    /**
                     * 设置The number of times looped.
                     * @param _loopedTimes The number of times looped.
                     * 
                     */
                    void SetLoopedTimes(const int64_t& _loopedTimes);

                    /**
                     * 判断参数 LoopedTimes 是否已赋值
                     * @return LoopedTimes 是否已赋值
                     * 
                     */
                    bool LoopedTimesHasBeenSet() const;

                private:

                    /**
                     * The URL of the file currently pulled.
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * The offset of the file currently pulled.
                     */
                    uint64_t m_offsetTime;
                    bool m_offsetTimeHasBeenSet;

                    /**
                     * The time when the offset is reported, in UTC format.
Example: 2020-07-23T03:20:39Z
Note: Beijing time is 8 hours ahead of UTC.
                     */
                    std::string m_reportTime;
                    bool m_reportTimeHasBeenSet;

                    /**
                     * The number of times looped.
                     */
                    int64_t m_loopedTimes;
                    bool m_loopedTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_RECENTPULLINFO_H_
