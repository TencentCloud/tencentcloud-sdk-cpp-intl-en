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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_OPENDBEXTRANETACCESSREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_OPENDBEXTRANETACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * OpenDBExtranetAccess request structure.
                */
                class OpenDBExtranetAccessRequest : public AbstractModel
                {
                public:
                    OpenDBExtranetAccessRequest();
                    ~OpenDBExtranetAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of an instance for which to enable public network access. The ID is in the format of dcdbt-ow728lmc.
                     * @return InstanceId ID of an instance for which to enable public network access. The ID is in the format of dcdbt-ow728lmc.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of an instance for which to enable public network access. The ID is in the format of dcdbt-ow728lmc.
                     * @param InstanceId ID of an instance for which to enable public network access. The ID is in the format of dcdbt-ow728lmc.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Whether IPv6 is used. Default value: 0
                     * @return Ipv6Flag Whether IPv6 is used. Default value: 0
                     */
                    int64_t GetIpv6Flag() const;

                    /**
                     * 设置Whether IPv6 is used. Default value: 0
                     * @param Ipv6Flag Whether IPv6 is used. Default value: 0
                     */
                    void SetIpv6Flag(const int64_t& _ipv6Flag);

                    /**
                     * 判断参数 Ipv6Flag 是否已赋值
                     * @return Ipv6Flag 是否已赋值
                     */
                    bool Ipv6FlagHasBeenSet() const;

                private:

                    /**
                     * ID of an instance for which to enable public network access. The ID is in the format of dcdbt-ow728lmc.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Whether IPv6 is used. Default value: 0
                     */
                    int64_t m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_OPENDBEXTRANETACCESSREQUEST_H_
