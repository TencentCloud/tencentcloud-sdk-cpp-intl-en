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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMSTATISTICSRESPONSE_H_
