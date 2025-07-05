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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATEEDGECVMINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATEEDGECVMINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateEdgeCVMInstances request structure.
                */
                class CreateEdgeCVMInstancesRequest : public AbstractModel
                {
                public:
                    CreateEdgeCVMInstancesRequest();
                    ~CreateEdgeCVMInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID. Edge clusters need to enable public network access before adding CVM nodes.
                     * @return ClusterID Cluster ID. Edge clusters need to enable public network access before adding CVM nodes.
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置Cluster ID. Edge clusters need to enable public network access before adding CVM nodes.
                     * @param _clusterID Cluster ID. Edge clusters need to enable public network access before adding CVM nodes.
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取Pass-through parameter for CVM creation in the format of a JSON string. To ensure the idempotency of requests for adding cluster nodes, you need to add the `ClientToken` field in this parameter. For more information, see the documentation for [RunInstances](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1) API.
                     * @return RunInstancePara Pass-through parameter for CVM creation in the format of a JSON string. To ensure the idempotency of requests for adding cluster nodes, you need to add the `ClientToken` field in this parameter. For more information, see the documentation for [RunInstances](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetRunInstancePara() const;

                    /**
                     * 设置Pass-through parameter for CVM creation in the format of a JSON string. To ensure the idempotency of requests for adding cluster nodes, you need to add the `ClientToken` field in this parameter. For more information, see the documentation for [RunInstances](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1) API.
                     * @param _runInstancePara Pass-through parameter for CVM creation in the format of a JSON string. To ensure the idempotency of requests for adding cluster nodes, you need to add the `ClientToken` field in this parameter. For more information, see the documentation for [RunInstances](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1) API.
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
                     * 获取Region of the CVM instances to create
                     * @return CvmRegion Region of the CVM instances to create
                     * 
                     */
                    std::string GetCvmRegion() const;

                    /**
                     * 设置Region of the CVM instances to create
                     * @param _cvmRegion Region of the CVM instances to create
                     * 
                     */
                    void SetCvmRegion(const std::string& _cvmRegion);

                    /**
                     * 判断参数 CvmRegion 是否已赋值
                     * @return CvmRegion 是否已赋值
                     * 
                     */
                    bool CvmRegionHasBeenSet() const;

                    /**
                     * 获取Quantity of CVM instances to create
                     * @return CvmCount Quantity of CVM instances to create
                     * 
                     */
                    int64_t GetCvmCount() const;

                    /**
                     * 设置Quantity of CVM instances to create
                     * @param _cvmCount Quantity of CVM instances to create
                     * 
                     */
                    void SetCvmCount(const int64_t& _cvmCount);

                    /**
                     * 判断参数 CvmCount 是否已赋值
                     * @return CvmCount 是否已赋值
                     * 
                     */
                    bool CvmCountHasBeenSet() const;

                    /**
                     * 获取Instance extension information
                     * @return External Instance extension information
                     * 
                     */
                    std::string GetExternal() const;

                    /**
                     * 设置Instance extension information
                     * @param _external Instance extension information
                     * 
                     */
                    void SetExternal(const std::string& _external);

                    /**
                     * 判断参数 External 是否已赋值
                     * @return External 是否已赋值
                     * 
                     */
                    bool ExternalHasBeenSet() const;

                    /**
                     * 获取Custom script
                     * @return UserScript Custom script
                     * 
                     */
                    std::string GetUserScript() const;

                    /**
                     * 设置Custom script
                     * @param _userScript Custom script
                     * 
                     */
                    void SetUserScript(const std::string& _userScript);

                    /**
                     * 判断参数 UserScript 是否已赋值
                     * @return UserScript 是否已赋值
                     * 
                     */
                    bool UserScriptHasBeenSet() const;

                    /**
                     * 获取Whether to enable ENI
                     * @return EnableEni Whether to enable ENI
                     * 
                     */
                    bool GetEnableEni() const;

                    /**
                     * 设置Whether to enable ENI
                     * @param _enableEni Whether to enable ENI
                     * 
                     */
                    void SetEnableEni(const bool& _enableEni);

                    /**
                     * 判断参数 EnableEni 是否已赋值
                     * @return EnableEni 是否已赋值
                     * 
                     */
                    bool EnableEniHasBeenSet() const;

                private:

                    /**
                     * Cluster ID. Edge clusters need to enable public network access before adding CVM nodes.
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * Pass-through parameter for CVM creation in the format of a JSON string. To ensure the idempotency of requests for adding cluster nodes, you need to add the `ClientToken` field in this parameter. For more information, see the documentation for [RunInstances](https://intl.cloud.tencent.com/document/product/213/15730?from_cn_redirect=1) API.
                     */
                    std::string m_runInstancePara;
                    bool m_runInstanceParaHasBeenSet;

                    /**
                     * Region of the CVM instances to create
                     */
                    std::string m_cvmRegion;
                    bool m_cvmRegionHasBeenSet;

                    /**
                     * Quantity of CVM instances to create
                     */
                    int64_t m_cvmCount;
                    bool m_cvmCountHasBeenSet;

                    /**
                     * Instance extension information
                     */
                    std::string m_external;
                    bool m_externalHasBeenSet;

                    /**
                     * Custom script
                     */
                    std::string m_userScript;
                    bool m_userScriptHasBeenSet;

                    /**
                     * Whether to enable ENI
                     */
                    bool m_enableEni;
                    bool m_enableEniHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATEEDGECVMINSTANCESREQUEST_H_
