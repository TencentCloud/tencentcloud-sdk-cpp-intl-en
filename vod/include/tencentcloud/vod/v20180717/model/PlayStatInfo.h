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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PLAYSTATINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PLAYSTATINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Playback statistical information.
                */
                class PlayStatInfo : public AbstractModel
                {
                public:
                    PlayStatInfo();
                    ~PlayStatInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start time of the time interval where the data resides, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). For example, when the time granularity is day, 2018-12-01T00:00:00+08:00 means the interval from December 1, 2018 (inclusive) to December 2, 2018 (exclusive).
<li>For hour-level data, 2019-08-22T00:00:00+08:00 refers to the stats from 0:00 to 1:00 on August 22, 2019.</li>
<li>For daily-level data, 2019-08-22T00:00:00+08:00 refers to the stats of 2019-08-22.</li>
                     * @return Time Start time of the time interval where the data resides, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). For example, when the time granularity is day, 2018-12-01T00:00:00+08:00 means the interval from December 1, 2018 (inclusive) to December 2, 2018 (exclusive).
<li>For hour-level data, 2019-08-22T00:00:00+08:00 refers to the stats from 0:00 to 1:00 on August 22, 2019.</li>
<li>For daily-level data, 2019-08-22T00:00:00+08:00 refers to the stats of 2019-08-22.</li>
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Start time of the time interval where the data resides, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). For example, when the time granularity is day, 2018-12-01T00:00:00+08:00 means the interval from December 1, 2018 (inclusive) to December 2, 2018 (exclusive).
<li>For hour-level data, 2019-08-22T00:00:00+08:00 refers to the stats from 0:00 to 1:00 on August 22, 2019.</li>
<li>For daily-level data, 2019-08-22T00:00:00+08:00 refers to the stats of 2019-08-22.</li>
                     * @param _time Start time of the time interval where the data resides, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). For example, when the time granularity is day, 2018-12-01T00:00:00+08:00 means the interval from December 1, 2018 (inclusive) to December 2, 2018 (exclusive).
<li>For hour-level data, 2019-08-22T00:00:00+08:00 refers to the stats from 0:00 to 1:00 on August 22, 2019.</li>
<li>For daily-level data, 2019-08-22T00:00:00+08:00 refers to the stats of 2019-08-22.</li>
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Media file ID.
                     * @return FileId Media file ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media file ID.
                     * @param _fileId Media file ID.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Number of plays.
                     * @return PlayTimes Number of plays.
                     * 
                     */
                    uint64_t GetPlayTimes() const;

                    /**
                     * 设置Number of plays.
                     * @param _playTimes Number of plays.
                     * 
                     */
                    void SetPlayTimes(const uint64_t& _playTimes);

                    /**
                     * 判断参数 PlayTimes 是否已赋值
                     * @return PlayTimes 是否已赋值
                     * 
                     */
                    bool PlayTimesHasBeenSet() const;

                    /**
                     * 获取Playback traffic volume. Measurement unit: byte.
                     * @return Traffic Playback traffic volume. Measurement unit: byte.
                     * 
                     */
                    uint64_t GetTraffic() const;

                    /**
                     * 设置Playback traffic volume. Measurement unit: byte.
                     * @param _traffic Playback traffic volume. Measurement unit: byte.
                     * 
                     */
                    void SetTraffic(const uint64_t& _traffic);

                    /**
                     * 判断参数 Traffic 是否已赋值
                     * @return Traffic 是否已赋值
                     * 
                     */
                    bool TrafficHasBeenSet() const;

                private:

                    /**
                     * Start time of the time interval where the data resides, using [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). For example, when the time granularity is day, 2018-12-01T00:00:00+08:00 means the interval from December 1, 2018 (inclusive) to December 2, 2018 (exclusive).
<li>For hour-level data, 2019-08-22T00:00:00+08:00 refers to the stats from 0:00 to 1:00 on August 22, 2019.</li>
<li>For daily-level data, 2019-08-22T00:00:00+08:00 refers to the stats of 2019-08-22.</li>
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Media file ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Number of plays.
                     */
                    uint64_t m_playTimes;
                    bool m_playTimesHasBeenSet;

                    /**
                     * Playback traffic volume. Measurement unit: byte.
                     */
                    uint64_t m_traffic;
                    bool m_trafficHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PLAYSTATINFO_H_
