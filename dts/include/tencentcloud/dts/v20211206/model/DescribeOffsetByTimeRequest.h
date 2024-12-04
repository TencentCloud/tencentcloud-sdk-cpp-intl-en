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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEOFFSETBYTIMEREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEOFFSETBYTIMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeOffsetByTime request structure.
                */
                class DescribeOffsetByTimeRequest : public AbstractModel
                {
                public:
                    DescribeOffsetByTimeRequest();
                    ~DescribeOffsetByTimeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data subscription instance ID
                     * @return SubscribeId Data subscription instance ID
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置Data subscription instance ID
                     * @param _subscribeId Data subscription instance ID
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取Timestamp, the format is: Y-m-d h:m:s. If the input time is much later than the current time, this is equivalent to the latest offset; if the input time is much earlier than the current time, this is equivalent to the oldest offset; if the input is empty, the default time is 0, which is the oldest offset to be queried.
                     * @return Time Timestamp, the format is: Y-m-d h:m:s. If the input time is much later than the current time, this is equivalent to the latest offset; if the input time is much earlier than the current time, this is equivalent to the oldest offset; if the input is empty, the default time is 0, which is the oldest offset to be queried.
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Timestamp, the format is: Y-m-d h:m:s. If the input time is much later than the current time, this is equivalent to the latest offset; if the input time is much earlier than the current time, this is equivalent to the oldest offset; if the input is empty, the default time is 0, which is the oldest offset to be queried.
                     * @param _time Timestamp, the format is: Y-m-d h:m:s. If the input time is much later than the current time, this is equivalent to the latest offset; if the input time is much earlier than the current time, this is equivalent to the oldest offset; if the input is empty, the default time is 0, which is the oldest offset to be queried.
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                private:

                    /**
                     * Data subscription instance ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * Timestamp, the format is: Y-m-d h:m:s. If the input time is much later than the current time, this is equivalent to the latest offset; if the input time is much earlier than the current time, this is equivalent to the oldest offset; if the input is empty, the default time is 0, which is the oldest offset to be queried.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEOFFSETBYTIMEREQUEST_H_
