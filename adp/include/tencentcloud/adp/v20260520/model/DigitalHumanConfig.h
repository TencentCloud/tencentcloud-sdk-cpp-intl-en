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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DIGITALHUMANCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DIGITALHUMANCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Digital human configuration
                */
                class DigitalHumanConfig : public AbstractModel
                {
                public:
                    DigitalHumanConfig();
                    ~DigitalHumanConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Digital human avatar asset id
                     * @return AssetKey Digital human avatar asset id
                     * 
                     */
                    std::string GetAssetKey() const;

                    /**
                     * 设置Digital human avatar asset id
                     * @param _assetKey Digital human avatar asset id
                     * 
                     */
                    void SetAssetKey(const std::string& _assetKey);

                    /**
                     * 判断参数 AssetKey 是否已赋值
                     * @return AssetKey 是否已赋值
                     * 
                     */
                    bool AssetKeyHasBeenSet() const;

                    /**
                     * 获取Digital human image
                     * @return Avatar Digital human image
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置Digital human image
                     * @param _avatar Digital human image
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取Digital human avatar name
                     * @return Name Digital human avatar name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Digital human avatar name
                     * @param _name Digital human avatar name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Preview address of the digital human
                     * @return PreviewUrl Preview address of the digital human
                     * 
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 设置Preview address of the digital human
                     * @param _previewUrl Preview address of the digital human
                     * 
                     */
                    void SetPreviewUrl(const std::string& _previewUrl);

                    /**
                     * 判断参数 PreviewUrl 是否已赋值
                     * @return PreviewUrl 是否已赋值
                     * 
                     */
                    bool PreviewUrlHasBeenSet() const;

                private:

                    /**
                     * Digital human avatar asset id
                     */
                    std::string m_assetKey;
                    bool m_assetKeyHasBeenSet;

                    /**
                     * Digital human image
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * Digital human avatar name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Preview address of the digital human
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DIGITALHUMANCONFIG_H_
