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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SPEKEDRM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SPEKEDRM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * FairPlay, WideVine, PlayReady, and other DRM encryption technologies.
                */
                class SpekeDrm : public AbstractModel
                {
                public:
                    SpekeDrm();
                    ~SpekeDrm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource ID. The field content is user-defined.
It supports 1 to 128 characters consisting of digits, letters, underscores (_), and hyphens (-).
This field corresponds to the cid field in the Speke request.
Note: Different DRM vendors have different restrictions on this field (for example, SDMC Technology Co., Ltd. does not support this field containing underscores). For specific rules, check with the vendors.
                     * @return ResourceId Resource ID. The field content is user-defined.
It supports 1 to 128 characters consisting of digits, letters, underscores (_), and hyphens (-).
This field corresponds to the cid field in the Speke request.
Note: Different DRM vendors have different restrictions on this field (for example, SDMC Technology Co., Ltd. does not support this field containing underscores). For specific rules, check with the vendors.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID. The field content is user-defined.
It supports 1 to 128 characters consisting of digits, letters, underscores (_), and hyphens (-).
This field corresponds to the cid field in the Speke request.
Note: Different DRM vendors have different restrictions on this field (for example, SDMC Technology Co., Ltd. does not support this field containing underscores). For specific rules, check with the vendors.
                     * @param _resourceId Resource ID. The field content is user-defined.
It supports 1 to 128 characters consisting of digits, letters, underscores (_), and hyphens (-).
This field corresponds to the cid field in the Speke request.
Note: Different DRM vendors have different restrictions on this field (for example, SDMC Technology Co., Ltd. does not support this field containing underscores). For specific rules, check with the vendors.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取DRM manufacturer access address. the field content is obtained from the drm manufacturer.

Note: different DRM manufacturers have different limitations on the number of substreams. for example, PallyCon limits the number of substreams to no more than 5, and DRMtoday only supports encryption of up to 9 substreams.
                     * @return KeyServerUrl DRM manufacturer access address. the field content is obtained from the drm manufacturer.

Note: different DRM manufacturers have different limitations on the number of substreams. for example, PallyCon limits the number of substreams to no more than 5, and DRMtoday only supports encryption of up to 9 substreams.
                     * 
                     */
                    std::string GetKeyServerUrl() const;

                    /**
                     * 设置DRM manufacturer access address. the field content is obtained from the drm manufacturer.

Note: different DRM manufacturers have different limitations on the number of substreams. for example, PallyCon limits the number of substreams to no more than 5, and DRMtoday only supports encryption of up to 9 substreams.
                     * @param _keyServerUrl DRM manufacturer access address. the field content is obtained from the drm manufacturer.

Note: different DRM manufacturers have different limitations on the number of substreams. for example, PallyCon limits the number of substreams to no more than 5, and DRMtoday only supports encryption of up to 9 substreams.
                     * 
                     */
                    void SetKeyServerUrl(const std::string& _keyServerUrl);

                    /**
                     * 判断参数 KeyServerUrl 是否已赋值
                     * @return KeyServerUrl 是否已赋值
                     * 
                     */
                    bool KeyServerUrlHasBeenSet() const;

                    /**
                     * 获取Initialization vector for encryption (32-byte hexadecimal string). the field content is user-customized.
                     * @return Vector Initialization vector for encryption (32-byte hexadecimal string). the field content is user-customized.
                     * 
                     */
                    std::string GetVector() const;

                    /**
                     * 设置Initialization vector for encryption (32-byte hexadecimal string). the field content is user-customized.
                     * @param _vector Initialization vector for encryption (32-byte hexadecimal string). the field content is user-customized.
                     * 
                     */
                    void SetVector(const std::string& _vector);

                    /**
                     * 判断参数 Vector 是否已赋值
                     * @return Vector 是否已赋值
                     * 
                     */
                    bool VectorHasBeenSet() const;

                    /**
                     * 获取Encryption method. Options:  
- **cbcs**: Supports PlayReady, Widevine, FairPlay, Widevine+FairPlay, Widevine+PlayReady, PlayReady+FairPlay, and Widevine+PlayReady+FairPlay.  
- **cenc**: Supports PlayReady, Widevine, and Widevine+PlayReady.  

If not specified:  
- FairPlay defaults to **cbcs**.  
- PlayReady and Widevine default to **cenc**.  
- Widevine+FairPlay, PlayReady+FairPlay, and Widevine+PlayReady+FairPlay default to **cbcs**.  
- Widevine+PlayReady defaults to **cenc**.
                     * @return EncryptionMethod Encryption method. Options:  
- **cbcs**: Supports PlayReady, Widevine, FairPlay, Widevine+FairPlay, Widevine+PlayReady, PlayReady+FairPlay, and Widevine+PlayReady+FairPlay.  
- **cenc**: Supports PlayReady, Widevine, and Widevine+PlayReady.  

If not specified:  
- FairPlay defaults to **cbcs**.  
- PlayReady and Widevine default to **cenc**.  
- Widevine+FairPlay, PlayReady+FairPlay, and Widevine+PlayReady+FairPlay default to **cbcs**.  
- Widevine+PlayReady defaults to **cenc**.
                     * 
                     */
                    std::string GetEncryptionMethod() const;

                    /**
                     * 设置Encryption method. Options:  
- **cbcs**: Supports PlayReady, Widevine, FairPlay, Widevine+FairPlay, Widevine+PlayReady, PlayReady+FairPlay, and Widevine+PlayReady+FairPlay.  
- **cenc**: Supports PlayReady, Widevine, and Widevine+PlayReady.  

If not specified:  
- FairPlay defaults to **cbcs**.  
- PlayReady and Widevine default to **cenc**.  
- Widevine+FairPlay, PlayReady+FairPlay, and Widevine+PlayReady+FairPlay default to **cbcs**.  
- Widevine+PlayReady defaults to **cenc**.
                     * @param _encryptionMethod Encryption method. Options:  
- **cbcs**: Supports PlayReady, Widevine, FairPlay, Widevine+FairPlay, Widevine+PlayReady, PlayReady+FairPlay, and Widevine+PlayReady+FairPlay.  
- **cenc**: Supports PlayReady, Widevine, and Widevine+PlayReady.  

If not specified:  
- FairPlay defaults to **cbcs**.  
- PlayReady and Widevine default to **cenc**.  
- Widevine+FairPlay, PlayReady+FairPlay, and Widevine+PlayReady+FairPlay default to **cbcs**.  
- Widevine+PlayReady defaults to **cenc**.
                     * 
                     */
                    void SetEncryptionMethod(const std::string& _encryptionMethod);

                    /**
                     * 判断参数 EncryptionMethod 是否已赋值
                     * @return EncryptionMethod 是否已赋值
                     * 
                     */
                    bool EncryptionMethodHasBeenSet() const;

                    /**
                     * 获取Substream encryption rule. Default value: preset0.
preset 0: use the same key to encrypt all substreams
preset1: use different keys for each substream

                     * @return EncryptionPreset Substream encryption rule. Default value: preset0.
preset 0: use the same key to encrypt all substreams
preset1: use different keys for each substream

                     * 
                     */
                    std::string GetEncryptionPreset() const;

                    /**
                     * 设置Substream encryption rule. Default value: preset0.
preset 0: use the same key to encrypt all substreams
preset1: use different keys for each substream

                     * @param _encryptionPreset Substream encryption rule. Default value: preset0.
preset 0: use the same key to encrypt all substreams
preset1: use different keys for each substream

                     * 
                     */
                    void SetEncryptionPreset(const std::string& _encryptionPreset);

                    /**
                     * 判断参数 EncryptionPreset 是否已赋值
                     * @return EncryptionPreset 是否已赋值
                     * 
                     */
                    bool EncryptionPresetHasBeenSet() const;

                private:

                    /**
                     * Resource ID. The field content is user-defined.
It supports 1 to 128 characters consisting of digits, letters, underscores (_), and hyphens (-).
This field corresponds to the cid field in the Speke request.
Note: Different DRM vendors have different restrictions on this field (for example, SDMC Technology Co., Ltd. does not support this field containing underscores). For specific rules, check with the vendors.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * DRM manufacturer access address. the field content is obtained from the drm manufacturer.

Note: different DRM manufacturers have different limitations on the number of substreams. for example, PallyCon limits the number of substreams to no more than 5, and DRMtoday only supports encryption of up to 9 substreams.
                     */
                    std::string m_keyServerUrl;
                    bool m_keyServerUrlHasBeenSet;

                    /**
                     * Initialization vector for encryption (32-byte hexadecimal string). the field content is user-customized.
                     */
                    std::string m_vector;
                    bool m_vectorHasBeenSet;

                    /**
                     * Encryption method. Options:  
- **cbcs**: Supports PlayReady, Widevine, FairPlay, Widevine+FairPlay, Widevine+PlayReady, PlayReady+FairPlay, and Widevine+PlayReady+FairPlay.  
- **cenc**: Supports PlayReady, Widevine, and Widevine+PlayReady.  

If not specified:  
- FairPlay defaults to **cbcs**.  
- PlayReady and Widevine default to **cenc**.  
- Widevine+FairPlay, PlayReady+FairPlay, and Widevine+PlayReady+FairPlay default to **cbcs**.  
- Widevine+PlayReady defaults to **cenc**.
                     */
                    std::string m_encryptionMethod;
                    bool m_encryptionMethodHasBeenSet;

                    /**
                     * Substream encryption rule. Default value: preset0.
preset 0: use the same key to encrypt all substreams
preset1: use different keys for each substream

                     */
                    std::string m_encryptionPreset;
                    bool m_encryptionPresetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SPEKEDRM_H_
