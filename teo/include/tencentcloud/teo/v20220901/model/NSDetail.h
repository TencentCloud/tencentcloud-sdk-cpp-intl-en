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
                * NS access type site parameter description.
                */
                class NSDetail : public AbstractModel
                {
                public:
                    NSDetail();
                    ~NSDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies whether CNAME acceleration is enabled. valid values:.
<Li>Enabled: specifies whether the feature is enabled.</li>.
<li>disabled: specifies that the feature is turned off.</li>.
                     * @return CnameSpeedUp Specifies whether CNAME acceleration is enabled. valid values:.
<Li>Enabled: specifies whether the feature is enabled.</li>.
<li>disabled: specifies that the feature is turned off.</li>.
                     * 
                     */
                    std::string GetCnameSpeedUp() const;

                    /**
                     * 设置Specifies whether CNAME acceleration is enabled. valid values:.
<Li>Enabled: specifies whether the feature is enabled.</li>.
<li>disabled: specifies that the feature is turned off.</li>.
                     * @param _cnameSpeedUp Specifies whether CNAME acceleration is enabled. valid values:.
<Li>Enabled: specifies whether the feature is enabled.</li>.
<li>disabled: specifies that the feature is turned off.</li>.
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
                     * 获取Existence of a site with the same name. valid values:.
<Li>0: no site with the same name exists.</li>.
<Li>Specifies the name already exists.</li>.
                     * @return IsFake Existence of a site with the same name. valid values:.
<Li>0: no site with the same name exists.</li>.
<Li>Specifies the name already exists.</li>.
                     * 
                     */
                    int64_t GetIsFake() const;

                    /**
                     * 设置Existence of a site with the same name. valid values:.
<Li>0: no site with the same name exists.</li>.
<Li>Specifies the name already exists.</li>.
                     * @param _isFake Existence of a site with the same name. valid values:.
<Li>0: no site with the same name exists.</li>.
<Li>Specifies the name already exists.</li>.
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
                     * 获取Ownership verification information. for sites with NS access type, switching the current NS server to the designated NS server of tencent cloud EdgeOne is deemed as passing the ownership verification. for details, refer to [site/domain ownership verification](https://www.tencentcloud.comom/document/product/1552/70789?from_cn_redirect=1).
                     * @return OwnershipVerification Ownership verification information. for sites with NS access type, switching the current NS server to the designated NS server of tencent cloud EdgeOne is deemed as passing the ownership verification. for details, refer to [site/domain ownership verification](https://www.tencentcloud.comom/document/product/1552/70789?from_cn_redirect=1).
                     * 
                     */
                    OwnershipVerification GetOwnershipVerification() const;

                    /**
                     * 设置Ownership verification information. for sites with NS access type, switching the current NS server to the designated NS server of tencent cloud EdgeOne is deemed as passing the ownership verification. for details, refer to [site/domain ownership verification](https://www.tencentcloud.comom/document/product/1552/70789?from_cn_redirect=1).
                     * @param _ownershipVerification Ownership verification information. for sites with NS access type, switching the current NS server to the designated NS server of tencent cloud EdgeOne is deemed as passing the ownership verification. for details, refer to [site/domain ownership verification](https://www.tencentcloud.comom/document/product/1552/70789?from_cn_redirect=1).
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
                     * 获取Lists the NS servers currently in use by the selected site detected by EdgeOne.
                     * @return OriginalNameServers Lists the NS servers currently in use by the selected site detected by EdgeOne.
                     * 
                     */
                    std::vector<std::string> GetOriginalNameServers() const;

                    /**
                     * 设置Lists the NS servers currently in use by the selected site detected by EdgeOne.
                     * @param _originalNameServers Lists the NS servers currently in use by the selected site detected by EdgeOne.
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
                     * 获取Lists the NS servers allocated by tencent cloud EdgeOne. requires pointing the current site's NS servers to this address for the changes to take effect.
                     * @return NameServers Lists the NS servers allocated by tencent cloud EdgeOne. requires pointing the current site's NS servers to this address for the changes to take effect.
                     * 
                     */
                    std::vector<std::string> GetNameServers() const;

                    /**
                     * 设置Lists the NS servers allocated by tencent cloud EdgeOne. requires pointing the current site's NS servers to this address for the changes to take effect.
                     * @param _nameServers Lists the NS servers allocated by tencent cloud EdgeOne. requires pointing the current site's NS servers to this address for the changes to take effect.
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
                     * 获取Specifies the user-customized NS server domain name information. if enabled, the NS needs to be pointed to this address in the registered vendor of the domains.
                     * @return VanityNameServers Specifies the user-customized NS server domain name information. if enabled, the NS needs to be pointed to this address in the registered vendor of the domains.
                     * 
                     */
                    VanityNameServers GetVanityNameServers() const;

                    /**
                     * 设置Specifies the user-customized NS server domain name information. if enabled, the NS needs to be pointed to this address in the registered vendor of the domains.
                     * @param _vanityNameServers Specifies the user-customized NS server domain name information. if enabled, the NS needs to be pointed to this address in the registered vendor of the domains.
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
                     * 获取Describes the IP address information of the user-customized NS server.
                     * @return VanityNameServersIps Describes the IP address information of the user-customized NS server.
                     * 
                     */
                    std::vector<VanityNameServersIps> GetVanityNameServersIps() const;

                    /**
                     * 设置Describes the IP address information of the user-customized NS server.
                     * @param _vanityNameServersIps Describes the IP address information of the user-customized NS server.
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
                     * Specifies whether CNAME acceleration is enabled. valid values:.
<Li>Enabled: specifies whether the feature is enabled.</li>.
<li>disabled: specifies that the feature is turned off.</li>.
                     */
                    std::string m_cnameSpeedUp;
                    bool m_cnameSpeedUpHasBeenSet;

                    /**
                     * Existence of a site with the same name. valid values:.
<Li>0: no site with the same name exists.</li>.
<Li>Specifies the name already exists.</li>.
                     */
                    int64_t m_isFake;
                    bool m_isFakeHasBeenSet;

                    /**
                     * Ownership verification information. for sites with NS access type, switching the current NS server to the designated NS server of tencent cloud EdgeOne is deemed as passing the ownership verification. for details, refer to [site/domain ownership verification](https://www.tencentcloud.comom/document/product/1552/70789?from_cn_redirect=1).
                     */
                    OwnershipVerification m_ownershipVerification;
                    bool m_ownershipVerificationHasBeenSet;

                    /**
                     * Lists the NS servers currently in use by the selected site detected by EdgeOne.
                     */
                    std::vector<std::string> m_originalNameServers;
                    bool m_originalNameServersHasBeenSet;

                    /**
                     * Lists the NS servers allocated by tencent cloud EdgeOne. requires pointing the current site's NS servers to this address for the changes to take effect.
                     */
                    std::vector<std::string> m_nameServers;
                    bool m_nameServersHasBeenSet;

                    /**
                     * Specifies the user-customized NS server domain name information. if enabled, the NS needs to be pointed to this address in the registered vendor of the domains.
                     */
                    VanityNameServers m_vanityNameServers;
                    bool m_vanityNameServersHasBeenSet;

                    /**
                     * Describes the IP address information of the user-customized NS server.
                     */
                    std::vector<VanityNameServersIps> m_vanityNameServersIps;
                    bool m_vanityNameServersIpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_NSDETAIL_H_
