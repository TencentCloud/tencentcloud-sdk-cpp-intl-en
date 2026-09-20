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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SDMCDRMKEYPROVIDERINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SDMCDRMKEYPROVIDERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DRM key provider information for SDMC.
                */
                class SDMCDrmKeyProviderInfo : public AbstractModel
                {
                public:
                    SDMCDrmKeyProviderInfo();
                    ~SDMCDrmKeyProviderInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID assigned by Huaxida, which contains up to 128 characters.
                     * @return Uid User ID assigned by Huaxida, which contains up to 128 characters.
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置User ID assigned by Huaxida, which contains up to 128 characters.
                     * @param _uid User ID assigned by Huaxida, which contains up to 128 characters.
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取User secret key ID assigned by SDMC, which contains up to 128 characters.
                     * @return SecretId User secret key ID assigned by SDMC, which contains up to 128 characters.
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置User secret key ID assigned by SDMC, which contains up to 128 characters.
                     * @param _secretId User secret key ID assigned by SDMC, which contains up to 128 characters.
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取User key content assigned by Huaxida. Maximum length: 128 characters.
                     * @return SecretKey User key content assigned by Huaxida. Maximum length: 128 characters.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置User key content assigned by Huaxida. Maximum length: 128 characters.
                     * @param _secretKey User key content assigned by Huaxida. Maximum length: 128 characters.
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取FairPlay certificate address assigned by SDMC. This address must use HTTPS and can contain up to 1,024 characters.
                     * @return FairPlayCertificateUrl FairPlay certificate address assigned by SDMC. This address must use HTTPS and can contain up to 1,024 characters.
                     * 
                     */
                    std::string GetFairPlayCertificateUrl() const;

                    /**
                     * 设置FairPlay certificate address assigned by SDMC. This address must use HTTPS and can contain up to 1,024 characters.
                     * @param _fairPlayCertificateUrl FairPlay certificate address assigned by SDMC. This address must use HTTPS and can contain up to 1,024 characters.
                     * 
                     */
                    void SetFairPlayCertificateUrl(const std::string& _fairPlayCertificateUrl);

                    /**
                     * 判断参数 FairPlayCertificateUrl 是否已赋值
                     * @return FairPlayCertificateUrl 是否已赋值
                     * 
                     */
                    bool FairPlayCertificateUrlHasBeenSet() const;

                private:

                    /**
                     * User ID assigned by Huaxida, which contains up to 128 characters.
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * User secret key ID assigned by SDMC, which contains up to 128 characters.
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * User key content assigned by Huaxida. Maximum length: 128 characters.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * FairPlay certificate address assigned by SDMC. This address must use HTTPS and can contain up to 1,024 characters.
                     */
                    std::string m_fairPlayCertificateUrl;
                    bool m_fairPlayCertificateUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SDMCDRMKEYPROVIDERINFO_H_
