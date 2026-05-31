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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_VPCENDPOINTINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_VPCENDPOINTINFO_H_

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
                * 
                */
                class VpcEndpointInfo : public AbstractModel
                {
                public:
                    VpcEndpointInfo();
                    ~VpcEndpointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>vpc id</p>
                     * @return VpcId <p>vpc id</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>vpc id</p>
                     * @param _vpcId <p>vpc id</p>
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
                     * 获取<p>Subnet id</p>
                     * @return SubnetId <p>Subnet id</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Subnet id</p>
                     * @param _subnetId <p>Subnet id</p>
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
                     * 获取<p>vpc access point information</p>
                     * @return VpcEndpoint <p>vpc access point information</p>
                     * 
                     */
                    std::string GetVpcEndpoint() const;

                    /**
                     * 设置<p>vpc access point information</p>
                     * @param _vpcEndpoint <p>vpc access point information</p>
                     * 
                     */
                    void SetVpcEndpoint(const std::string& _vpcEndpoint);

                    /**
                     * 判断参数 VpcEndpoint 是否已赋值
                     * @return VpcEndpoint 是否已赋值
                     * 
                     */
                    bool VpcEndpointHasBeenSet() const;

                    /**
                     * 获取<p>vpc access point status OFF/ON/CREATING/DELETING</p>
                     * @return VpcDataStreamEndpointStatus <p>vpc access point status OFF/ON/CREATING/DELETING</p>
                     * 
                     */
                    std::string GetVpcDataStreamEndpointStatus() const;

                    /**
                     * 设置<p>vpc access point status OFF/ON/CREATING/DELETING</p>
                     * @param _vpcDataStreamEndpointStatus <p>vpc access point status OFF/ON/CREATING/DELETING</p>
                     * 
                     */
                    void SetVpcDataStreamEndpointStatus(const std::string& _vpcDataStreamEndpointStatus);

                    /**
                     * 判断参数 VpcDataStreamEndpointStatus 是否已赋值
                     * @return VpcDataStreamEndpointStatus 是否已赋值
                     * 
                     */
                    bool VpcDataStreamEndpointStatusHasBeenSet() const;

                    /**
                     * 获取<p>TLS encrypted data stream access point</p>
                     * @return VpcTlsEndpoint <p>TLS encrypted data stream access point</p>
                     * 
                     */
                    std::string GetVpcTlsEndpoint() const;

                    /**
                     * 设置<p>TLS encrypted data stream access point</p>
                     * @param _vpcTlsEndpoint <p>TLS encrypted data stream access point</p>
                     * 
                     */
                    void SetVpcTlsEndpoint(const std::string& _vpcTlsEndpoint);

                    /**
                     * 判断参数 VpcTlsEndpoint 是否已赋值
                     * @return VpcTlsEndpoint 是否已赋值
                     * 
                     */
                    bool VpcTlsEndpointHasBeenSet() const;

                    /**
                     * 获取<p>Error information of VPC access point operation failure</p>
                     * @return VpcErrorMessage <p>Error information of VPC access point operation failure</p>
                     * 
                     */
                    std::string GetVpcErrorMessage() const;

                    /**
                     * 设置<p>Error information of VPC access point operation failure</p>
                     * @param _vpcErrorMessage <p>Error information of VPC access point operation failure</p>
                     * 
                     */
                    void SetVpcErrorMessage(const std::string& _vpcErrorMessage);

                    /**
                     * 判断参数 VpcErrorMessage 是否已赋值
                     * @return VpcErrorMessage 是否已赋值
                     * 
                     */
                    bool VpcErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>Access point ID</p>
                     * @return Id <p>Access point ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>Access point ID</p>
                     * @param _id <p>Access point ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>vpc Stream access point</p>
                     * @return VpcStreamEndpoint <p>vpc Stream access point</p>
                     * 
                     */
                    std::string GetVpcStreamEndpoint() const;

                    /**
                     * 设置<p>vpc Stream access point</p>
                     * @param _vpcStreamEndpoint <p>vpc Stream access point</p>
                     * 
                     */
                    void SetVpcStreamEndpoint(const std::string& _vpcStreamEndpoint);

                    /**
                     * 判断参数 VpcStreamEndpoint 是否已赋值
                     * @return VpcStreamEndpoint 是否已赋值
                     * 
                     */
                    bool VpcStreamEndpointHasBeenSet() const;

                private:

                    /**
                     * <p>vpc id</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Subnet id</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>vpc access point information</p>
                     */
                    std::string m_vpcEndpoint;
                    bool m_vpcEndpointHasBeenSet;

                    /**
                     * <p>vpc access point status OFF/ON/CREATING/DELETING</p>
                     */
                    std::string m_vpcDataStreamEndpointStatus;
                    bool m_vpcDataStreamEndpointStatusHasBeenSet;

                    /**
                     * <p>TLS encrypted data stream access point</p>
                     */
                    std::string m_vpcTlsEndpoint;
                    bool m_vpcTlsEndpointHasBeenSet;

                    /**
                     * <p>Error information of VPC access point operation failure</p>
                     */
                    std::string m_vpcErrorMessage;
                    bool m_vpcErrorMessageHasBeenSet;

                    /**
                     * <p>Access point ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>vpc Stream access point</p>
                     */
                    std::string m_vpcStreamEndpoint;
                    bool m_vpcStreamEndpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_VPCENDPOINTINFO_H_
