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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SHAREDCNAMEINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SHAREDCNAMEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IPSSLConfig.h>
#include <tencentcloud/teo/v20220901/model/ReferenceHolder.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Shared CNAME details
                */
                class SharedCNAMEInfo : public AbstractModel
                {
                public:
                    SharedCNAMEInfo();
                    ~SharedCNAMEInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Shared CNAME type: value range as follows:</p><li>custom: user-created custom shared CNAME</li><li>ip-ssl: IP SSL shared CNAME</li><li>zero-rating: zero-rating shared CNAME</li><li>preset: pre-configured resource shared CNAME</li>
                     * @return Type <p>Shared CNAME type: value range as follows:</p><li>custom: user-created custom shared CNAME</li><li>ip-ssl: IP SSL shared CNAME</li><li>zero-rating: zero-rating shared CNAME</li><li>preset: pre-configured resource shared CNAME</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Shared CNAME type: value range as follows:</p><li>custom: user-created custom shared CNAME</li><li>ip-ssl: IP SSL shared CNAME</li><li>zero-rating: zero-rating shared CNAME</li><li>preset: pre-configured resource shared CNAME</li>
                     * @param _type <p>Shared CNAME type: value range as follows:</p><li>custom: user-created custom shared CNAME</li><li>ip-ssl: IP SSL shared CNAME</li><li>zero-rating: zero-rating shared CNAME</li><li>preset: pre-configured resource shared CNAME</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Shared CNAME name.</p>
                     * @return SharedCNAME <p>Shared CNAME name.</p>
                     * 
                     */
                    std::string GetSharedCNAME() const;

                    /**
                     * 设置<p>Shared CNAME name.</p>
                     * @param _sharedCNAME <p>Shared CNAME name.</p>
                     * 
                     */
                    void SetSharedCNAME(const std::string& _sharedCNAME);

                    /**
                     * 判断参数 SharedCNAME 是否已赋值
                     * @return SharedCNAME 是否已赋值
                     * 
                     */
                    bool SharedCNAMEHasBeenSet() const;

                    /**
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>When type is ip-ssl, show the IP SSL configuration message associated with the shared CNAME.</p>
                     * @return IPSSLConfig <p>When type is ip-ssl, show the IP SSL configuration message associated with the shared CNAME.</p>
                     * 
                     */
                    IPSSLConfig GetIPSSLConfig() const;

                    /**
                     * 设置<p>When type is ip-ssl, show the IP SSL configuration message associated with the shared CNAME.</p>
                     * @param _iPSSLConfig <p>When type is ip-ssl, show the IP SSL configuration message associated with the shared CNAME.</p>
                     * 
                     */
                    void SetIPSSLConfig(const IPSSLConfig& _iPSSLConfig);

                    /**
                     * 判断参数 IPSSLConfig 是否已赋值
                     * @return IPSSLConfig 是否已赋值
                     * 
                     */
                    bool IPSSLConfigHasBeenSet() const;

                    /**
                     * 获取<p>Number of acceleration domain names bound to the shared CNAME.</p>
                     * @return BindDomainCount <p>Number of acceleration domain names bound to the shared CNAME.</p>
                     * 
                     */
                    int64_t GetBindDomainCount() const;

                    /**
                     * 设置<p>Number of acceleration domain names bound to the shared CNAME.</p>
                     * @param _bindDomainCount <p>Number of acceleration domain names bound to the shared CNAME.</p>
                     * 
                     */
                    void SetBindDomainCount(const int64_t& _bindDomainCount);

                    /**
                     * 判断参数 BindDomainCount 是否已赋值
                     * @return BindDomainCount 是否已赋值
                     * 
                     */
                    bool BindDomainCountHasBeenSet() const;

                    /**
                     * 获取<p>List of acceleration domain names added to the shared CNAME. When the number of added domains exceeds 100, only return the first 100 acceleration domain names.</p>
                     * @return AccelerationDomains <p>List of acceleration domain names added to the shared CNAME. When the number of added domains exceeds 100, only return the first 100 acceleration domain names.</p>
                     * 
                     */
                    std::vector<ReferenceHolder> GetAccelerationDomains() const;

                    /**
                     * 设置<p>List of acceleration domain names added to the shared CNAME. When the number of added domains exceeds 100, only return the first 100 acceleration domain names.</p>
                     * @param _accelerationDomains <p>List of acceleration domain names added to the shared CNAME. When the number of added domains exceeds 100, only return the first 100 acceleration domain names.</p>
                     * 
                     */
                    void SetAccelerationDomains(const std::vector<ReferenceHolder>& _accelerationDomains);

                    /**
                     * 判断参数 AccelerationDomains 是否已赋值
                     * @return AccelerationDomains 是否已赋值
                     * 
                     */
                    bool AccelerationDomainsHasBeenSet() const;

                private:

                    /**
                     * <p>Shared CNAME type: value range as follows:</p><li>custom: user-created custom shared CNAME</li><li>ip-ssl: IP SSL shared CNAME</li><li>zero-rating: zero-rating shared CNAME</li><li>preset: pre-configured resource shared CNAME</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Shared CNAME name.</p>
                     */
                    std::string m_sharedCNAME;
                    bool m_sharedCNAMEHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>When type is ip-ssl, show the IP SSL configuration message associated with the shared CNAME.</p>
                     */
                    IPSSLConfig m_iPSSLConfig;
                    bool m_iPSSLConfigHasBeenSet;

                    /**
                     * <p>Number of acceleration domain names bound to the shared CNAME.</p>
                     */
                    int64_t m_bindDomainCount;
                    bool m_bindDomainCountHasBeenSet;

                    /**
                     * <p>List of acceleration domain names added to the shared CNAME. When the number of added domains exceeds 100, only return the first 100 acceleration domain names.</p>
                     */
                    std::vector<ReferenceHolder> m_accelerationDomains;
                    bool m_accelerationDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SHAREDCNAMEINFO_H_
