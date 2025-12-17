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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_VIEWIMAGE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_VIEWIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * Multi-Perspective images.
                */
                class ViewImage : public AbstractModel
                {
                public:
                    ViewImage();
                    ~ViewImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the viewing angle type.
Valid values: back, left, right.
                     * @return ViewType Specifies the viewing angle type.
Valid values: back, left, right.
                     * 
                     */
                    std::string GetViewType() const;

                    /**
                     * 设置Specifies the viewing angle type.
Valid values: back, left, right.
                     * @param _viewType Specifies the viewing angle type.
Valid values: back, left, right.
                     * 
                     */
                    void SetViewType(const std::string& _viewType);

                    /**
                     * 判断参数 ViewType 是否已赋值
                     * @return ViewType 是否已赋值
                     * 
                     */
                    bool ViewTypeHasBeenSet() const;

                    /**
                     * 获取Image Url.
                     * @return ViewImageUrl Image Url.
                     * 
                     */
                    std::string GetViewImageUrl() const;

                    /**
                     * 设置Image Url.
                     * @param _viewImageUrl Image Url.
                     * 
                     */
                    void SetViewImageUrl(const std::string& _viewImageUrl);

                    /**
                     * 判断参数 ViewImageUrl 是否已赋值
                     * @return ViewImageUrl 是否已赋值
                     * 
                     */
                    bool ViewImageUrlHasBeenSet() const;

                    /**
                     * 获取base64 address of the image.
                     * @return ViewImageBase64 base64 address of the image.
                     * 
                     */
                    std::string GetViewImageBase64() const;

                    /**
                     * 设置base64 address of the image.
                     * @param _viewImageBase64 base64 address of the image.
                     * 
                     */
                    void SetViewImageBase64(const std::string& _viewImageBase64);

                    /**
                     * 判断参数 ViewImageBase64 是否已赋值
                     * @return ViewImageBase64 是否已赋值
                     * 
                     */
                    bool ViewImageBase64HasBeenSet() const;

                private:

                    /**
                     * Specifies the viewing angle type.
Valid values: back, left, right.
                     */
                    std::string m_viewType;
                    bool m_viewTypeHasBeenSet;

                    /**
                     * Image Url.
                     */
                    std::string m_viewImageUrl;
                    bool m_viewImageUrlHasBeenSet;

                    /**
                     * base64 address of the image.
                     */
                    std::string m_viewImageBase64;
                    bool m_viewImageBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_VIEWIMAGE_H_
