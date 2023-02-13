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
                     */
                    std::string GetKey() const;

                    /**
                     * 设置DRM key, which is a 32-bit hexadecimal string.
Note: uppercase letters in the string will be automatically converted to lowercase ones.
                     * @param Key DRM key, which is a 32-bit hexadecimal string.
Note: uppercase letters in the string will be automatically converted to lowercase ones.
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Required for Widevine encryption. Valid values: SD, HD, UHD1, UHD2, AUDIO, ALL.
ALL refers to all tracks. If this parameter is set to ALL, no other tracks can be added.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Track Required for Widevine encryption. Valid values: SD, HD, UHD1, UHD2, AUDIO, ALL.
ALL refers to all tracks. If this parameter is set to ALL, no other tracks can be added.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTrack() const;

                    /**
                     * 设置Required for Widevine encryption. Valid values: SD, HD, UHD1, UHD2, AUDIO, ALL.
ALL refers to all tracks. If this parameter is set to ALL, no other tracks can be added.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Track Required for Widevine encryption. Valid values: SD, HD, UHD1, UHD2, AUDIO, ALL.
ALL refers to all tracks. If this parameter is set to ALL, no other tracks can be added.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTrack(const std::string& _track);

                    /**
                     * 判断参数 Track 是否已赋值
                     * @return Track 是否已赋值
                     */
                    bool TrackHasBeenSet() const;

                    /**
                     * 获取Required for Widevine encryption. It is a 32-bit hexadecimal string.
Note: uppercase letters in the string will be automatically converted to lowercase ones.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return KeyId Required for Widevine encryption. It is a 32-bit hexadecimal string.
Note: uppercase letters in the string will be automatically converted to lowercase ones.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置Required for Widevine encryption. It is a 32-bit hexadecimal string.
Note: uppercase letters in the string will be automatically converted to lowercase ones.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param KeyId Required for Widevine encryption. It is a 32-bit hexadecimal string.
Note: uppercase letters in the string will be automatically converted to lowercase ones.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Required when FairPlay uses the AES encryption method. It is a 32-bit hexadecimal string.
For more information about this parameter, please see: 
https://tools.ietf.org/html/rfc3826
Note: uppercase letters in the string will be automatically converted to lowercase ones.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Iv Required when FairPlay uses the AES encryption method. It is a 32-bit hexadecimal string.
For more information about this parameter, please see: 
https://tools.ietf.org/html/rfc3826
Note: uppercase letters in the string will be automatically converted to lowercase ones.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIv() const;

                    /**
                     * 设置Required when FairPlay uses the AES encryption method. It is a 32-bit hexadecimal string.
For more information about this parameter, please see: 
https://tools.ietf.org/html/rfc3826
Note: uppercase letters in the string will be automatically converted to lowercase ones.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Iv Required when FairPlay uses the AES encryption method. It is a 32-bit hexadecimal string.
For more information about this parameter, please see: 
https://tools.ietf.org/html/rfc3826
Note: uppercase letters in the string will be automatically converted to lowercase ones.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIv(const std::string& _iv);

                    /**
                     * 判断参数 Iv 是否已赋值
                     * @return Iv 是否已赋值
                     */
                    bool IvHasBeenSet() const;

                    /**
                     * 获取The URI of the license server when AES-128 is used. This parameter may be empty.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return KeyUri The URI of the license server when AES-128 is used. This parameter may be empty.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetKeyUri() const;

                    /**
                     * 设置The URI of the license server when AES-128 is used. This parameter may be empty.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param KeyUri The URI of the license server when AES-128 is used. This parameter may be empty.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetKeyUri(const std::string& _keyUri);

                    /**
                     * 判断参数 KeyUri 是否已赋值
                     * @return KeyUri 是否已赋值
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
                     * Required for Widevine encryption. Valid values: SD, HD, UHD1, UHD2, AUDIO, ALL.
ALL refers to all tracks. If this parameter is set to ALL, no other tracks can be added.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_track;
                    bool m_trackHasBeenSet;

                    /**
                     * Required for Widevine encryption. It is a 32-bit hexadecimal string.
Note: uppercase letters in the string will be automatically converted to lowercase ones.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Required when FairPlay uses the AES encryption method. It is a 32-bit hexadecimal string.
For more information about this parameter, please see: 
https://tools.ietf.org/html/rfc3826
Note: uppercase letters in the string will be automatically converted to lowercase ones.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iv;
                    bool m_ivHasBeenSet;

                    /**
                     * The URI of the license server when AES-128 is used. This parameter may be empty.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_keyUri;
                    bool m_keyUriHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DRMKEY_H_
