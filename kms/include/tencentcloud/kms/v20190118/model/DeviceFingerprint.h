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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DEVICEFINGERPRINT_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DEVICEFINGERPRINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * Device fingerprint
                */
                class DeviceFingerprint : public AbstractModel
                {
                public:
                    DeviceFingerprint();
                    ~DeviceFingerprint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Fingerprint information collected by device fingerprint collector. Its format must be in the following regular expression: ^[0-9a-f]{8}[\-][0-9a-f]{14}[\-][0-9a-f]{14}[\-][0-9a-f]{14}[\-][0-9a-f]{16}$
                     * @return Identity Fingerprint information collected by device fingerprint collector. Its format must be in the following regular expression: ^[0-9a-f]{8}[\-][0-9a-f]{14}[\-][0-9a-f]{14}[\-][0-9a-f]{14}[\-][0-9a-f]{16}$
                     * 
                     */
                    std::string GetIdentity() const;

                    /**
                     * 设置Fingerprint information collected by device fingerprint collector. Its format must be in the following regular expression: ^[0-9a-f]{8}[\-][0-9a-f]{14}[\-][0-9a-f]{14}[\-][0-9a-f]{14}[\-][0-9a-f]{16}$
                     * @param _identity Fingerprint information collected by device fingerprint collector. Its format must be in the following regular expression: ^[0-9a-f]{8}[\-][0-9a-f]{14}[\-][0-9a-f]{14}[\-][0-9a-f]{14}[\-][0-9a-f]{16}$
                     * 
                     */
                    void SetIdentity(const std::string& _identity);

                    /**
                     * 判断参数 Identity 是否已赋值
                     * @return Identity 是否已赋值
                     * 
                     */
                    bool IdentityHasBeenSet() const;

                    /**
                     * 获取Description, such as IP and device name. Length limit: 1,024 bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Description Description, such as IP and device name. Length limit: 1,024 bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description, such as IP and device name. Length limit: 1,024 bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _description Description, such as IP and device name. Length limit: 1,024 bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Fingerprint information collected by device fingerprint collector. Its format must be in the following regular expression: ^[0-9a-f]{8}[\-][0-9a-f]{14}[\-][0-9a-f]{14}[\-][0-9a-f]{14}[\-][0-9a-f]{16}$
                     */
                    std::string m_identity;
                    bool m_identityHasBeenSet;

                    /**
                     * Description, such as IP and device name. Length limit: 1,024 bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DEVICEFINGERPRINT_H_
