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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SUBNETINPUT_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SUBNETINPUT_H_

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
                * Subnet object
                */
                class SubnetInput : public AbstractModel
                {
                public:
                    SubnetInput();
                    ~SubnetInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The `CIDR` of the subnet.
                     * @return CidrBlock The `CIDR` of the subnet.
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置The `CIDR` of the subnet.
                     * @param _cidrBlock The `CIDR` of the subnet.
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取Subnet name.
                     * @return SubnetName Subnet name.
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置Subnet name.
                     * @param _subnetName Subnet name.
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取The availability zone, such as `ap-guangzhou-2`.
                     * @return Zone The availability zone, such as `ap-guangzhou-2`.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置The availability zone, such as `ap-guangzhou-2`.
                     * @param _zone The availability zone, such as `ap-guangzhou-2`.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取The specified associated route table, such as `rtb-3ryrwzuu`.
                     * @return RouteTableId The specified associated route table, such as `rtb-3ryrwzuu`.
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置The specified associated route table, such as `rtb-3ryrwzuu`.
                     * @param _routeTableId The specified associated route table, such as `rtb-3ryrwzuu`.
                     * 
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                private:

                    /**
                     * The `CIDR` of the subnet.
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * Subnet name.
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * The availability zone, such as `ap-guangzhou-2`.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * The specified associated route table, such as `rtb-3ryrwzuu`.
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SUBNETINPUT_H_
