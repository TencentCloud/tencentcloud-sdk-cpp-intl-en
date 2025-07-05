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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEACLISTSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEACLISTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeAcLists request structure.
                */
                class DescribeAcListsRequest : public AbstractModel
                {
                public:
                    DescribeAcListsRequest();
                    ~DescribeAcListsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Protocol
                     * @return Protocol Protocol
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol
                     * @param _protocol Protocol
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Policy
                     * @return Strategy Policy
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置Policy
                     * @param _strategy Policy
                     * 
                     */
                    void SetStrategy(const std::string& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取Search value
                     * @return SearchValue Search value
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置Search value
                     * @param _searchValue Search value
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                    /**
                     * 获取Number of entries per page
                     * @return Limit Number of entries per page
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page
                     * @param _limit Number of entries per page
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
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
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
                     * 获取Indicates whether it is outbound or inbound. 1: inbound; 0: outbound
                     * @return Direction Indicates whether it is outbound or inbound. 1: inbound; 0: outbound
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置Indicates whether it is outbound or inbound. 1: inbound; 0: outbound
                     * @param _direction Indicates whether it is outbound or inbound. 1: inbound; 0: outbound
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取EdgeId value
                     * @return EdgeId EdgeId value
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置EdgeId value
                     * @param _edgeId EdgeId value
                     * 
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     * 
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取Indicates whether the rule is enabled. '0': disabled; '1': enabled. '0' by default
                     * @return Status Indicates whether the rule is enabled. '0': disabled; '1': enabled. '0' by default
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Indicates whether the rule is enabled. '0': disabled; '1': enabled. '0' by default
                     * @param _status Indicates whether the rule is enabled. '0': disabled; '1': enabled. '0' by default
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Area Region
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Region
                     * @param _area Region
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Protocol
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Policy
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * Search value
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                    /**
                     * Number of entries per page
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Indicates whether it is outbound or inbound. 1: inbound; 0: outbound
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * EdgeId value
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * Indicates whether the rule is enabled. '0': disabled; '1': enabled. '0' by default
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEACLISTSREQUEST_H_
