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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAYQUOTA_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAYQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * VPN gateway quota object
                */
                class VpnGatewayQuota : public AbstractModel
                {
                public:
                    VpnGatewayQuota();
                    ~VpnGatewayQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The bandwidth quota.
                     * @return Bandwidth The bandwidth quota.
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置The bandwidth quota.
                     * @param _bandwidth The bandwidth quota.
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取The bandwidth quota name in Chinese.
                     * @return Cname The bandwidth quota name in Chinese.
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置The bandwidth quota name in Chinese.
                     * @param _cname The bandwidth quota name in Chinese.
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取The bandwidth quota name in English.
                     * @return Name The bandwidth quota name in English.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The bandwidth quota name in English.
                     * @param _name The bandwidth quota name in English.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * The bandwidth quota.
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * The bandwidth quota name in Chinese.
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * The bandwidth quota name in English.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAYQUOTA_H_
