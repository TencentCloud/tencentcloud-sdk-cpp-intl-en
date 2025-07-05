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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGCLEANSETTINGINFORESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGCLEANSETTINGINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeSecLogCleanSettingInfo response structure.
                */
                class DescribeSecLogCleanSettingInfoResponse : public AbstractModel
                {
                public:
                    DescribeSecLogCleanSettingInfoResponse();
                    ~DescribeSecLogCleanSettingInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Minimum storage for triggering clearing
                     * @return ReservesLimit Minimum storage for triggering clearing
                     * 
                     */
                    uint64_t GetReservesLimit() const;

                    /**
                     * 判断参数 ReservesLimit 是否已赋值
                     * @return ReservesLimit 是否已赋值
                     * 
                     */
                    bool ReservesLimitHasBeenSet() const;

                    /**
                     * 获取Storage limit for stopping clearing
                     * @return ReservesDeadline Storage limit for stopping clearing
                     * 
                     */
                    uint64_t GetReservesDeadline() const;

                    /**
                     * 判断参数 ReservesDeadline 是否已赋值
                     * @return ReservesDeadline 是否已赋值
                     * 
                     */
                    bool ReservesDeadlineHasBeenSet() const;

                    /**
                     * 获取Storage period for triggering clearing
                     * @return DayLimit Storage period for triggering clearing
                     * 
                     */
                    uint64_t GetDayLimit() const;

                    /**
                     * 判断参数 DayLimit 是否已赋值
                     * @return DayLimit 是否已赋值
                     * 
                     */
                    bool DayLimitHasBeenSet() const;

                private:

                    /**
                     * Minimum storage for triggering clearing
                     */
                    uint64_t m_reservesLimit;
                    bool m_reservesLimitHasBeenSet;

                    /**
                     * Storage limit for stopping clearing
                     */
                    uint64_t m_reservesDeadline;
                    bool m_reservesDeadlineHasBeenSet;

                    /**
                     * Storage period for triggering clearing
                     */
                    uint64_t m_dayLimit;
                    bool m_dayLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGCLEANSETTINGINFORESPONSE_H_
