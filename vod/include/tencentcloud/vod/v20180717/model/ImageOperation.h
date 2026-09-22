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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEOPERATION_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImageScale.h>
#include <tencentcloud/vod/v20180717/model/ImageCenterCut.h>
#include <tencentcloud/vod/v20180717/model/ImageBlur.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * One image processing operation.
                */
                class ImageOperation : public AbstractModel
                {
                public:
                    ImageOperation();
                    ~ImageOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image processing type. Optional types:
<li>Scale: Image thumbnail processing;</li>
<li>CenterCut: image cropping;</li>
<li>Blur: fuzzily process an image.</li>
                     * @return Type Image processing type. Optional types:
<li>Scale: Image thumbnail processing;</li>
<li>CenterCut: image cropping;</li>
<li>Blur: fuzzily process an image.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Image processing type. Optional types:
<li>Scale: Image thumbnail processing;</li>
<li>CenterCut: image cropping;</li>
<li>Blur: fuzzily process an image.</li>
                     * @param _type Image processing type. Optional types:
<li>Scale: Image thumbnail processing;</li>
<li>CenterCut: image cropping;</li>
<li>Blur: fuzzily process an image.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Image thumbnail processing. This parameter is valid only when Type is Scale.
                     * @return Scale Image thumbnail processing. This parameter is valid only when Type is Scale.
                     * 
                     */
                    ImageScale GetScale() const;

                    /**
                     * 设置Image thumbnail processing. This parameter is valid only when Type is Scale.
                     * @param _scale Image thumbnail processing. This parameter is valid only when Type is Scale.
                     * 
                     */
                    void SetScale(const ImageScale& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                    /**
                     * 获取Image crop processing. Valid only when Type is CenterCut.
                     * @return CenterCut Image crop processing. Valid only when Type is CenterCut.
                     * 
                     */
                    ImageCenterCut GetCenterCut() const;

                    /**
                     * 设置Image crop processing. Valid only when Type is CenterCut.
                     * @param _centerCut Image crop processing. Valid only when Type is CenterCut.
                     * 
                     */
                    void SetCenterCut(const ImageCenterCut& _centerCut);

                    /**
                     * 判断参数 CenterCut 是否已赋值
                     * @return CenterCut 是否已赋值
                     * 
                     */
                    bool CenterCutHasBeenSet() const;

                    /**
                     * 获取Blur the image. This parameter is valid only when Type is Blur.
                     * @return Blur Blur the image. This parameter is valid only when Type is Blur.
                     * 
                     */
                    ImageBlur GetBlur() const;

                    /**
                     * 设置Blur the image. This parameter is valid only when Type is Blur.
                     * @param _blur Blur the image. This parameter is valid only when Type is Blur.
                     * 
                     */
                    void SetBlur(const ImageBlur& _blur);

                    /**
                     * 判断参数 Blur 是否已赋值
                     * @return Blur 是否已赋值
                     * 
                     */
                    bool BlurHasBeenSet() const;

                private:

                    /**
                     * Image processing type. Optional types:
<li>Scale: Image thumbnail processing;</li>
<li>CenterCut: image cropping;</li>
<li>Blur: fuzzily process an image.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Image thumbnail processing. This parameter is valid only when Type is Scale.
                     */
                    ImageScale m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * Image crop processing. Valid only when Type is CenterCut.
                     */
                    ImageCenterCut m_centerCut;
                    bool m_centerCutHasBeenSet;

                    /**
                     * Blur the image. This parameter is valid only when Type is Blur.
                     */
                    ImageBlur m_blur;
                    bool m_blurHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEOPERATION_H_
