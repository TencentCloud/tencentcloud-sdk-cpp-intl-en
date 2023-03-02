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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINANALYTICSDETAIL_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINANALYTICSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DNS query volume in the current statistical dimension
                */
                class DomainAnalyticsDetail : public AbstractModel
                {
                public:
                    DomainAnalyticsDetail();
                    ~DomainAnalyticsDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DNS query volume in the current statistical dimension
                     * @return Num DNS query volume in the current statistical dimension
                     */
                    uint64_t GetNum() const;

                    /**
                     * 设置DNS query volume in the current statistical dimension
                     * @param Num DNS query volume in the current statistical dimension
                     */
                    void SetNum(const uint64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取Collection date for daily collection
                     * @return DateKey Collection date for daily collection
                     */
                    std::string GetDateKey() const;

                    /**
                     * 设置Collection date for daily collection
                     * @param DateKey Collection date for daily collection
                     */
                    void SetDateKey(const std::string& _dateKey);

                    /**
                     * 判断参数 DateKey 是否已赋值
                     * @return DateKey 是否已赋值
                     */
                    bool DateKeyHasBeenSet() const;

                    /**
                     * 获取The last hour (0–23) for hourly collection. For example, if `HourKey` is `23`, the DNS query volume in the statistical period of 22:00–23:00 will be collected.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HourKey The last hour (0–23) for hourly collection. For example, if `HourKey` is `23`, the DNS query volume in the statistical period of 22:00–23:00 will be collected.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetHourKey() const;

                    /**
                     * 设置The last hour (0–23) for hourly collection. For example, if `HourKey` is `23`, the DNS query volume in the statistical period of 22:00–23:00 will be collected.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param HourKey The last hour (0–23) for hourly collection. For example, if `HourKey` is `23`, the DNS query volume in the statistical period of 22:00–23:00 will be collected.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHourKey(const uint64_t& _hourKey);

                    /**
                     * 判断参数 HourKey 是否已赋值
                     * @return HourKey 是否已赋值
                     */
                    bool HourKeyHasBeenSet() const;

                private:

                    /**
                     * DNS query volume in the current statistical dimension
                     */
                    uint64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * Collection date for daily collection
                     */
                    std::string m_dateKey;
                    bool m_dateKeyHasBeenSet;

                    /**
                     * The last hour (0–23) for hourly collection. For example, if `HourKey` is `23`, the DNS query volume in the statistical period of 22:00–23:00 will be collected.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_hourKey;
                    bool m_hourKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINANALYTICSDETAIL_H_
