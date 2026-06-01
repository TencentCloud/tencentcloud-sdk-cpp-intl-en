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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCEVIPVPORTREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCEVIPVPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceVipVport request structure.
                */
                class ModifyDBInstanceVipVportRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceVipVportRequest();
                    ~ModifyDBInstanceVipVportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cdb-c1nl9rpv, cdbro-c2nl9rpv, or cdbrg-c3nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872) API to query the ID, which is the value of the `InstanceId` output parameter.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv, cdbro-c2nl9rpv, or cdbrg-c3nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872) API to query the ID, which is the value of the `InstanceId` output parameter.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv, cdbro-c2nl9rpv, or cdbrg-c3nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872) API to query the ID, which is the value of the `InstanceId` output parameter.
                     * @param _instanceId Instance ID in the format of cdb-c1nl9rpv, cdbro-c2nl9rpv, or cdbrg-c3nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872) API to query the ID, which is the value of the `InstanceId` output parameter.
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
                     * 获取Target IP address.
                     * @return DstIp Target IP address.
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置Target IP address.
                     * @param _dstIp Target IP address.
                     * 
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     * 
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取Destination port. Support scope: [1024-65535].
                     * @return DstPort Destination port. Support scope: [1024-65535].
                     * 
                     */
                    int64_t GetDstPort() const;

                    /**
                     * 设置Destination port. Support scope: [1024-65535].
                     * @param _dstPort Destination port. Support scope: [1024-65535].
                     * 
                     */
                    void SetDstPort(const int64_t& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取Unified VPC ID
                     * @return UniqVpcId Unified VPC ID
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Unified VPC ID
                     * @param _uniqVpcId Unified VPC ID
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Unified subnet ID
                     * @return UniqSubnetId Unified subnet ID
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Unified subnet ID
                     * @param _uniqSubnetId Unified subnet ID
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Repossession duration in hours for old IP in the original network when changing from classic network to VPC or changing the VPC subnet. Value range: 0–168. Default value: `24`.
                     * @return ReleaseDuration Repossession duration in hours for old IP in the original network when changing from classic network to VPC or changing the VPC subnet. Value range: 0–168. Default value: `24`.
                     * 
                     */
                    int64_t GetReleaseDuration() const;

                    /**
                     * 设置Repossession duration in hours for old IP in the original network when changing from classic network to VPC or changing the VPC subnet. Value range: 0–168. Default value: `24`.
                     * @param _releaseDuration Repossession duration in hours for old IP in the original network when changing from classic network to VPC or changing the VPC subnet. Value range: 0–168. Default value: `24`.
                     * 
                     */
                    void SetReleaseDuration(const int64_t& _releaseDuration);

                    /**
                     * 判断参数 ReleaseDuration 是否已赋值
                     * @return ReleaseDuration 是否已赋值
                     * 
                     */
                    bool ReleaseDurationHasBeenSet() const;

                    /**
                     * 获取When updating the read-only group of a cluster edition instance, specify the instance id in InstanceId and this parameter is required to indicate the operation is for the read-only group. If you perform the operation on the read-write node, this parameter is not required.
                     * @return OpResourceId When updating the read-only group of a cluster edition instance, specify the instance id in InstanceId and this parameter is required to indicate the operation is for the read-only group. If you perform the operation on the read-write node, this parameter is not required.
                     * 
                     */
                    std::string GetOpResourceId() const;

                    /**
                     * 设置When updating the read-only group of a cluster edition instance, specify the instance id in InstanceId and this parameter is required to indicate the operation is for the read-only group. If you perform the operation on the read-write node, this parameter is not required.
                     * @param _opResourceId When updating the read-only group of a cluster edition instance, specify the instance id in InstanceId and this parameter is required to indicate the operation is for the read-only group. If you perform the operation on the read-write node, this parameter is not required.
                     * 
                     */
                    void SetOpResourceId(const std::string& _opResourceId);

                    /**
                     * 判断参数 OpResourceId 是否已赋值
                     * @return OpResourceId 是否已赋值
                     * 
                     */
                    bool OpResourceIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv, cdbro-c2nl9rpv, or cdbrg-c3nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872) API to query the ID, which is the value of the `InstanceId` output parameter.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Target IP address.
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * Destination port. Support scope: [1024-65535].
                     */
                    int64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * Unified VPC ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Unified subnet ID
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Repossession duration in hours for old IP in the original network when changing from classic network to VPC or changing the VPC subnet. Value range: 0–168. Default value: `24`.
                     */
                    int64_t m_releaseDuration;
                    bool m_releaseDurationHasBeenSet;

                    /**
                     * When updating the read-only group of a cluster edition instance, specify the instance id in InstanceId and this parameter is required to indicate the operation is for the read-only group. If you perform the operation on the read-write node, this parameter is not required.
                     */
                    std::string m_opResourceId;
                    bool m_opResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCEVIPVPORTREQUEST_H_
