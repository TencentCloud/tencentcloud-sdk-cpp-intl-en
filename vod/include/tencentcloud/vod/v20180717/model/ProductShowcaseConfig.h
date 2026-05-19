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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PRODUCTSHOWCASECONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PRODUCTSHOWCASECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AI-generated product 360-degree show video parameter configuration
                */
                class ProductShowcaseConfig : public AbstractModel
                {
                public:
                    ProductShowcaseConfig();
                    ~ProductShowcaseConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Camera movement method. Supported values: AutoMatch, ZoomIn, ZoomOut, GlideRight, GlideLeft, CraneDown.
                     * @return CameraMovement Camera movement method. Supported values: AutoMatch, ZoomIn, ZoomOut, GlideRight, GlideLeft, CraneDown.
                     * 
                     */
                    std::string GetCameraMovement() const;

                    /**
                     * 设置Camera movement method. Supported values: AutoMatch, ZoomIn, ZoomOut, GlideRight, GlideLeft, CraneDown.
                     * @param _cameraMovement Camera movement method. Supported values: AutoMatch, ZoomIn, ZoomOut, GlideRight, GlideLeft, CraneDown.
                     * 
                     */
                    void SetCameraMovement(const std::string& _cameraMovement);

                    /**
                     * 判断参数 CameraMovement 是否已赋值
                     * @return CameraMovement 是否已赋值
                     * 
                     */
                    bool CameraMovementHasBeenSet() const;

                private:

                    /**
                     * Camera movement method. Supported values: AutoMatch, ZoomIn, ZoomOut, GlideRight, GlideLeft, CraneDown.
                     */
                    std::string m_cameraMovement;
                    bool m_cameraMovementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PRODUCTSHOWCASECONFIG_H_
