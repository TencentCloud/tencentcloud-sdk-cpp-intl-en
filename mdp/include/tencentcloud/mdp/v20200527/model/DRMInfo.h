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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_DRMINFO_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_DRMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * DRM configure info.
                */
                class DRMInfo : public AbstractModel
                {
                public:
                    DRMInfo();
                    ~DRMInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Encryption method, optional values: `CBCS`, `CENC`.
                     * @return EncryptionMethod Encryption method, optional values: `CBCS`, `CENC`.
                     * 
                     */
                    std::string GetEncryptionMethod() const;

                    /**
                     * 设置Encryption method, optional values: `CBCS`, `CENC`.
                     * @param _encryptionMethod Encryption method, optional values: `CBCS`, `CENC`.
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
                     * 获取DRM system providers, when the encryption method is CBCS, the optional values are `PlayReady`, `Widevine`, `FairPlay`; when the encryption method is CENC, the oprional values are `PlayReady`, `Widevine`.
                     * @return DRMSystems DRM system providers, when the encryption method is CBCS, the optional values are `PlayReady`, `Widevine`, `FairPlay`; when the encryption method is CENC, the oprional values are `PlayReady`, `Widevine`.
                     * 
                     */
                    std::vector<std::string> GetDRMSystems() const;

                    /**
                     * 设置DRM system providers, when the encryption method is CBCS, the optional values are `PlayReady`, `Widevine`, `FairPlay`; when the encryption method is CENC, the oprional values are `PlayReady`, `Widevine`.
                     * @param _dRMSystems DRM system providers, when the encryption method is CBCS, the optional values are `PlayReady`, `Widevine`, `FairPlay`; when the encryption method is CENC, the oprional values are `PlayReady`, `Widevine`.
                     * 
                     */
                    void SetDRMSystems(const std::vector<std::string>& _dRMSystems);

                    /**
                     * 判断参数 DRMSystems 是否已赋值
                     * @return DRMSystems 是否已赋值
                     * 
                     */
                    bool DRMSystemsHasBeenSet() const;

                    /**
                     * 获取The resource ID sent to the key server. It can contain 1 to 128 characters, including numbers, letters, underscores (_), and hyphens (-).
                     * @return ResourceID The resource ID sent to the key server. It can contain 1 to 128 characters, including numbers, letters, underscores (_), and hyphens (-).
                     * 
                     */
                    std::string GetResourceID() const;

                    /**
                     * 设置The resource ID sent to the key server. It can contain 1 to 128 characters, including numbers, letters, underscores (_), and hyphens (-).
                     * @param _resourceID The resource ID sent to the key server. It can contain 1 to 128 characters, including numbers, letters, underscores (_), and hyphens (-).
                     * 
                     */
                    void SetResourceID(const std::string& _resourceID);

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     * 
                     */
                    bool ResourceIDHasBeenSet() const;

                    /**
                     * 获取Key server address; must start with https://.
                     * @return KeyServerUrl Key server address; must start with https://.
                     * 
                     */
                    std::string GetKeyServerUrl() const;

                    /**
                     * 设置Key server address; must start with https://.
                     * @param _keyServerUrl Key server address; must start with https://.
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
                     * 获取Video encryption presets, options: 
`Preset Video 1` - Encrypts all video tracks with one key
`Preset Video 2` - Encrypts SD and HD video tracks with 2 different keys
`Preset Video 3` - Encrypts SD, HD and UHD video tracks with 3 different keys
`Preset Video 4` - Encrypts SD, HD, UHD1 and UHD2 video tracks with 4 different keys
`Preset Video 5` - Encrypts SD, HD1, HD2, UHD1 and UHD2 video tracks with 5 different keys
`Preset Video 6` - Encrypts SD, HD1, HD2, UHD video tracks with 4 different keys
`Preset Video 7` - Encrypts SD + HD1, HD2, UHD video tracks with 3 different keys
`Preset Video 8` - Encrypts SD + HD1, HD2, UHD1, UHD2 video tracks with 4 different keys
`Shared` - Encrypts all video and audio tracks with one key
`Unencrypted` - Does not encrypt any track
                     * @return VideoEncryptionPreset Video encryption presets, options: 
`Preset Video 1` - Encrypts all video tracks with one key
`Preset Video 2` - Encrypts SD and HD video tracks with 2 different keys
`Preset Video 3` - Encrypts SD, HD and UHD video tracks with 3 different keys
`Preset Video 4` - Encrypts SD, HD, UHD1 and UHD2 video tracks with 4 different keys
`Preset Video 5` - Encrypts SD, HD1, HD2, UHD1 and UHD2 video tracks with 5 different keys
`Preset Video 6` - Encrypts SD, HD1, HD2, UHD video tracks with 4 different keys
`Preset Video 7` - Encrypts SD + HD1, HD2, UHD video tracks with 3 different keys
`Preset Video 8` - Encrypts SD + HD1, HD2, UHD1, UHD2 video tracks with 4 different keys
`Shared` - Encrypts all video and audio tracks with one key
`Unencrypted` - Does not encrypt any track
                     * 
                     */
                    std::string GetVideoEncryptionPreset() const;

                    /**
                     * 设置Video encryption presets, options: 
`Preset Video 1` - Encrypts all video tracks with one key
`Preset Video 2` - Encrypts SD and HD video tracks with 2 different keys
`Preset Video 3` - Encrypts SD, HD and UHD video tracks with 3 different keys
`Preset Video 4` - Encrypts SD, HD, UHD1 and UHD2 video tracks with 4 different keys
`Preset Video 5` - Encrypts SD, HD1, HD2, UHD1 and UHD2 video tracks with 5 different keys
`Preset Video 6` - Encrypts SD, HD1, HD2, UHD video tracks with 4 different keys
`Preset Video 7` - Encrypts SD + HD1, HD2, UHD video tracks with 3 different keys
`Preset Video 8` - Encrypts SD + HD1, HD2, UHD1, UHD2 video tracks with 4 different keys
`Shared` - Encrypts all video and audio tracks with one key
`Unencrypted` - Does not encrypt any track
                     * @param _videoEncryptionPreset Video encryption presets, options: 
`Preset Video 1` - Encrypts all video tracks with one key
`Preset Video 2` - Encrypts SD and HD video tracks with 2 different keys
`Preset Video 3` - Encrypts SD, HD and UHD video tracks with 3 different keys
`Preset Video 4` - Encrypts SD, HD, UHD1 and UHD2 video tracks with 4 different keys
`Preset Video 5` - Encrypts SD, HD1, HD2, UHD1 and UHD2 video tracks with 5 different keys
`Preset Video 6` - Encrypts SD, HD1, HD2, UHD video tracks with 4 different keys
`Preset Video 7` - Encrypts SD + HD1, HD2, UHD video tracks with 3 different keys
`Preset Video 8` - Encrypts SD + HD1, HD2, UHD1, UHD2 video tracks with 4 different keys
`Shared` - Encrypts all video and audio tracks with one key
`Unencrypted` - Does not encrypt any track
                     * 
                     */
                    void SetVideoEncryptionPreset(const std::string& _videoEncryptionPreset);

                    /**
                     * 判断参数 VideoEncryptionPreset 是否已赋值
                     * @return VideoEncryptionPreset 是否已赋值
                     * 
                     */
                    bool VideoEncryptionPresetHasBeenSet() const;

                    /**
                     * 获取Audio encryption presets, options:
`Preset Audio 1` - Encrypts all audio tracks with one key
`Preset Audio 2` - Encrypts STEREO and MULTICHANNEL audio tracks with 2 different keys
`Preset Audio 3` - Encrypts STEREO, MULTICHANNEL 3-6 and MULTICHANNEL 7 audio tracks with 3 different keys
`Shared` - Encrypts all video and audio tracks with one key
`Unencrypted` - Does not encrypt any track
                     * @return AudioEncryptionPreset Audio encryption presets, options:
`Preset Audio 1` - Encrypts all audio tracks with one key
`Preset Audio 2` - Encrypts STEREO and MULTICHANNEL audio tracks with 2 different keys
`Preset Audio 3` - Encrypts STEREO, MULTICHANNEL 3-6 and MULTICHANNEL 7 audio tracks with 3 different keys
`Shared` - Encrypts all video and audio tracks with one key
`Unencrypted` - Does not encrypt any track
                     * 
                     */
                    std::string GetAudioEncryptionPreset() const;

                    /**
                     * 设置Audio encryption presets, options:
`Preset Audio 1` - Encrypts all audio tracks with one key
`Preset Audio 2` - Encrypts STEREO and MULTICHANNEL audio tracks with 2 different keys
`Preset Audio 3` - Encrypts STEREO, MULTICHANNEL 3-6 and MULTICHANNEL 7 audio tracks with 3 different keys
`Shared` - Encrypts all video and audio tracks with one key
`Unencrypted` - Does not encrypt any track
                     * @param _audioEncryptionPreset Audio encryption presets, options:
`Preset Audio 1` - Encrypts all audio tracks with one key
`Preset Audio 2` - Encrypts STEREO and MULTICHANNEL audio tracks with 2 different keys
`Preset Audio 3` - Encrypts STEREO, MULTICHANNEL 3-6 and MULTICHANNEL 7 audio tracks with 3 different keys
`Shared` - Encrypts all video and audio tracks with one key
`Unencrypted` - Does not encrypt any track
                     * 
                     */
                    void SetAudioEncryptionPreset(const std::string& _audioEncryptionPreset);

                    /**
                     * 判断参数 AudioEncryptionPreset 是否已赋值
                     * @return AudioEncryptionPreset 是否已赋值
                     * 
                     */
                    bool AudioEncryptionPresetHasBeenSet() const;

                    /**
                     * 获取Optional, used together with the key to encrypt the content; a 128-bit, 32-character, hexadecimal-encoded string.
                     * @return ConstantInitializationVector Optional, used together with the key to encrypt the content; a 128-bit, 32-character, hexadecimal-encoded string.
                     * 
                     */
                    std::string GetConstantInitializationVector() const;

                    /**
                     * 设置Optional, used together with the key to encrypt the content; a 128-bit, 32-character, hexadecimal-encoded string.
                     * @param _constantInitializationVector Optional, used together with the key to encrypt the content; a 128-bit, 32-character, hexadecimal-encoded string.
                     * 
                     */
                    void SetConstantInitializationVector(const std::string& _constantInitializationVector);

                    /**
                     * 判断参数 ConstantInitializationVector 是否已赋值
                     * @return ConstantInitializationVector 是否已赋值
                     * 
                     */
                    bool ConstantInitializationVectorHasBeenSet() const;

                    /**
                     * 获取Optional, specifies the rotation interval in seconds; empty, or an integer between 300-2592000.
                     * @return KeyRotationInterval Optional, specifies the rotation interval in seconds; empty, or an integer between 300-2592000.
                     * 
                     */
                    int64_t GetKeyRotationInterval() const;

                    /**
                     * 设置Optional, specifies the rotation interval in seconds; empty, or an integer between 300-2592000.
                     * @param _keyRotationInterval Optional, specifies the rotation interval in seconds; empty, or an integer between 300-2592000.
                     * 
                     */
                    void SetKeyRotationInterval(const int64_t& _keyRotationInterval);

                    /**
                     * 判断参数 KeyRotationInterval 是否已赋值
                     * @return KeyRotationInterval 是否已赋值
                     * 
                     */
                    bool KeyRotationIntervalHasBeenSet() const;

                private:

                    /**
                     * Encryption method, optional values: `CBCS`, `CENC`.
                     */
                    std::string m_encryptionMethod;
                    bool m_encryptionMethodHasBeenSet;

                    /**
                     * DRM system providers, when the encryption method is CBCS, the optional values are `PlayReady`, `Widevine`, `FairPlay`; when the encryption method is CENC, the oprional values are `PlayReady`, `Widevine`.
                     */
                    std::vector<std::string> m_dRMSystems;
                    bool m_dRMSystemsHasBeenSet;

                    /**
                     * The resource ID sent to the key server. It can contain 1 to 128 characters, including numbers, letters, underscores (_), and hyphens (-).
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * Key server address; must start with https://.
                     */
                    std::string m_keyServerUrl;
                    bool m_keyServerUrlHasBeenSet;

                    /**
                     * Video encryption presets, options: 
`Preset Video 1` - Encrypts all video tracks with one key
`Preset Video 2` - Encrypts SD and HD video tracks with 2 different keys
`Preset Video 3` - Encrypts SD, HD and UHD video tracks with 3 different keys
`Preset Video 4` - Encrypts SD, HD, UHD1 and UHD2 video tracks with 4 different keys
`Preset Video 5` - Encrypts SD, HD1, HD2, UHD1 and UHD2 video tracks with 5 different keys
`Preset Video 6` - Encrypts SD, HD1, HD2, UHD video tracks with 4 different keys
`Preset Video 7` - Encrypts SD + HD1, HD2, UHD video tracks with 3 different keys
`Preset Video 8` - Encrypts SD + HD1, HD2, UHD1, UHD2 video tracks with 4 different keys
`Shared` - Encrypts all video and audio tracks with one key
`Unencrypted` - Does not encrypt any track
                     */
                    std::string m_videoEncryptionPreset;
                    bool m_videoEncryptionPresetHasBeenSet;

                    /**
                     * Audio encryption presets, options:
`Preset Audio 1` - Encrypts all audio tracks with one key
`Preset Audio 2` - Encrypts STEREO and MULTICHANNEL audio tracks with 2 different keys
`Preset Audio 3` - Encrypts STEREO, MULTICHANNEL 3-6 and MULTICHANNEL 7 audio tracks with 3 different keys
`Shared` - Encrypts all video and audio tracks with one key
`Unencrypted` - Does not encrypt any track
                     */
                    std::string m_audioEncryptionPreset;
                    bool m_audioEncryptionPresetHasBeenSet;

                    /**
                     * Optional, used together with the key to encrypt the content; a 128-bit, 32-character, hexadecimal-encoded string.
                     */
                    std::string m_constantInitializationVector;
                    bool m_constantInitializationVectorHasBeenSet;

                    /**
                     * Optional, specifies the rotation interval in seconds; empty, or an integer between 300-2592000.
                     */
                    int64_t m_keyRotationInterval;
                    bool m_keyRotationIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_DRMINFO_H_
