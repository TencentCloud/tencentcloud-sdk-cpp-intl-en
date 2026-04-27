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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEPRIVATENETWORKINSTANCESREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEPRIVATENETWORKINSTANCESREQUEST_H_

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
                * DescribePrivateNetworkInstances request structure.
                */
                class DescribePrivateNetworkInstancesRequest : public AbstractModel
                {
                public:
                    DescribePrivateNetworkInstancesRequest();
                    ~DescribePrivateNetworkInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Private network instance Id
                     * @return NetworkInstanceId Private network instance Id
                     * 
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置Private network instance Id
                     * @param _networkInstanceId Private network instance Id
                     * 
                     */
                    void SetNetworkInstanceId(const std::string& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     * 
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取New instance name
                     * @return NetworkInstanceName New instance name
                     * 
                     */
                    std::string GetNetworkInstanceName() const;

                    /**
                     * 设置New instance name
                     * @param _networkInstanceName New instance name
                     * 
                     */
                    void SetNetworkInstanceName(const std::string& _networkInstanceName);

                    /**
                     * 判断参数 NetworkInstanceName 是否已赋值
                     * @return NetworkInstanceName 是否已赋值
                     * 
                     */
                    bool NetworkInstanceNameHasBeenSet() const;

                    /**
                     * 获取Availability zone ID.
                     * @return ZoneId Availability zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Availability zone ID.
                     * @param _zoneId Availability zone ID.
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
                     * Private network instance Id
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * New instance name
                     */
                    std::string m_networkInstanceName;
                    bool m_networkInstanceNameHasBeenSet;

                    /**
                     * Availability zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

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

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEPRIVATENETWORKINSTANCESREQUEST_H_
