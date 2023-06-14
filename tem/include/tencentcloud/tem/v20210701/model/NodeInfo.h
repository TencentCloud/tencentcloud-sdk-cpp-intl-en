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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_NODEINFO_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_NODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Node information
                */
                class NodeInfo : public AbstractModel
                {
                public:
                    NodeInfo();
                    ~NodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node name
                     * @return Name Node name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Node name
                     * @param _name Node name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Availability zone of the node
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Zone Availability zone of the node
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone of the node
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _zone Availability zone of the node
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Node subnet ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SubnetId Node subnet ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Node subnet ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _subnetId Node subnet ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Number of available IPs
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return AvailableIpCount Number of available IPs
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAvailableIpCount() const;

                    /**
                     * 设置Number of available IPs
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _availableIpCount Number of available IPs
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAvailableIpCount(const std::string& _availableIpCount);

                    /**
                     * 判断参数 AvailableIpCount 是否已赋值
                     * @return AvailableIpCount 是否已赋值
                     * 
                     */
                    bool AvailableIpCountHasBeenSet() const;

                    /**
                     * 获取CIDR block
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Cidr CIDR block
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCidr() const;

                    /**
                     * 设置CIDR block
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _cidr CIDR block
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCidr(const std::string& _cidr);

                    /**
                     * 判断参数 Cidr 是否已赋值
                     * @return Cidr 是否已赋值
                     * 
                     */
                    bool CidrHasBeenSet() const;

                private:

                    /**
                     * Node name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Availability zone of the node
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Node subnet ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Number of available IPs
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_availableIpCount;
                    bool m_availableIpCountHasBeenSet;

                    /**
                     * CIDR block
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_cidr;
                    bool m_cidrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_NODEINFO_H_
