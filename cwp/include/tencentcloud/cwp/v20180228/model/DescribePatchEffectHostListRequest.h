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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPATCHEFFECTHOSTLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPATCHEFFECTHOSTLISTREQUEST_H_

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
                * DescribePatchEffectHostList request structure.
                */
                class DescribePatchEffectHostListRequest : public AbstractModel
                {
                public:
                    DescribePatchEffectHostListRequest();
                    ~DescribePatchEffectHostListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Patch ID
                     * @return KbId Patch ID
                     * 
                     */
                    uint64_t GetKbId() const;

                    /**
                     * 设置Patch ID
                     * @param _kbId Patch ID
                     * 
                     */
                    void SetKbId(const uint64_t& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

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
                     * 获取Pagination offset.
                     * @return Offset Pagination offset.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset.
                     * @param _offset Pagination offset.
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
                     * 获取Filter criteria:  
<li>HostVersion : uint64 data type Optional Version information : 0-Basic version 1-Pro edition 2-Flagship edition 3-Lite edition</li>
<li>InstanceState: string type, optional. Host status: "PENDING": creating; "LAUNCH_FAILED": creation failed; "RUNNING": running; "STOPPED": shut down; "STARTING": starting; "STOPPING": shutting down; "REBOOTING": restarting; "SHUTDOWN": to be terminated; "TERMINATING": terminating; "UNKNOWN": unknown (for non-Tencent Cloud machines and offline client)</li>
<li>Status - uint64 - optional - processing Status: 0 - pending; 1 - ignored; 3 - fixed</li>
<li>HostName: string type optional host name</li>
<li>InstanceID : string type optional host id</li>
<li>IpAddress: string type optional The ip address of the host</li>
<li>Uuid : string type optional host uuid</li>
                     * @return Filters Filter criteria:  
<li>HostVersion : uint64 data type Optional Version information : 0-Basic version 1-Pro edition 2-Flagship edition 3-Lite edition</li>
<li>InstanceState: string type, optional. Host status: "PENDING": creating; "LAUNCH_FAILED": creation failed; "RUNNING": running; "STOPPED": shut down; "STARTING": starting; "STOPPING": shutting down; "REBOOTING": restarting; "SHUTDOWN": to be terminated; "TERMINATING": terminating; "UNKNOWN": unknown (for non-Tencent Cloud machines and offline client)</li>
<li>Status - uint64 - optional - processing Status: 0 - pending; 1 - ignored; 3 - fixed</li>
<li>HostName: string type optional host name</li>
<li>InstanceID : string type optional host id</li>
<li>IpAddress: string type optional The ip address of the host</li>
<li>Uuid : string type optional host uuid</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria:  
<li>HostVersion : uint64 data type Optional Version information : 0-Basic version 1-Pro edition 2-Flagship edition 3-Lite edition</li>
<li>InstanceState: string type, optional. Host status: "PENDING": creating; "LAUNCH_FAILED": creation failed; "RUNNING": running; "STOPPED": shut down; "STARTING": starting; "STOPPING": shutting down; "REBOOTING": restarting; "SHUTDOWN": to be terminated; "TERMINATING": terminating; "UNKNOWN": unknown (for non-Tencent Cloud machines and offline client)</li>
<li>Status - uint64 - optional - processing Status: 0 - pending; 1 - ignored; 3 - fixed</li>
<li>HostName: string type optional host name</li>
<li>InstanceID : string type optional host id</li>
<li>IpAddress: string type optional The ip address of the host</li>
<li>Uuid : string type optional host uuid</li>
                     * @param _filters Filter criteria:  
<li>HostVersion : uint64 data type Optional Version information : 0-Basic version 1-Pro edition 2-Flagship edition 3-Lite edition</li>
<li>InstanceState: string type, optional. Host status: "PENDING": creating; "LAUNCH_FAILED": creation failed; "RUNNING": running; "STOPPED": shut down; "STARTING": starting; "STOPPING": shutting down; "REBOOTING": restarting; "SHUTDOWN": to be terminated; "TERMINATING": terminating; "UNKNOWN": unknown (for non-Tencent Cloud machines and offline client)</li>
<li>Status - uint64 - optional - processing Status: 0 - pending; 1 - ignored; 3 - fixed</li>
<li>HostName: string type optional host name</li>
<li>InstanceID : string type optional host id</li>
<li>IpAddress: string type optional The ip address of the host</li>
<li>Uuid : string type optional host uuid</li>
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
                     * Patch ID
                     */
                    uint64_t m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * Pagination limit, with the maximum value being 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter criteria:  
<li>HostVersion : uint64 data type Optional Version information : 0-Basic version 1-Pro edition 2-Flagship edition 3-Lite edition</li>
<li>InstanceState: string type, optional. Host status: "PENDING": creating; "LAUNCH_FAILED": creation failed; "RUNNING": running; "STOPPED": shut down; "STARTING": starting; "STOPPING": shutting down; "REBOOTING": restarting; "SHUTDOWN": to be terminated; "TERMINATING": terminating; "UNKNOWN": unknown (for non-Tencent Cloud machines and offline client)</li>
<li>Status - uint64 - optional - processing Status: 0 - pending; 1 - ignored; 3 - fixed</li>
<li>HostName: string type optional host name</li>
<li>InstanceID : string type optional host id</li>
<li>IpAddress: string type optional The ip address of the host</li>
<li>Uuid : string type optional host uuid</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPATCHEFFECTHOSTLISTREQUEST_H_
