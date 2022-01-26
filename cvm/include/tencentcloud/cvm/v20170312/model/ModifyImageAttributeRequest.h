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
                     * 获取Image ID such as `img-gvbnzy6f`. You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response. <br><li>Look for the information in the [Image Console](https://console.cloud.tencent.com/cvm/image).
                     * @return ImageId Image ID such as `img-gvbnzy6f`. You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response. <br><li>Look for the information in the [Image Console](https://console.cloud.tencent.com/cvm/image).
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID such as `img-gvbnzy6f`. You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response. <br><li>Look for the information in the [Image Console](https://console.cloud.tencent.com/cvm/image).
                     * @param ImageId Image ID such as `img-gvbnzy6f`. You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response. <br><li>Look for the information in the [Image Console](https://console.cloud.tencent.com/cvm/image).
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取New image name, which must meet the following requirements: <br> <li>No more than 20 characters. <br> <li>Must be unique.
                     * @return ImageName New image name, which must meet the following requirements: <br> <li>No more than 20 characters. <br> <li>Must be unique.
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置New image name, which must meet the following requirements: <br> <li>No more than 20 characters. <br> <li>Must be unique.
                     * @param ImageName New image name, which must meet the following requirements: <br> <li>No more than 20 characters. <br> <li>Must be unique.
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取New image description, which must meet the following requirement: <br> <li> No more than 60 characters.
                     * @return ImageDescription New image description, which must meet the following requirement: <br> <li> No more than 60 characters.
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置New image description, which must meet the following requirement: <br> <li> No more than 60 characters.
                     * @param ImageDescription New image description, which must meet the following requirement: <br> <li> No more than 60 characters.
                     */
                    void SetImageDescription(const std::string& _imageDescription);

                    /**
                     * 判断参数 ImageDescription 是否已赋值
                     * @return ImageDescription 是否已赋值
                     */
                    bool ImageDescriptionHasBeenSet() const;

                private:

                    /**
                     * Image ID such as `img-gvbnzy6f`. You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response. <br><li>Look for the information in the [Image Console](https://console.cloud.tencent.com/cvm/image).
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * New image name, which must meet the following requirements: <br> <li>No more than 20 characters. <br> <li>Must be unique.
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * New image description, which must meet the following requirement: <br> <li> No more than 60 characters.
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYIMAGEATTRIBUTEREQUEST_H_
