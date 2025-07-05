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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSATTACKSOURCEEVENTREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSATTACKSOURCEEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeDDosAttackSourceEvent request structure.
                */
                class DescribeDDosAttackSourceEventRequest : public AbstractModel
                {
                public:
                    DescribeDDosAttackSourceEventRequest();
                    ~DescribeDDosAttackSourceEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param _startTime Start time
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
                     * 获取End time
                     * @return EndTime End time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param _endTime End time
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
                     * 获取Number of items
                     * @return PageSize Number of items
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of items
                     * @param _pageSize Number of items
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Current page
                     * @return PageNo Current page
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置Current page
                     * @param _pageNo Current page
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取Set of DDoS policy group IDs
                     * @return PolicyIds Set of DDoS policy group IDs
                     * 
                     */
                    std::vector<int64_t> GetPolicyIds() const;

                    /**
                     * 设置Set of DDoS policy group IDs
                     * @param _policyIds Set of DDoS policy group IDs
                     * 
                     */
                    void SetPolicyIds(const std::vector<int64_t>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     * 
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取Site set
                     * @return ZoneIds Site set
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Site set
                     * @param _zoneIds Site set
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取Protocol type. Valid values: {tcp,udp,all}
                     * @return ProtocolType Protocol type. Valid values: {tcp,udp,all}
                     * 
                     */
                    std::string GetProtocolType() const;

                    /**
                     * 设置Protocol type. Valid values: {tcp,udp,all}
                     * @param _protocolType Protocol type. Valid values: {tcp,udp,all}
                     * 
                     */
                    void SetProtocolType(const std::string& _protocolType);

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     * 
                     */
                    bool ProtocolTypeHasBeenSet() const;

                private:

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Number of items
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Current page
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * Set of DDoS policy group IDs
                     */
                    std::vector<int64_t> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * Site set
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Protocol type. Valid values: {tcp,udp,all}
                     */
                    std::string m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDDOSATTACKSOURCEEVENTREQUEST_H_
