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
                * The playback statistics.
                */
                class PlayStatInfo : public AbstractModel
                {
                public:
                    PlayStatInfo();
                    ~PlayStatInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The start time (in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I)) of the data returned. For example, if the granularity is a day, `2018-12-01T00:00:00+08:00` indicates that the data is for the period between December 1, 2018 (inclusive) and December 2, 2018 (exclusive).
<li>If the granularity is an hour, `2019-08-22T00:00:00+08:00` indicates the data is for the period between 00:00 and 01:00 AM on August 22, 2019.</li>
<li>If the granularity is a day, `2019-08-22T00:00:00+08:00` indicates the data is for August 22, 2019.</li>
                     * @return Time The start time (in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I)) of the data returned. For example, if the granularity is a day, `2018-12-01T00:00:00+08:00` indicates that the data is for the period between December 1, 2018 (inclusive) and December 2, 2018 (exclusive).
<li>If the granularity is an hour, `2019-08-22T00:00:00+08:00` indicates the data is for the period between 00:00 and 01:00 AM on August 22, 2019.</li>
<li>If the granularity is a day, `2019-08-22T00:00:00+08:00` indicates the data is for August 22, 2019.</li>
                     */
                    std::string GetTime() const;

                    /**
                     * 设置The start time (in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I)) of the data returned. For example, if the granularity is a day, `2018-12-01T00:00:00+08:00` indicates that the data is for the period between December 1, 2018 (inclusive) and December 2, 2018 (exclusive).
<li>If the granularity is an hour, `2019-08-22T00:00:00+08:00` indicates the data is for the period between 00:00 and 01:00 AM on August 22, 2019.</li>
<li>If the granularity is a day, `2019-08-22T00:00:00+08:00` indicates the data is for August 22, 2019.</li>
                     * @param Time The start time (in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I)) of the data returned. For example, if the granularity is a day, `2018-12-01T00:00:00+08:00` indicates that the data is for the period between December 1, 2018 (inclusive) and December 2, 2018 (exclusive).
<li>If the granularity is an hour, `2019-08-22T00:00:00+08:00` indicates the data is for the period between 00:00 and 01:00 AM on August 22, 2019.</li>
<li>If the granularity is a day, `2019-08-22T00:00:00+08:00` indicates the data is for August 22, 2019.</li>
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取The ID of the media file.
                     * @return FileId The ID of the media file.
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置The ID of the media file.
                     * @param FileId The ID of the media file.
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取The playback times.
                     * @return PlayTimes The playback times.
                     */
                    uint64_t GetPlayTimes() const;

                    /**
                     * 设置The playback times.
                     * @param PlayTimes The playback times.
                     */
                    void SetPlayTimes(const uint64_t& _playTimes);

                    /**
                     * 判断参数 PlayTimes 是否已赋值
                     * @return PlayTimes 是否已赋值
                     */
                    bool PlayTimesHasBeenSet() const;

                    /**
                     * 获取The traffic (in bytes) consumed for playback.
                     * @return Traffic The traffic (in bytes) consumed for playback.
                     */
                    uint64_t GetTraffic() const;

                    /**
                     * 设置The traffic (in bytes) consumed for playback.
                     * @param Traffic The traffic (in bytes) consumed for playback.
                     */
                    void SetTraffic(const uint64_t& _traffic);

                    /**
                     * 判断参数 Traffic 是否已赋值
                     * @return Traffic 是否已赋值
                     */
                    bool TrafficHasBeenSet() const;

                private:

                    /**
                     * The start time (in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I)) of the data returned. For example, if the granularity is a day, `2018-12-01T00:00:00+08:00` indicates that the data is for the period between December 1, 2018 (inclusive) and December 2, 2018 (exclusive).
<li>If the granularity is an hour, `2019-08-22T00:00:00+08:00` indicates the data is for the period between 00:00 and 01:00 AM on August 22, 2019.</li>
<li>If the granularity is a day, `2019-08-22T00:00:00+08:00` indicates the data is for August 22, 2019.</li>
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * The ID of the media file.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * The playback times.
                     */
                    uint64_t m_playTimes;
                    bool m_playTimesHasBeenSet;

                    /**
                     * The traffic (in bytes) consumed for playback.
                     */
                    uint64_t m_traffic;
                    bool m_trafficHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PLAYSTATINFO_H_
