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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_VPCBINDRECORD_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_VPCBINDRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * VPC binding record
                */
                class VpcBindRecord : public AbstractModel
                {
                public:
                    VpcBindRecord();
                    ~VpcBindRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tenant VPC ID
                     * @return UniqueVpcId Tenant VPC ID
                     * 
                     */
                    std::string GetUniqueVpcId() const;

                    /**
                     * 设置Tenant VPC ID
                     * @param _uniqueVpcId Tenant VPC ID
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
                     * 获取Tenant VPC subnet ID
                     * @return UniqueSubnetId Tenant VPC subnet ID
                     * 
                     */
                    std::string GetUniqueSubnetId() const;

                    /**
                     * 设置Tenant VPC subnet ID
                     * @param _uniqueSubnetId Tenant VPC subnet ID
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
                     * 获取Route ID
                     * @return RouterId Route ID
                     * 
                     */
                    std::string GetRouterId() const;

                    /**
                     * 设置Route ID
                     * @param _routerId Route ID
                     * 
                     */
                    void SetRouterId(const std::string& _routerId);

                    /**
                     * 判断参数 RouterId 是否已赋值
                     * @return RouterId 是否已赋值
                     * 
                     */
                    bool RouterIdHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return Ip VPC ID
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置VPC ID
                     * @param _ip VPC ID
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取VPC port
                     * @return Port VPC port
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置VPC port
                     * @param _port VPC port
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Remarks (up to 128 characters)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Remark Remarks (up to 128 characters)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks (up to 128 characters)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _remark Remarks (up to 128 characters)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Tenant VPC ID
                     */
                    std::string m_uniqueVpcId;
                    bool m_uniqueVpcIdHasBeenSet;

                    /**
                     * Tenant VPC subnet ID
                     */
                    std::string m_uniqueSubnetId;
                    bool m_uniqueSubnetIdHasBeenSet;

                    /**
                     * Route ID
                     */
                    std::string m_routerId;
                    bool m_routerIdHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * VPC port
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Remarks (up to 128 characters)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_VPCBINDRECORD_H_
