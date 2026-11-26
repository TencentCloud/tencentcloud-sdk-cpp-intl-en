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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_NSDETAIL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_NSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OwnershipVerification.h>
#include <tencentcloud/teo/v20220901/model/VanityNameServers.h>
#include <tencentcloud/teo/v20220901/model/VanityNameServersIps.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * NS access type site parameter details.
                */
                class NSDetail : public AbstractModel
                {
                public:
                    NSDetail();
                    ~NSDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether CNAME acceleration is enabled. Valid values:
<li> enabled: Enable;</li>
<li> disabled: Disable.</li>
                     * @return CnameSpeedUp Whether CNAME acceleration is enabled. Valid values:
<li> enabled: Enable;</li>
<li> disabled: Disable.</li>
                     * 
                     */
                    std::string GetCnameSpeedUp() const;

                    /**
                     * 设置Whether CNAME acceleration is enabled. Valid values:
<li> enabled: Enable;</li>
<li> disabled: Disable.</li>
                     * @param _cnameSpeedUp Whether CNAME acceleration is enabled. Valid values:
<li> enabled: Enable;</li>
<li> disabled: Disable.</li>
                     * 
                     */
                    void SetCnameSpeedUp(const std::string& _cnameSpeedUp);

                    /**
                     * 判断参数 CnameSpeedUp 是否已赋值
                     * @return CnameSpeedUp 是否已赋值
                     * 
                     */
                    bool CnameSpeedUpHasBeenSet() const;

                    /**
                     * 获取Existence of a site with the same name. Valid values:
<li> 0: No site with the same name exists;</li>
<li> 1: A site with the same name already exists.</li>
                     * @return IsFake Existence of a site with the same name. Valid values:
<li> 0: No site with the same name exists;</li>
<li> 1: A site with the same name already exists.</li>
                     * 
                     */
                    int64_t GetIsFake() const;

                    /**
                     * 设置Existence of a site with the same name. Valid values:
<li> 0: No site with the same name exists;</li>
<li> 1: A site with the same name already exists.</li>
                     * @param _isFake Existence of a site with the same name. Valid values:
<li> 0: No site with the same name exists;</li>
<li> 1: A site with the same name already exists.</li>
                     * 
                     */
                    void SetIsFake(const int64_t& _isFake);

                    /**
                     * 判断参数 IsFake 是否已赋值
                     * @return IsFake 是否已赋值
                     * 
                     */
                    bool IsFakeHasBeenSet() const;

                    /**
                     * 获取Ownership verification information. For sites with NS access type, switching the current NS server to the NS server designated by Tencent Cloud EdgeOne is deemed as passing ownership verification. For details, see [Site/Domain Ownership Verification](https://www.tencentcloud.com/document/product/1552/70789?from_cn_redirect=1).
                     * @return OwnershipVerification Ownership verification information. For sites with NS access type, switching the current NS server to the NS server designated by Tencent Cloud EdgeOne is deemed as passing ownership verification. For details, see [Site/Domain Ownership Verification](https://www.tencentcloud.com/document/product/1552/70789?from_cn_redirect=1).
                     * 
                     */
                    OwnershipVerification GetOwnershipVerification() const;

                    /**
                     * 设置Ownership verification information. For sites with NS access type, switching the current NS server to the NS server designated by Tencent Cloud EdgeOne is deemed as passing ownership verification. For details, see [Site/Domain Ownership Verification](https://www.tencentcloud.com/document/product/1552/70789?from_cn_redirect=1).
                     * @param _ownershipVerification Ownership verification information. For sites with NS access type, switching the current NS server to the NS server designated by Tencent Cloud EdgeOne is deemed as passing ownership verification. For details, see [Site/Domain Ownership Verification](https://www.tencentcloud.com/document/product/1552/70789?from_cn_redirect=1).
                     * 
                     */
                    void SetOwnershipVerification(const OwnershipVerification& _ownershipVerification);

                    /**
                     * 判断参数 OwnershipVerification 是否已赋值
                     * @return OwnershipVerification 是否已赋值
                     * 
                     */
                    bool OwnershipVerificationHasBeenSet() const;

                    /**
                     * 获取List of NS servers currently in use by the site detected by EdgeOne.
                     * @return OriginalNameServers List of NS servers currently in use by the site detected by EdgeOne.
                     * 
                     */
                    std::vector<std::string> GetOriginalNameServers() const;

                    /**
                     * 设置List of NS servers currently in use by the site detected by EdgeOne.
                     * @param _originalNameServers List of NS servers currently in use by the site detected by EdgeOne.
                     * 
                     */
                    void SetOriginalNameServers(const std::vector<std::string>& _originalNameServers);

                    /**
                     * 判断参数 OriginalNameServers 是否已赋值
                     * @return OriginalNameServers 是否已赋值
                     * 
                     */
                    bool OriginalNameServersHasBeenSet() const;

                    /**
                     * 获取List of NS servers assigned by Tencent Cloud EdgeOne. Point the NS server of the current site to this address for the site to take effect.
                     * @return NameServers List of NS servers assigned by Tencent Cloud EdgeOne. Point the NS server of the current site to this address for the site to take effect.
                     * 
                     */
                    std::vector<std::string> GetNameServers() const;

                    /**
                     * 设置List of NS servers assigned by Tencent Cloud EdgeOne. Point the NS server of the current site to this address for the site to take effect.
                     * @param _nameServers List of NS servers assigned by Tencent Cloud EdgeOne. Point the NS server of the current site to this address for the site to take effect.
                     * 
                     */
                    void SetNameServers(const std::vector<std::string>& _nameServers);

                    /**
                     * 判断参数 NameServers 是否已赋值
                     * @return NameServers 是否已赋值
                     * 
                     */
                    bool NameServersHasBeenSet() const;

                    /**
                     * 获取User-customized NS server domain info. If the custom NS service is enabled, the NS need to be pointed to this address at the domain name registered vendor.
                     * @return VanityNameServers User-customized NS server domain info. If the custom NS service is enabled, the NS need to be pointed to this address at the domain name registered vendor.
                     * 
                     */
                    VanityNameServers GetVanityNameServers() const;

                    /**
                     * 设置User-customized NS server domain info. If the custom NS service is enabled, the NS need to be pointed to this address at the domain name registered vendor.
                     * @param _vanityNameServers User-customized NS server domain info. If the custom NS service is enabled, the NS need to be pointed to this address at the domain name registered vendor.
                     * 
                     */
                    void SetVanityNameServers(const VanityNameServers& _vanityNameServers);

                    /**
                     * 判断参数 VanityNameServers 是否已赋值
                     * @return VanityNameServers 是否已赋值
                     * 
                     */
                    bool VanityNameServersHasBeenSet() const;

                    /**
                     * 获取IP address information corresponding to the user-customized NS server.
                     * @return VanityNameServersIps IP address information corresponding to the user-customized NS server.
                     * 
                     */
                    std::vector<VanityNameServersIps> GetVanityNameServersIps() const;

                    /**
                     * 设置IP address information corresponding to the user-customized NS server.
                     * @param _vanityNameServersIps IP address information corresponding to the user-customized NS server.
                     * 
                     */
                    void SetVanityNameServersIps(const std::vector<VanityNameServersIps>& _vanityNameServersIps);

                    /**
                     * 判断参数 VanityNameServersIps 是否已赋值
                     * @return VanityNameServersIps 是否已赋值
                     * 
                     */
                    bool VanityNameServersIpsHasBeenSet() const;

                private:

                    /**
                     * Whether CNAME acceleration is enabled. Valid values:
<li> enabled: Enable;</li>
<li> disabled: Disable.</li>
                     */
                    std::string m_cnameSpeedUp;
                    bool m_cnameSpeedUpHasBeenSet;

                    /**
                     * Existence of a site with the same name. Valid values:
<li> 0: No site with the same name exists;</li>
<li> 1: A site with the same name already exists.</li>
                     */
                    int64_t m_isFake;
                    bool m_isFakeHasBeenSet;

                    /**
                     * Ownership verification information. For sites with NS access type, switching the current NS server to the NS server designated by Tencent Cloud EdgeOne is deemed as passing ownership verification. For details, see [Site/Domain Ownership Verification](https://www.tencentcloud.com/document/product/1552/70789?from_cn_redirect=1).
                     */
                    OwnershipVerification m_ownershipVerification;
                    bool m_ownershipVerificationHasBeenSet;

                    /**
                     * List of NS servers currently in use by the site detected by EdgeOne.
                     */
                    std::vector<std::string> m_originalNameServers;
                    bool m_originalNameServersHasBeenSet;

                    /**
                     * List of NS servers assigned by Tencent Cloud EdgeOne. Point the NS server of the current site to this address for the site to take effect.
                     */
                    std::vector<std::string> m_nameServers;
                    bool m_nameServersHasBeenSet;

                    /**
                     * User-customized NS server domain info. If the custom NS service is enabled, the NS need to be pointed to this address at the domain name registered vendor.
                     */
                    VanityNameServers m_vanityNameServers;
                    bool m_vanityNameServersHasBeenSet;

                    /**
                     * IP address information corresponding to the user-customized NS server.
                     */
                    std::vector<VanityNameServersIps> m_vanityNameServersIps;
                    bool m_vanityNameServersIpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_NSDETAIL_H_
