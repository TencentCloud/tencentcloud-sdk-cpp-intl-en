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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULEFFECTHOSTLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULEFFECTHOSTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulEffectHostList request structure.
                */
                class DescribeVulEffectHostListRequest : public AbstractModel
                {
                public:
                    DescribeVulEffectHostListRequest();
                    ~DescribeVulEffectHostListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination limit, with the maximum value being 100.
                     * @return Limit Pagination limit, with the maximum value being 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Pagination limit, with the maximum value being 100.
                     * @param _limit Pagination limit, with the maximum value being 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination offset
                     * @return Offset Pagination offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset
                     * @param _offset Pagination offset
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Vulnerability ID
                     * @return VulId Vulnerability ID
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _vulId Vulnerability ID
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取Filter criteria:
<li>AliasName - String - host name for filtering</li>
<li>TagIds - String - array of host tag IDs separated by commas</li>
<li>Status - String - status: 0: pending; 1: ignored; 3: fixed; 5: detecting; 6: fixing; 8: fixing failed</li>
<li>Uuid - String array - UUID array</li>
<li>Version - String array - paid edition array: "Flagship": Ultimate Edition; "PRO_VERSION": Pro Edition; "BASIC_VERSION": Basic Edition</li>
<li>InstanceState - String array - instance status array: "PENDING": creating; "LAUNCH_FAILED": creation failed; "RUNNING": running; "STOPPED": shut down; "STARTING": starting; "STOPPING": shutting down; "REBOOTING": restarting; "SHUTDOWN": to be terminated; "TERMINATING": terminating; "UNKNOWN": unknown (for non-Tencent Cloud machines and offline client) </li>
                     * @return Filters Filter criteria:
<li>AliasName - String - host name for filtering</li>
<li>TagIds - String - array of host tag IDs separated by commas</li>
<li>Status - String - status: 0: pending; 1: ignored; 3: fixed; 5: detecting; 6: fixing; 8: fixing failed</li>
<li>Uuid - String array - UUID array</li>
<li>Version - String array - paid edition array: "Flagship": Ultimate Edition; "PRO_VERSION": Pro Edition; "BASIC_VERSION": Basic Edition</li>
<li>InstanceState - String array - instance status array: "PENDING": creating; "LAUNCH_FAILED": creation failed; "RUNNING": running; "STOPPED": shut down; "STARTING": starting; "STOPPING": shutting down; "REBOOTING": restarting; "SHUTDOWN": to be terminated; "TERMINATING": terminating; "UNKNOWN": unknown (for non-Tencent Cloud machines and offline client) </li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria:
<li>AliasName - String - host name for filtering</li>
<li>TagIds - String - array of host tag IDs separated by commas</li>
<li>Status - String - status: 0: pending; 1: ignored; 3: fixed; 5: detecting; 6: fixing; 8: fixing failed</li>
<li>Uuid - String array - UUID array</li>
<li>Version - String array - paid edition array: "Flagship": Ultimate Edition; "PRO_VERSION": Pro Edition; "BASIC_VERSION": Basic Edition</li>
<li>InstanceState - String array - instance status array: "PENDING": creating; "LAUNCH_FAILED": creation failed; "RUNNING": running; "STOPPED": shut down; "STARTING": starting; "STOPPING": shutting down; "REBOOTING": restarting; "SHUTDOWN": to be terminated; "TERMINATING": terminating; "UNKNOWN": unknown (for non-Tencent Cloud machines and offline client) </li>
                     * @param _filters Filter criteria:
<li>AliasName - String - host name for filtering</li>
<li>TagIds - String - array of host tag IDs separated by commas</li>
<li>Status - String - status: 0: pending; 1: ignored; 3: fixed; 5: detecting; 6: fixing; 8: fixing failed</li>
<li>Uuid - String array - UUID array</li>
<li>Version - String array - paid edition array: "Flagship": Ultimate Edition; "PRO_VERSION": Pro Edition; "BASIC_VERSION": Basic Edition</li>
<li>InstanceState - String array - instance status array: "PENDING": creating; "LAUNCH_FAILED": creation failed; "RUNNING": running; "STOPPED": shut down; "STARTING": starting; "STOPPING": shutting down; "REBOOTING": restarting; "SHUTDOWN": to be terminated; "TERMINATING": terminating; "UNKNOWN": unknown (for non-Tencent Cloud machines and offline client) </li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Pagination limit, with the maximum value being 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Vulnerability ID
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Filter criteria:
<li>AliasName - String - host name for filtering</li>
<li>TagIds - String - array of host tag IDs separated by commas</li>
<li>Status - String - status: 0: pending; 1: ignored; 3: fixed; 5: detecting; 6: fixing; 8: fixing failed</li>
<li>Uuid - String array - UUID array</li>
<li>Version - String array - paid edition array: "Flagship": Ultimate Edition; "PRO_VERSION": Pro Edition; "BASIC_VERSION": Basic Edition</li>
<li>InstanceState - String array - instance status array: "PENDING": creating; "LAUNCH_FAILED": creation failed; "RUNNING": running; "STOPPED": shut down; "STARTING": starting; "STOPPING": shutting down; "REBOOTING": restarting; "SHUTDOWN": to be terminated; "TERMINATING": terminating; "UNKNOWN": unknown (for non-Tencent Cloud machines and offline client) </li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULEFFECTHOSTLISTREQUEST_H_
