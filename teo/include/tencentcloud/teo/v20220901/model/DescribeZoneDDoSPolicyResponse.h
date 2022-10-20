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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONEDDOSPOLICYRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONEDDOSPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ShieldArea.h>
#include <tencentcloud/teo/v20220901/model/DDoSHost.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeZoneDDoSPolicy response structure.
                */
                class DescribeZoneDDoSPolicyResponse : public AbstractModel
                {
                public:
                    DescribeZoneDDoSPolicyResponse();
                    ~DescribeZoneDDoSPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DDoS mitigation configuration.
                     * @return ShieldAreas DDoS mitigation configuration.
                     */
                    std::vector<ShieldArea> GetShieldAreas() const;

                    /**
                     * 判断参数 ShieldAreas 是否已赋值
                     * @return ShieldAreas 是否已赋值
                     */
                    bool ShieldAreasHasBeenSet() const;

                    /**
                     * 获取Information of the proxied subdomain names.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DDoSHosts Information of the proxied subdomain names.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DDoSHost> GetDDoSHosts() const;

                    /**
                     * 判断参数 DDoSHosts 是否已赋值
                     * @return DDoSHosts 是否已赋值
                     */
                    bool DDoSHostsHasBeenSet() const;

                private:

                    /**
                     * DDoS mitigation configuration.
                     */
                    std::vector<ShieldArea> m_shieldAreas;
                    bool m_shieldAreasHasBeenSet;

                    /**
                     * Information of the proxied subdomain names.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DDoSHost> m_dDoSHosts;
                    bool m_dDoSHostsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONEDDOSPOLICYRESPONSE_H_
