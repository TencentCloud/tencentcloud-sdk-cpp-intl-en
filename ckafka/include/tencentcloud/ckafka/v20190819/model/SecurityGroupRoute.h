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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_SECURITYGROUPROUTE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_SECURITYGROUPROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/InstanceRoute.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Security group routing information.
                */
                class SecurityGroupRoute : public AbstractModel
                {
                public:
                    SecurityGroupRoute();
                    ~SecurityGroupRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the routing information.
                     * @return InstanceRoute Specifies the routing information.
                     * 
                     */
                    InstanceRoute GetInstanceRoute() const;

                    /**
                     * 设置Specifies the routing information.
                     * @param _instanceRoute Specifies the routing information.
                     * 
                     */
                    void SetInstanceRoute(const InstanceRoute& _instanceRoute);

                    /**
                     * 判断参数 InstanceRoute 是否已赋值
                     * @return InstanceRoute 是否已赋值
                     * 
                     */
                    bool InstanceRouteHasBeenSet() const;

                    /**
                     * 获取Specifies the security group list to associate.
                     * @return SecurityGroupIds Specifies the security group list to associate.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Specifies the security group list to associate.
                     * @param _securityGroupIds Specifies the security group list to associate.
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取CKafka cluster instance name.
                     * @return InstanceName CKafka cluster instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置CKafka cluster instance name.
                     * @param _instanceName CKafka cluster instance name.
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
                     * 获取Specifies the route vpcId.
                     * @return VpcId Specifies the route vpcId.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Specifies the route vpcId.
                     * @param _vpcId Specifies the route vpcId.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Route vip.
                     * @return Vip Route vip.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Route vip.
                     * @param _vip Route vip.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                private:

                    /**
                     * Specifies the routing information.
                     */
                    InstanceRoute m_instanceRoute;
                    bool m_instanceRouteHasBeenSet;

                    /**
                     * Specifies the security group list to associate.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * CKafka cluster instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Specifies the route vpcId.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Route vip.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_SECURITYGROUPROUTE_H_
