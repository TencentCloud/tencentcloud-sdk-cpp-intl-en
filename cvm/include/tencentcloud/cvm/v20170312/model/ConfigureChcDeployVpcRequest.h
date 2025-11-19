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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CONFIGURECHCDEPLOYVPCREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CONFIGURECHCDEPLOYVPCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/VirtualPrivateCloud.h>
#include <tencentcloud/cvm/v20170312/model/ChcDeployExtraConfig.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ConfigureChcDeployVpc request structure.
                */
                class ConfigureChcDeployVpcRequest : public AbstractModel
                {
                public:
                    ConfigureChcDeployVpcRequest();
                    ~ConfigureChcDeployVpcRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CHC instance ID
                     * @return ChcIds CHC instance ID
                     * 
                     */
                    std::vector<std::string> GetChcIds() const;

                    /**
                     * 设置CHC instance ID
                     * @param _chcIds CHC instance ID
                     * 
                     */
                    void SetChcIds(const std::vector<std::string>& _chcIds);

                    /**
                     * 判断参数 ChcIds 是否已赋值
                     * @return ChcIds 是否已赋值
                     * 
                     */
                    bool ChcIdsHasBeenSet() const;

                    /**
                     * 获取Deployment network information
                     * @return DeployVirtualPrivateCloud Deployment network information
                     * 
                     */
                    VirtualPrivateCloud GetDeployVirtualPrivateCloud() const;

                    /**
                     * 设置Deployment network information
                     * @param _deployVirtualPrivateCloud Deployment network information
                     * 
                     */
                    void SetDeployVirtualPrivateCloud(const VirtualPrivateCloud& _deployVirtualPrivateCloud);

                    /**
                     * 判断参数 DeployVirtualPrivateCloud 是否已赋值
                     * @return DeployVirtualPrivateCloud 是否已赋值
                     * 
                     */
                    bool DeployVirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取Deployment network security group list
                     * @return DeploySecurityGroupIds Deployment network security group list
                     * 
                     */
                    std::vector<std::string> GetDeploySecurityGroupIds() const;

                    /**
                     * 设置Deployment network security group list
                     * @param _deploySecurityGroupIds Deployment network security group list
                     * 
                     */
                    void SetDeploySecurityGroupIds(const std::vector<std::string>& _deploySecurityGroupIds);

                    /**
                     * 判断参数 DeploySecurityGroupIds 是否已赋值
                     * @return DeploySecurityGroupIds 是否已赋值
                     * 
                     */
                    bool DeploySecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取
                     * @return ChcDeployExtraConfig 
                     * 
                     */
                    ChcDeployExtraConfig GetChcDeployExtraConfig() const;

                    /**
                     * 设置
                     * @param _chcDeployExtraConfig 
                     * 
                     */
                    void SetChcDeployExtraConfig(const ChcDeployExtraConfig& _chcDeployExtraConfig);

                    /**
                     * 判断参数 ChcDeployExtraConfig 是否已赋值
                     * @return ChcDeployExtraConfig 是否已赋值
                     * 
                     */
                    bool ChcDeployExtraConfigHasBeenSet() const;

                private:

                    /**
                     * CHC instance ID
                     */
                    std::vector<std::string> m_chcIds;
                    bool m_chcIdsHasBeenSet;

                    /**
                     * Deployment network information
                     */
                    VirtualPrivateCloud m_deployVirtualPrivateCloud;
                    bool m_deployVirtualPrivateCloudHasBeenSet;

                    /**
                     * Deployment network security group list
                     */
                    std::vector<std::string> m_deploySecurityGroupIds;
                    bool m_deploySecurityGroupIdsHasBeenSet;

                    /**
                     * 
                     */
                    ChcDeployExtraConfig m_chcDeployExtraConfig;
                    bool m_chcDeployExtraConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CONFIGURECHCDEPLOYVPCREQUEST_H_
