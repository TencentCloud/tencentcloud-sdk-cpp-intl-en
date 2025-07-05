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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTSTREAMINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTSTREAMINFO_H_

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
                * The information of a time shifted stream.
                */
                class TimeShiftStreamInfo : public AbstractModel
                {
                public:
                    TimeShiftStreamInfo();
                    ~TimeShiftStreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The group the push domain belongs to.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DomainGroup The group the push domain belongs to.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomainGroup() const;

                    /**
                     * 设置The group the push domain belongs to.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domainGroup The group the push domain belongs to.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomainGroup(const std::string& _domainGroup);

                    /**
                     * 判断参数 DomainGroup 是否已赋值
                     * @return DomainGroup 是否已赋值
                     * 
                     */
                    bool DomainGroupHasBeenSet() const;

                    /**
                     * 获取The push domain.
                     * @return Domain The push domain.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The push domain.
                     * @param _domain The push domain.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取The push path.
                     * @return AppName The push path.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置The push path.
                     * @param _appName The push path.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取The stream name.
                     * @return StreamName The stream name.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置The stream name.
                     * @param _streamName The stream name.
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取The stream start time, which is a Unix timestamp.
                     * @return StartTime The stream start time, which is a Unix timestamp.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置The stream start time, which is a Unix timestamp.
                     * @param _startTime The stream start time, which is a Unix timestamp.
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
                     * 获取The stream end time (for streams that ended before the time of query), which is a Unix timestamp.
                     * @return EndTime The stream end time (for streams that ended before the time of query), which is a Unix timestamp.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置The stream end time (for streams that ended before the time of query), which is a Unix timestamp.
                     * @param _endTime The stream end time (for streams that ended before the time of query), which is a Unix timestamp.
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
                     * 获取The transcoding template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TransCodeId The transcoding template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTransCodeId() const;

                    /**
                     * 设置The transcoding template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transCodeId The transcoding template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTransCodeId(const uint64_t& _transCodeId);

                    /**
                     * 判断参数 TransCodeId 是否已赋值
                     * @return TransCodeId 是否已赋值
                     * 
                     */
                    bool TransCodeIdHasBeenSet() const;

                    /**
                     * 获取The stream type. `0`: The original stream; `1`: The watermarked stream; `2`: The transcoded stream.
                     * @return StreamType The stream type. `0`: The original stream; `1`: The watermarked stream; `2`: The transcoded stream.
                     * 
                     */
                    int64_t GetStreamType() const;

                    /**
                     * 设置The stream type. `0`: The original stream; `1`: The watermarked stream; `2`: The transcoded stream.
                     * @param _streamType The stream type. `0`: The original stream; `1`: The watermarked stream; `2`: The transcoded stream.
                     * 
                     */
                    void SetStreamType(const int64_t& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     * 
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取The storage duration (seconds) of the recording.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Duration The storage duration (seconds) of the recording.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置The storage duration (seconds) of the recording.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _duration The storage duration (seconds) of the recording.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * The group the push domain belongs to.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domainGroup;
                    bool m_domainGroupHasBeenSet;

                    /**
                     * The push domain.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The push path.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * The stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * The stream start time, which is a Unix timestamp.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The stream end time (for streams that ended before the time of query), which is a Unix timestamp.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The transcoding template ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_transCodeId;
                    bool m_transCodeIdHasBeenSet;

                    /**
                     * The stream type. `0`: The original stream; `1`: The watermarked stream; `2`: The transcoded stream.
                     */
                    int64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * The storage duration (seconds) of the recording.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTSTREAMINFO_H_
