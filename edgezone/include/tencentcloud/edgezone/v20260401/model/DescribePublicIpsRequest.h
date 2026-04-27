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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEPUBLICIPSREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEPUBLICIPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * DescribePublicIps request structure.
                */
                class DescribePublicIpsRequest : public AbstractModel
                {
                public:
                    DescribePublicIpsRequest();
                    ~DescribePublicIpsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter by public network instance ID (substring match, union of multiple values)
                     * @return NetworkInstanceId Filter by public network instance ID (substring match, union of multiple values)
                     * 
                     */
                    std::vector<std::string> GetNetworkInstanceId() const;

                    /**
                     * 设置Filter by public network instance ID (substring match, union of multiple values)
                     * @param _networkInstanceId Filter by public network instance ID (substring match, union of multiple values)
                     * 
                     */
                    void SetNetworkInstanceId(const std::vector<std::string>& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     * 
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取Filter by availability zone/IDC
                     * @return ZoneId Filter by availability zone/IDC
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Filter by availability zone/IDC
                     * @param _zoneId Filter by availability zone/IDC
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Filter by IP (substring match, union of multiple values)
                     * @return Ip Filter by IP (substring match, union of multiple values)
                     * 
                     */
                    std::vector<std::string> GetIp() const;

                    /**
                     * 设置Filter by IP (substring match, union of multiple values)
                     * @param _ip Filter by IP (substring match, union of multiple values)
                     * 
                     */
                    void SetIp(const std::vector<std::string>& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Filter by status, available values: `InUse`, `Unbound` (multiple values are combined with OR)
                     * @return State Filter by status, available values: `InUse`, `Unbound` (multiple values are combined with OR)
                     * 
                     */
                    std::vector<std::string> GetState() const;

                    /**
                     * 设置Filter by status, available values: `InUse`, `Unbound` (multiple values are combined with OR)
                     * @param _state Filter by status, available values: `InUse`, `Unbound` (multiple values are combined with OR)
                     * 
                     */
                    void SetState(const std::vector<std::string>& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Filter by IP version. Available values: `Ipv4`, `Ipv6` (multiple values are combined).
                     * @return Type Filter by IP version. Available values: `Ipv4`, `Ipv6` (multiple values are combined).
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置Filter by IP version. Available values: `Ipv4`, `Ipv6` (multiple values are combined).
                     * @param _type Filter by IP version. Available values: `Ipv4`, `Ipv6` (multiple values are combined).
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Sort by creation time, available values: `asc`, `desc` (default `desc`)
                     * @return OrderByCreateTime Sort by creation time, available values: `asc`, `desc` (default `desc`)
                     * 
                     */
                    std::string GetOrderByCreateTime() const;

                    /**
                     * 设置Sort by creation time, available values: `asc`, `desc` (default `desc`)
                     * @param _orderByCreateTime Sort by creation time, available values: `asc`, `desc` (default `desc`)
                     * 
                     */
                    void SetOrderByCreateTime(const std::string& _orderByCreateTime);

                    /**
                     * 判断参数 OrderByCreateTime 是否已赋值
                     * @return OrderByCreateTime 是否已赋值
                     * 
                     */
                    bool OrderByCreateTimeHasBeenSet() const;

                    /**
                     * 获取Sort by update time, available values: `asc`, `desc` (priority is higher than sort by creation time)
                     * @return OrderByUpdateTime Sort by update time, available values: `asc`, `desc` (priority is higher than sort by creation time)
                     * 
                     */
                    std::string GetOrderByUpdateTime() const;

                    /**
                     * 设置Sort by update time, available values: `asc`, `desc` (priority is higher than sort by creation time)
                     * @param _orderByUpdateTime Sort by update time, available values: `asc`, `desc` (priority is higher than sort by creation time)
                     * 
                     */
                    void SetOrderByUpdateTime(const std::string& _orderByUpdateTime);

                    /**
                     * 判断参数 OrderByUpdateTime 是否已赋值
                     * @return OrderByUpdateTime 是否已赋值
                     * 
                     */
                    bool OrderByUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Pagination offset, default 0
                     * @return Offset Pagination offset, default 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset, default 0
                     * @param _offset Pagination offset, default 0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of items per page. Default 20. Maximum 100.
                     * @return Limit Number of items per page. Default 20. Maximum 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items per page. Default 20. Maximum 100.
                     * @param _limit Number of items per page. Default 20. Maximum 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Filter by public network instance ID (substring match, union of multiple values)
                     */
                    std::vector<std::string> m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * Filter by availability zone/IDC
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Filter by IP (substring match, union of multiple values)
                     */
                    std::vector<std::string> m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Filter by status, available values: `InUse`, `Unbound` (multiple values are combined with OR)
                     */
                    std::vector<std::string> m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Filter by IP version. Available values: `Ipv4`, `Ipv6` (multiple values are combined).
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Sort by creation time, available values: `asc`, `desc` (default `desc`)
                     */
                    std::string m_orderByCreateTime;
                    bool m_orderByCreateTimeHasBeenSet;

                    /**
                     * Sort by update time, available values: `asc`, `desc` (priority is higher than sort by creation time)
                     */
                    std::string m_orderByUpdateTime;
                    bool m_orderByUpdateTimeHasBeenSet;

                    /**
                     * Pagination offset, default 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of items per page. Default 20. Maximum 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEPUBLICIPSREQUEST_H_
