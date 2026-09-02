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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPLICENSEBINDSCHEDULERESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPLICENSEBINDSCHEDULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LicenseBindTaskDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCWPLicenseBindSchedule response structure.
                */
                class DescribeCWPLicenseBindScheduleResponse : public AbstractModel
                {
                public:
                    DescribeCWPLicenseBindScheduleResponse();
                    ~DescribeCWPLicenseBindScheduleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Progress</p>
                     * @return Schedule <p>Progress</p>
                     * 
                     */
                    uint64_t GetSchedule() const;

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     * 
                     */
                    bool ScheduleHasBeenSet() const;

                    /**
                     * 获取<p>Bind task details</p>
                     * @return List <p>Bind task details</p>
                     * 
                     */
                    std::vector<LicenseBindTaskDetail> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取<p>Total quantity.</p>
                     * @return TotalCount <p>Total quantity.</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>Progress</p>
                     */
                    uint64_t m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * <p>Bind task details</p>
                     */
                    std::vector<LicenseBindTaskDetail> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * <p>Total quantity.</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPLICENSEBINDSCHEDULERESPONSE_H_
