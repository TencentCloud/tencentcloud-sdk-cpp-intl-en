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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYIMAGEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYIMAGEATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyImageAttribute request structure.
                */
                class ModifyImageAttributeRequest : public AbstractModel
                {
                public:
                    ModifyImageAttributeRequest();
                    ~ModifyImageAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Image ID, such as `img-gvbnzy6f`
                     * @return ImageId Image ID, such as `img-gvbnzy6f`
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID, such as `img-gvbnzy6f`
                     * @param _imageId Image ID, such as `img-gvbnzy6f`
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取Image name, which must meet the following requirements:
It can contain up to 20 characters.
- The image name cannot be the same as existing image names.
                     * @return ImageName Image name, which must meet the following requirements:
It can contain up to 20 characters.
- The image name cannot be the same as existing image names.
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name, which must meet the following requirements:
It can contain up to 20 characters.
- The image name cannot be the same as existing image names.
                     * @param _imageName Image name, which must meet the following requirements:
It can contain up to 20 characters.
- The image name cannot be the same as existing image names.
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取Image description, which must meet the following requirements:
- It cannot exceed 60 characters.
                     * @return ImageDescription Image description, which must meet the following requirements:
- It cannot exceed 60 characters.
                     * 
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置Image description, which must meet the following requirements:
- It cannot exceed 60 characters.
                     * @param _imageDescription Image description, which must meet the following requirements:
- It cannot exceed 60 characters.
                     * 
                     */
                    void SetImageDescription(const std::string& _imageDescription);

                    /**
                     * 判断参数 ImageDescription 是否已赋值
                     * @return ImageDescription 是否已赋值
                     * 
                     */
                    bool ImageDescriptionHasBeenSet() const;

                private:

                    /**
                     * Image ID, such as `img-gvbnzy6f`
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Image name, which must meet the following requirements:
It can contain up to 20 characters.
- The image name cannot be the same as existing image names.
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Image description, which must meet the following requirements:
- It cannot exceed 60 characters.
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYIMAGEATTRIBUTEREQUEST_H_
