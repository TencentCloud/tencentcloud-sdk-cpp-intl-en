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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEDYNAMICINSTANCEDETAILRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEDYNAMICINSTANCEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NameValue.h>
#include <tencentcloud/emr/v20190103/model/Toleration.h>
#include <tencentcloud/emr/v20190103/model/DynamicInstanceGroupSpec.h>
#include <tencentcloud/emr/v20190103/model/RedisInstance.h>
#include <tencentcloud/emr/v20190103/model/CustomImage.h>
#include <tencentcloud/emr/v20190103/model/PersistentVolume.h>
#include <tencentcloud/emr/v20190103/model/ImageInfoV2.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeDynamicInstanceDetail response structure.
                */
                class DescribeDynamicInstanceDetailResponse : public AbstractModel
                {
                public:
                    DescribeDynamicInstanceDetailResponse();
                    ~DescribeDynamicInstanceDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Ray cluster name.</p>
                     * @return RayClusterName <p>Ray cluster name.</p>
                     * 
                     */
                    std::string GetRayClusterName() const;

                    /**
                     * 判断参数 RayClusterName 是否已赋值
                     * @return RayClusterName 是否已赋值
                     * 
                     */
                    bool RayClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>Ray cluster ID.</p>
                     * @return RayClusterId <p>Ray cluster ID.</p>
                     * 
                     */
                    int64_t GetRayClusterId() const;

                    /**
                     * 判断参数 RayClusterId 是否已赋值
                     * @return RayClusterId 是否已赋值
                     * 
                     */
                    bool RayClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Creation type.</p><p>Enumeration values:</p><ul><li>1: form creation</li><li>2: YAML creation</li></ul>
                     * @return SubmitType <p>Creation type.</p><p>Enumeration values:</p><ul><li>1: form creation</li><li>2: YAML creation</li></ul>
                     * 
                     */
                    int64_t GetSubmitType() const;

                    /**
                     * 判断参数 SubmitType 是否已赋值
                     * @return SubmitType 是否已赋值
                     * 
                     */
                    bool SubmitTypeHasBeenSet() const;

                    /**
                     * 获取<p>Namespace.</p>
                     * @return Namespace <p>Namespace.</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
                     * @return UpdateTime <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>labels</p>
                     * @return Labels <p>labels</p>
                     * 
                     */
                    std::vector<NameValue> GetLabels() const;

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>Tolerations</p>
                     * @return Tolerations <p>Tolerations</p>
                     * 
                     */
                    std::vector<Toleration> GetTolerations() const;

                    /**
                     * 判断参数 Tolerations 是否已赋值
                     * @return Tolerations 是否已赋值
                     * 
                     */
                    bool TolerationsHasBeenSet() const;

                    /**
                     * 获取<p>Environment variable.</p>
                     * @return Env <p>Environment variable.</p>
                     * 
                     */
                    std::vector<NameValue> GetEnv() const;

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取<p>Whether to rely on external Kerberos components.</p>
                     * @return SupportExternalKerberosService <p>Whether to rely on external Kerberos components.</p>
                     * 
                     */
                    bool GetSupportExternalKerberosService() const;

                    /**
                     * 判断参数 SupportExternalKerberosService 是否已赋值
                     * @return SupportExternalKerberosService 是否已赋值
                     * 
                     */
                    bool SupportExternalKerberosServiceHasBeenSet() const;

                    /**
                     * 获取<p>Dependent Kerberos cluster.</p>
                     * @return KerberosCluster <p>Dependent Kerberos cluster.</p>
                     * 
                     */
                    std::string GetKerberosCluster() const;

                    /**
                     * 判断参数 KerberosCluster 是否已赋值
                     * @return KerberosCluster 是否已赋值
                     * 
                     */
                    bool KerberosClusterHasBeenSet() const;

                    /**
                     * 获取<p>token</p>
                     * @return Token <p>token</p>
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取<p>HeadGroup</p>
                     * @return HeadGroupSpec <p>HeadGroup</p>
                     * 
                     */
                    DynamicInstanceGroupSpec GetHeadGroupSpec() const;

                    /**
                     * 判断参数 HeadGroupSpec 是否已赋值
                     * @return HeadGroupSpec 是否已赋值
                     * 
                     */
                    bool HeadGroupSpecHasBeenSet() const;

                    /**
                     * 获取<p>WorkerGroup</p>
                     * @return WorkerGroupSpecs <p>WorkerGroup</p>
                     * 
                     */
                    std::vector<DynamicInstanceGroupSpec> GetWorkerGroupSpecs() const;

                    /**
                     * 判断参数 WorkerGroupSpecs 是否已赋值
                     * @return WorkerGroupSpecs 是否已赋值
                     * 
                     */
                    bool WorkerGroupSpecsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable storage configuration.</p>
                     * @return StorageConfigEnabled <p>Whether to enable storage configuration.</p>
                     * 
                     */
                    bool GetStorageConfigEnabled() const;

                    /**
                     * 判断参数 StorageConfigEnabled 是否已赋值
                     * @return StorageConfigEnabled 是否已赋值
                     * 
                     */
                    bool StorageConfigEnabledHasBeenSet() const;

                    /**
                     * 获取<p>Redis instance information.</p>
                     * @return RedisInstance <p>Redis instance information.</p>
                     * 
                     */
                    RedisInstance GetRedisInstance() const;

                    /**
                     * 判断参数 RedisInstance 是否已赋值
                     * @return RedisInstance 是否已赋值
                     * 
                     */
                    bool RedisInstanceHasBeenSet() const;

                    /**
                     * 获取<p>Image information.</p>
                     * @return CustomImage <p>Image information.</p>
                     * 
                     */
                    CustomImage GetCustomImage() const;

                    /**
                     * 判断参数 CustomImage 是否已赋值
                     * @return CustomImage 是否已赋值
                     * 
                     */
                    bool CustomImageHasBeenSet() const;

                    /**
                     * 获取<p>Dashboard link.</p>
                     * @return DashboardUrl <p>Dashboard link.</p>
                     * 
                     */
                    std::string GetDashboardUrl() const;

                    /**
                     * 判断参数 DashboardUrl 是否已赋值
                     * @return DashboardUrl 是否已赋值
                     * 
                     */
                    bool DashboardUrlHasBeenSet() const;

                    /**
                     * 获取<p>Total number of Pods.</p>
                     * @return TotalPodCount <p>Total number of Pods.</p>
                     * 
                     */
                    int64_t GetTotalPodCount() const;

                    /**
                     * 判断参数 TotalPodCount 是否已赋值
                     * @return TotalPodCount 是否已赋值
                     * 
                     */
                    bool TotalPodCountHasBeenSet() const;

                    /**
                     * 获取<p>Whether to support high availability.</p>
                     * @return HighAvailability <p>Whether to support high availability.</p>
                     * 
                     */
                    bool GetHighAvailability() const;

                    /**
                     * 判断参数 HighAvailability 是否已赋值
                     * @return HighAvailability 是否已赋值
                     * 
                     */
                    bool HighAvailabilityHasBeenSet() const;

                    /**
                     * 获取<p>Storage information.</p>
                     * @return PersistentVolume <p>Storage information.</p>
                     * 
                     */
                    PersistentVolume GetPersistentVolume() const;

                    /**
                     * 判断参数 PersistentVolume 是否已赋值
                     * @return PersistentVolume 是否已赋值
                     * 
                     */
                    bool PersistentVolumeHasBeenSet() const;

                    /**
                     * 获取<p>rayClusterYamlJson</p>
                     * @return RayClusterYaml <p>rayClusterYamlJson</p>
                     * 
                     */
                    std::string GetRayClusterYaml() const;

                    /**
                     * 判断参数 RayClusterYaml 是否已赋值
                     * @return RayClusterYaml 是否已赋值
                     * 
                     */
                    bool RayClusterYamlHasBeenSet() const;

                    /**
                     * 获取<p>Image information.</p>
                     * @return ImageInfoV2 <p>Image information.</p>
                     * 
                     */
                    ImageInfoV2 GetImageInfoV2() const;

                    /**
                     * 判断参数 ImageInfoV2 是否已赋值
                     * @return ImageInfoV2 是否已赋值
                     * 
                     */
                    bool ImageInfoV2HasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable log collection.</p>
                     * @return EnableHistoryServer <p>Whether to enable log collection.</p>
                     * 
                     */
                    bool GetEnableHistoryServer() const;

                    /**
                     * 判断参数 EnableHistoryServer 是否已赋值
                     * @return EnableHistoryServer 是否已赋值
                     * 
                     */
                    bool EnableHistoryServerHasBeenSet() const;

                    /**
                     * 获取<p>TensorBoard link.</p>
                     * @return TensorBoardUrl <p>TensorBoard link.</p>
                     * 
                     */
                    std::string GetTensorBoardUrl() const;

                    /**
                     * 判断参数 TensorBoardUrl 是否已赋值
                     * @return TensorBoardUrl 是否已赋值
                     * 
                     */
                    bool TensorBoardUrlHasBeenSet() const;

                private:

                    /**
                     * <p>Ray cluster name.</p>
                     */
                    std::string m_rayClusterName;
                    bool m_rayClusterNameHasBeenSet;

                    /**
                     * <p>Ray cluster ID.</p>
                     */
                    int64_t m_rayClusterId;
                    bool m_rayClusterIdHasBeenSet;

                    /**
                     * <p>Creation type.</p><p>Enumeration values:</p><ul><li>1: form creation</li><li>2: YAML creation</li></ul>
                     */
                    int64_t m_submitType;
                    bool m_submitTypeHasBeenSet;

                    /**
                     * <p>Namespace.</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>labels</p>
                     */
                    std::vector<NameValue> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>Tolerations</p>
                     */
                    std::vector<Toleration> m_tolerations;
                    bool m_tolerationsHasBeenSet;

                    /**
                     * <p>Environment variable.</p>
                     */
                    std::vector<NameValue> m_env;
                    bool m_envHasBeenSet;

                    /**
                     * <p>Whether to rely on external Kerberos components.</p>
                     */
                    bool m_supportExternalKerberosService;
                    bool m_supportExternalKerberosServiceHasBeenSet;

                    /**
                     * <p>Dependent Kerberos cluster.</p>
                     */
                    std::string m_kerberosCluster;
                    bool m_kerberosClusterHasBeenSet;

                    /**
                     * <p>token</p>
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * <p>HeadGroup</p>
                     */
                    DynamicInstanceGroupSpec m_headGroupSpec;
                    bool m_headGroupSpecHasBeenSet;

                    /**
                     * <p>WorkerGroup</p>
                     */
                    std::vector<DynamicInstanceGroupSpec> m_workerGroupSpecs;
                    bool m_workerGroupSpecsHasBeenSet;

                    /**
                     * <p>Whether to enable storage configuration.</p>
                     */
                    bool m_storageConfigEnabled;
                    bool m_storageConfigEnabledHasBeenSet;

                    /**
                     * <p>Redis instance information.</p>
                     */
                    RedisInstance m_redisInstance;
                    bool m_redisInstanceHasBeenSet;

                    /**
                     * <p>Image information.</p>
                     */
                    CustomImage m_customImage;
                    bool m_customImageHasBeenSet;

                    /**
                     * <p>Dashboard link.</p>
                     */
                    std::string m_dashboardUrl;
                    bool m_dashboardUrlHasBeenSet;

                    /**
                     * <p>Total number of Pods.</p>
                     */
                    int64_t m_totalPodCount;
                    bool m_totalPodCountHasBeenSet;

                    /**
                     * <p>Whether to support high availability.</p>
                     */
                    bool m_highAvailability;
                    bool m_highAvailabilityHasBeenSet;

                    /**
                     * <p>Storage information.</p>
                     */
                    PersistentVolume m_persistentVolume;
                    bool m_persistentVolumeHasBeenSet;

                    /**
                     * <p>rayClusterYamlJson</p>
                     */
                    std::string m_rayClusterYaml;
                    bool m_rayClusterYamlHasBeenSet;

                    /**
                     * <p>Image information.</p>
                     */
                    ImageInfoV2 m_imageInfoV2;
                    bool m_imageInfoV2HasBeenSet;

                    /**
                     * <p>Whether to enable log collection.</p>
                     */
                    bool m_enableHistoryServer;
                    bool m_enableHistoryServerHasBeenSet;

                    /**
                     * <p>TensorBoard link.</p>
                     */
                    std::string m_tensorBoardUrl;
                    bool m_tensorBoardUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEDYNAMICINSTANCEDETAILRESPONSE_H_
