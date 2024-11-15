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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERKUBECONFIGRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERKUBECONFIGRESPONSE_H_

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
                * DescribeClusterKubeconfig response structure.
                */
                class DescribeClusterKubeconfigResponse : public AbstractModel
                {
                public:
                    DescribeClusterKubeconfigResponse();
                    ~DescribeClusterKubeconfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Sub-account kubeconfig file can be used to access the cluster kube-apiserver directly (if the "IsExtranet" parameter is false, it returns the kubeconfig for private network access, and the server will be a default domain name if the private network is not enabled; if the "IsExtranet" parameter is true, it returns the kubeconfig for public network access, and the server will be a default domain name if the public network is not enabled. The default domain name is not accessible by default and needs to be handled by the user).
                     * @return Kubeconfig Sub-account kubeconfig file can be used to access the cluster kube-apiserver directly (if the "IsExtranet" parameter is false, it returns the kubeconfig for private network access, and the server will be a default domain name if the private network is not enabled; if the "IsExtranet" parameter is true, it returns the kubeconfig for public network access, and the server will be a default domain name if the public network is not enabled. The default domain name is not accessible by default and needs to be handled by the user).
                     * 
                     */
                    std::string GetKubeconfig() const;

                    /**
                     * 判断参数 Kubeconfig 是否已赋值
                     * @return Kubeconfig 是否已赋值
                     * 
                     */
                    bool KubeconfigHasBeenSet() const;

                private:

                    /**
                     * Sub-account kubeconfig file can be used to access the cluster kube-apiserver directly (if the "IsExtranet" parameter is false, it returns the kubeconfig for private network access, and the server will be a default domain name if the private network is not enabled; if the "IsExtranet" parameter is true, it returns the kubeconfig for public network access, and the server will be a default domain name if the public network is not enabled. The default domain name is not accessible by default and needs to be handled by the user).
                     */
                    std::string m_kubeconfig;
                    bool m_kubeconfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERKUBECONFIGRESPONSE_H_
