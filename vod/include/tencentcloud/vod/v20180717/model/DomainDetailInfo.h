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
#include <tencentcloud/vod/v20180717/model/IPFilterPolicy.h>


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
                     * 获取<p>Domain name.</p>
                     * @return Domain <p>Domain name.</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>Domain name.</p>
                     * @param _domain <p>Domain name.</p>
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
                     * 获取<p>Acceleration region information.</p>
                     * @return AccelerateAreaInfos <p>Acceleration region information.</p>
                     * 
                     */
                    std::vector<AccelerateAreaInfo> GetAccelerateAreaInfos() const;

                    /**
                     * 设置<p>Acceleration region information.</p>
                     * @param _accelerateAreaInfos <p>Acceleration region information.</p>
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
                     * 获取<p>Deployment state. Valid values:</p><li>Online: Goes live.</li><li>Deploying: Deployment in progress.</li><li>Locked: Locked. When this state occurs, unable to perform deployment change on that domain name.</li>
                     * @return DeployStatus <p>Deployment state. Valid values:</p><li>Online: Goes live.</li><li>Deploying: Deployment in progress.</li><li>Locked: Locked. When this state occurs, unable to perform deployment change on that domain name.</li>
                     * 
                     */
                    std::string GetDeployStatus() const;

                    /**
                     * 设置<p>Deployment state. Valid values:</p><li>Online: Goes live.</li><li>Deploying: Deployment in progress.</li><li>Locked: Locked. When this state occurs, unable to perform deployment change on that domain name.</li>
                     * @param _deployStatus <p>Deployment state. Valid values:</p><li>Online: Goes live.</li><li>Deploying: Deployment in progress.</li><li>Locked: Locked. When this state occurs, unable to perform deployment change on that domain name.</li>
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
                     * 获取<p>HTTPS configuration message.</p>
                     * @return HTTPSConfig <p>HTTPS configuration message.</p>
                     * 
                     */
                    DomainHTTPSConfig GetHTTPSConfig() const;

                    /**
                     * 设置<p>HTTPS configuration message.</p>
                     * @param _hTTPSConfig <p>HTTPS configuration message.</p>
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
                     * 获取<p><a href="https://www.tencentcloud.com/document/product/266/14047?from_cn_redirect=1">Key hotlink protection</a> configuration message.</p>
                     * @return UrlSignatureAuthPolicy <p><a href="https://www.tencentcloud.com/document/product/266/14047?from_cn_redirect=1">Key hotlink protection</a> configuration message.</p>
                     * 
                     */
                    UrlSignatureAuthPolicy GetUrlSignatureAuthPolicy() const;

                    /**
                     * 设置<p><a href="https://www.tencentcloud.com/document/product/266/14047?from_cn_redirect=1">Key hotlink protection</a> configuration message.</p>
                     * @param _urlSignatureAuthPolicy <p><a href="https://www.tencentcloud.com/document/product/266/14047?from_cn_redirect=1">Key hotlink protection</a> configuration message.</p>
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
                     * 获取<p><a href="https://www.tencentcloud.com/document/product/266/14046?from_cn_redirect=1">Referer hotlink protection</a> configuration message.</p>
                     * @return RefererAuthPolicy <p><a href="https://www.tencentcloud.com/document/product/266/14046?from_cn_redirect=1">Referer hotlink protection</a> configuration message.</p>
                     * 
                     */
                    RefererAuthPolicy GetRefererAuthPolicy() const;

                    /**
                     * 设置<p><a href="https://www.tencentcloud.com/document/product/266/14046?from_cn_redirect=1">Referer hotlink protection</a> configuration message.</p>
                     * @param _refererAuthPolicy <p><a href="https://www.tencentcloud.com/document/product/266/14046?from_cn_redirect=1">Referer hotlink protection</a> configuration message.</p>
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
                     * 获取<p>The time when the domain name is added to the Tencent Cloud VOD system.</p><li>Format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</li>
                     * @return CreateTime <p>The time when the domain name is added to the Tencent Cloud VOD system.</p><li>Format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</li>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>The time when the domain name is added to the Tencent Cloud VOD system.</p><li>Format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</li>
                     * @param _createTime <p>The time when the domain name is added to the Tencent Cloud VOD system.</p><li>Format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</li>
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
                     * 获取<p>Domain name QUIC configuration message.</p>
                     * @return QUICConfig <p>Domain name QUIC configuration message.</p>
                     * 
                     */
                    DomainQUICConfig GetQUICConfig() const;

                    /**
                     * 设置<p>Domain name QUIC configuration message.</p>
                     * @param _qUICConfig <p>Domain name QUIC configuration message.</p>
                     * 
                     */
                    void SetQUICConfig(const DomainQUICConfig& _qUICConfig);

                    /**
                     * 判断参数 QUICConfig 是否已赋值
                     * @return QUICConfig 是否已赋值
                     * 
                     */
                    bool QUICConfigHasBeenSet() const;

                    /**
                     * 获取<p>IP access restriction configuration message.</p>
                     * @return IPFilterPolicy <p>IP access restriction configuration message.</p>
                     * 
                     */
                    IPFilterPolicy GetIPFilterPolicy() const;

                    /**
                     * 设置<p>IP access restriction configuration message.</p>
                     * @param _iPFilterPolicy <p>IP access restriction configuration message.</p>
                     * 
                     */
                    void SetIPFilterPolicy(const IPFilterPolicy& _iPFilterPolicy);

                    /**
                     * 判断参数 IPFilterPolicy 是否已赋值
                     * @return IPFilterPolicy 是否已赋值
                     * 
                     */
                    bool IPFilterPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Domain type. Valid values: <li>VOD: Domain name distributed by using the VOD product;</li> <li>EdgeOne: Domain name distributed by using the EdgeOne product.</li></p>
                     * @return Type <p>Domain type. Valid values: <li>VOD: Domain name distributed by using the VOD product;</li> <li>EdgeOne: Domain name distributed by using the EdgeOne product.</li></p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Domain type. Valid values: <li>VOD: Domain name distributed by using the VOD product;</li> <li>EdgeOne: Domain name distributed by using the EdgeOne product.</li></p>
                     * @param _type <p>Domain type. Valid values: <li>VOD: Domain name distributed by using the VOD product;</li> <li>EdgeOne: Domain name distributed by using the EdgeOne product.</li></p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>Domain name.</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>Acceleration region information.</p>
                     */
                    std::vector<AccelerateAreaInfo> m_accelerateAreaInfos;
                    bool m_accelerateAreaInfosHasBeenSet;

                    /**
                     * <p>Deployment state. Valid values:</p><li>Online: Goes live.</li><li>Deploying: Deployment in progress.</li><li>Locked: Locked. When this state occurs, unable to perform deployment change on that domain name.</li>
                     */
                    std::string m_deployStatus;
                    bool m_deployStatusHasBeenSet;

                    /**
                     * <p>HTTPS configuration message.</p>
                     */
                    DomainHTTPSConfig m_hTTPSConfig;
                    bool m_hTTPSConfigHasBeenSet;

                    /**
                     * <p><a href="https://www.tencentcloud.com/document/product/266/14047?from_cn_redirect=1">Key hotlink protection</a> configuration message.</p>
                     */
                    UrlSignatureAuthPolicy m_urlSignatureAuthPolicy;
                    bool m_urlSignatureAuthPolicyHasBeenSet;

                    /**
                     * <p><a href="https://www.tencentcloud.com/document/product/266/14046?from_cn_redirect=1">Referer hotlink protection</a> configuration message.</p>
                     */
                    RefererAuthPolicy m_refererAuthPolicy;
                    bool m_refererAuthPolicyHasBeenSet;

                    /**
                     * <p>The time when the domain name is added to the Tencent Cloud VOD system.</p><li>Format according to ISO 8601 standard. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</li>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Domain name QUIC configuration message.</p>
                     */
                    DomainQUICConfig m_qUICConfig;
                    bool m_qUICConfigHasBeenSet;

                    /**
                     * <p>IP access restriction configuration message.</p>
                     */
                    IPFilterPolicy m_iPFilterPolicy;
                    bool m_iPFilterPolicyHasBeenSet;

                    /**
                     * <p>Domain type. Valid values: <li>VOD: Domain name distributed by using the VOD product;</li> <li>EdgeOne: Domain name distributed by using the EdgeOne product.</li></p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DOMAINDETAILINFO_H_
