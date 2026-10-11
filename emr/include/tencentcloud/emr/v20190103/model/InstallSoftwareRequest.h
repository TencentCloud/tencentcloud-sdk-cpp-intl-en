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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INSTALLSOFTWAREREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INSTALLSOFTWAREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/CustomMetaInfo.h>
#include <tencentcloud/emr/v20190103/model/ExternalService.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/CloudResource.h>
#include <tencentcloud/emr/v20190103/model/ServiceDeployInfo.h>
#include <tencentcloud/emr/v20190103/model/ContainerExtraConf.h>
#include <tencentcloud/emr/v20190103/model/CustomMetaDBInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * InstallSoftware request structure.
                */
                class InstallSoftwareRequest : public AbstractModel
                {
                public:
                    InstallSoftwareRequest();
                    ~InstallSoftwareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return InstanceId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _instanceId <p>Cluster ID.</p>
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
                     * 获取<p>Component version, for example, presto-0.161. You can view the components that can be installed on the current cluster via InstallSoftWareInfo.</p>
                     * @return SoftInfo <p>Component version, for example, presto-0.161. You can view the components that can be installed on the current cluster via InstallSoftWareInfo.</p>
                     * 
                     */
                    std::vector<std::string> GetSoftInfo() const;

                    /**
                     * 设置<p>Component version, for example, presto-0.161. You can view the components that can be installed on the current cluster via InstallSoftWareInfo.</p>
                     * @param _softInfo <p>Component version, for example, presto-0.161. You can view the components that can be installed on the current cluster via InstallSoftWareInfo.</p>
                     * 
                     */
                    void SetSoftInfo(const std::vector<std::string>& _softInfo);

                    /**
                     * 判断参数 SoftInfo 是否已赋值
                     * @return SoftInfo 是否已赋值
                     * 
                     */
                    bool SoftInfoHasBeenSet() const;

                    /**
                     * 获取<p>If you use a monthly subscription cluster and need to purchase a CDB, determine whether to enable auto-renewal for the CDB. Default value: AUTO_RENEW. If auto-renewal is disabled for the newly-added CDB, fill in NOT_AUTO_RENEW.</p>
                     * @return CdbAutoRenew <p>If you use a monthly subscription cluster and need to purchase a CDB, determine whether to enable auto-renewal for the CDB. Default value: AUTO_RENEW. If auto-renewal is disabled for the newly-added CDB, fill in NOT_AUTO_RENEW.</p>
                     * 
                     */
                    std::string GetCdbAutoRenew() const;

                    /**
                     * 设置<p>If you use a monthly subscription cluster and need to purchase a CDB, determine whether to enable auto-renewal for the CDB. Default value: AUTO_RENEW. If auto-renewal is disabled for the newly-added CDB, fill in NOT_AUTO_RENEW.</p>
                     * @param _cdbAutoRenew <p>If you use a monthly subscription cluster and need to purchase a CDB, determine whether to enable auto-renewal for the CDB. Default value: AUTO_RENEW. If auto-renewal is disabled for the newly-added CDB, fill in NOT_AUTO_RENEW.</p>
                     * 
                     */
                    void SetCdbAutoRenew(const std::string& _cdbAutoRenew);

                    /**
                     * 判断参数 CdbAutoRenew 是否已赋值
                     * @return CdbAutoRenew 是否已赋值
                     * 
                     */
                    bool CdbAutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>Hive shared metadata database type. Valid values:</p><li>EMR_NEW_META: created by the cluster by default</li><li>EMR_EXIT_METE: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     * @return MetaType <p>Hive shared metadata database type. Valid values:</p><li>EMR_NEW_META: created by the cluster by default</li><li>EMR_EXIT_METE: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置<p>Hive shared metadata database type. Valid values:</p><li>EMR_NEW_META: created by the cluster by default</li><li>EMR_EXIT_METE: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     * @param _metaType <p>Hive shared metadata database type. Valid values:</p><li>EMR_NEW_META: created by the cluster by default</li><li>EMR_EXIT_METE: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取<p>EMR-MetaDB instance.</p>
                     * @return UnifyMetaInstanceId <p>EMR-MetaDB instance.</p>
                     * 
                     */
                    std::string GetUnifyMetaInstanceId() const;

                    /**
                     * 设置<p>EMR-MetaDB instance.</p>
                     * @param _unifyMetaInstanceId <p>EMR-MetaDB instance.</p>
                     * 
                     */
                    void SetUnifyMetaInstanceId(const std::string& _unifyMetaInstanceId);

                    /**
                     * 判断参数 UnifyMetaInstanceId 是否已赋值
                     * @return UnifyMetaInstanceId 是否已赋值
                     * 
                     */
                    bool UnifyMetaInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Custom MetaDB information.</p>
                     * @return MetaDBInfo <p>Custom MetaDB information.</p>
                     * 
                     */
                    CustomMetaInfo GetMetaDBInfo() const;

                    /**
                     * 设置<p>Custom MetaDB information.</p>
                     * @param _metaDBInfo <p>Custom MetaDB information.</p>
                     * 
                     */
                    void SetMetaDBInfo(const CustomMetaInfo& _metaDBInfo);

                    /**
                     * 判断参数 MetaDBInfo 是否已赋值
                     * @return MetaDBInfo 是否已赋值
                     * 
                     */
                    bool MetaDBInfoHasBeenSet() const;

                    /**
                     * 获取<p>Shared component information.</p>
                     * @return ExternalService <p>Shared component information.</p>
                     * 
                     */
                    std::vector<ExternalService> GetExternalService() const;

                    /**
                     * 设置<p>Shared component information.</p>
                     * @param _externalService <p>Shared component information.</p>
                     * 
                     */
                    void SetExternalService(const std::vector<ExternalService>& _externalService);

                    /**
                     * 判断参数 ExternalService 是否已赋值
                     * @return ExternalService 是否已赋值
                     * 
                     */
                    bool ExternalServiceHasBeenSet() const;

                    /**
                     * 获取<p>Tag information.</p>
                     * @return Tags <p>Tag information.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Tag information.</p>
                     * @param _tags <p>Tag information.</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Pod specification information of the role.</p>
                     * @return CloudResources <p>Pod specification information of the role.</p>
                     * 
                     */
                    std::vector<CloudResource> GetCloudResources() const;

                    /**
                     * 设置<p>Pod specification information of the role.</p>
                     * @param _cloudResources <p>Pod specification information of the role.</p>
                     * 
                     */
                    void SetCloudResources(const std::vector<CloudResource>& _cloudResources);

                    /**
                     * 判断参数 CloudResources 是否已赋值
                     * @return CloudResources 是否已赋值
                     * 
                     */
                    bool CloudResourcesHasBeenSet() const;

                    /**
                     * 获取<p>Custom deployment information.</p>
                     * @return ServiceDeployInfoList <p>Custom deployment information.</p>
                     * 
                     */
                    std::vector<ServiceDeployInfo> GetServiceDeployInfoList() const;

                    /**
                     * 设置<p>Custom deployment information.</p>
                     * @param _serviceDeployInfoList <p>Custom deployment information.</p>
                     * 
                     */
                    void SetServiceDeployInfoList(const std::vector<ServiceDeployInfo>& _serviceDeployInfoList);

                    /**
                     * 判断参数 ServiceDeployInfoList 是否已赋值
                     * @return ServiceDeployInfoList 是否已赋值
                     * 
                     */
                    bool ServiceDeployInfoListHasBeenSet() const;

                    /**
                     * 获取<p>Database version.</p>
                     * @return DefaultMetaVersion <p>Database version.</p>
                     * 
                     */
                    std::string GetDefaultMetaVersion() const;

                    /**
                     * 设置<p>Database version.</p>
                     * @param _defaultMetaVersion <p>Database version.</p>
                     * 
                     */
                    void SetDefaultMetaVersion(const std::string& _defaultMetaVersion);

                    /**
                     * 判断参数 DefaultMetaVersion 是否已赋值
                     * @return DefaultMetaVersion 是否已赋值
                     * 
                     */
                    bool DefaultMetaVersionHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable audit.</p>
                     * @return NeedCdbAudit <p>Whether to enable audit.</p>
                     * 
                     */
                    int64_t GetNeedCdbAudit() const;

                    /**
                     * 设置<p>Whether to enable audit.</p>
                     * @param _needCdbAudit <p>Whether to enable audit.</p>
                     * 
                     */
                    void SetNeedCdbAudit(const int64_t& _needCdbAudit);

                    /**
                     * 判断参数 NeedCdbAudit 是否已赋值
                     * @return NeedCdbAudit 是否已赋值
                     * 
                     */
                    bool NeedCdbAuditHasBeenSet() const;

                    /**
                     * 获取<p>Additional container configuration.</p>
                     * @return ContainerExtraConf <p>Additional container configuration.</p>
                     * 
                     */
                    ContainerExtraConf GetContainerExtraConf() const;

                    /**
                     * 设置<p>Additional container configuration.</p>
                     * @param _containerExtraConf <p>Additional container configuration.</p>
                     * 
                     */
                    void SetContainerExtraConf(const ContainerExtraConf& _containerExtraConf);

                    /**
                     * 判断参数 ContainerExtraConf 是否已赋值
                     * @return ContainerExtraConf 是否已赋值
                     * 
                     */
                    bool ContainerExtraConfHasBeenSet() const;

                    /**
                     * 获取<p>Whether to forcibly check the validity of custom components. Currently, it is available only for the Terraform side.</p>
                     * @return CheckServiceDeployInfo <p>Whether to forcibly check the validity of custom components. Currently, it is available only for the Terraform side.</p>
                     * 
                     */
                    bool GetCheckServiceDeployInfo() const;

                    /**
                     * 设置<p>Whether to forcibly check the validity of custom components. Currently, it is available only for the Terraform side.</p>
                     * @param _checkServiceDeployInfo <p>Whether to forcibly check the validity of custom components. Currently, it is available only for the Terraform side.</p>
                     * 
                     */
                    void SetCheckServiceDeployInfo(const bool& _checkServiceDeployInfo);

                    /**
                     * 判断参数 CheckServiceDeployInfo 是否已赋值
                     * @return CheckServiceDeployInfo 是否已赋值
                     * 
                     */
                    bool CheckServiceDeployInfoHasBeenSet() const;

                    /**
                     * 获取<p>Custom MetaDB information.</p>
                     * @return MetaDBGroupInfo <p>Custom MetaDB information.</p>
                     * 
                     */
                    std::vector<CustomMetaDBInfo> GetMetaDBGroupInfo() const;

                    /**
                     * 设置<p>Custom MetaDB information.</p>
                     * @param _metaDBGroupInfo <p>Custom MetaDB information.</p>
                     * 
                     */
                    void SetMetaDBGroupInfo(const std::vector<CustomMetaDBInfo>& _metaDBGroupInfo);

                    /**
                     * 判断参数 MetaDBGroupInfo 是否已赋值
                     * @return MetaDBGroupInfo 是否已赋值
                     * 
                     */
                    bool MetaDBGroupInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Component version, for example, presto-0.161. You can view the components that can be installed on the current cluster via InstallSoftWareInfo.</p>
                     */
                    std::vector<std::string> m_softInfo;
                    bool m_softInfoHasBeenSet;

                    /**
                     * <p>If you use a monthly subscription cluster and need to purchase a CDB, determine whether to enable auto-renewal for the CDB. Default value: AUTO_RENEW. If auto-renewal is disabled for the newly-added CDB, fill in NOT_AUTO_RENEW.</p>
                     */
                    std::string m_cdbAutoRenew;
                    bool m_cdbAutoRenewHasBeenSet;

                    /**
                     * <p>Hive shared metadata database type. Valid values:</p><li>EMR_NEW_META: created by the cluster by default</li><li>EMR_EXIT_METE: EMR-MetaDB specified by the cluster</li><li>USER_CUSTOM_META: custom MetaDB used by the cluster</li>
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * <p>EMR-MetaDB instance.</p>
                     */
                    std::string m_unifyMetaInstanceId;
                    bool m_unifyMetaInstanceIdHasBeenSet;

                    /**
                     * <p>Custom MetaDB information.</p>
                     */
                    CustomMetaInfo m_metaDBInfo;
                    bool m_metaDBInfoHasBeenSet;

                    /**
                     * <p>Shared component information.</p>
                     */
                    std::vector<ExternalService> m_externalService;
                    bool m_externalServiceHasBeenSet;

                    /**
                     * <p>Tag information.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Pod specification information of the role.</p>
                     */
                    std::vector<CloudResource> m_cloudResources;
                    bool m_cloudResourcesHasBeenSet;

                    /**
                     * <p>Custom deployment information.</p>
                     */
                    std::vector<ServiceDeployInfo> m_serviceDeployInfoList;
                    bool m_serviceDeployInfoListHasBeenSet;

                    /**
                     * <p>Database version.</p>
                     */
                    std::string m_defaultMetaVersion;
                    bool m_defaultMetaVersionHasBeenSet;

                    /**
                     * <p>Whether to enable audit.</p>
                     */
                    int64_t m_needCdbAudit;
                    bool m_needCdbAuditHasBeenSet;

                    /**
                     * <p>Additional container configuration.</p>
                     */
                    ContainerExtraConf m_containerExtraConf;
                    bool m_containerExtraConfHasBeenSet;

                    /**
                     * <p>Whether to forcibly check the validity of custom components. Currently, it is available only for the Terraform side.</p>
                     */
                    bool m_checkServiceDeployInfo;
                    bool m_checkServiceDeployInfoHasBeenSet;

                    /**
                     * <p>Custom MetaDB information.</p>
                     */
                    std::vector<CustomMetaDBInfo> m_metaDBGroupInfo;
                    bool m_metaDBGroupInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INSTALLSOFTWAREREQUEST_H_
