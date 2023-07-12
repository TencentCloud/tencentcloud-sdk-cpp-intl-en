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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAYROUTE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAYROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Destination routes of a VPN gateway
                */
                class VpnGatewayRoute : public AbstractModel
                {
                public:
                    VpnGatewayRoute();
                    ~VpnGatewayRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Destination IDC IP range
                     * @return DestinationCidrBlock Destination IDC IP range
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置Destination IDC IP range
                     * @param _destinationCidrBlock Destination IDC IP range
                     * 
                     */
                    void SetDestinationCidrBlock(const std::string& _destinationCidrBlock);

                    /**
                     * 判断参数 DestinationCidrBlock 是否已赋值
                     * @return DestinationCidrBlock 是否已赋值
                     * 
                     */
                    bool DestinationCidrBlockHasBeenSet() const;

                    /**
                     * 获取Next hop type (type of the associated instance). Valid values: `VPNCONN` (VPN tunnel) and `CCN` (CCN instance)
                     * @return InstanceType Next hop type (type of the associated instance). Valid values: `VPNCONN` (VPN tunnel) and `CCN` (CCN instance)
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Next hop type (type of the associated instance). Valid values: `VPNCONN` (VPN tunnel) and `CCN` (CCN instance)
                     * @param _instanceType Next hop type (type of the associated instance). Valid values: `VPNCONN` (VPN tunnel) and `CCN` (CCN instance)
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance ID of the next hop
                     * @return InstanceId Instance ID of the next hop
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID of the next hop
                     * @param _instanceId Instance ID of the next hop
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Priority. Valid values: `0` and `100`
                     * @return Priority Priority. Valid values: `0` and `100`
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Priority. Valid values: `0` and `100`
                     * @param _priority Priority. Valid values: `0` and `100`
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Status. Valid values: `ENABLE` and `DISABLE`
                     * @return Status Status. Valid values: `ENABLE` and `DISABLE`
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status. Valid values: `ENABLE` and `DISABLE`
                     * @param _status Status. Valid values: `ENABLE` and `DISABLE`
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
                     * 获取Route ID
                     * @return RouteId Route ID
                     * 
                     */
                    std::string GetRouteId() const;

                    /**
                     * 设置Route ID
                     * @param _routeId Route ID
                     * 
                     */
                    void SetRouteId(const std::string& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取Route type. Valid values: `VPC`, `CCN` (CCN-propagated route), `Static`, and `BGP`.
                     * @return Type Route type. Valid values: `VPC`, `CCN` (CCN-propagated route), `Static`, and `BGP`.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Route type. Valid values: `VPC`, `CCN` (CCN-propagated route), `Static`, and `BGP`.
                     * @param _type Route type. Valid values: `VPC`, `CCN` (CCN-propagated route), `Static`, and `BGP`.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The creation time.
                     * @return CreateTime The creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time.
                     * @param _createTime The creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The update time.
                     * @return UpdateTime The update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The update time.
                     * @param _updateTime The update time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Destination IDC IP range
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * Next hop type (type of the associated instance). Valid values: `VPNCONN` (VPN tunnel) and `CCN` (CCN instance)
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance ID of the next hop
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Priority. Valid values: `0` and `100`
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Status. Valid values: `ENABLE` and `DISABLE`
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Route ID
                     */
                    std::string m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * Route type. Valid values: `VPC`, `CCN` (CCN-propagated route), `Static`, and `BGP`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAYROUTE_H_
