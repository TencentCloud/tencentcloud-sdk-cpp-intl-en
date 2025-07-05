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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBECOMMONDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBECOMMONDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeCommonDBInstances request structure.
                */
                class DescribeCommonDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeCommonDBInstancesRequest();
                    ~DescribeCommonDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of VPC IDs
                     * @return VpcIds List of VPC IDs
                     * 
                     */
                    std::vector<int64_t> GetVpcIds() const;

                    /**
                     * 设置List of VPC IDs
                     * @param _vpcIds List of VPC IDs
                     * 
                     */
                    void SetVpcIds(const std::vector<int64_t>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取List of subnet IDs
                     * @return SubnetIds List of subnet IDs
                     * 
                     */
                    std::vector<int64_t> GetSubnetIds() const;

                    /**
                     * 设置List of subnet IDs
                     * @param _subnetIds List of subnet IDs
                     * 
                     */
                    void SetSubnetIds(const std::vector<int64_t>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取List of billing modes. 0: monthly subscription; 1: pay-as-you-go
                     * @return PayMode List of billing modes. 0: monthly subscription; 1: pay-as-you-go
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置List of billing modes. 0: monthly subscription; 1: pay-as-you-go
                     * @param _payMode List of billing modes. 0: monthly subscription; 1: pay-as-you-go
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Instance ID filter information list, with a maximum array length of 100.
                     * @return InstanceIds Instance ID filter information list, with a maximum array length of 100.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID filter information list, with a maximum array length of 100.
                     * @param _instanceIds Instance ID filter information list, with a maximum array length of 100.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取List of instance names
                     * @return InstanceNames List of instance names
                     * 
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置List of instance names
                     * @param _instanceNames List of instance names
                     * 
                     */
                    void SetInstanceNames(const std::vector<std::string>& _instanceNames);

                    /**
                     * 判断参数 InstanceNames 是否已赋值
                     * @return InstanceNames 是否已赋值
                     * 
                     */
                    bool InstanceNamesHasBeenSet() const;

                    /**
                     * 获取List of instance status
                     * @return Status List of instance status
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置List of instance status
                     * @param _status List of instance status
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Sorting field
                     * @return OrderBy Sorting field
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field
                     * @param _orderBy Sorting field
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Sorting order
                     * @return OrderByType Sorting order
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting order
                     * @param _orderByType Sorting order
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取List of instance VIPs
                     * @return Vips List of instance VIPs
                     * 
                     */
                    std::vector<std::string> GetVips() const;

                    /**
                     * 设置List of instance VIPs
                     * @param _vips List of instance VIPs
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
                     * 获取List of VPC IDs
                     * @return UniqVpcIds List of VPC IDs
                     * 
                     */
                    std::vector<std::string> GetUniqVpcIds() const;

                    /**
                     * 设置List of VPC IDs
                     * @param _uniqVpcIds List of VPC IDs
                     * 
                     */
                    void SetUniqVpcIds(const std::vector<std::string>& _uniqVpcIds);

                    /**
                     * 判断参数 UniqVpcIds 是否已赋值
                     * @return UniqVpcIds 是否已赋值
                     * 
                     */
                    bool UniqVpcIdsHasBeenSet() const;

                    /**
                     * 获取List of unique subnet IDs
                     * @return UniqSubnetIds List of unique subnet IDs
                     * 
                     */
                    std::vector<std::string> GetUniqSubnetIds() const;

                    /**
                     * 设置List of unique subnet IDs
                     * @param _uniqSubnetIds List of unique subnet IDs
                     * 
                     */
                    void SetUniqSubnetIds(const std::vector<std::string>& _uniqSubnetIds);

                    /**
                     * 判断参数 UniqSubnetIds 是否已赋值
                     * @return UniqSubnetIds 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdsHasBeenSet() const;

                    /**
                     * 获取Quantity limit. Recommended default value: 100.
                     * @return Limit Quantity limit. Recommended default value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Quantity limit. Recommended default value: 100.
                     * @param _limit Quantity limit. Recommended default value: 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0
                     * @return Offset Offset. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0
                     * @param _offset Offset. Default value: 0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * List of VPC IDs
                     */
                    std::vector<int64_t> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * List of subnet IDs
                     */
                    std::vector<int64_t> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * List of billing modes. 0: monthly subscription; 1: pay-as-you-go
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Instance ID filter information list, with a maximum array length of 100.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * List of instance names
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * List of instance status
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Sorting field
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting order
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * List of instance VIPs
                     */
                    std::vector<std::string> m_vips;
                    bool m_vipsHasBeenSet;

                    /**
                     * List of VPC IDs
                     */
                    std::vector<std::string> m_uniqVpcIds;
                    bool m_uniqVpcIdsHasBeenSet;

                    /**
                     * List of unique subnet IDs
                     */
                    std::vector<std::string> m_uniqSubnetIds;
                    bool m_uniqSubnetIdsHasBeenSet;

                    /**
                     * Quantity limit. Recommended default value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBECOMMONDBINSTANCESREQUEST_H_
