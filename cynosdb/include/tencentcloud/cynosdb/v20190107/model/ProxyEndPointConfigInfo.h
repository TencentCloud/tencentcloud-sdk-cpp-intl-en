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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYENDPOINTCONFIGINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYENDPOINTCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceNameWeight.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * proxy address configuration of the integrated cluster.
                */
                class ProxyEndPointConfigInfo : public AbstractModel
                {
                public:
                    ProxyEndPointConfigInfo();
                    ~ProxyEndPointConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the ID of the VPC network it belongs to.
                     * @return UniqueVpcId Specifies the ID of the VPC network it belongs to.
                     * 
                     */
                    std::string GetUniqueVpcId() const;

                    /**
                     * 设置Specifies the ID of the VPC network it belongs to.
                     * @param _uniqueVpcId Specifies the ID of the VPC network it belongs to.
                     * 
                     */
                    void SetUniqueVpcId(const std::string& _uniqueVpcId);

                    /**
                     * 判断参数 UniqueVpcId 是否已赋值
                     * @return UniqueVpcId 是否已赋值
                     * 
                     */
                    bool UniqueVpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID.
                     * @return UniqueSubnetId Subnet ID.
                     * 
                     */
                    std::string GetUniqueSubnetId() const;

                    /**
                     * 设置Subnet ID.
                     * @param _uniqueSubnetId Subnet ID.
                     * 
                     */
                    void SetUniqueSubnetId(const std::string& _uniqueSubnetId);

                    /**
                     * 判断参数 UniqueSubnetId 是否已赋值
                     * @return UniqueSubnetId 是否已赋值
                     * 
                     */
                    bool UniqueSubnetIdHasBeenSet() const;

                    /**
                     * 获取Security group id array.
                     * @return SecurityGroupIds Security group id array.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group id array.
                     * @param _securityGroupIds Security group id array.
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
                     * 获取Weight mode: system-system allocation, custom-custom.
                     * @return WeightMode Weight mode: system-system allocation, custom-custom.
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置Weight mode: system-system allocation, custom-custom.
                     * @param _weightMode Weight mode: system-system allocation, custom-custom.
                     * 
                     */
                    void SetWeightMode(const std::string& _weightMode);

                    /**
                     * 判断参数 WeightMode 是否已赋值
                     * @return WeightMode 是否已赋值
                     * 
                     */
                    bool WeightModeHasBeenSet() const;

                    /**
                     * 获取Specifies whether to automatically add a read-only instance. valid values: yes, no.
                     * @return AutoAddRo Specifies whether to automatically add a read-only instance. valid values: yes, no.
                     * 
                     */
                    std::string GetAutoAddRo() const;

                    /**
                     * 设置Specifies whether to automatically add a read-only instance. valid values: yes, no.
                     * @param _autoAddRo Specifies whether to automatically add a read-only instance. valid values: yes, no.
                     * 
                     */
                    void SetAutoAddRo(const std::string& _autoAddRo);

                    /**
                     * 判断参数 AutoAddRo 是否已赋值
                     * @return AutoAddRo 是否已赋值
                     * 
                     */
                    bool AutoAddRoHasBeenSet() const;

                    /**
                     * 获取Read-Write attribute. valid values: READWRITE, READONLY.
                     * @return RwType Read-Write attribute. valid values: READWRITE, READONLY.
                     * 
                     */
                    std::string GetRwType() const;

                    /**
                     * 设置Read-Write attribute. valid values: READWRITE, READONLY.
                     * @param _rwType Read-Write attribute. valid values: READWRITE, READONLY.
                     * 
                     */
                    void SetRwType(const std::string& _rwType);

                    /**
                     * 判断参数 RwType 是否已赋值
                     * @return RwType 是否已赋值
                     * 
                     */
                    bool RwTypeHasBeenSet() const;

                    /**
                     * 获取Weight information.
                     * @return InstanceNameWeights Weight information.
                     * 
                     */
                    std::vector<InstanceNameWeight> GetInstanceNameWeights() const;

                    /**
                     * 设置Weight information.
                     * @param _instanceNameWeights Weight information.
                     * 
                     */
                    void SetInstanceNameWeights(const std::vector<InstanceNameWeight>& _instanceNameWeights);

                    /**
                     * 判断参数 InstanceNameWeights 是否已赋值
                     * @return InstanceNameWeights 是否已赋值
                     * 
                     */
                    bool InstanceNameWeightsHasBeenSet() const;

                private:

                    /**
                     * Specifies the ID of the VPC network it belongs to.
                     */
                    std::string m_uniqueVpcId;
                    bool m_uniqueVpcIdHasBeenSet;

                    /**
                     * Subnet ID.
                     */
                    std::string m_uniqueSubnetId;
                    bool m_uniqueSubnetIdHasBeenSet;

                    /**
                     * Security group id array.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Weight mode: system-system allocation, custom-custom.
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * Specifies whether to automatically add a read-only instance. valid values: yes, no.
                     */
                    std::string m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * Read-Write attribute. valid values: READWRITE, READONLY.
                     */
                    std::string m_rwType;
                    bool m_rwTypeHasBeenSet;

                    /**
                     * Weight information.
                     */
                    std::vector<InstanceNameWeight> m_instanceNameWeights;
                    bool m_instanceNameWeightsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYENDPOINTCONFIGINFO_H_
