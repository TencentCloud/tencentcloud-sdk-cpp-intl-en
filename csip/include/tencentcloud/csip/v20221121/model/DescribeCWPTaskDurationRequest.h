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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPTASKDURATIONREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPTASKDURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCWPTaskDuration request structure.
                */
                class DescribeCWPTaskDurationRequest : public AbstractModel
                {
                public:
                    DescribeCWPTaskDurationRequest();
                    ~DescribeCWPTaskDurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of Hosts that Require Performing Tasks
                     * @return UuidCnt Number of Hosts that Require Performing Tasks
                     * 
                     */
                    uint64_t GetUuidCnt() const;

                    /**
                     * 设置Number of Hosts that Require Performing Tasks
                     * @param _uuidCnt Number of Hosts that Require Performing Tasks
                     * 
                     */
                    void SetUuidCnt(const uint64_t& _uuidCnt);

                    /**
                     * 判断参数 UuidCnt 是否已赋值
                     * @return UuidCnt 是否已赋值
                     * 
                     */
                    bool UuidCntHasBeenSet() const;

                    /**
                     * 获取Whether to perform a scheduled scan
                     * @return TimingScan Whether to perform a scheduled scan
                     * 
                     */
                    bool GetTimingScan() const;

                    /**
                     * 设置Whether to perform a scheduled scan
                     * @param _timingScan Whether to perform a scheduled scan
                     * 
                     */
                    void SetTimingScan(const bool& _timingScan);

                    /**
                     * 判断参数 TimingScan 是否已赋值
                     * @return TimingScan 是否已赋值
                     * 
                     */
                    bool TimingScanHasBeenSet() const;

                private:

                    /**
                     * Number of Hosts that Require Performing Tasks
                     */
                    uint64_t m_uuidCnt;
                    bool m_uuidCntHasBeenSet;

                    /**
                     * Whether to perform a scheduled scan
                     */
                    bool m_timingScan;
                    bool m_timingScanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPTASKDURATIONREQUEST_H_
