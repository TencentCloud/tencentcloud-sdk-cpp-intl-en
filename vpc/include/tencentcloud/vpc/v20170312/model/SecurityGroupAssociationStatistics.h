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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPASSOCIATIONSTATISTICS_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPASSOCIATIONSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/InstanceStatistic.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Statistics on the instances associated with the security group
                */
                class SecurityGroupAssociationStatistics : public AbstractModel
                {
                public:
                    SecurityGroupAssociationStatistics();
                    ~SecurityGroupAssociationStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Security group instance ID.
                     * @return SecurityGroupId Security group instance ID.
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置Security group instance ID.
                     * @param _securityGroupId Security group instance ID.
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取Number of CVM instances.
                     * @return CVM Number of CVM instances.
                     * 
                     */
                    uint64_t GetCVM() const;

                    /**
                     * 设置Number of CVM instances.
                     * @param _cVM Number of CVM instances.
                     * 
                     */
                    void SetCVM(const uint64_t& _cVM);

                    /**
                     * 判断参数 CVM 是否已赋值
                     * @return CVM 是否已赋值
                     * 
                     */
                    bool CVMHasBeenSet() const;

                    /**
                     * 获取Number of TencentDB for MySQL instances
                     * @return CDB Number of TencentDB for MySQL instances
                     * 
                     */
                    uint64_t GetCDB() const;

                    /**
                     * 设置Number of TencentDB for MySQL instances
                     * @param _cDB Number of TencentDB for MySQL instances
                     * 
                     */
                    void SetCDB(const uint64_t& _cDB);

                    /**
                     * 判断参数 CDB 是否已赋值
                     * @return CDB 是否已赋值
                     * 
                     */
                    bool CDBHasBeenSet() const;

                    /**
                     * 获取Number of ENI instances.
                     * @return ENI Number of ENI instances.
                     * 
                     */
                    uint64_t GetENI() const;

                    /**
                     * 设置Number of ENI instances.
                     * @param _eNI Number of ENI instances.
                     * 
                     */
                    void SetENI(const uint64_t& _eNI);

                    /**
                     * 判断参数 ENI 是否已赋值
                     * @return ENI 是否已赋值
                     * 
                     */
                    bool ENIHasBeenSet() const;

                    /**
                     * 获取Number of times a security group is referenced by other security groups
                     * @return SG Number of times a security group is referenced by other security groups
                     * 
                     */
                    uint64_t GetSG() const;

                    /**
                     * 设置Number of times a security group is referenced by other security groups
                     * @param _sG Number of times a security group is referenced by other security groups
                     * 
                     */
                    void SetSG(const uint64_t& _sG);

                    /**
                     * 判断参数 SG 是否已赋值
                     * @return SG 是否已赋值
                     * 
                     */
                    bool SGHasBeenSet() const;

                    /**
                     * 获取Number of load balancer instances.
                     * @return CLB Number of load balancer instances.
                     * 
                     */
                    uint64_t GetCLB() const;

                    /**
                     * 设置Number of load balancer instances.
                     * @param _cLB Number of load balancer instances.
                     * 
                     */
                    void SetCLB(const uint64_t& _cLB);

                    /**
                     * 判断参数 CLB 是否已赋值
                     * @return CLB 是否已赋值
                     * 
                     */
                    bool CLBHasBeenSet() const;

                    /**
                     * 获取The binding statistics for all instances.
                     * @return InstanceStatistics The binding statistics for all instances.
                     * 
                     */
                    std::vector<InstanceStatistic> GetInstanceStatistics() const;

                    /**
                     * 设置The binding statistics for all instances.
                     * @param _instanceStatistics The binding statistics for all instances.
                     * 
                     */
                    void SetInstanceStatistics(const std::vector<InstanceStatistic>& _instanceStatistics);

                    /**
                     * 判断参数 InstanceStatistics 是否已赋值
                     * @return InstanceStatistics 是否已赋值
                     * 
                     */
                    bool InstanceStatisticsHasBeenSet() const;

                    /**
                     * 获取Total count of all resources (excluding resources referenced by security groups).
                     * @return TotalCount Total count of all resources (excluding resources referenced by security groups).
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total count of all resources (excluding resources referenced by security groups).
                     * @param _totalCount Total count of all resources (excluding resources referenced by security groups).
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Security group instance ID.
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * Number of CVM instances.
                     */
                    uint64_t m_cVM;
                    bool m_cVMHasBeenSet;

                    /**
                     * Number of TencentDB for MySQL instances
                     */
                    uint64_t m_cDB;
                    bool m_cDBHasBeenSet;

                    /**
                     * Number of ENI instances.
                     */
                    uint64_t m_eNI;
                    bool m_eNIHasBeenSet;

                    /**
                     * Number of times a security group is referenced by other security groups
                     */
                    uint64_t m_sG;
                    bool m_sGHasBeenSet;

                    /**
                     * Number of load balancer instances.
                     */
                    uint64_t m_cLB;
                    bool m_cLBHasBeenSet;

                    /**
                     * The binding statistics for all instances.
                     */
                    std::vector<InstanceStatistic> m_instanceStatistics;
                    bool m_instanceStatisticsHasBeenSet;

                    /**
                     * Total count of all resources (excluding resources referenced by security groups).
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUPASSOCIATIONSTATISTICS_H_
