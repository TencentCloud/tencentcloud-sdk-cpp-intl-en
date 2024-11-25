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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_CREATEGATEWAYLOADBALANCERREQUEST_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_CREATEGATEWAYLOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateGatewayLoadBalancer request structure.
                */
                class CreateGatewayLoadBalancerRequest : public AbstractModel
                {
                public:
                    CreateGatewayLoadBalancerRequest();
                    ~CreateGatewayLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the VPC to which the backend target device of the GWLB belongs, such as vpc-12345678. It can be obtained through the DescribeVpcEx interface. If left blank, it defaults to DefaultVPC. This parameter is required when a private network CLB instance is created.
                     * @return VpcId ID of the VPC to which the backend target device of the GWLB belongs, such as vpc-12345678. It can be obtained through the DescribeVpcEx interface. If left blank, it defaults to DefaultVPC. This parameter is required when a private network CLB instance is created.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ID of the VPC to which the backend target device of the GWLB belongs, such as vpc-12345678. It can be obtained through the DescribeVpcEx interface. If left blank, it defaults to DefaultVPC. This parameter is required when a private network CLB instance is created.
                     * @param _vpcId ID of the VPC to which the backend target device of the GWLB belongs, such as vpc-12345678. It can be obtained through the DescribeVpcEx interface. If left blank, it defaults to DefaultVPC. This parameter is required when a private network CLB instance is created.
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
                     * 获取Subnet ID of the VPC to which the backend target device of the GWLB belongs.
                     * @return SubnetId Subnet ID of the VPC to which the backend target device of the GWLB belongs.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID of the VPC to which the backend target device of the GWLB belongs.
                     * @param _subnetId Subnet ID of the VPC to which the backend target device of the GWLB belongs.
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
                     * 获取GWLB instance name. It supports input of 1 to 60 characters. If not filled in, it will be generated automatically by default.
                     * @return LoadBalancerName GWLB instance name. It supports input of 1 to 60 characters. If not filled in, it will be generated automatically by default.
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置GWLB instance name. It supports input of 1 to 60 characters. If not filled in, it will be generated automatically by default.
                     * @param _loadBalancerName GWLB instance name. It supports input of 1 to 60 characters. If not filled in, it will be generated automatically by default.
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
                     * 获取Number of GWLBs to create, with a default of 1. The maximum batch creation quantity is 10.
                     * @return Number Number of GWLBs to create, with a default of 1. The maximum batch creation quantity is 10.
                     * 
                     */
                    uint64_t GetNumber() const;

                    /**
                     * 设置Number of GWLBs to create, with a default of 1. The maximum batch creation quantity is 10.
                     * @param _number Number of GWLBs to create, with a default of 1. The maximum batch creation quantity is 10.
                     * 
                     */
                    void SetNumber(const uint64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取While the GWLB is purchased, it is tagged, with a maximum of 20 tag key-value pairs.
                     * @return Tags While the GWLB is purchased, it is tagged, with a maximum of 20 tag key-value pairs.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置While the GWLB is purchased, it is tagged, with a maximum of 20 tag key-value pairs.
                     * @param _tags While the GWLB is purchased, it is tagged, with a maximum of 20 tag key-value pairs.
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
                     * 获取GWLB instance billing type, which currently supports POSTPAID_BY_HOUR only. The default is POSTPAID_BY_HOUR.
                     * @return LBChargeType GWLB instance billing type, which currently supports POSTPAID_BY_HOUR only. The default is POSTPAID_BY_HOUR.
                     * 
                     */
                    std::string GetLBChargeType() const;

                    /**
                     * 设置GWLB instance billing type, which currently supports POSTPAID_BY_HOUR only. The default is POSTPAID_BY_HOUR.
                     * @param _lBChargeType GWLB instance billing type, which currently supports POSTPAID_BY_HOUR only. The default is POSTPAID_BY_HOUR.
                     * 
                     */
                    void SetLBChargeType(const std::string& _lBChargeType);

                    /**
                     * 判断参数 LBChargeType 是否已赋值
                     * @return LBChargeType 是否已赋值
                     * 
                     */
                    bool LBChargeTypeHasBeenSet() const;

                private:

                    /**
                     * ID of the VPC to which the backend target device of the GWLB belongs, such as vpc-12345678. It can be obtained through the DescribeVpcEx interface. If left blank, it defaults to DefaultVPC. This parameter is required when a private network CLB instance is created.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID of the VPC to which the backend target device of the GWLB belongs.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * GWLB instance name. It supports input of 1 to 60 characters. If not filled in, it will be generated automatically by default.
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * Number of GWLBs to create, with a default of 1. The maximum batch creation quantity is 10.
                     */
                    uint64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * While the GWLB is purchased, it is tagged, with a maximum of 20 tag key-value pairs.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * GWLB instance billing type, which currently supports POSTPAID_BY_HOUR only. The default is POSTPAID_BY_HOUR.
                     */
                    std::string m_lBChargeType;
                    bool m_lBChargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_CREATEGATEWAYLOADBALANCERREQUEST_H_
