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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_IMAGETOIMAGERESPONSE_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_IMAGETOIMAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            namespace Model
            {
                /**
                * ImageToImage response structure.
                */
                class ImageToImageResponse : public AbstractModel
                {
                public:
                    ImageToImageResponse();
                    ~ImageToImageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Different content is returned depending on the input parameter RspImgType.
If the value is base64, the Base64 code of the generated image is returned.
If the value is url, the URL of the generated image is returned. The URL is valid for 1 hour. Save it in time.
                     * @return ResultImage Different content is returned depending on the input parameter RspImgType.
If the value is base64, the Base64 code of the generated image is returned.
If the value is url, the URL of the generated image is returned. The URL is valid for 1 hour. Save it in time.
                     * 
                     */
                    std::string GetResultImage() const;

                    /**
                     * 判断参数 ResultImage 是否已赋值
                     * @return ResultImage 是否已赋值
                     * 
                     */
                    bool ResultImageHasBeenSet() const;

                private:

                    /**
                     * Different content is returned depending on the input parameter RspImgType.
If the value is base64, the Base64 code of the generated image is returned.
If the value is url, the URL of the generated image is returned. The URL is valid for 1 hour. Save it in time.
                     */
                    std::string m_resultImage;
                    bool m_resultImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_IMAGETOIMAGERESPONSE_H_
