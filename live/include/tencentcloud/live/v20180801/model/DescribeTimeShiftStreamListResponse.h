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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETIMESHIFTSTREAMLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETIMESHIFTSTREAMLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/TimeShiftStreamInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeTimeShiftStreamList response structure.
                */
                class DescribeTimeShiftStreamListResponse : public AbstractModel
                {
                public:
                    DescribeTimeShiftStreamListResponse();
                    ~DescribeTimeShiftStreamListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total number of records in the specified time period.
                     * @return TotalSize The total number of records in the specified time period.
                     * 
                     */
                    int64_t GetTotalSize() const;

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     * 
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取The information of the streams.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StreamList The information of the streams.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TimeShiftStreamInfo> GetStreamList() const;

                    /**
                     * 判断参数 StreamList 是否已赋值
                     * @return StreamList 是否已赋值
                     * 
                     */
                    bool StreamListHasBeenSet() const;

                private:

                    /**
                     * The total number of records in the specified time period.
                     */
                    int64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * The information of the streams.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TimeShiftStreamInfo> m_streamList;
                    bool m_streamListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETIMESHIFTSTREAMLISTRESPONSE_H_
