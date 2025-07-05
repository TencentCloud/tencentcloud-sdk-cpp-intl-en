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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/InstanceAdvancedSettings.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateClusterInstances request structure.
                */
                class CreateClusterInstancesRequest : public AbstractModel
                {
                public:
                    CreateClusterInstancesRequest();
                    ~CreateClusterInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID. Enter the ClusterId field returned by the DescribeClusters API
                     * @return ClusterId Cluster ID. Enter the ClusterId field returned by the DescribeClusters API
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID. Enter the ClusterId field returned by the DescribeClusters API
                     * @param _clusterId Cluster ID. Enter the ClusterId field returned by the DescribeClusters API
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Pass-through parameter for CVM creation in the format of a JSON string. To ensure the idempotence of requests for adding cluster nodes, you need to add the ClientToken field in this parameter. For more information, see the documentation for [RunInstances](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1) API.
                     * @return RunInstancePara Pass-through parameter for CVM creation in the format of a JSON string. To ensure the idempotence of requests for adding cluster nodes, you need to add the ClientToken field in this parameter. For more information, see the documentation for [RunInstances](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetRunInstancePara() const;

                    /**
                     * 设置Pass-through parameter for CVM creation in the format of a JSON string. To ensure the idempotence of requests for adding cluster nodes, you need to add the ClientToken field in this parameter. For more information, see the documentation for [RunInstances](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1) API.
                     * @param _runInstancePara Pass-through parameter for CVM creation in the format of a JSON string. To ensure the idempotence of requests for adding cluster nodes, you need to add the ClientToken field in this parameter. For more information, see the documentation for [RunInstances](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1) API.
                     * 
                     */
                    void SetRunInstancePara(const std::string& _runInstancePara);

                    /**
                     * 判断参数 RunInstancePara 是否已赋值
                     * @return RunInstancePara 是否已赋值
                     * 
                     */
                    bool RunInstanceParaHasBeenSet() const;

                    /**
                     * 获取Additional parameter to be set for the instance
                     * @return InstanceAdvancedSettings Additional parameter to be set for the instance
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置Additional parameter to be set for the instance
                     * @param _instanceAdvancedSettings Additional parameter to be set for the instance
                     * 
                     */
                    void SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings);

                    /**
                     * 判断参数 InstanceAdvancedSettings 是否已赋值
                     * @return InstanceAdvancedSettings 是否已赋值
                     * 
                     */
                    bool InstanceAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取Skips the specified verification. Valid values: GlobalRouteCIDRCheck, VpcCniCIDRCheck
                     * @return SkipValidateOptions Skips the specified verification. Valid values: GlobalRouteCIDRCheck, VpcCniCIDRCheck
                     * 
                     */
                    std::vector<std::string> GetSkipValidateOptions() const;

                    /**
                     * 设置Skips the specified verification. Valid values: GlobalRouteCIDRCheck, VpcCniCIDRCheck
                     * @param _skipValidateOptions Skips the specified verification. Valid values: GlobalRouteCIDRCheck, VpcCniCIDRCheck
                     * 
                     */
                    void SetSkipValidateOptions(const std::vector<std::string>& _skipValidateOptions);

                    /**
                     * 判断参数 SkipValidateOptions 是否已赋值
                     * @return SkipValidateOptions 是否已赋值
                     * 
                     */
                    bool SkipValidateOptionsHasBeenSet() const;

                private:

                    /**
                     * Cluster ID. Enter the ClusterId field returned by the DescribeClusters API
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Pass-through parameter for CVM creation in the format of a JSON string. To ensure the idempotence of requests for adding cluster nodes, you need to add the ClientToken field in this parameter. For more information, see the documentation for [RunInstances](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1) API.
                     */
                    std::string m_runInstancePara;
                    bool m_runInstanceParaHasBeenSet;

                    /**
                     * Additional parameter to be set for the instance
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

                    /**
                     * Skips the specified verification. Valid values: GlobalRouteCIDRCheck, VpcCniCIDRCheck
                     */
                    std::vector<std::string> m_skipValidateOptions;
                    bool m_skipValidateOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERINSTANCESREQUEST_H_
