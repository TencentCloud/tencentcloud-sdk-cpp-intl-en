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
                * Shared CNAME detail
                */
                class SharedCNAMEInfo : public AbstractModel
                {
                public:
                    SharedCNAMEInfo();
                    ~SharedCNAMEInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Shared CNAME type: Value ranges from...to...
<li>custom: User-created custom shared CNAME</li>
<li>ip-ssl: Shared CNAME of IP SSL type</li>
                     * @return Type Shared CNAME type: Value ranges from...to...
<li>custom: User-created custom shared CNAME</li>
<li>ip-ssl: Shared CNAME of IP SSL type</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Shared CNAME type: Value ranges from...to...
<li>custom: User-created custom shared CNAME</li>
<li>ip-ssl: Shared CNAME of IP SSL type</li>
                     * @param _type Shared CNAME type: Value ranges from...to...
<li>custom: User-created custom shared CNAME</li>
<li>ip-ssl: Shared CNAME of IP SSL type</li>
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
                     * 获取Shared CNAME name.
                     * @return SharedCNAME Shared CNAME name.
                     * 
                     */
                    std::string GetSharedCNAME() const;

                    /**
                     * 设置Shared CNAME name.
                     * @param _sharedCNAME Shared CNAME name.
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
                     * 获取Description.
                     * @return Description Description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description.
                     * @param _description Description.
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
                     * 获取When type is ip-ssl, show the associated IP SSL configuration message of the shared CNAME.
                     * @return IPSSLConfig When type is ip-ssl, show the associated IP SSL configuration message of the shared CNAME.
                     * 
                     */
                    IPSSLConfig GetIPSSLConfig() const;

                    /**
                     * 设置When type is ip-ssl, show the associated IP SSL configuration message of the shared CNAME.
                     * @param _iPSSLConfig When type is ip-ssl, show the associated IP SSL configuration message of the shared CNAME.
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
                     * 获取Number of acceleration domain names bound to the shared CNAME.
                     * @return BindDomainCount Number of acceleration domain names bound to the shared CNAME.
                     * 
                     */
                    int64_t GetBindDomainCount() const;

                    /**
                     * 设置Number of acceleration domain names bound to the shared CNAME.
                     * @param _bindDomainCount Number of acceleration domain names bound to the shared CNAME.
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
                     * 获取List of acceleration domain names added to the shared CNAME. When the number of domains exceeds 100, only return the first 100 acceleration domain names.
                     * @return AccelerationDomains List of acceleration domain names added to the shared CNAME. When the number of domains exceeds 100, only return the first 100 acceleration domain names.
                     * 
                     */
                    std::vector<ReferenceHolder> GetAccelerationDomains() const;

                    /**
                     * 设置List of acceleration domain names added to the shared CNAME. When the number of domains exceeds 100, only return the first 100 acceleration domain names.
                     * @param _accelerationDomains List of acceleration domain names added to the shared CNAME. When the number of domains exceeds 100, only return the first 100 acceleration domain names.
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
                     * Shared CNAME type: Value ranges from...to...
<li>custom: User-created custom shared CNAME</li>
<li>ip-ssl: Shared CNAME of IP SSL type</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Shared CNAME name.
                     */
                    std::string m_sharedCNAME;
                    bool m_sharedCNAMEHasBeenSet;

                    /**
                     * Description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * When type is ip-ssl, show the associated IP SSL configuration message of the shared CNAME.
                     */
                    IPSSLConfig m_iPSSLConfig;
                    bool m_iPSSLConfigHasBeenSet;

                    /**
                     * Number of acceleration domain names bound to the shared CNAME.
                     */
                    int64_t m_bindDomainCount;
                    bool m_bindDomainCountHasBeenSet;

                    /**
                     * List of acceleration domain names added to the shared CNAME. When the number of domains exceeds 100, only return the first 100 acceleration domain names.
                     */
                    std::vector<ReferenceHolder> m_accelerationDomains;
                    bool m_accelerationDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SHAREDCNAMEINFO_H_
