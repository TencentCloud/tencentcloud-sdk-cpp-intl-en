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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYIMAGEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYIMAGEATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
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
                     * 获取Image ID, such as `img-gvbnzy6f`. You can obtain the image ID in the following ways:<li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response.</li><li>Obtain it in the [Image console](https://console.cloud.tencent.com/cvm/image).</li>
                     * @return ImageId Image ID, such as `img-gvbnzy6f`. You can obtain the image ID in the following ways:<li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response.</li><li>Obtain it in the [Image console](https://console.cloud.tencent.com/cvm/image).</li>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID, such as `img-gvbnzy6f`. You can obtain the image ID in the following ways:<li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response.</li><li>Obtain it in the [Image console](https://console.cloud.tencent.com/cvm/image).</li>
                     * @param _imageId Image ID, such as `img-gvbnzy6f`. You can obtain the image ID in the following ways:<li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response.</li><li>Obtain it in the [Image console](https://console.cloud.tencent.com/cvm/image).</li>
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
                     * 获取New image name, which should meet the following requirements:<li>It should not exceed 60 characters.</li><li>It should be unique.</li>
                     * @return ImageName New image name, which should meet the following requirements:<li>It should not exceed 60 characters.</li><li>It should be unique.</li>
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置New image name, which should meet the following requirements:<li>It should not exceed 60 characters.</li><li>It should be unique.</li>
                     * @param _imageName New image name, which should meet the following requirements:<li>It should not exceed 60 characters.</li><li>It should be unique.</li>
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
                     * 获取New image description, which should meet the following requirement:<li>It should not exceed 256 characters.</li>
                     * @return ImageDescription New image description, which should meet the following requirement:<li>It should not exceed 256 characters.</li>
                     * 
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置New image description, which should meet the following requirement:<li>It should not exceed 256 characters.</li>
                     * @param _imageDescription New image description, which should meet the following requirement:<li>It should not exceed 256 characters.</li>
                     * 
                     */
                    void SetImageDescription(const std::string& _imageDescription);

                    /**
                     * 判断参数 ImageDescription 是否已赋值
                     * @return ImageDescription 是否已赋值
                     * 
                     */
                    bool ImageDescriptionHasBeenSet() const;

                    /**
                     * 获取Sets the image family;
                     * @return ImageFamily Sets the image family;
                     * 
                     */
                    std::string GetImageFamily() const;

                    /**
                     * 设置Sets the image family;
                     * @param _imageFamily Sets the image family;
                     * 
                     */
                    void SetImageFamily(const std::string& _imageFamily);

                    /**
                     * 判断参数 ImageFamily 是否已赋值
                     * @return ImageFamily 是否已赋值
                     * 
                     */
                    bool ImageFamilyHasBeenSet() const;

                    /**
                     * 获取Sets whether the image is deprecated;
                     * @return ImageDeprecated Sets whether the image is deprecated;
                     * 
                     */
                    bool GetImageDeprecated() const;

                    /**
                     * 设置Sets whether the image is deprecated;
                     * @param _imageDeprecated Sets whether the image is deprecated;
                     * 
                     */
                    void SetImageDeprecated(const bool& _imageDeprecated);

                    /**
                     * 判断参数 ImageDeprecated 是否已赋值
                     * @return ImageDeprecated 是否已赋值
                     * 
                     */
                    bool ImageDeprecatedHasBeenSet() const;

                private:

                    /**
                     * Image ID, such as `img-gvbnzy6f`. You can obtain the image ID in the following ways:<li>Call the [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) API and find the value of `ImageId` in the response.</li><li>Obtain it in the [Image console](https://console.cloud.tencent.com/cvm/image).</li>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * New image name, which should meet the following requirements:<li>It should not exceed 60 characters.</li><li>It should be unique.</li>
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * New image description, which should meet the following requirement:<li>It should not exceed 256 characters.</li>
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                    /**
                     * Sets the image family;
                     */
                    std::string m_imageFamily;
                    bool m_imageFamilyHasBeenSet;

                    /**
                     * Sets whether the image is deprecated;
                     */
                    bool m_imageDeprecated;
                    bool m_imageDeprecatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYIMAGEATTRIBUTEREQUEST_H_
