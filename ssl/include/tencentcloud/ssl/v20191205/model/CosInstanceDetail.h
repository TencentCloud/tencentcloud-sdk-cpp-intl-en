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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_COSINSTANCEDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_COSINSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * COS instance description.
                */
                class CosInstanceDetail : public AbstractModel
                {
                public:
                    CosInstanceDetail();
                    ~CosInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name.
                     * @return Domain Domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name.
                     * @param _domain Domain name.
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
                     * 获取Bound certificate id.
                     * @return CertId Bound certificate id.
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Bound certificate id.
                     * @param _certId Bound certificate id.
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
                     * 获取ENABLED: domain name online status.
DISABLED: domain name offline status.
                     * @return Status ENABLED: domain name online status.
DISABLED: domain name offline status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置ENABLED: domain name online status.
DISABLED: domain name offline status.
                     * @param _status ENABLED: domain name online status.
DISABLED: domain name offline status.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取bucket name.
                     * @return Bucket bucket name.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置bucket name.
                     * @param _bucket bucket name.
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取bucket region.
                     * @return Region bucket region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置bucket region.
                     * @param _region bucket region.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * Domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Bound certificate id.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * ENABLED: domain name online status.
DISABLED: domain name offline status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * bucket name.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * bucket region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_COSINSTANCEDETAIL_H_
