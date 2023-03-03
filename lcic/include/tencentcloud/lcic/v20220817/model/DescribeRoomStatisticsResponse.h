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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/MemberRecord.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeRoomStatistics response structure.
                */
                class DescribeRoomStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeRoomStatisticsResponse();
                    ~DescribeRoomStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Peak number of online members
                     * @return PeakMemberNumber Peak number of online members
                     */
                    uint64_t GetPeakMemberNumber() const;

                    /**
                     * 判断参数 PeakMemberNumber 是否已赋值
                     * @return PeakMemberNumber 是否已赋值
                     */
                    bool PeakMemberNumberHasBeenSet() const;

                    /**
                     * 获取Accumulated number of online members
                     * @return MemberNumber Accumulated number of online members
                     */
                    uint64_t GetMemberNumber() const;

                    /**
                     * 判断参数 MemberNumber 是否已赋值
                     * @return MemberNumber 是否已赋值
                     */
                    bool MemberNumberHasBeenSet() const;

                    /**
                     * 获取Total number of records, including members who entered the room and members who should attend the class but did not
                     * @return Total Total number of records, including members who entered the room and members who should attend the class but did not
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Member record list
                     * @return MemberRecords Member record list
                     */
                    std::vector<MemberRecord> GetMemberRecords() const;

                    /**
                     * 判断参数 MemberRecords 是否已赋值
                     * @return MemberRecords 是否已赋值
                     */
                    bool MemberRecordsHasBeenSet() const;

                    /**
                     * 获取The actual start time of the room, in Unix timestamp, accurate to seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealStartTime The actual start time of the room, in Unix timestamp, accurate to seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetRealStartTime() const;

                    /**
                     * 判断参数 RealStartTime 是否已赋值
                     * @return RealStartTime 是否已赋值
                     */
                    bool RealStartTimeHasBeenSet() const;

                    /**
                     * 获取The actual end time of the room, in Unix timestamp, accurate to seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealEndTime The actual end time of the room, in Unix timestamp, accurate to seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetRealEndTime() const;

                    /**
                     * 判断参数 RealEndTime 是否已赋值
                     * @return RealEndTime 是否已赋值
                     */
                    bool RealEndTimeHasBeenSet() const;

                    /**
                     * 获取The total number of room messages.
                     * @return MessageCount The total number of room messages.
                     */
                    uint64_t GetMessageCount() const;

                    /**
                     * 判断参数 MessageCount 是否已赋值
                     * @return MessageCount 是否已赋值
                     */
                    bool MessageCountHasBeenSet() const;

                    /**
                     * 获取The total number of mics in the room.
                     * @return MicCount The total number of mics in the room.
                     */
                    uint64_t GetMicCount() const;

                    /**
                     * 判断参数 MicCount 是否已赋值
                     * @return MicCount 是否已赋值
                     */
                    bool MicCountHasBeenSet() const;

                private:

                    /**
                     * Peak number of online members
                     */
                    uint64_t m_peakMemberNumber;
                    bool m_peakMemberNumberHasBeenSet;

                    /**
                     * Accumulated number of online members
                     */
                    uint64_t m_memberNumber;
                    bool m_memberNumberHasBeenSet;

                    /**
                     * Total number of records, including members who entered the room and members who should attend the class but did not
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Member record list
                     */
                    std::vector<MemberRecord> m_memberRecords;
                    bool m_memberRecordsHasBeenSet;

                    /**
                     * The actual start time of the room, in Unix timestamp, accurate to seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_realStartTime;
                    bool m_realStartTimeHasBeenSet;

                    /**
                     * The actual end time of the room, in Unix timestamp, accurate to seconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_realEndTime;
                    bool m_realEndTimeHasBeenSet;

                    /**
                     * The total number of room messages.
                     */
                    uint64_t m_messageCount;
                    bool m_messageCountHasBeenSet;

                    /**
                     * The total number of mics in the room.
                     */
                    uint64_t m_micCount;
                    bool m_micCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMSTATISTICSRESPONSE_H_
