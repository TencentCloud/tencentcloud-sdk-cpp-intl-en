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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUPASSOCIATIONSTATISTICS_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUPASSOCIATIONSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/InstanceStatistic.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Statistics on the resources associated with the security group
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
                     * 获取Number of ECM instances.
                     * @return ECM Number of ECM instances.
                     * 
                     */
                    int64_t GetECM() const;

                    /**
                     * 设置Number of ECM instances.
                     * @param _eCM Number of ECM instances.
                     * 
                     */
                    void SetECM(const int64_t& _eCM);

                    /**
                     * 判断参数 ECM 是否已赋值
                     * @return ECM 是否已赋值
                     * 
                     */
                    bool ECMHasBeenSet() const;

                    /**
                     * 获取Number of ECM modules.
                     * @return Module Number of ECM modules.
                     * 
                     */
                    int64_t GetModule() const;

                    /**
                     * 设置Number of ECM modules.
                     * @param _module Number of ECM modules.
                     * 
                     */
                    void SetModule(const int64_t& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Number of ENI instances.
                     * @return ENI Number of ENI instances.
                     * 
                     */
                    int64_t GetENI() const;

                    /**
                     * 设置Number of ENI instances.
                     * @param _eNI Number of ENI instances.
                     * 
                     */
                    void SetENI(const int64_t& _eNI);

                    /**
                     * 判断参数 ENI 是否已赋值
                     * @return ENI 是否已赋值
                     * 
                     */
                    bool ENIHasBeenSet() const;

                    /**
                     * 获取Number of times the security group is referenced by other security groups.
                     * @return SG Number of times the security group is referenced by other security groups.
                     * 
                     */
                    int64_t GetSG() const;

                    /**
                     * 设置Number of times the security group is referenced by other security groups.
                     * @param _sG Number of times the security group is referenced by other security groups.
                     * 
                     */
                    void SetSG(const int64_t& _sG);

                    /**
                     * 判断参数 SG 是否已赋值
                     * @return SG 是否已赋值
                     * 
                     */
                    bool SGHasBeenSet() const;

                    /**
                     * 获取Number of CLB instances.
                     * @return CLB Number of CLB instances.
                     * 
                     */
                    int64_t GetCLB() const;

                    /**
                     * 设置Number of CLB instances.
                     * @param _cLB Number of CLB instances.
                     * 
                     */
                    void SetCLB(const int64_t& _cLB);

                    /**
                     * 判断参数 CLB 是否已赋值
                     * @return CLB 是否已赋值
                     * 
                     */
                    bool CLBHasBeenSet() const;

                    /**
                     * 获取Binding statistics of all instances.
                     * @return InstanceStatistics Binding statistics of all instances.
                     * 
                     */
                    std::vector<InstanceStatistic> GetInstanceStatistics() const;

                    /**
                     * 设置Binding statistics of all instances.
                     * @param _instanceStatistics Binding statistics of all instances.
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
                     * 获取Total number of all resources (excluding resources referenced by security groups).
                     * @return TotalCount Total number of all resources (excluding resources referenced by security groups).
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number of all resources (excluding resources referenced by security groups).
                     * @param _totalCount Total number of all resources (excluding resources referenced by security groups).
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

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
                     * Number of ECM instances.
                     */
                    int64_t m_eCM;
                    bool m_eCMHasBeenSet;

                    /**
                     * Number of ECM modules.
                     */
                    int64_t m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Number of ENI instances.
                     */
                    int64_t m_eNI;
                    bool m_eNIHasBeenSet;

                    /**
                     * Number of times the security group is referenced by other security groups.
                     */
                    int64_t m_sG;
                    bool m_sGHasBeenSet;

                    /**
                     * Number of CLB instances.
                     */
                    int64_t m_cLB;
                    bool m_cLBHasBeenSet;

                    /**
                     * Binding statistics of all instances.
                     */
                    std::vector<InstanceStatistic> m_instanceStatistics;
                    bool m_instanceStatisticsHasBeenSet;

                    /**
                     * Total number of all resources (excluding resources referenced by security groups).
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUPASSOCIATIONSTATISTICS_H_
