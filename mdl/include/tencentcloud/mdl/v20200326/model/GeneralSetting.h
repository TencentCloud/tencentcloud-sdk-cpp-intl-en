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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_GENERALSETTING_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_GENERALSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/StaticImageSettings.h>
#include <tencentcloud/mdl/v20200326/model/MotionGraphicsSetting.h>
#include <tencentcloud/mdl/v20200326/model/ThumbnailSettings.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * General setting.
                */
                class GeneralSetting : public AbstractModel
                {
                public:
                    GeneralSetting();
                    ~GeneralSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Static graphic overlay configuration.
                     * @return StaticImageSettings Static graphic overlay configuration.
                     * 
                     */
                    StaticImageSettings GetStaticImageSettings() const;

                    /**
                     * 设置Static graphic overlay configuration.
                     * @param _staticImageSettings Static graphic overlay configuration.
                     * 
                     */
                    void SetStaticImageSettings(const StaticImageSettings& _staticImageSettings);

                    /**
                     * 判断参数 StaticImageSettings 是否已赋值
                     * @return StaticImageSettings 是否已赋值
                     * 
                     */
                    bool StaticImageSettingsHasBeenSet() const;

                    /**
                     * 获取Dynamic graphic overlay configuration.
                     * @return MotionGraphicsSettings Dynamic graphic overlay configuration.
                     * 
                     */
                    MotionGraphicsSetting GetMotionGraphicsSettings() const;

                    /**
                     * 设置Dynamic graphic overlay configuration.
                     * @param _motionGraphicsSettings Dynamic graphic overlay configuration.
                     * 
                     */
                    void SetMotionGraphicsSettings(const MotionGraphicsSetting& _motionGraphicsSettings);

                    /**
                     * 判断参数 MotionGraphicsSettings 是否已赋值
                     * @return MotionGraphicsSettings 是否已赋值
                     * 
                     */
                    bool MotionGraphicsSettingsHasBeenSet() const;

                    /**
                     * 获取Thumbnail Configuration.
                     * @return ThumbnailSettings Thumbnail Configuration.
                     * 
                     */
                    ThumbnailSettings GetThumbnailSettings() const;

                    /**
                     * 设置Thumbnail Configuration.
                     * @param _thumbnailSettings Thumbnail Configuration.
                     * 
                     */
                    void SetThumbnailSettings(const ThumbnailSettings& _thumbnailSettings);

                    /**
                     * 判断参数 ThumbnailSettings 是否已赋值
                     * @return ThumbnailSettings 是否已赋值
                     * 
                     */
                    bool ThumbnailSettingsHasBeenSet() const;

                private:

                    /**
                     * Static graphic overlay configuration.
                     */
                    StaticImageSettings m_staticImageSettings;
                    bool m_staticImageSettingsHasBeenSet;

                    /**
                     * Dynamic graphic overlay configuration.
                     */
                    MotionGraphicsSetting m_motionGraphicsSettings;
                    bool m_motionGraphicsSettingsHasBeenSet;

                    /**
                     * Thumbnail Configuration.
                     */
                    ThumbnailSettings m_thumbnailSettings;
                    bool m_thumbnailSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_GENERALSETTING_H_
