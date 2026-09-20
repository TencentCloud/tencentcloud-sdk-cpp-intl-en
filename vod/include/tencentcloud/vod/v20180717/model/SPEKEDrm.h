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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SPEKEDRM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SPEKEDRM_H_

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
                * Encryption information of a third-party DRM manufacturer.
                */
                class SPEKEDrm : public AbstractModel
                {
                public:
                    SPEKEDrm();
                    ~SPEKEDrm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Resource tagging. The field content is user-customized. It supports 1-128 characters, including numbers, letters, underscores (_), and hyphens (-). This field corresponds to the cid field in the Speke request. Note: Different DRM manufacturers have different restrictions on this field (for example, SDMC does not support underscores in this field). For specific rules, please confirm with the DRM manufacturer.</p>
                     * @return ResourceId <p>Resource tagging. The field content is user-customized. It supports 1-128 characters, including numbers, letters, underscores (_), and hyphens (-). This field corresponds to the cid field in the Speke request. Note: Different DRM manufacturers have different restrictions on this field (for example, SDMC does not support underscores in this field). For specific rules, please confirm with the DRM manufacturer.</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>Resource tagging. The field content is user-customized. It supports 1-128 characters, including numbers, letters, underscores (_), and hyphens (-). This field corresponds to the cid field in the Speke request. Note: Different DRM manufacturers have different restrictions on this field (for example, SDMC does not support underscores in this field). For specific rules, please confirm with the DRM manufacturer.</p>
                     * @param _resourceId <p>Resource tagging. The field content is user-customized. It supports 1-128 characters, including numbers, letters, underscores (_), and hyphens (-). This field corresponds to the cid field in the Speke request. Note: Different DRM manufacturers have different restrictions on this field (for example, SDMC does not support underscores in this field). For specific rules, please confirm with the DRM manufacturer.</p>
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
                     * 获取<p>DRM manufacturer access address. The field content is obtained from the DRM manufacturer. Note: Different DRM manufacturers have different limits on the number of substreams. For example, PallyCon limits it to no more than 5 substreams, while DRMtoday supports a maximum of 9 substreams for encryption.</p>
                     * @return KeyServerUrl <p>DRM manufacturer access address. The field content is obtained from the DRM manufacturer. Note: Different DRM manufacturers have different limits on the number of substreams. For example, PallyCon limits it to no more than 5 substreams, while DRMtoday supports a maximum of 9 substreams for encryption.</p>
                     * 
                     */
                    std::string GetKeyServerUrl() const;

                    /**
                     * 设置<p>DRM manufacturer access address. The field content is obtained from the DRM manufacturer. Note: Different DRM manufacturers have different limits on the number of substreams. For example, PallyCon limits it to no more than 5 substreams, while DRMtoday supports a maximum of 9 substreams for encryption.</p>
                     * @param _keyServerUrl <p>DRM manufacturer access address. The field content is obtained from the DRM manufacturer. Note: Different DRM manufacturers have different limits on the number of substreams. For example, PallyCon limits it to no more than 5 substreams, while DRMtoday supports a maximum of 9 substreams for encryption.</p>
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
                     * 获取<p>Encryption initialization vector (32-byte hexadecimal string). The field content is user-customized.</p>
                     * @return Vector <p>Encryption initialization vector (32-byte hexadecimal string). The field content is user-customized.</p>
                     * 
                     */
                    std::string GetVector() const;

                    /**
                     * 设置<p>Encryption initialization vector (32-byte hexadecimal string). The field content is user-customized.</p>
                     * @param _vector <p>Encryption initialization vector (32-byte hexadecimal string). The field content is user-customized.</p>
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
                     * 获取<p>Encryption method. Available values:<br>cbcs: PlayReady, Widevine, FairPlay, Widevine+FairPlay, Widevine+PlayReady, PlayReady+FairPlay, Widevine+PlayReady+FairPlay supported;<br>cenc: PlayReady, Widevine, Widevine+PlayReady supported;<br>If left blank, cbcs is used by default for FairPlay;<br>cenc is used by default for PlayReady and Widevine;<br>cbcs is used by default for Widevine+FairPlay, PlayReady+FairPlay, and Widevine+PlayReady+FairPlay;<br>cenc is used by default for Widevine+PlayReady;</p>
                     * @return EncryptionMethod <p>Encryption method. Available values:<br>cbcs: PlayReady, Widevine, FairPlay, Widevine+FairPlay, Widevine+PlayReady, PlayReady+FairPlay, Widevine+PlayReady+FairPlay supported;<br>cenc: PlayReady, Widevine, Widevine+PlayReady supported;<br>If left blank, cbcs is used by default for FairPlay;<br>cenc is used by default for PlayReady and Widevine;<br>cbcs is used by default for Widevine+FairPlay, PlayReady+FairPlay, and Widevine+PlayReady+FairPlay;<br>cenc is used by default for Widevine+PlayReady;</p>
                     * 
                     */
                    std::string GetEncryptionMethod() const;

                    /**
                     * 设置<p>Encryption method. Available values:<br>cbcs: PlayReady, Widevine, FairPlay, Widevine+FairPlay, Widevine+PlayReady, PlayReady+FairPlay, Widevine+PlayReady+FairPlay supported;<br>cenc: PlayReady, Widevine, Widevine+PlayReady supported;<br>If left blank, cbcs is used by default for FairPlay;<br>cenc is used by default for PlayReady and Widevine;<br>cbcs is used by default for Widevine+FairPlay, PlayReady+FairPlay, and Widevine+PlayReady+FairPlay;<br>cenc is used by default for Widevine+PlayReady;</p>
                     * @param _encryptionMethod <p>Encryption method. Available values:<br>cbcs: PlayReady, Widevine, FairPlay, Widevine+FairPlay, Widevine+PlayReady, PlayReady+FairPlay, Widevine+PlayReady+FairPlay supported;<br>cenc: PlayReady, Widevine, Widevine+PlayReady supported;<br>If left blank, cbcs is used by default for FairPlay;<br>cenc is used by default for PlayReady and Widevine;<br>cbcs is used by default for Widevine+FairPlay, PlayReady+FairPlay, and Widevine+PlayReady+FairPlay;<br>cenc is used by default for Widevine+PlayReady;</p>
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
                     * 获取<p>Substream encryption rule. Default value: preset0.<br>preset0: All substreams use the same key for encryption.<br>preset1: Each substream uses a different key for encryption.</p>
                     * @return EncryptionPreset <p>Substream encryption rule. Default value: preset0.<br>preset0: All substreams use the same key for encryption.<br>preset1: Each substream uses a different key for encryption.</p>
                     * 
                     */
                    std::string GetEncryptionPreset() const;

                    /**
                     * 设置<p>Substream encryption rule. Default value: preset0.<br>preset0: All substreams use the same key for encryption.<br>preset1: Each substream uses a different key for encryption.</p>
                     * @param _encryptionPreset <p>Substream encryption rule. Default value: preset0.<br>preset0: All substreams use the same key for encryption.<br>preset1: Each substream uses a different key for encryption.</p>
                     * 
                     */
                    void SetEncryptionPreset(const std::string& _encryptionPreset);

                    /**
                     * 判断参数 EncryptionPreset 是否已赋值
                     * @return EncryptionPreset 是否已赋值
                     * 
                     */
                    bool EncryptionPresetHasBeenSet() const;

                    /**
                     * 获取<p>Request method of the DRM manufacturer.</p><p>Enumeration values:</p><ul><li>POST: Most DRM manufacturers use the POST method for requests.</li><li>GET: Some DRM manufacturers support the GET method for requests. When using this method, request information needs to be included in the KeyServerUrl field.</li></ul><p>Default value: POST</p>
                     * @return KeyAcquireMode <p>Request method of the DRM manufacturer.</p><p>Enumeration values:</p><ul><li>POST: Most DRM manufacturers use the POST method for requests.</li><li>GET: Some DRM manufacturers support the GET method for requests. When using this method, request information needs to be included in the KeyServerUrl field.</li></ul><p>Default value: POST</p>
                     * 
                     */
                    std::string GetKeyAcquireMode() const;

                    /**
                     * 设置<p>Request method of the DRM manufacturer.</p><p>Enumeration values:</p><ul><li>POST: Most DRM manufacturers use the POST method for requests.</li><li>GET: Some DRM manufacturers support the GET method for requests. When using this method, request information needs to be included in the KeyServerUrl field.</li></ul><p>Default value: POST</p>
                     * @param _keyAcquireMode <p>Request method of the DRM manufacturer.</p><p>Enumeration values:</p><ul><li>POST: Most DRM manufacturers use the POST method for requests.</li><li>GET: Some DRM manufacturers support the GET method for requests. When using this method, request information needs to be included in the KeyServerUrl field.</li></ul><p>Default value: POST</p>
                     * 
                     */
                    void SetKeyAcquireMode(const std::string& _keyAcquireMode);

                    /**
                     * 判断参数 KeyAcquireMode 是否已赋值
                     * @return KeyAcquireMode 是否已赋值
                     * 
                     */
                    bool KeyAcquireModeHasBeenSet() const;

                private:

                    /**
                     * <p>Resource tagging. The field content is user-customized. It supports 1-128 characters, including numbers, letters, underscores (_), and hyphens (-). This field corresponds to the cid field in the Speke request. Note: Different DRM manufacturers have different restrictions on this field (for example, SDMC does not support underscores in this field). For specific rules, please confirm with the DRM manufacturer.</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>DRM manufacturer access address. The field content is obtained from the DRM manufacturer. Note: Different DRM manufacturers have different limits on the number of substreams. For example, PallyCon limits it to no more than 5 substreams, while DRMtoday supports a maximum of 9 substreams for encryption.</p>
                     */
                    std::string m_keyServerUrl;
                    bool m_keyServerUrlHasBeenSet;

                    /**
                     * <p>Encryption initialization vector (32-byte hexadecimal string). The field content is user-customized.</p>
                     */
                    std::string m_vector;
                    bool m_vectorHasBeenSet;

                    /**
                     * <p>Encryption method. Available values:<br>cbcs: PlayReady, Widevine, FairPlay, Widevine+FairPlay, Widevine+PlayReady, PlayReady+FairPlay, Widevine+PlayReady+FairPlay supported;<br>cenc: PlayReady, Widevine, Widevine+PlayReady supported;<br>If left blank, cbcs is used by default for FairPlay;<br>cenc is used by default for PlayReady and Widevine;<br>cbcs is used by default for Widevine+FairPlay, PlayReady+FairPlay, and Widevine+PlayReady+FairPlay;<br>cenc is used by default for Widevine+PlayReady;</p>
                     */
                    std::string m_encryptionMethod;
                    bool m_encryptionMethodHasBeenSet;

                    /**
                     * <p>Substream encryption rule. Default value: preset0.<br>preset0: All substreams use the same key for encryption.<br>preset1: Each substream uses a different key for encryption.</p>
                     */
                    std::string m_encryptionPreset;
                    bool m_encryptionPresetHasBeenSet;

                    /**
                     * <p>Request method of the DRM manufacturer.</p><p>Enumeration values:</p><ul><li>POST: Most DRM manufacturers use the POST method for requests.</li><li>GET: Some DRM manufacturers support the GET method for requests. When using this method, request information needs to be included in the KeyServerUrl field.</li></ul><p>Default value: POST</p>
                     */
                    std::string m_keyAcquireMode;
                    bool m_keyAcquireModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SPEKEDRM_H_
