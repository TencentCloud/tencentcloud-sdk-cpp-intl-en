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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACLENTRYSET_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACLENTRYSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/NetworkAclEntry.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Network ACL rule set
                */
                class NetworkAclEntrySet : public AbstractModel
                {
                public:
                    NetworkAclEntrySet();
                    ~NetworkAclEntrySet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Inbound rules.
                     * @return Ingress Inbound rules.
                     */
                    std::vector<NetworkAclEntry> GetIngress() const;

                    /**
                     * 设置Inbound rules.
                     * @param Ingress Inbound rules.
                     */
                    void SetIngress(const std::vector<NetworkAclEntry>& _ingress);

                    /**
                     * 判断参数 Ingress 是否已赋值
                     * @return Ingress 是否已赋值
                     */
                    bool IngressHasBeenSet() const;

                    /**
                     * 获取Outbound rules.
                     * @return Egress Outbound rules.
                     */
                    std::vector<NetworkAclEntry> GetEgress() const;

                    /**
                     * 设置Outbound rules.
                     * @param Egress Outbound rules.
                     */
                    void SetEgress(const std::vector<NetworkAclEntry>& _egress);

                    /**
                     * 判断参数 Egress 是否已赋值
                     * @return Egress 是否已赋值
                     */
                    bool EgressHasBeenSet() const;

                private:

                    /**
                     * Inbound rules.
                     */
                    std::vector<NetworkAclEntry> m_ingress;
                    bool m_ingressHasBeenSet;

                    /**
                     * Outbound rules.
                     */
                    std::vector<NetworkAclEntry> m_egress;
                    bool m_egressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKACLENTRYSET_H_
