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
                     * 获取Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
                     * @param InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Destination IP. Either this parameter or `DstPort` must be passed in.
                     * @return DstIp Destination IP. Either this parameter or `DstPort` must be passed in.
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置Destination IP. Either this parameter or `DstPort` must be passed in.
                     * @param DstIp Destination IP. Either this parameter or `DstPort` must be passed in.
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取Destination port number. Value range: [1024-65535]. Either this parameter or `DstIp` must be passed in.
                     * @return DstPort Destination port number. Value range: [1024-65535]. Either this parameter or `DstIp` must be passed in.
                     */
                    int64_t GetDstPort() const;

                    /**
                     * 设置Destination port number. Value range: [1024-65535]. Either this parameter or `DstIp` must be passed in.
                     * @param DstPort Destination port number. Value range: [1024-65535]. Either this parameter or `DstIp` must be passed in.
                     */
                    void SetDstPort(const int64_t& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取Unified VPC ID
                     * @return UniqVpcId Unified VPC ID
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Unified VPC ID
                     * @param UniqVpcId Unified VPC ID
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Unified subnet ID.
                     * @return UniqSubnetId Unified subnet ID.
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置Unified subnet ID.
                     * @param UniqSubnetId Unified subnet ID.
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取Repossession duration in hours for old IP in the original network when changing from the basic network to VPC or changing the VPC subnet. Value range: 0-168 hours. Default value: 24 hours.
                     * @return ReleaseDuration Repossession duration in hours for old IP in the original network when changing from the basic network to VPC or changing the VPC subnet. Value range: 0-168 hours. Default value: 24 hours.
                     */
                    int64_t GetReleaseDuration() const;

                    /**
                     * 设置Repossession duration in hours for old IP in the original network when changing from the basic network to VPC or changing the VPC subnet. Value range: 0-168 hours. Default value: 24 hours.
                     * @param ReleaseDuration Repossession duration in hours for old IP in the original network when changing from the basic network to VPC or changing the VPC subnet. Value range: 0-168 hours. Default value: 24 hours.
                     */
                    void SetReleaseDuration(const int64_t& _releaseDuration);

                    /**
                     * 判断参数 ReleaseDuration 是否已赋值
                     * @return ReleaseDuration 是否已赋值
                     */
                    bool ReleaseDurationHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Destination IP. Either this parameter or `DstPort` must be passed in.
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * Destination port number. Value range: [1024-65535]. Either this parameter or `DstIp` must be passed in.
                     */
                    int64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * Unified VPC ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Unified subnet ID.
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * Repossession duration in hours for old IP in the original network when changing from the basic network to VPC or changing the VPC subnet. Value range: 0-168 hours. Default value: 24 hours.
                     */
                    int64_t m_releaseDuration;
                    bool m_releaseDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCEVIPVPORTREQUEST_H_
