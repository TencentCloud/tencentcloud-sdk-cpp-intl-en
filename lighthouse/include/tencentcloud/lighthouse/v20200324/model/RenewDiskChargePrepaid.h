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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWDISKCHARGEPREPAID_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWDISKCHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Parameter settings for renewing the monthly subscribed cloud disk
                */
                class RenewDiskChargePrepaid : public AbstractModel
                {
                public:
                    RenewDiskChargePrepaid();
                    ~RenewDiskChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Purchase duration.
                     * @return Period Purchase duration.
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Purchase duration.
                     * @param Period Purchase duration.
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Whether Auto-Renewal is enabled 
                     * @return RenewFlag Whether Auto-Renewal is enabled 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Whether Auto-Renewal is enabled 
                     * @param RenewFlag Whether Auto-Renewal is enabled 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Duration unit. Default value: "m" (month).
                     * @return TimeUnit Duration unit. Default value: "m" (month).
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Duration unit. Default value: "m" (month).
                     * @param TimeUnit Duration unit. Default value: "m" (month).
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Expiration time of the current instance.
                     * @return CurInstanceDeadline Expiration time of the current instance.
                     */
                    std::string GetCurInstanceDeadline() const;

                    /**
                     * 设置Expiration time of the current instance.
                     * @param CurInstanceDeadline Expiration time of the current instance.
                     */
                    void SetCurInstanceDeadline(const std::string& _curInstanceDeadline);

                    /**
                     * 判断参数 CurInstanceDeadline 是否已赋值
                     * @return CurInstanceDeadline 是否已赋值
                     */
                    bool CurInstanceDeadlineHasBeenSet() const;

                private:

                    /**
                     * Purchase duration.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Whether Auto-Renewal is enabled 
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Duration unit. Default value: "m" (month).
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Expiration time of the current instance.
                     */
                    std::string m_curInstanceDeadline;
                    bool m_curInstanceDeadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWDISKCHARGEPREPAID_H_
