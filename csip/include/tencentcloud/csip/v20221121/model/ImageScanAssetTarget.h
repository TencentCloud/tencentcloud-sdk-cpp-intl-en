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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESCANASSETTARGET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESCANASSETTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ImageScanAutoMatchConfig.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Image scanning mirror matching configuration
                */
                class ImageScanAssetTarget : public AbstractModel
                {
                public:
                    ImageScanAssetTarget();
                    ~ImageScanAssetTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Target image match mode</p><p>Enumeration values:</p><ul><li>ALL: all images</li><li>MANUAL: select</li><li>AUTO_MATCH: auto-match</li></ul>
                     * @return Mode <p>Target image match mode</p><p>Enumeration values:</p><ul><li>ALL: all images</li><li>MANUAL: select</li><li>AUTO_MATCH: auto-match</li></ul>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>Target image match mode</p><p>Enumeration values:</p><ul><li>ALL: all images</li><li>MANUAL: select</li><li>AUTO_MATCH: auto-match</li></ul>
                     * @param _mode <p>Target image match mode</p><p>Enumeration values:</p><ul><li>ALL: all images</li><li>MANUAL: select</li><li>AUTO_MATCH: auto-match</li></ul>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>Image id excluded from scan in mirror mode for all</p>
                     * @return ExcludeImages <p>Image id excluded from scan in mirror mode for all</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeImages() const;

                    /**
                     * 设置<p>Image id excluded from scan in mirror mode for all</p>
                     * @param _excludeImages <p>Image id excluded from scan in mirror mode for all</p>
                     * 
                     */
                    void SetExcludeImages(const std::vector<std::string>& _excludeImages);

                    /**
                     * 判断参数 ExcludeImages 是否已赋值
                     * @return ExcludeImages 是否已赋值
                     * 
                     */
                    bool ExcludeImagesHasBeenSet() const;

                    /**
                     * 获取<p>id of the mirror that needs to be scanned in manual selection mode</p>
                     * @return Images <p>id of the mirror that needs to be scanned in manual selection mode</p>
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置<p>id of the mirror that needs to be scanned in manual selection mode</p>
                     * @param _images <p>id of the mirror that needs to be scanned in manual selection mode</p>
                     * 
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取<p>Matching configuration in auto-match mode</p>
                     * @return AutoMatch <p>Matching configuration in auto-match mode</p>
                     * 
                     */
                    ImageScanAutoMatchConfig GetAutoMatch() const;

                    /**
                     * 设置<p>Matching configuration in auto-match mode</p>
                     * @param _autoMatch <p>Matching configuration in auto-match mode</p>
                     * 
                     */
                    void SetAutoMatch(const ImageScanAutoMatchConfig& _autoMatch);

                    /**
                     * 判断参数 AutoMatch 是否已赋值
                     * @return AutoMatch 是否已赋值
                     * 
                     */
                    bool AutoMatchHasBeenSet() const;

                private:

                    /**
                     * <p>Target image match mode</p><p>Enumeration values:</p><ul><li>ALL: all images</li><li>MANUAL: select</li><li>AUTO_MATCH: auto-match</li></ul>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>Image id excluded from scan in mirror mode for all</p>
                     */
                    std::vector<std::string> m_excludeImages;
                    bool m_excludeImagesHasBeenSet;

                    /**
                     * <p>id of the mirror that needs to be scanned in manual selection mode</p>
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * <p>Matching configuration in auto-match mode</p>
                     */
                    ImageScanAutoMatchConfig m_autoMatch;
                    bool m_autoMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESCANASSETTARGET_H_
