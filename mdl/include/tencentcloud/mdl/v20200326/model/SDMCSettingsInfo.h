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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_SDMCSETTINGSINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_SDMCSETTINGSINFO_H_

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
                * SDMC DRM configuration information. This parameter is valid only when `Scheme` is set to `SDMCDRM`.
                */
                class SDMCSettingsInfo : public AbstractModel
                {
                public:
                    SDMCSettingsInfo();
                    ~SDMCSettingsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID in the SDMC DRM system
                     * @return Uid User ID in the SDMC DRM system
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置User ID in the SDMC DRM system
                     * @param _uid User ID in the SDMC DRM system
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
                     * 获取Tracks of the SDMC DRM system. This parameter is valid for DASH output groups.
`1`: audio
`2`: SD
`4`: HD
`8`: UHD1
`16`: UHD2

Default value: `31` (audio + SD + HD + UHD1 + UHD2)
                     * @return Tracks Tracks of the SDMC DRM system. This parameter is valid for DASH output groups.
`1`: audio
`2`: SD
`4`: HD
`8`: UHD1
`16`: UHD2

Default value: `31` (audio + SD + HD + UHD1 + UHD2)
                     * 
                     */
                    int64_t GetTracks() const;

                    /**
                     * 设置Tracks of the SDMC DRM system. This parameter is valid for DASH output groups.
`1`: audio
`2`: SD
`4`: HD
`8`: UHD1
`16`: UHD2

Default value: `31` (audio + SD + HD + UHD1 + UHD2)
                     * @param _tracks Tracks of the SDMC DRM system. This parameter is valid for DASH output groups.
`1`: audio
`2`: SD
`4`: HD
`8`: UHD1
`16`: UHD2

Default value: `31` (audio + SD + HD + UHD1 + UHD2)
                     * 
                     */
                    void SetTracks(const int64_t& _tracks);

                    /**
                     * 判断参数 Tracks 是否已赋值
                     * @return Tracks 是否已赋值
                     * 
                     */
                    bool TracksHasBeenSet() const;

                    /**
                     * 获取Key ID in the SDMC DRM system; required
                     * @return SecretId Key ID in the SDMC DRM system; required
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置Key ID in the SDMC DRM system; required
                     * @param _secretId Key ID in the SDMC DRM system; required
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
                     * 获取Key in the SDMC DRM system; required
                     * @return SecretKey Key in the SDMC DRM system; required
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置Key in the SDMC DRM system; required
                     * @param _secretKey Key in the SDMC DRM system; required
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
                     * 获取Key request URL of the SDMC DRM system, which is `https://uat.multidrm.tv/cpix/2.2/getcontentkey` by default
                     * @return Url Key request URL of the SDMC DRM system, which is `https://uat.multidrm.tv/cpix/2.2/getcontentkey` by default
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Key request URL of the SDMC DRM system, which is `https://uat.multidrm.tv/cpix/2.2/getcontentkey` by default
                     * @param _url Key request URL of the SDMC DRM system, which is `https://uat.multidrm.tv/cpix/2.2/getcontentkey` by default
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Token name in an SDMC key request URL, which is `token` by default
                     * @return TokenName Token name in an SDMC key request URL, which is `token` by default
                     * 
                     */
                    std::string GetTokenName() const;

                    /**
                     * 设置Token name in an SDMC key request URL, which is `token` by default
                     * @param _tokenName Token name in an SDMC key request URL, which is `token` by default
                     * 
                     */
                    void SetTokenName(const std::string& _tokenName);

                    /**
                     * 判断参数 TokenName 是否已赋值
                     * @return TokenName 是否已赋值
                     * 
                     */
                    bool TokenNameHasBeenSet() const;

                private:

                    /**
                     * User ID in the SDMC DRM system
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * Tracks of the SDMC DRM system. This parameter is valid for DASH output groups.
`1`: audio
`2`: SD
`4`: HD
`8`: UHD1
`16`: UHD2

Default value: `31` (audio + SD + HD + UHD1 + UHD2)
                     */
                    int64_t m_tracks;
                    bool m_tracksHasBeenSet;

                    /**
                     * Key ID in the SDMC DRM system; required
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * Key in the SDMC DRM system; required
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * Key request URL of the SDMC DRM system, which is `https://uat.multidrm.tv/cpix/2.2/getcontentkey` by default
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Token name in an SDMC key request URL, which is `token` by default
                     */
                    std::string m_tokenName;
                    bool m_tokenNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_SDMCSETTINGSINFO_H_
