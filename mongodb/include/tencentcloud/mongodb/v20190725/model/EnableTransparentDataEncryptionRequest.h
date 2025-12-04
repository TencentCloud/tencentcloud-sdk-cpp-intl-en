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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_ENABLETRANSPARENTDATAENCRYPTIONREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_ENABLETRANSPARENTDATAENCRYPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * EnableTransparentDataEncryption request structure.
                */
                class EnableTransparentDataEncryptionRequest : public AbstractModel
                {
                public:
                    EnableTransparentDataEncryptionRequest();
                    ~EnableTransparentDataEncryptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. For example, cmgo-p8vn****. Log in to the[TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb) to copy the instance ID from the instance list. Currently, the supported general versions include 4.4 and 5.0, and Cloud Disk Edition is not supported.
                     * @return InstanceId Instance ID. For example, cmgo-p8vn****. Log in to the[TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb) to copy the instance ID from the instance list. Currently, the supported general versions include 4.4 and 5.0, and Cloud Disk Edition is not supported.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. For example, cmgo-p8vn****. Log in to the[TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb) to copy the instance ID from the instance list. Currently, the supported general versions include 4.4 and 5.0, and Cloud Disk Edition is not supported.
                     * @param _instanceId Instance ID. For example, cmgo-p8vn****. Log in to the[TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb) to copy the instance ID from the instance list. Currently, the supported general versions include 4.4 and 5.0, and Cloud Disk Edition is not supported.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取 Region where the [Key Management Service (KMS)](https://www.tencentcloud.comom/document/product/573/18809?from_cn_redirect=1) instance is located. For example, ap-shanghai.
                     * @return KmsRegion  Region where the [Key Management Service (KMS)](https://www.tencentcloud.comom/document/product/573/18809?from_cn_redirect=1) instance is located. For example, ap-shanghai.
                     * 
                     */
                    std::string GetKmsRegion() const;

                    /**
                     * 设置 Region where the [Key Management Service (KMS)](https://www.tencentcloud.comom/document/product/573/18809?from_cn_redirect=1) instance is located. For example, ap-shanghai.
                     * @param _kmsRegion  Region where the [Key Management Service (KMS)](https://www.tencentcloud.comom/document/product/573/18809?from_cn_redirect=1) instance is located. For example, ap-shanghai.
                     * 
                     */
                    void SetKmsRegion(const std::string& _kmsRegion);

                    /**
                     * 判断参数 KmsRegion 是否已赋值
                     * @return KmsRegion 是否已赋值
                     * 
                     */
                    bool KmsRegionHasBeenSet() const;

                    /**
                     * 获取Key ID. If the parameter is left unspecified, there is no specific key ID, Tencent Cloud will generate the key automatically.
                     * @return KeyId Key ID. If the parameter is left unspecified, there is no specific key ID, Tencent Cloud will generate the key automatically.
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Key ID. If the parameter is left unspecified, there is no specific key ID, Tencent Cloud will generate the key automatically.
                     * @param _keyId Key ID. If the parameter is left unspecified, there is no specific key ID, Tencent Cloud will generate the key automatically.
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID. For example, cmgo-p8vn****. Log in to the[TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb) to copy the instance ID from the instance list. Currently, the supported general versions include 4.4 and 5.0, and Cloud Disk Edition is not supported.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     *  Region where the [Key Management Service (KMS)](https://www.tencentcloud.comom/document/product/573/18809?from_cn_redirect=1) instance is located. For example, ap-shanghai.
                     */
                    std::string m_kmsRegion;
                    bool m_kmsRegionHasBeenSet;

                    /**
                     * Key ID. If the parameter is left unspecified, there is no specific key ID, Tencent Cloud will generate the key automatically.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_ENABLETRANSPARENTDATAENCRYPTIONREQUEST_H_
