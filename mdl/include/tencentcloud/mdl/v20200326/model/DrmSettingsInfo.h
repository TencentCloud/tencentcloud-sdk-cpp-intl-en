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
                     * 获取Whether to enable DRM encryption. Valid values: `CLOSE` (disable), `OPEN` (enable). Default value: `CLOSE`
DRM encryption is supported only for HLS, DASH, HLS_ARCHIVE, DASH_ARCHIVE, HLS_MEDIAPACKAGE, and DASH_MEDIAPACKAGE outputs.
                     * @return State Whether to enable DRM encryption. Valid values: `CLOSE` (disable), `OPEN` (enable). Default value: `CLOSE`
DRM encryption is supported only for HLS, DASH, HLS_ARCHIVE, DASH_ARCHIVE, HLS_MEDIAPACKAGE, and DASH_MEDIAPACKAGE outputs.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Whether to enable DRM encryption. Valid values: `CLOSE` (disable), `OPEN` (enable). Default value: `CLOSE`
DRM encryption is supported only for HLS, DASH, HLS_ARCHIVE, DASH_ARCHIVE, HLS_MEDIAPACKAGE, and DASH_MEDIAPACKAGE outputs.
                     * @param _state Whether to enable DRM encryption. Valid values: `CLOSE` (disable), `OPEN` (enable). Default value: `CLOSE`
DRM encryption is supported only for HLS, DASH, HLS_ARCHIVE, DASH_ARCHIVE, HLS_MEDIAPACKAGE, and DASH_MEDIAPACKAGE outputs.
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
                     * 获取Valid values: `CustomDRMKeys` (default value), `SDMCDRM`
`CustomDRMKeys` means encryption keys customized by users.
`SDMCDRM` means the DRM key management system of SDMC.
                     * @return Scheme Valid values: `CustomDRMKeys` (default value), `SDMCDRM`
`CustomDRMKeys` means encryption keys customized by users.
`SDMCDRM` means the DRM key management system of SDMC.
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置Valid values: `CustomDRMKeys` (default value), `SDMCDRM`
`CustomDRMKeys` means encryption keys customized by users.
`SDMCDRM` means the DRM key management system of SDMC.
                     * @param _scheme Valid values: `CustomDRMKeys` (default value), `SDMCDRM`
`CustomDRMKeys` means encryption keys customized by users.
`SDMCDRM` means the DRM key management system of SDMC.
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
                     * 获取If `Scheme` is set to `CustomDRMKeys`, this parameter is required.
If `Scheme` is set to `SDMCDRM`, this parameter is optional. It supports digits, letters, hyphens, and underscores and must contain 1 to 36 characters. If it is not specified, the value of `ChannelId` will be used.
                     * @return ContentId If `Scheme` is set to `CustomDRMKeys`, this parameter is required.
If `Scheme` is set to `SDMCDRM`, this parameter is optional. It supports digits, letters, hyphens, and underscores and must contain 1 to 36 characters. If it is not specified, the value of `ChannelId` will be used.
                     * 
                     */
                    std::string GetContentId() const;

                    /**
                     * 设置If `Scheme` is set to `CustomDRMKeys`, this parameter is required.
If `Scheme` is set to `SDMCDRM`, this parameter is optional. It supports digits, letters, hyphens, and underscores and must contain 1 to 36 characters. If it is not specified, the value of `ChannelId` will be used.
                     * @param _contentId If `Scheme` is set to `CustomDRMKeys`, this parameter is required.
If `Scheme` is set to `SDMCDRM`, this parameter is optional. It supports digits, letters, hyphens, and underscores and must contain 1 to 36 characters. If it is not specified, the value of `ChannelId` will be used.
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
                     * 获取The key customized by the content user, which is required when `Scheme` is set to CustomDRMKeys.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Keys The key customized by the content user, which is required when `Scheme` is set to CustomDRMKeys.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DrmKey> GetKeys() const;

                    /**
                     * 设置The key customized by the content user, which is required when `Scheme` is set to CustomDRMKeys.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _keys The key customized by the content user, which is required when `Scheme` is set to CustomDRMKeys.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取SDMC key configuration. This parameter is used when `Scheme` is set to `SDMCDRM`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return SDMCSettings SDMC key configuration. This parameter is used when `Scheme` is set to `SDMCDRM`.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    SDMCSettingsInfo GetSDMCSettings() const;

                    /**
                     * 设置SDMC key configuration. This parameter is used when `Scheme` is set to `SDMCDRM`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _sDMCSettings SDMC key configuration. This parameter is used when `Scheme` is set to `SDMCDRM`.
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取The DRM type. Valid values: `FAIRPLAY`, `WIDEVINE`, `AES128`. For HLS, this can be `FAIRPLAY` or `AES128`. For DASH, this can only be `WIDEVINE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DrmType The DRM type. Valid values: `FAIRPLAY`, `WIDEVINE`, `AES128`. For HLS, this can be `FAIRPLAY` or `AES128`. For DASH, this can only be `WIDEVINE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置The DRM type. Valid values: `FAIRPLAY`, `WIDEVINE`, `AES128`. For HLS, this can be `FAIRPLAY` or `AES128`. For DASH, this can only be `WIDEVINE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _drmType The DRM type. Valid values: `FAIRPLAY`, `WIDEVINE`, `AES128`. For HLS, this can be `FAIRPLAY` or `AES128`. For DASH, this can only be `WIDEVINE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * Whether to enable DRM encryption. Valid values: `CLOSE` (disable), `OPEN` (enable). Default value: `CLOSE`
DRM encryption is supported only for HLS, DASH, HLS_ARCHIVE, DASH_ARCHIVE, HLS_MEDIAPACKAGE, and DASH_MEDIAPACKAGE outputs.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Valid values: `CustomDRMKeys` (default value), `SDMCDRM`
`CustomDRMKeys` means encryption keys customized by users.
`SDMCDRM` means the DRM key management system of SDMC.
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * If `Scheme` is set to `CustomDRMKeys`, this parameter is required.
If `Scheme` is set to `SDMCDRM`, this parameter is optional. It supports digits, letters, hyphens, and underscores and must contain 1 to 36 characters. If it is not specified, the value of `ChannelId` will be used.
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                    /**
                     * The key customized by the content user, which is required when `Scheme` is set to CustomDRMKeys.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DrmKey> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * SDMC key configuration. This parameter is used when `Scheme` is set to `SDMCDRM`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    SDMCSettingsInfo m_sDMCSettings;
                    bool m_sDMCSettingsHasBeenSet;

                    /**
                     * The DRM type. Valid values: `FAIRPLAY`, `WIDEVINE`, `AES128`. For HLS, this can be `FAIRPLAY` or `AES128`. For DASH, this can only be `WIDEVINE`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DRMSETTINGSINFO_H_
