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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYPUBLICNETWORKSECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYPUBLICNETWORKSECURITYPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/SecurityPolicy.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ModifyPublicNetworkSecurityPolicy request structure.
                */
                class ModifyPublicNetworkSecurityPolicyRequest : public AbstractModel
                {
                public:
                    ModifyPublicNetworkSecurityPolicyRequest();
                    ~ModifyPublicNetworkSecurityPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return InstanceId Cluster ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _instanceId Cluster ID.
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
                     * 获取Policy List
                     * @return PolicyList Policy List
                     * 
                     */
                    std::vector<SecurityPolicy> GetPolicyList() const;

                    /**
                     * 设置Policy List
                     * @param _policyList Policy List
                     * 
                     */
                    void SetPolicyList(const std::vector<SecurityPolicy>& _policyList);

                    /**
                     * 判断参数 PolicyList 是否已赋值
                     * @return PolicyList 是否已赋值
                     * 
                     */
                    bool PolicyListHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Policy List
                     */
                    std::vector<SecurityPolicy> m_policyList;
                    bool m_policyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYPUBLICNETWORKSECURITYPOLICYREQUEST_H_
