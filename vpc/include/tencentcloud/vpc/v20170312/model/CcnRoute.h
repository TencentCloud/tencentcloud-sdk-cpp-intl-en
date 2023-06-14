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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTE_H_

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
                * The CCN routing policy object
                */
                class CcnRoute : public AbstractModel
                {
                public:
                    CcnRoute();
                    ~CcnRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the routing policy
                     * @return RouteId The ID of the routing policy
                     * 
                     */
                    std::string GetRouteId() const;

                    /**
                     * 设置The ID of the routing policy
                     * @param _routeId The ID of the routing policy
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
                     * 获取Destination
                     * @return DestinationCidrBlock Destination
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置Destination
                     * @param _destinationCidrBlock Destination
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
                     * 获取The type of the next hop (associated instance type). Available types: VPC, DIRECTCONNECT
                     * @return InstanceType The type of the next hop (associated instance type). Available types: VPC, DIRECTCONNECT
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置The type of the next hop (associated instance type). Available types: VPC, DIRECTCONNECT
                     * @param _instanceType The type of the next hop (associated instance type). Available types: VPC, DIRECTCONNECT
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
                     * 获取The next hop (associated instance)
                     * @return InstanceId The next hop (associated instance)
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The next hop (associated instance)
                     * @param _instanceId The next hop (associated instance)
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
                     * 获取The name of the next hop (associated instance name)
                     * @return InstanceName The name of the next hop (associated instance name)
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置The name of the next hop (associated instance name)
                     * @param _instanceName The name of the next hop (associated instance name)
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取The region of the next hop (the region of the associated instance)
                     * @return InstanceRegion The region of the next hop (the region of the associated instance)
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置The region of the next hop (the region of the associated instance)
                     * @param _instanceRegion The region of the next hop (the region of the associated instance)
                     * 
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     * 
                     */
                    bool InstanceRegionHasBeenSet() const;

                    /**
                     * 获取Update Time
                     * @return UpdateTime Update Time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update Time
                     * @param _updateTime Update Time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Whether the route is enabled
                     * @return Enabled Whether the route is enabled
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether the route is enabled
                     * @param _enabled Whether the route is enabled
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取The UIN (root account) to which the associated instance belongs
                     * @return InstanceUin The UIN (root account) to which the associated instance belongs
                     * 
                     */
                    std::string GetInstanceUin() const;

                    /**
                     * 设置The UIN (root account) to which the associated instance belongs
                     * @param _instanceUin The UIN (root account) to which the associated instance belongs
                     * 
                     */
                    void SetInstanceUin(const std::string& _instanceUin);

                    /**
                     * 判断参数 InstanceUin 是否已赋值
                     * @return InstanceUin 是否已赋值
                     * 
                     */
                    bool InstanceUinHasBeenSet() const;

                    /**
                     * 获取Additional status of the route
                     * @return ExtraState Additional status of the route
                     * 
                     */
                    std::string GetExtraState() const;

                    /**
                     * 设置Additional status of the route
                     * @param _extraState Additional status of the route
                     * 
                     */
                    void SetExtraState(const std::string& _extraState);

                    /**
                     * 判断参数 ExtraState 是否已赋值
                     * @return ExtraState 是否已赋值
                     * 
                     */
                    bool ExtraStateHasBeenSet() const;

                    /**
                     * 获取Whether it is a dynamic route
                     * @return IsBgp Whether it is a dynamic route
                     * 
                     */
                    bool GetIsBgp() const;

                    /**
                     * 设置Whether it is a dynamic route
                     * @param _isBgp Whether it is a dynamic route
                     * 
                     */
                    void SetIsBgp(const bool& _isBgp);

                    /**
                     * 判断参数 IsBgp 是否已赋值
                     * @return IsBgp 是否已赋值
                     * 
                     */
                    bool IsBgpHasBeenSet() const;

                    /**
                     * 获取Route priority
                     * @return RoutePriority Route priority
                     * 
                     */
                    uint64_t GetRoutePriority() const;

                    /**
                     * 设置Route priority
                     * @param _routePriority Route priority
                     * 
                     */
                    void SetRoutePriority(const uint64_t& _routePriority);

                    /**
                     * 判断参数 RoutePriority 是否已赋值
                     * @return RoutePriority 是否已赋值
                     * 
                     */
                    bool RoutePriorityHasBeenSet() const;

                    /**
                     * 获取Next hop port name (associated instance’s port name)
                     * @return InstanceExtraName Next hop port name (associated instance’s port name)
                     * 
                     */
                    std::string GetInstanceExtraName() const;

                    /**
                     * 设置Next hop port name (associated instance’s port name)
                     * @param _instanceExtraName Next hop port name (associated instance’s port name)
                     * 
                     */
                    void SetInstanceExtraName(const std::string& _instanceExtraName);

                    /**
                     * 判断参数 InstanceExtraName 是否已赋值
                     * @return InstanceExtraName 是否已赋值
                     * 
                     */
                    bool InstanceExtraNameHasBeenSet() const;

                private:

                    /**
                     * The ID of the routing policy
                     */
                    std::string m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * Destination
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * The type of the next hop (associated instance type). Available types: VPC, DIRECTCONNECT
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * The next hop (associated instance)
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The name of the next hop (associated instance name)
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * The region of the next hop (the region of the associated instance)
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * Update Time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Whether the route is enabled
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * The UIN (root account) to which the associated instance belongs
                     */
                    std::string m_instanceUin;
                    bool m_instanceUinHasBeenSet;

                    /**
                     * Additional status of the route
                     */
                    std::string m_extraState;
                    bool m_extraStateHasBeenSet;

                    /**
                     * Whether it is a dynamic route
                     */
                    bool m_isBgp;
                    bool m_isBgpHasBeenSet;

                    /**
                     * Route priority
                     */
                    uint64_t m_routePriority;
                    bool m_routePriorityHasBeenSet;

                    /**
                     * Next hop port name (associated instance’s port name)
                     */
                    std::string m_instanceExtraName;
                    bool m_instanceExtraNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTE_H_
