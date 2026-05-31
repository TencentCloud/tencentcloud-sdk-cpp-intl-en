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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DRMSETTINGSINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DRMSETTINGSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/DrmKey.h>
#include <tencentcloud/mdl/v20200326/model/SDMCSettingsInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * DRM configuration information, which takes effect only for HLS and DASH.
                */
                class DrmSettingsInfo : public AbstractModel
                {
                public:
                    DrmSettingsInfo();
                    ~DrmSettingsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether DRM encryption is enabled. Option: CLOSE/OPEN. Default: CLOSE.
Currently only support HLS/DASH/HLS_ARCHIVE/DASH_ARCHIVE/HLS_MEDIAPACKAGE/DASH_MEDIAPACKAGE.
                     * @return State Whether DRM encryption is enabled. Option: CLOSE/OPEN. Default: CLOSE.
Currently only support HLS/DASH/HLS_ARCHIVE/DASH_ARCHIVE/HLS_MEDIAPACKAGE/DASH_MEDIAPACKAGE.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Whether DRM encryption is enabled. Option: CLOSE/OPEN. Default: CLOSE.
Currently only support HLS/DASH/HLS_ARCHIVE/DASH_ARCHIVE/HLS_MEDIAPACKAGE/DASH_MEDIAPACKAGE.
                     * @param _state Whether DRM encryption is enabled. Option: CLOSE/OPEN. Default: CLOSE.
Currently only support HLS/DASH/HLS_ARCHIVE/DASH_ARCHIVE/HLS_MEDIAPACKAGE/DASH_MEDIAPACKAGE.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Optional [CustomDRMKeys|SDMCDRM], defaults to CustomDRMKeys.
CustomDRMKeys refers to the custom encryption key.
SDMCDRM refers to the DRM key management system using SMDC.
                     * @return Scheme Optional [CustomDRMKeys|SDMCDRM], defaults to CustomDRMKeys.
CustomDRMKeys refers to the custom encryption key.
SDMCDRM refers to the DRM key management system using SMDC.
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置Optional [CustomDRMKeys|SDMCDRM], defaults to CustomDRMKeys.
CustomDRMKeys refers to the custom encryption key.
SDMCDRM refers to the DRM key management system using SMDC.
                     * @param _scheme Optional [CustomDRMKeys|SDMCDRM], defaults to CustomDRMKeys.
CustomDRMKeys refers to the custom encryption key.
SDMCDRM refers to the DRM key management system using SMDC.
                     * 
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     * 
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取Scheme is CustomDRMKeys, required, filled in by the user.
Scheme is SDMCDRM, optional, defaults to ChannelId. The format supports digits, upper- and lower-case letters, hyphens, and underscores, with a length of [1, 36].
                     * @return ContentId Scheme is CustomDRMKeys, required, filled in by the user.
Scheme is SDMCDRM, optional, defaults to ChannelId. The format supports digits, upper- and lower-case letters, hyphens, and underscores, with a length of [1, 36].
                     * 
                     */
                    std::string GetContentId() const;

                    /**
                     * 设置Scheme is CustomDRMKeys, required, filled in by the user.
Scheme is SDMCDRM, optional, defaults to ChannelId. The format supports digits, upper- and lower-case letters, hyphens, and underscores, with a length of [1, 36].
                     * @param _contentId Scheme is CustomDRMKeys, required, filled in by the user.
Scheme is SDMCDRM, optional, defaults to ChannelId. The format supports digits, upper- and lower-case letters, hyphens, and underscores, with a length of [1, 36].
                     * 
                     */
                    void SetContentId(const std::string& _contentId);

                    /**
                     * 判断参数 ContentId 是否已赋值
                     * @return ContentId 是否已赋值
                     * 
                     */
                    bool ContentIdHasBeenSet() const;

                    /**
                     * 获取Required when Scheme is CustomDRMKeys. The content is the key customized by users.
                     * @return Keys Required when Scheme is CustomDRMKeys. The content is the key customized by users.
                     * 
                     */
                    std::vector<DrmKey> GetKeys() const;

                    /**
                     * 设置Required when Scheme is CustomDRMKeys. The content is the key customized by users.
                     * @param _keys Required when Scheme is CustomDRMKeys. The content is the key customized by users.
                     * 
                     */
                    void SetKeys(const std::vector<DrmKey>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取SDMC key configuration information, used when Scheme is SDMCDRM.
                     * @return SDMCSettings SDMC key configuration information, used when Scheme is SDMCDRM.
                     * 
                     */
                    SDMCSettingsInfo GetSDMCSettings() const;

                    /**
                     * 设置SDMC key configuration information, used when Scheme is SDMCDRM.
                     * @param _sDMCSettings SDMC key configuration information, used when Scheme is SDMCDRM.
                     * 
                     */
                    void SetSDMCSettings(const SDMCSettingsInfo& _sDMCSettings);

                    /**
                     * 判断参数 SDMCSettings 是否已赋值
                     * @return SDMCSettings 是否已赋值
                     * 
                     */
                    bool SDMCSettingsHasBeenSet() const;

                    /**
                     * 获取Optional type:
`FAIRPLAY` `WIDEVINE` `PLAYREADY` `AES128`
HLS-TS supports `FAIRPLAY` and `AES128`.
HLS-FMP4 supports `FAIRPLAY`, `WIDEVINE`, `PLAYREADY`, `AES128`, and permutation and combination of two or three from `FAIRPLAY`, `WIDEVINE`, `PLAYREADY` (use commas to concatenate, such as "FAIRPLAY,WIDEVINE,PLAYREADY").
DASH supports `WIDEVINE`, `PLAYREADY`, and the permutation and combination of `PLAYREADY` and `WIDEVINE` (use commas to concatenate, such as "PLAYREADY,WIDEVINE").
                     * @return DrmType Optional type:
`FAIRPLAY` `WIDEVINE` `PLAYREADY` `AES128`
HLS-TS supports `FAIRPLAY` and `AES128`.
HLS-FMP4 supports `FAIRPLAY`, `WIDEVINE`, `PLAYREADY`, `AES128`, and permutation and combination of two or three from `FAIRPLAY`, `WIDEVINE`, `PLAYREADY` (use commas to concatenate, such as "FAIRPLAY,WIDEVINE,PLAYREADY").
DASH supports `WIDEVINE`, `PLAYREADY`, and the permutation and combination of `PLAYREADY` and `WIDEVINE` (use commas to concatenate, such as "PLAYREADY,WIDEVINE").
                     * 
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置Optional type:
`FAIRPLAY` `WIDEVINE` `PLAYREADY` `AES128`
HLS-TS supports `FAIRPLAY` and `AES128`.
HLS-FMP4 supports `FAIRPLAY`, `WIDEVINE`, `PLAYREADY`, `AES128`, and permutation and combination of two or three from `FAIRPLAY`, `WIDEVINE`, `PLAYREADY` (use commas to concatenate, such as "FAIRPLAY,WIDEVINE,PLAYREADY").
DASH supports `WIDEVINE`, `PLAYREADY`, and the permutation and combination of `PLAYREADY` and `WIDEVINE` (use commas to concatenate, such as "PLAYREADY,WIDEVINE").
                     * @param _drmType Optional type:
`FAIRPLAY` `WIDEVINE` `PLAYREADY` `AES128`
HLS-TS supports `FAIRPLAY` and `AES128`.
HLS-FMP4 supports `FAIRPLAY`, `WIDEVINE`, `PLAYREADY`, `AES128`, and permutation and combination of two or three from `FAIRPLAY`, `WIDEVINE`, `PLAYREADY` (use commas to concatenate, such as "FAIRPLAY,WIDEVINE,PLAYREADY").
DASH supports `WIDEVINE`, `PLAYREADY`, and the permutation and combination of `PLAYREADY` and `WIDEVINE` (use commas to concatenate, such as "PLAYREADY,WIDEVINE").
                     * 
                     */
                    void SetDrmType(const std::string& _drmType);

                    /**
                     * 判断参数 DrmType 是否已赋值
                     * @return DrmType 是否已赋值
                     * 
                     */
                    bool DrmTypeHasBeenSet() const;

                private:

                    /**
                     * Whether DRM encryption is enabled. Option: CLOSE/OPEN. Default: CLOSE.
Currently only support HLS/DASH/HLS_ARCHIVE/DASH_ARCHIVE/HLS_MEDIAPACKAGE/DASH_MEDIAPACKAGE.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Optional [CustomDRMKeys|SDMCDRM], defaults to CustomDRMKeys.
CustomDRMKeys refers to the custom encryption key.
SDMCDRM refers to the DRM key management system using SMDC.
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * Scheme is CustomDRMKeys, required, filled in by the user.
Scheme is SDMCDRM, optional, defaults to ChannelId. The format supports digits, upper- and lower-case letters, hyphens, and underscores, with a length of [1, 36].
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                    /**
                     * Required when Scheme is CustomDRMKeys. The content is the key customized by users.
                     */
                    std::vector<DrmKey> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * SDMC key configuration information, used when Scheme is SDMCDRM.
                     */
                    SDMCSettingsInfo m_sDMCSettings;
                    bool m_sDMCSettingsHasBeenSet;

                    /**
                     * Optional type:
`FAIRPLAY` `WIDEVINE` `PLAYREADY` `AES128`
HLS-TS supports `FAIRPLAY` and `AES128`.
HLS-FMP4 supports `FAIRPLAY`, `WIDEVINE`, `PLAYREADY`, `AES128`, and permutation and combination of two or three from `FAIRPLAY`, `WIDEVINE`, `PLAYREADY` (use commas to concatenate, such as "FAIRPLAY,WIDEVINE,PLAYREADY").
DASH supports `WIDEVINE`, `PLAYREADY`, and the permutation and combination of `PLAYREADY` and `WIDEVINE` (use commas to concatenate, such as "PLAYREADY,WIDEVINE").
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DRMSETTINGSINFO_H_
