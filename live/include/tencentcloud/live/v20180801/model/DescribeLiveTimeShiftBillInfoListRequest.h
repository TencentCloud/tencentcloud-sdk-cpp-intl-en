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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETIMESHIFTBILLINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETIMESHIFTBILLINFOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeLiveTimeShiftBillInfoList request structure.
                */
                class DescribeLiveTimeShiftBillInfoListRequest : public AbstractModel
                {
                public:
                    DescribeLiveTimeShiftBillInfoListRequest();
                    ~DescribeLiveTimeShiftBillInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The start time for query. You can query data from the past three months. The longest time period that can be queried is one month.

It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * @return StartTime The start time for query. You can query data from the past three months. The longest time period that can be queried is one month.

It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time for query. You can query data from the past three months. The longest time period that can be queried is one month.

It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * @param _startTime The start time for query. You can query data from the past three months. The longest time period that can be queried is one month.

It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time for query. You can query data from the past three months. The longest time period that can be queried is one month.

It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * @return EndTime The end time for query. You can query data from the past three months. The longest time period that can be queried is one month.

It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time for query. You can query data from the past three months. The longest time period that can be queried is one month.

It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * @param _endTime The end time for query. You can query data from the past three months. The longest time period that can be queried is one month.

It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The push domains to query. If you leave this empty, the time shifting billing data of all push domains will be returned.
                     * @return PushDomains The push domains to query. If you leave this empty, the time shifting billing data of all push domains will be returned.
                     * 
                     */
                    std::vector<std::string> GetPushDomains() const;

                    /**
                     * 设置The push domains to query. If you leave this empty, the time shifting billing data of all push domains will be returned.
                     * @param _pushDomains The push domains to query. If you leave this empty, the time shifting billing data of all push domains will be returned.
                     * 
                     */
                    void SetPushDomains(const std::vector<std::string>& _pushDomains);

                    /**
                     * 判断参数 PushDomains 是否已赋值
                     * @return PushDomains 是否已赋值
                     * 
                     */
                    bool PushDomainsHasBeenSet() const;

                private:

                    /**
                     * The start time for query. You can query data from the past three months. The longest time period that can be queried is one month.

It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time for query. You can query data from the past three months. The longest time period that can be queried is one month.

It must be in UTC format.
Example: 2019-01-08T10:00:00Z.
Note: Beijing time is 8 hours ahead of UTC. The [ISO 8601 format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format) is used.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The push domains to query. If you leave this empty, the time shifting billing data of all push domains will be returned.
                     */
                    std::vector<std::string> m_pushDomains;
                    bool m_pushDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVETIMESHIFTBILLINFOLISTREQUEST_H_
