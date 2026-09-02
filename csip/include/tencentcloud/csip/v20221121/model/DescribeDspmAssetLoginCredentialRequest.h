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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMASSETLOGINCREDENTIALREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMASSETLOGINCREDENTIALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmAssetLoginCredential request structure.
                */
                class DescribeDspmAssetLoginCredentialRequest : public AbstractModel
                {
                public:
                    DescribeDspmAssetLoginCredentialRequest();
                    ~DescribeDspmAssetLoginCredentialRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database asset id
                     * @return AssetId Database asset id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Database asset id
                     * @param _assetId Database asset id
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取Host. Default: '%'
                     * @return Host Host. Default: '%'
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Host. Default: '%'
                     * @param _host Host. Default: '%'
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Encryption algorithm
                     * @return EncryptMethod Encryption algorithm
                     * 
                     */
                    std::string GetEncryptMethod() const;

                    /**
                     * 设置Encryption algorithm
                     * @param _encryptMethod Encryption algorithm
                     * 
                     */
                    void SetEncryptMethod(const std::string& _encryptMethod);

                    /**
                     * 判断参数 EncryptMethod 是否已赋值
                     * @return EncryptMethod 是否已赋值
                     * 
                     */
                    bool EncryptMethodHasBeenSet() const;

                private:

                    /**
                     * Database asset id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Host. Default: '%'
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Encryption algorithm
                     */
                    std::string m_encryptMethod;
                    bool m_encryptMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMASSETLOGINCREDENTIALREQUEST_H_
