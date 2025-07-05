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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGCLEANSETTINGINFOREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGCLEANSETTINGINFOREQUEST_H_

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
                * ModifySecLogCleanSettingInfo request structure.
                */
                class ModifySecLogCleanSettingInfoRequest : public AbstractModel
                {
                public:
                    ModifySecLogCleanSettingInfoRequest();
                    ~ModifySecLogCleanSettingInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Minimum storage (50-99) for triggering clearing
                     * @return ReservesLimit Minimum storage (50-99) for triggering clearing
                     * 
                     */
                    uint64_t GetReservesLimit() const;

                    /**
                     * 设置Minimum storage (50-99) for triggering clearing
                     * @param _reservesLimit Minimum storage (50-99) for triggering clearing
                     * 
                     */
                    void SetReservesLimit(const uint64_t& _reservesLimit);

                    /**
                     * 判断参数 ReservesLimit 是否已赋值
                     * @return ReservesLimit 是否已赋值
                     * 
                     */
                    bool ReservesLimitHasBeenSet() const;

                    /**
                     * 获取Storage limit (greater than 0 and smaller than `ReservesLimit`) for stopping clearing
                     * @return ReservesDeadline Storage limit (greater than 0 and smaller than `ReservesLimit`) for stopping clearing
                     * 
                     */
                    uint64_t GetReservesDeadline() const;

                    /**
                     * 设置Storage limit (greater than 0 and smaller than `ReservesLimit`) for stopping clearing
                     * @param _reservesDeadline Storage limit (greater than 0 and smaller than `ReservesLimit`) for stopping clearing
                     * 
                     */
                    void SetReservesDeadline(const uint64_t& _reservesDeadline);

                    /**
                     * 判断参数 ReservesDeadline 是否已赋值
                     * @return ReservesDeadline 是否已赋值
                     * 
                     */
                    bool ReservesDeadlineHasBeenSet() const;

                    /**
                     * 获取Storage period (no less than one day) for triggering clearing
                     * @return DayLimit Storage period (no less than one day) for triggering clearing
                     * 
                     */
                    uint64_t GetDayLimit() const;

                    /**
                     * 设置Storage period (no less than one day) for triggering clearing
                     * @param _dayLimit Storage period (no less than one day) for triggering clearing
                     * 
                     */
                    void SetDayLimit(const uint64_t& _dayLimit);

                    /**
                     * 判断参数 DayLimit 是否已赋值
                     * @return DayLimit 是否已赋值
                     * 
                     */
                    bool DayLimitHasBeenSet() const;

                private:

                    /**
                     * Minimum storage (50-99) for triggering clearing
                     */
                    uint64_t m_reservesLimit;
                    bool m_reservesLimitHasBeenSet;

                    /**
                     * Storage limit (greater than 0 and smaller than `ReservesLimit`) for stopping clearing
                     */
                    uint64_t m_reservesDeadline;
                    bool m_reservesDeadlineHasBeenSet;

                    /**
                     * Storage period (no less than one day) for triggering clearing
                     */
                    uint64_t m_dayLimit;
                    bool m_dayLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGCLEANSETTINGINFOREQUEST_H_
