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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_TEMNAMESPACEINFO_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_TEMNAMESPACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * Namespace object
                */
                class TemNamespaceInfo : public AbstractModel
                {
                public:
                    TemNamespaceInfo();
                    ~TemNamespaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Namespace ID
                     * @return NamespaceId Namespace ID
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置Namespace ID
                     * @param _namespaceId Namespace ID
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取Channel
                     * @return Channel Channel
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置Channel
                     * @param _channel Channel
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取Namespace name
                     * @return NamespaceName Namespace name
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置Namespace name
                     * @param _namespaceName Namespace name
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取Region name
                     * @return Region Region name
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region name
                     * @param _region Region name
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Namespace description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Description Namespace description
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Namespace description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _description Namespace description
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Status. 1: terminated; 0: normal
                     * @return Status Status. 1: terminated; 0: normal
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status. 1: terminated; 0: normal
                     * @param _status Status. 1: terminated; 0: normal
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取VPC
                     * @return Vpc VPC
                     * 
                     */
                    std::string GetVpc() const;

                    /**
                     * 设置VPC
                     * @param _vpc VPC
                     * 
                     */
                    void SetVpc(const std::string& _vpc);

                    /**
                     * 判断参数 Vpc 是否已赋值
                     * @return Vpc 是否已赋值
                     * 
                     */
                    bool VpcHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateDate Creation time
                     * 
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置Creation time
                     * @param _createDate Creation time
                     * 
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     * 
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取Modification time
                     * @return ModifyDate Modification time
                     * 
                     */
                    std::string GetModifyDate() const;

                    /**
                     * 设置Modification time
                     * @param _modifyDate Modification time
                     * 
                     */
                    void SetModifyDate(const std::string& _modifyDate);

                    /**
                     * 判断参数 ModifyDate 是否已赋值
                     * @return ModifyDate 是否已赋值
                     * 
                     */
                    bool ModifyDateHasBeenSet() const;

                    /**
                     * 获取Modifier
                     * @return Modifier Modifier
                     * 
                     */
                    std::string GetModifier() const;

                    /**
                     * 设置Modifier
                     * @param _modifier Modifier
                     * 
                     */
                    void SetModifier(const std::string& _modifier);

                    /**
                     * 判断参数 Modifier 是否已赋值
                     * @return Modifier 是否已赋值
                     * 
                     */
                    bool ModifierHasBeenSet() const;

                    /**
                     * 获取Creator
                     * @return Creator Creator
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Creator
                     * @param _creator Creator
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Number of services
                     * @return ServiceNum Number of services
                     * 
                     */
                    int64_t GetServiceNum() const;

                    /**
                     * 设置Number of services
                     * @param _serviceNum Number of services
                     * 
                     */
                    void SetServiceNum(const int64_t& _serviceNum);

                    /**
                     * 判断参数 ServiceNum 是否已赋值
                     * @return ServiceNum 是否已赋值
                     * 
                     */
                    bool ServiceNumHasBeenSet() const;

                    /**
                     * 获取Number of running instances
                     * @return RunInstancesNum Number of running instances
                     * 
                     */
                    int64_t GetRunInstancesNum() const;

                    /**
                     * 设置Number of running instances
                     * @param _runInstancesNum Number of running instances
                     * 
                     */
                    void SetRunInstancesNum(const int64_t& _runInstancesNum);

                    /**
                     * 判断参数 RunInstancesNum 是否已赋值
                     * @return RunInstancesNum 是否已赋值
                     * 
                     */
                    bool RunInstancesNumHasBeenSet() const;

                    /**
                     * 获取Subnet
                     * @return SubnetId Subnet
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet
                     * @param _subnetId Subnet
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
                     * 获取TCB environment status
                     * @return TcbEnvStatus TCB environment status
                     * 
                     */
                    std::string GetTcbEnvStatus() const;

                    /**
                     * 设置TCB environment status
                     * @param _tcbEnvStatus TCB environment status
                     * 
                     */
                    void SetTcbEnvStatus(const std::string& _tcbEnvStatus);

                    /**
                     * 判断参数 TcbEnvStatus 是否已赋值
                     * @return TcbEnvStatus 是否已赋值
                     * 
                     */
                    bool TcbEnvStatusHasBeenSet() const;

                    /**
                     * 获取eks cluster status
                     * @return ClusterStatus eks cluster status
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置eks cluster status
                     * @param _clusterStatus eks cluster status
                     * 
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取Whether to enable TSW
                     * @return EnableTswTraceService Whether to enable TSW
                     * 
                     */
                    bool GetEnableTswTraceService() const;

                    /**
                     * 设置Whether to enable TSW
                     * @param _enableTswTraceService Whether to enable TSW
                     * 
                     */
                    void SetEnableTswTraceService(const bool& _enableTswTraceService);

                    /**
                     * 判断参数 EnableTswTraceService 是否已赋值
                     * @return EnableTswTraceService 是否已赋值
                     * 
                     */
                    bool EnableTswTraceServiceHasBeenSet() const;

                private:

                    /**
                     * Namespace ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * Channel
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * Namespace name
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * Region name
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Namespace description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Status. 1: terminated; 0: normal
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * VPC
                     */
                    std::string m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifyDate;
                    bool m_modifyDateHasBeenSet;

                    /**
                     * Modifier
                     */
                    std::string m_modifier;
                    bool m_modifierHasBeenSet;

                    /**
                     * Creator
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Number of services
                     */
                    int64_t m_serviceNum;
                    bool m_serviceNumHasBeenSet;

                    /**
                     * Number of running instances
                     */
                    int64_t m_runInstancesNum;
                    bool m_runInstancesNumHasBeenSet;

                    /**
                     * Subnet
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * TCB environment status
                     */
                    std::string m_tcbEnvStatus;
                    bool m_tcbEnvStatusHasBeenSet;

                    /**
                     * eks cluster status
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * Whether to enable TSW
                     */
                    bool m_enableTswTraceService;
                    bool m_enableTswTraceServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_TEMNAMESPACEINFO_H_
