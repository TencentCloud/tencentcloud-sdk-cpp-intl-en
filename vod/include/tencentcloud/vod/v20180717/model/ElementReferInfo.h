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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ELEMENTREFERINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ELEMENTREFERINFO_H_

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
                * Subject reference information.
                */
                class ElementReferInfo : public AbstractModel
                {
                public:
                    ElementReferInfo();
                    ~ElementReferInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Reference image URLs of the subject from different perspectives.
Image format: .jpg, .jpeg, and .png are supported.
Image file size must not exceed 10 MB. Image width and height must not be less than 300 px. Image aspect ratio must be between 1:2.5 and 2.5:1.
                     * @return ImageUrl Reference image URLs of the subject from different perspectives.
Image format: .jpg, .jpeg, and .png are supported.
Image file size must not exceed 10 MB. Image width and height must not be less than 300 px. Image aspect ratio must be between 1:2.5 and 2.5:1.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置Reference image URLs of the subject from different perspectives.
Image format: .jpg, .jpeg, and .png are supported.
Image file size must not exceed 10 MB. Image width and height must not be less than 300 px. Image aspect ratio must be between 1:2.5 and 2.5:1.
                     * @param _imageUrl Reference image URLs of the subject from different perspectives.
Image format: .jpg, .jpeg, and .png are supported.
Image file size must not exceed 10 MB. Image width and height must not be less than 300 px. Image aspect ratio must be between 1:2.5 and 2.5:1.
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                private:

                    /**
                     * Reference image URLs of the subject from different perspectives.
Image format: .jpg, .jpeg, and .png are supported.
Image file size must not exceed 10 MB. Image width and height must not be less than 300 px. Image aspect ratio must be between 1:2.5 and 2.5:1.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ELEMENTREFERINFO_H_
