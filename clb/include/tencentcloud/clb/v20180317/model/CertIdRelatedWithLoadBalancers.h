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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CERTIDRELATEDWITHLOADBALANCERS_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CERTIDRELATEDWITHLOADBALANCERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/LoadBalancer.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Certificate ID and list of CLB instances associated with it
                */
                class CertIdRelatedWithLoadBalancers : public AbstractModel
                {
                public:
                    CertIdRelatedWithLoadBalancers();
                    ~CertIdRelatedWithLoadBalancers() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Certificate ID
                     * @return CertId Certificate ID
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Certificate ID
                     * @param CertId Certificate ID
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取List of CLB instances associated with certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancers List of CLB instances associated with certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LoadBalancer> GetLoadBalancers() const;

                    /**
                     * 设置List of CLB instances associated with certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param LoadBalancers List of CLB instances associated with certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLoadBalancers(const std::vector<LoadBalancer>& _loadBalancers);

                    /**
                     * 判断参数 LoadBalancers 是否已赋值
                     * @return LoadBalancers 是否已赋值
                     */
                    bool LoadBalancersHasBeenSet() const;

                private:

                    /**
                     * Certificate ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * List of CLB instances associated with certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LoadBalancer> m_loadBalancers;
                    bool m_loadBalancersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CERTIDRELATEDWITHLOADBALANCERS_H_
