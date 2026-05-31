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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DRMKEY_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DRMKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Custom DRM key.
                */
                class DrmKey : public AbstractModel
                {
                public:
                    DrmKey();
                    ~DrmKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DRM key, which is a 32-bit hexadecimal string.
Note: uppercase letters in the string will be automatically converted to lowercase ones.
                     * @return Key DRM key, which is a 32-bit hexadecimal string.
Note: uppercase letters in the string will be automatically converted to lowercase ones.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置DRM key, which is a 32-bit hexadecimal string.
Note: uppercase letters in the string will be automatically converted to lowercase ones.
                     * @param _key DRM key, which is a 32-bit hexadecimal string.
Note: uppercase letters in the string will be automatically converted to lowercase ones.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Widevine encryption is required. Selectable options: SD/HD/UHD1/UHD2/AUDIO/ALL.
Among them, ALL represents select ALL. If ALL is specified, you cannot add other tracks.
                     * @return Track Widevine encryption is required. Selectable options: SD/HD/UHD1/UHD2/AUDIO/ALL.
Among them, ALL represents select ALL. If ALL is specified, you cannot add other tracks.
                     * 
                     */
                    std::string GetTrack() const;

                    /**
                     * 设置Widevine encryption is required. Selectable options: SD/HD/UHD1/UHD2/AUDIO/ALL.
Among them, ALL represents select ALL. If ALL is specified, you cannot add other tracks.
                     * @param _track Widevine encryption is required. Selectable options: SD/HD/UHD1/UHD2/AUDIO/ALL.
Among them, ALL represents select ALL. If ALL is specified, you cannot add other tracks.
                     * 
                     */
                    void SetTrack(const std::string& _track);

                    /**
                     * 判断参数 Track 是否已赋值
                     * @return Track 是否已赋值
                     * 
                     */
                    bool TrackHasBeenSet() const;

                    /**
                     * 获取KeyId for Widevine encryption, a 32-bit length hexadecimal string.
Note: The string will be modified to lowercase.
                     * @return KeyId KeyId for Widevine encryption, a 32-bit length hexadecimal string.
Note: The string will be modified to lowercase.
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置KeyId for Widevine encryption, a 32-bit length hexadecimal string.
Note: The string will be modified to lowercase.
                     * @param _keyId KeyId for Widevine encryption, a 32-bit length hexadecimal string.
Note: The string will be modified to lowercase.
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Iv for AES encryption in Fairplay, a 32-bit length hexadecimal string.
Iv parsing reference
https://tools.ietf.org/html/rfc3826
Note: The string will be modified to lowercase.
                     * @return Iv Iv for AES encryption in Fairplay, a 32-bit length hexadecimal string.
Iv parsing reference
https://tools.ietf.org/html/rfc3826
Note: The string will be modified to lowercase.
                     * 
                     */
                    std::string GetIv() const;

                    /**
                     * 设置Iv for AES encryption in Fairplay, a 32-bit length hexadecimal string.
Iv parsing reference
https://tools.ietf.org/html/rfc3826
Note: The string will be modified to lowercase.
                     * @param _iv Iv for AES encryption in Fairplay, a 32-bit length hexadecimal string.
Iv parsing reference
https://tools.ietf.org/html/rfc3826
Note: The string will be modified to lowercase.
                     * 
                     */
                    void SetIv(const std::string& _iv);

                    /**
                     * 判断参数 Iv 是否已赋值
                     * @return Iv 是否已赋值
                     * 
                     */
                    bool IvHasBeenSet() const;

                    /**
                     * 获取uri of the license server. AES128 is used. Can be empty.
                     * @return KeyUri uri of the license server. AES128 is used. Can be empty.
                     * 
                     */
                    std::string GetKeyUri() const;

                    /**
                     * 设置uri of the license server. AES128 is used. Can be empty.
                     * @param _keyUri uri of the license server. AES128 is used. Can be empty.
                     * 
                     */
                    void SetKeyUri(const std::string& _keyUri);

                    /**
                     * 判断参数 KeyUri 是否已赋值
                     * @return KeyUri 是否已赋值
                     * 
                     */
                    bool KeyUriHasBeenSet() const;

                private:

                    /**
                     * DRM key, which is a 32-bit hexadecimal string.
Note: uppercase letters in the string will be automatically converted to lowercase ones.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Widevine encryption is required. Selectable options: SD/HD/UHD1/UHD2/AUDIO/ALL.
Among them, ALL represents select ALL. If ALL is specified, you cannot add other tracks.
                     */
                    std::string m_track;
                    bool m_trackHasBeenSet;

                    /**
                     * KeyId for Widevine encryption, a 32-bit length hexadecimal string.
Note: The string will be modified to lowercase.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Iv for AES encryption in Fairplay, a 32-bit length hexadecimal string.
Iv parsing reference
https://tools.ietf.org/html/rfc3826
Note: The string will be modified to lowercase.
                     */
                    std::string m_iv;
                    bool m_ivHasBeenSet;

                    /**
                     * uri of the license server. AES128 is used. Can be empty.
                     */
                    std::string m_keyUri;
                    bool m_keyUriHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DRMKEY_H_
