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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONEDDOSPOLICYRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONEDDOSPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/ShieldArea.h>
#include <tencentcloud/teo/v20220106/model/DDoSApplication.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
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
                     * 获取User APPID
                     * @return AppId User APPID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取DDoS mitigation configuration
                     * @return ShieldAreas DDoS mitigation configuration
                     * 
                     */
                    std::vector<ShieldArea> GetShieldAreas() const;

                    /**
                     * 判断参数 ShieldAreas 是否已赋值
                     * @return ShieldAreas 是否已赋值
                     * 
                     */
                    bool ShieldAreasHasBeenSet() const;

                    /**
                     * 获取Includes the details of all subdomain names
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Domains Includes the details of all subdomain names
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<DDoSApplication> GetDomains() const;

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                private:

                    /**
                     * User APPID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * DDoS mitigation configuration
                     */
                    std::vector<ShieldArea> m_shieldAreas;
                    bool m_shieldAreasHasBeenSet;

                    /**
                     * Includes the details of all subdomain names
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<DDoSApplication> m_domains;
                    bool m_domainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONEDDOSPOLICYRESPONSE_H_
