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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEWATERMARKINPUTFORUPDATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEWATERMARKINPUTFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Input parameter of an image watermarking template
                */
                class ImageWatermarkInputForUpdate : public AbstractModel
                {
                public:
                    ImageWatermarkInputForUpdate();
                    ~ImageWatermarkInputForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取String generated by [Base64-encoding](https://tools.ietf.org/html/rfc4648) a watermark image. JPEG and PNG images are supported.
                     * @return ImageContent String generated by [Base64-encoding](https://tools.ietf.org/html/rfc4648) a watermark image. JPEG and PNG images are supported.
                     */
                    std::string GetImageContent() const;

                    /**
                     * 设置String generated by [Base64-encoding](https://tools.ietf.org/html/rfc4648) a watermark image. JPEG and PNG images are supported.
                     * @param ImageContent String generated by [Base64-encoding](https://tools.ietf.org/html/rfc4648) a watermark image. JPEG and PNG images are supported.
                     */
                    void SetImageContent(const std::string& _imageContent);

                    /**
                     * 判断参数 ImageContent 是否已赋值
                     * @return ImageContent 是否已赋值
                     */
                    bool ImageContentHasBeenSet() const;

                    /**
                     * 获取Watermark width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the watermark will be the specified percentage of the video width; for example, `10%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
                     * @return Width Watermark width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the watermark will be the specified percentage of the video width; for example, `10%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置Watermark width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the watermark will be the specified percentage of the video width; for example, `10%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
                     * @param Width Watermark width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the watermark will be the specified percentage of the video width; for example, `10%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
                     */
                    void SetWidth(const std::string& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Watermark height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the watermark will be the specified percentage of the video height; for example, `10%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
`0px` means that `Height` will be proportionally scaled according to the video width.
                     * @return Height Watermark height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the watermark will be the specified percentage of the video height; for example, `10%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
`0px` means that `Height` will be proportionally scaled according to the video width.
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置Watermark height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the watermark will be the specified percentage of the video height; for example, `10%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
`0px` means that `Height` will be proportionally scaled according to the video width.
                     * @param Height Watermark height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the watermark will be the specified percentage of the video height; for example, `10%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
`0px` means that `Height` will be proportionally scaled according to the video width.
                     */
                    void SetHeight(const std::string& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * String generated by [Base64-encoding](https://tools.ietf.org/html/rfc4648) a watermark image. JPEG and PNG images are supported.
                     */
                    std::string m_imageContent;
                    bool m_imageContentHasBeenSet;

                    /**
                     * Watermark width. % and px formats are supported:
<li>If the string ends in %, the `Width` of the watermark will be the specified percentage of the video width; for example, `10%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Watermark height. % and px formats are supported:
<li>If the string ends in %, the `Height` of the watermark will be the specified percentage of the video height; for example, `10%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px.</li>
`0px` means that `Height` will be proportionally scaled according to the video width.
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEWATERMARKINPUTFORUPDATE_H_
