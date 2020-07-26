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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERBASICSETTINGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERBASICSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Describes the basic configuration information of a cluster
                */
                class ClusterBasicSettings : public AbstractModel
                {
                public:
                    ClusterBasicSettings();
                    ~ClusterBasicSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster operating system. CentOS 7.2x86_64 or Ubuntu 16.04.1 LTSx86_64. Default value: Ubuntu 16.04.1 LTSx86_64
                     * @return ClusterOs Cluster operating system. CentOS 7.2x86_64 or Ubuntu 16.04.1 LTSx86_64. Default value: Ubuntu 16.04.1 LTSx86_64
                     */
                    std::string GetClusterOs() const;

                    /**
                     * 设置Cluster operating system. CentOS 7.2x86_64 or Ubuntu 16.04.1 LTSx86_64. Default value: Ubuntu 16.04.1 LTSx86_64
                     * @param ClusterOs Cluster operating system. CentOS 7.2x86_64 or Ubuntu 16.04.1 LTSx86_64. Default value: Ubuntu 16.04.1 LTSx86_64
                     */
                    void SetClusterOs(const std::string& _clusterOs);

                    /**
                     * 判断参数 ClusterOs 是否已赋值
                     * @return ClusterOs 是否已赋值
                     */
                    bool ClusterOsHasBeenSet() const;

                    /**
                     * 获取Cluster version. The default value is 1.10.5.
                     * @return ClusterVersion Cluster version. The default value is 1.10.5.
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置Cluster version. The default value is 1.10.5.
                     * @param ClusterVersion Cluster version. The default value is 1.10.5.
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param ClusterName Cluster name
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Cluster description
                     * @return ClusterDescription Cluster description
                     */
                    std::string GetClusterDescription() const;

                    /**
                     * 设置Cluster description
                     * @param ClusterDescription Cluster description
                     */
                    void SetClusterDescription(const std::string& _clusterDescription);

                    /**
                     * 判断参数 ClusterDescription 是否已赋值
                     * @return ClusterDescription 是否已赋值
                     */
                    bool ClusterDescriptionHasBeenSet() const;

                    /**
                     * 获取VPC ID, in the format of vpc-xxx, which is required when you create an empty managed cluster.
                     * @return VpcId VPC ID, in the format of vpc-xxx, which is required when you create an empty managed cluster.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID, in the format of vpc-xxx, which is required when you create an empty managed cluster.
                     * @param VpcId VPC ID, in the format of vpc-xxx, which is required when you create an empty managed cluster.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取ID of the project to which the new resources in the cluster belong.
                     * @return ProjectId ID of the project to which the new resources in the cluster belong.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置ID of the project to which the new resources in the cluster belong.
                     * @param ProjectId ID of the project to which the new resources in the cluster belong.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return TagSpecification 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置
                     * @param TagSpecification 
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取
                     * @return OsCustomizeType 
                     */
                    std::string GetOsCustomizeType() const;

                    /**
                     * 设置
                     * @param OsCustomizeType 
                     */
                    void SetOsCustomizeType(const std::string& _osCustomizeType);

                    /**
                     * 判断参数 OsCustomizeType 是否已赋值
                     * @return OsCustomizeType 是否已赋值
                     */
                    bool OsCustomizeTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return NeedWorkSecurityGroup 
                     */
                    bool GetNeedWorkSecurityGroup() const;

                    /**
                     * 设置
                     * @param NeedWorkSecurityGroup 
                     */
                    void SetNeedWorkSecurityGroup(const bool& _needWorkSecurityGroup);

                    /**
                     * 判断参数 NeedWorkSecurityGroup 是否已赋值
                     * @return NeedWorkSecurityGroup 是否已赋值
                     */
                    bool NeedWorkSecurityGroupHasBeenSet() const;

                private:

                    /**
                     * Cluster operating system. CentOS 7.2x86_64 or Ubuntu 16.04.1 LTSx86_64. Default value: Ubuntu 16.04.1 LTSx86_64
                     */
                    std::string m_clusterOs;
                    bool m_clusterOsHasBeenSet;

                    /**
                     * Cluster version. The default value is 1.10.5.
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Cluster description
                     */
                    std::string m_clusterDescription;
                    bool m_clusterDescriptionHasBeenSet;

                    /**
                     * VPC ID, in the format of vpc-xxx, which is required when you create an empty managed cluster.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * ID of the project to which the new resources in the cluster belong.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_osCustomizeType;
                    bool m_osCustomizeTypeHasBeenSet;

                    /**
                     * 
                     */
                    bool m_needWorkSecurityGroup;
                    bool m_needWorkSecurityGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERBASICSETTINGS_H_
