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


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Drm配置信息，目前只对HLS和DASH有效。
                */
                class DrmSettingsInfo : public AbstractModel
                {
                public:
                    DrmSettingsInfo();
                    ~DrmSettingsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return State 
                     */
                    std::string GetState() const;

                    /**
                     * 设置
                     * @param State 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取When `Scheme` is set to TencentDRM, this parameter should be set to the `ContentId` of DRM encryption, and if this parameter is left empty, a `ContentId` will be automatically created. For more information, please see [here](https://cloud.tencent.com/document/product/1000/40960).
When `Scheme` is set to CustomDRMKeys, this parameter is required and should be specified by the user.
                     * @return ContentId When `Scheme` is set to TencentDRM, this parameter should be set to the `ContentId` of DRM encryption, and if this parameter is left empty, a `ContentId` will be automatically created. For more information, please see [here](https://cloud.tencent.com/document/product/1000/40960).
When `Scheme` is set to CustomDRMKeys, this parameter is required and should be specified by the user.
                     */
                    std::string GetContentId() const;

                    /**
                     * 设置When `Scheme` is set to TencentDRM, this parameter should be set to the `ContentId` of DRM encryption, and if this parameter is left empty, a `ContentId` will be automatically created. For more information, please see [here](https://cloud.tencent.com/document/product/1000/40960).
When `Scheme` is set to CustomDRMKeys, this parameter is required and should be specified by the user.
                     * @param ContentId When `Scheme` is set to TencentDRM, this parameter should be set to the `ContentId` of DRM encryption, and if this parameter is left empty, a `ContentId` will be automatically created. For more information, please see [here](https://cloud.tencent.com/document/product/1000/40960).
When `Scheme` is set to CustomDRMKeys, this parameter is required and should be specified by the user.
                     */
                    void SetContentId(const std::string& _contentId);

                    /**
                     * 判断参数 ContentId 是否已赋值
                     * @return ContentId 是否已赋值
                     */
                    bool ContentIdHasBeenSet() const;

                    /**
                     * 获取Valid values: TencentDRM, CustomDRMKeys. If this parameter is left empty, TencentDRM will be used by default.
TencentDRM refers to Tencent digital rights management (DRM) encryption. For more information, please see [here](https://cloud.tencent.com/solution/drm).
CustomDRMKeys refers to an encryption key customized by the user.
                     * @return Scheme Valid values: TencentDRM, CustomDRMKeys. If this parameter is left empty, TencentDRM will be used by default.
TencentDRM refers to Tencent digital rights management (DRM) encryption. For more information, please see [here](https://cloud.tencent.com/solution/drm).
CustomDRMKeys refers to an encryption key customized by the user.
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置Valid values: TencentDRM, CustomDRMKeys. If this parameter is left empty, TencentDRM will be used by default.
TencentDRM refers to Tencent digital rights management (DRM) encryption. For more information, please see [here](https://cloud.tencent.com/solution/drm).
CustomDRMKeys refers to an encryption key customized by the user.
                     * @param Scheme Valid values: TencentDRM, CustomDRMKeys. If this parameter is left empty, TencentDRM will be used by default.
TencentDRM refers to Tencent digital rights management (DRM) encryption. For more information, please see [here](https://cloud.tencent.com/solution/drm).
CustomDRMKeys refers to an encryption key customized by the user.
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取The key customized by the content user, which is required when `Scheme` is set to CustomDRMKeys.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Keys The key customized by the content user, which is required when `Scheme` is set to CustomDRMKeys.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DrmKey> GetKeys() const;

                    /**
                     * 设置The key customized by the content user, which is required when `Scheme` is set to CustomDRMKeys.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Keys The key customized by the content user, which is required when `Scheme` is set to CustomDRMKeys.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetKeys(const std::vector<DrmKey>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     */
                    bool KeysHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * When `Scheme` is set to TencentDRM, this parameter should be set to the `ContentId` of DRM encryption, and if this parameter is left empty, a `ContentId` will be automatically created. For more information, please see [here](https://cloud.tencent.com/document/product/1000/40960).
When `Scheme` is set to CustomDRMKeys, this parameter is required and should be specified by the user.
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                    /**
                     * Valid values: TencentDRM, CustomDRMKeys. If this parameter is left empty, TencentDRM will be used by default.
TencentDRM refers to Tencent digital rights management (DRM) encryption. For more information, please see [here](https://cloud.tencent.com/solution/drm).
CustomDRMKeys refers to an encryption key customized by the user.
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * The key customized by the content user, which is required when `Scheme` is set to CustomDRMKeys.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DrmKey> m_keys;
                    bool m_keysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DRMSETTINGSINFO_H_
