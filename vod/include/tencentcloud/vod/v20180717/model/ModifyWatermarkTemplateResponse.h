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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYWATERMARKTEMPLATERESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYWATERMARKTEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyWatermarkTemplate response structure.
                */
                class ModifyWatermarkTemplateResponse : public AbstractModel
                {
                public:
                    ModifyWatermarkTemplateResponse();
                    ~ModifyWatermarkTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Image watermark address. This field has a value only when `ImageTemplate.ImageContent` is not empty.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ImageUrl Image watermark address. This field has a value only when `ImageTemplate.ImageContent` is not empty.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     */
                    bool ImageUrlHasBeenSet() const;

                private:

                    /**
                     * Image watermark address. This field has a value only when `ImageTemplate.ImageContent` is not empty.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYWATERMARKTEMPLATERESPONSE_H_
