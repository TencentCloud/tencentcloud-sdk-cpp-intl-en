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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMELEMENTREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMELEMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ElementReferInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateAigcCustomElement request structure.
                */
                class CreateAigcCustomElementRequest : public AbstractModel
                {
                public:
                    CreateAigcCustomElementRequest();
                    ~CreateAigcCustomElementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Subject name cannot exceed 20 characters.
                     * @return ElementName Subject name cannot exceed 20 characters.
                     * 
                     */
                    std::string GetElementName() const;

                    /**
                     * 设置Subject name cannot exceed 20 characters.
                     * @param _elementName Subject name cannot exceed 20 characters.
                     * 
                     */
                    void SetElementName(const std::string& _elementName);

                    /**
                     * 判断参数 ElementName 是否已赋值
                     * @return ElementName 是否已赋值
                     * 
                     */
                    bool ElementNameHasBeenSet() const;

                    /**
                     * 获取Subject description.

Up to 100 characters.
                     * @return ElementDescription Subject description.

Up to 100 characters.
                     * 
                     */
                    std::string GetElementDescription() const;

                    /**
                     * 设置Subject description.

Up to 100 characters.
                     * @param _elementDescription Subject description.

Up to 100 characters.
                     * 
                     */
                    void SetElementDescription(const std::string& _elementDescription);

                    /**
                     * 判断参数 ElementDescription 是否已赋值
                     * @return ElementDescription 是否已赋值
                     * 
                     */
                    bool ElementDescriptionHasBeenSet() const;

                    /**
                     * 获取Front reference image of the subject.
Support input image URL (underwrite accessible).
Image format. Valid values: .jpg, .jpeg, and .png.
The image file size must not exceed 10MB, with image width and height not less than 300px and image aspect ratio between 1:2.5 and 2.5:1.
                     * @return ElementFrontalImage Front reference image of the subject.
Support input image URL (underwrite accessible).
Image format. Valid values: .jpg, .jpeg, and .png.
The image file size must not exceed 10MB, with image width and height not less than 300px and image aspect ratio between 1:2.5 and 2.5:1.
                     * 
                     */
                    std::string GetElementFrontalImage() const;

                    /**
                     * 设置Front reference image of the subject.
Support input image URL (underwrite accessible).
Image format. Valid values: .jpg, .jpeg, and .png.
The image file size must not exceed 10MB, with image width and height not less than 300px and image aspect ratio between 1:2.5 and 2.5:1.
                     * @param _elementFrontalImage Front reference image of the subject.
Support input image URL (underwrite accessible).
Image format. Valid values: .jpg, .jpeg, and .png.
The image file size must not exceed 10MB, with image width and height not less than 300px and image aspect ratio between 1:2.5 and 2.5:1.
                     * 
                     */
                    void SetElementFrontalImage(const std::string& _elementFrontalImage);

                    /**
                     * 判断参数 ElementFrontalImage 是否已赋值
                     * @return ElementFrontalImage 是否已赋值
                     * 
                     */
                    bool ElementFrontalImageHasBeenSet() const;

                    /**
                     * 获取Reference list of other subjects. Upload multiple subject reference images from different angles to define the subject appearance. Upload at least 1 reference image, up to 3 reference images.
                     * @return ElementReferList Reference list of other subjects. Upload multiple subject reference images from different angles to define the subject appearance. Upload at least 1 reference image, up to 3 reference images.
                     * 
                     */
                    std::vector<ElementReferInfo> GetElementReferList() const;

                    /**
                     * 设置Reference list of other subjects. Upload multiple subject reference images from different angles to define the subject appearance. Upload at least 1 reference image, up to 3 reference images.
                     * @param _elementReferList Reference list of other subjects. Upload multiple subject reference images from different angles to define the subject appearance. Upload at least 1 reference image, up to 3 reference images.
                     * 
                     */
                    void SetElementReferList(const std::vector<ElementReferInfo>& _elementReferList);

                    /**
                     * 判断参数 ElementReferList 是否已赋值
                     * @return ElementReferList 是否已赋值
                     * 
                     */
                    bool ElementReferListHasBeenSet() const;

                private:

                    /**
                     * Subject name cannot exceed 20 characters.
                     */
                    std::string m_elementName;
                    bool m_elementNameHasBeenSet;

                    /**
                     * Subject description.

Up to 100 characters.
                     */
                    std::string m_elementDescription;
                    bool m_elementDescriptionHasBeenSet;

                    /**
                     * Front reference image of the subject.
Support input image URL (underwrite accessible).
Image format. Valid values: .jpg, .jpeg, and .png.
The image file size must not exceed 10MB, with image width and height not less than 300px and image aspect ratio between 1:2.5 and 2.5:1.
                     */
                    std::string m_elementFrontalImage;
                    bool m_elementFrontalImageHasBeenSet;

                    /**
                     * Reference list of other subjects. Upload multiple subject reference images from different angles to define the subject appearance. Upload at least 1 reference image, up to 3 reference images.
                     */
                    std::vector<ElementReferInfo> m_elementReferList;
                    bool m_elementReferListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMELEMENTREQUEST_H_
