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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_GATEWAYLOADBALANCER_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_GATEWAYLOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gwlb/v20240906/model/TagInfo.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * Information on the GWLB instance
                */
                class GatewayLoadBalancer : public AbstractModel
                {
                public:
                    GatewayLoadBalancer();
                    ~GatewayLoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取GWLB instance ID.
                     * @return LoadBalancerId GWLB instance ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置GWLB instance ID.
                     * @param _loadBalancerId GWLB instance ID.
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取Name of the GWLB instance.
                     * @return LoadBalancerName Name of the GWLB instance.
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置Name of the GWLB instance.
                     * @param _loadBalancerName Name of the GWLB instance.
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取VPC to which the GWLB belongs.Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return VpcId VPC to which the GWLB belongs.Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC to which the GWLB belongs.Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _vpcId VPC to which the GWLB belongs.Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Subnet to which the GWLB belongs.
                     * @return SubnetId Subnet to which the GWLB belongs.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet to which the GWLB belongs.
                     * @param _subnetId Subnet to which the GWLB belongs.
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
                     * 获取Virtual IP of GWLB for providing service.
                     * @return Vips Virtual IP of GWLB for providing service.
                     * 
                     */
                    std::vector<std::string> GetVips() const;

                    /**
                     * 设置Virtual IP of GWLB for providing service.
                     * @param _vips Virtual IP of GWLB for providing service.
                     * 
                     */
                    void SetVips(const std::vector<std::string>& _vips);

                    /**
                     * 判断参数 Vips 是否已赋值
                     * @return Vips 是否已赋值
                     * 
                     */
                    bool VipsHasBeenSet() const;

                    /**
                     * 获取GWLB instance status.0: creating, 1: normal operation, 3: deleting.
                     * @return Status GWLB instance status.0: creating, 1: normal operation, 3: deleting.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置GWLB instance status.0: creating, 1: normal operation, 3: deleting.
                     * @param _status GWLB instance status.0: creating, 1: normal operation, 3: deleting.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Unique ID of associated target group.Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TargetGroupId Unique ID of associated target group.Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置Unique ID of associated target group.Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _targetGroupId Unique ID of associated target group.Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable the deletion protection feature.Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DeleteProtect Whether to enable the deletion protection feature.Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetDeleteProtect() const;

                    /**
                     * 设置Whether to enable the deletion protection feature.Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _deleteProtect Whether to enable the deletion protection feature.Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeleteProtect(const bool& _deleteProtect);

                    /**
                     * 判断参数 DeleteProtect 是否已赋值
                     * @return DeleteProtect 是否已赋值
                     * 
                     */
                    bool DeleteProtectHasBeenSet() const;

                    /**
                     * 获取Tag information on the CLB instance.Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Tags Tag information on the CLB instance.Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tag information on the CLB instance.Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _tags Tag information on the CLB instance.Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Billing type of the GWLB instance. POSTPAID_BY_HOUR: pay-as-you-goNote: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ChargeType Billing type of the GWLB instance. POSTPAID_BY_HOUR: pay-as-you-goNote: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Billing type of the GWLB instance. POSTPAID_BY_HOUR: pay-as-you-goNote: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _chargeType Billing type of the GWLB instance. POSTPAID_BY_HOUR: pay-as-you-goNote: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取0: Not isolated; 1: Isolated.

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Isolation 0: Not isolated; 1: Isolated.

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsolation() const;

                    /**
                     * 设置0: Not isolated; 1: Isolated.

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _isolation 0: Not isolated; 1: Isolated.

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsolation(const uint64_t& _isolation);

                    /**
                     * 判断参数 Isolation 是否已赋值
                     * @return Isolation 是否已赋值
                     * 
                     */
                    bool IsolationHasBeenSet() const;

                    /**
                     * 获取CLB instance isolation time

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return IsolatedTime CLB instance isolation time

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置CLB instance isolation time

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _isolatedTime CLB instance isolation time

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                private:

                    /**
                     * GWLB instance ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Name of the GWLB instance.
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * VPC to which the GWLB belongs.Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet to which the GWLB belongs.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Virtual IP of GWLB for providing service.
                     */
                    std::vector<std::string> m_vips;
                    bool m_vipsHasBeenSet;

                    /**
                     * GWLB instance status.0: creating, 1: normal operation, 3: deleting.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Unique ID of associated target group.Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * Whether to enable the deletion protection feature.Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_deleteProtect;
                    bool m_deleteProtectHasBeenSet;

                    /**
                     * Tag information on the CLB instance.Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Billing type of the GWLB instance. POSTPAID_BY_HOUR: pay-as-you-goNote: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 0: Not isolated; 1: Isolated.

Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isolation;
                    bool m_isolationHasBeenSet;

                    /**
                     * CLB instance isolation time

Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_GATEWAYLOADBALANCER_H_
