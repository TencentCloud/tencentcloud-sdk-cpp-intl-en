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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDOMAINDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDOMAINDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * Query domain detail data
                */
                class DescribeDomainData : public AbstractModel
                {
                public:
                    DescribeDomainData();
                    ~DescribeDomainData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain ID
                     * @return Id Domain ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Domain ID
                     * @param _id Domain ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Playback domain
                     * @return PlayDomain Playback domain
                     * 
                     */
                    std::string GetPlayDomain() const;

                    /**
                     * 设置Playback domain
                     * @param _playDomain Playback domain
                     * 
                     */
                    void SetPlayDomain(const std::string& _playDomain);

                    /**
                     * 判断参数 PlayDomain 是否已赋值
                     * @return PlayDomain 是否已赋值
                     * 
                     */
                    bool PlayDomainHasBeenSet() const;

                    /**
                     * 获取CNAME record value
                     * @return InternalDomain CNAME record value
                     * 
                     */
                    std::string GetInternalDomain() const;

                    /**
                     * 设置CNAME record value
                     * @param _internalDomain CNAME record value
                     * 
                     */
                    void SetInternalDomain(const std::string& _internalDomain);

                    /**
                     * 判断参数 InternalDomain 是否已赋值
                     * @return InternalDomain 是否已赋值
                     * 
                     */
                    bool InternalDomainHasBeenSet() const;

                    /**
                     * 获取Whether to upload a certificate (0: No, 1: Yes)
                     * @return HaveCert Whether to upload a certificate (0: No, 1: Yes)
                     * 
                     */
                    int64_t GetHaveCert() const;

                    /**
                     * 设置Whether to upload a certificate (0: No, 1: Yes)
                     * @param _haveCert Whether to upload a certificate (0: No, 1: Yes)
                     * 
                     */
                    void SetHaveCert(const int64_t& _haveCert);

                    /**
                     * 判断参数 HaveCert 是否已赋值
                     * @return HaveCert 是否已赋值
                     * 
                     */
                    bool HaveCertHasBeenSet() const;

                    /**
                     * 获取Service node ID
                     * @return ClusterId Service node ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Service node ID
                     * @param _clusterId Service node ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Service node name
                     * @return ClusterName Service node name
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Service node name
                     * @param _clusterName Service node name
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取User ID.
                     * @return AppId User ID.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User ID.
                     * @param _appId User ID.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Certificate ID
                     * @return CertId Certificate ID
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Certificate ID
                     * @param _certId Certificate ID
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取Domain type. 0: Pull streaming domain name; 1: Streaming domain
                     * @return DomainType Domain type. 0: Pull streaming domain name; 1: Streaming domain
                     * 
                     */
                    int64_t GetDomainType() const;

                    /**
                     * 设置Domain type. 0: Pull streaming domain name; 1: Streaming domain
                     * @param _domainType Domain type. 0: Pull streaming domain name; 1: Streaming domain
                     * 
                     */
                    void SetDomainType(const int64_t& _domainType);

                    /**
                     * 判断参数 DomainType 是否已赋值
                     * @return DomainType 是否已赋值
                     * 
                     */
                    bool DomainTypeHasBeenSet() const;

                private:

                    /**
                     * Domain ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Playback domain
                     */
                    std::string m_playDomain;
                    bool m_playDomainHasBeenSet;

                    /**
                     * CNAME record value
                     */
                    std::string m_internalDomain;
                    bool m_internalDomainHasBeenSet;

                    /**
                     * Whether to upload a certificate (0: No, 1: Yes)
                     */
                    int64_t m_haveCert;
                    bool m_haveCertHasBeenSet;

                    /**
                     * Service node ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Service node name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * User ID.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Certificate ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * Domain type. 0: Pull streaming domain name; 1: Streaming domain
                     */
                    int64_t m_domainType;
                    bool m_domainTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDOMAINDATA_H_
