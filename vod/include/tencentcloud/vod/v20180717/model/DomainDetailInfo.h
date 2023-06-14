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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINDETAILINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AccelerateAreaInfo.h>
#include <tencentcloud/vod/v20180717/model/DomainHTTPSConfig.h>
#include <tencentcloud/vod/v20180717/model/UrlSignatureAuthPolicy.h>
#include <tencentcloud/vod/v20180717/model/RefererAuthPolicy.h>
#include <tencentcloud/vod/v20180717/model/DomainQUICConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Domain name information
                */
                class DomainDetailInfo : public AbstractModel
                {
                public:
                    DomainDetailInfo();
                    ~DomainDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Acceleration region information
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return AccelerateAreaInfos Acceleration region information
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<AccelerateAreaInfo> GetAccelerateAreaInfos() const;

                    /**
                     * 设置Acceleration region information
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _accelerateAreaInfos Acceleration region information
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetAccelerateAreaInfos(const std::vector<AccelerateAreaInfo>& _accelerateAreaInfos);

                    /**
                     * 判断参数 AccelerateAreaInfos 是否已赋值
                     * @return AccelerateAreaInfos 是否已赋值
                     * 
                     */
                    bool AccelerateAreaInfosHasBeenSet() const;

                    /**
                     * 获取Deployment status. Valid values:
<li>Online</li>
<li>Deploying</li>
<li>Locked: you cannot change the deployment status of locked domain names</li>
                     * @return DeployStatus Deployment status. Valid values:
<li>Online</li>
<li>Deploying</li>
<li>Locked: you cannot change the deployment status of locked domain names</li>
                     * 
                     */
                    std::string GetDeployStatus() const;

                    /**
                     * 设置Deployment status. Valid values:
<li>Online</li>
<li>Deploying</li>
<li>Locked: you cannot change the deployment status of locked domain names</li>
                     * @param _deployStatus Deployment status. Valid values:
<li>Online</li>
<li>Deploying</li>
<li>Locked: you cannot change the deployment status of locked domain names</li>
                     * 
                     */
                    void SetDeployStatus(const std::string& _deployStatus);

                    /**
                     * 判断参数 DeployStatus 是否已赋值
                     * @return DeployStatus 是否已赋值
                     * 
                     */
                    bool DeployStatusHasBeenSet() const;

                    /**
                     * 获取HTTPS configuration information
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return HTTPSConfig HTTPS configuration information
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    DomainHTTPSConfig GetHTTPSConfig() const;

                    /**
                     * 设置HTTPS configuration information
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _hTTPSConfig HTTPS configuration information
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetHTTPSConfig(const DomainHTTPSConfig& _hTTPSConfig);

                    /**
                     * 判断参数 HTTPSConfig 是否已赋值
                     * @return HTTPSConfig 是否已赋值
                     * 
                     */
                    bool HTTPSConfigHasBeenSet() const;

                    /**
                     * 获取[Key hotlink protection](https://intl.cloud.tencent.com/document/product/266/33986) configuration
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return UrlSignatureAuthPolicy [Key hotlink protection](https://intl.cloud.tencent.com/document/product/266/33986) configuration
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    UrlSignatureAuthPolicy GetUrlSignatureAuthPolicy() const;

                    /**
                     * 设置[Key hotlink protection](https://intl.cloud.tencent.com/document/product/266/33986) configuration
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _urlSignatureAuthPolicy [Key hotlink protection](https://intl.cloud.tencent.com/document/product/266/33986) configuration
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetUrlSignatureAuthPolicy(const UrlSignatureAuthPolicy& _urlSignatureAuthPolicy);

                    /**
                     * 判断参数 UrlSignatureAuthPolicy 是否已赋值
                     * @return UrlSignatureAuthPolicy 是否已赋值
                     * 
                     */
                    bool UrlSignatureAuthPolicyHasBeenSet() const;

                    /**
                     * 获取[Referer hotlink protection](https://intl.cloud.tencent.com/document/product/266/33985) configuration
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return RefererAuthPolicy [Referer hotlink protection](https://intl.cloud.tencent.com/document/product/266/33985) configuration
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    RefererAuthPolicy GetRefererAuthPolicy() const;

                    /**
                     * 设置[Referer hotlink protection](https://intl.cloud.tencent.com/document/product/266/33985) configuration
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _refererAuthPolicy [Referer hotlink protection](https://intl.cloud.tencent.com/document/product/266/33985) configuration
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetRefererAuthPolicy(const RefererAuthPolicy& _refererAuthPolicy);

                    /**
                     * 判断参数 RefererAuthPolicy 是否已赋值
                     * @return RefererAuthPolicy 是否已赋值
                     * 
                     */
                    bool RefererAuthPolicyHasBeenSet() const;

                    /**
                     * 获取The time when the domain name was added in the VOD system
<li>The time is in [ISO 8601 date format](https://intl.cloud.tencent.com/document/product/266/11732).</li>
                     * @return CreateTime The time when the domain name was added in the VOD system
<li>The time is in [ISO 8601 date format](https://intl.cloud.tencent.com/document/product/266/11732).</li>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The time when the domain name was added in the VOD system
<li>The time is in [ISO 8601 date format](https://intl.cloud.tencent.com/document/product/266/11732).</li>
                     * @param _createTime The time when the domain name was added in the VOD system
<li>The time is in [ISO 8601 date format](https://intl.cloud.tencent.com/document/product/266/11732).</li>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The QUIC configuration for the domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QUICConfig The QUIC configuration for the domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DomainQUICConfig GetQUICConfig() const;

                    /**
                     * 设置The QUIC configuration for the domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _qUICConfig The QUIC configuration for the domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQUICConfig(const DomainQUICConfig& _qUICConfig);

                    /**
                     * 判断参数 QUICConfig 是否已赋值
                     * @return QUICConfig 是否已赋值
                     * 
                     */
                    bool QUICConfigHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Acceleration region information
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<AccelerateAreaInfo> m_accelerateAreaInfos;
                    bool m_accelerateAreaInfosHasBeenSet;

                    /**
                     * Deployment status. Valid values:
<li>Online</li>
<li>Deploying</li>
<li>Locked: you cannot change the deployment status of locked domain names</li>
                     */
                    std::string m_deployStatus;
                    bool m_deployStatusHasBeenSet;

                    /**
                     * HTTPS configuration information
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    DomainHTTPSConfig m_hTTPSConfig;
                    bool m_hTTPSConfigHasBeenSet;

                    /**
                     * [Key hotlink protection](https://intl.cloud.tencent.com/document/product/266/33986) configuration
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    UrlSignatureAuthPolicy m_urlSignatureAuthPolicy;
                    bool m_urlSignatureAuthPolicyHasBeenSet;

                    /**
                     * [Referer hotlink protection](https://intl.cloud.tencent.com/document/product/266/33985) configuration
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    RefererAuthPolicy m_refererAuthPolicy;
                    bool m_refererAuthPolicyHasBeenSet;

                    /**
                     * The time when the domain name was added in the VOD system
<li>The time is in [ISO 8601 date format](https://intl.cloud.tencent.com/document/product/266/11732).</li>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The QUIC configuration for the domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DomainQUICConfig m_qUICConfig;
                    bool m_qUICConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINDETAILINFO_H_
