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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CUSTOMIMAGE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CUSTOMIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ImageInfo.h>
#include <tencentcloud/emr/v20190103/model/ImagePullSecret.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Custom image information.
                */
                class CustomImage : public AbstractModel
                {
                public:
                    CustomImage();
                    ~CustomImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image source. Valid values: tcr (public image), ccrPersonal (custom image), and ccrAllPersonal (shared image).
                     * @return ImageSourceType Image source. Valid values: tcr (public image), ccrPersonal (custom image), and ccrAllPersonal (shared image).
                     * 
                     */
                    std::string GetImageSourceType() const;

                    /**
                     * 设置Image source. Valid values: tcr (public image), ccrPersonal (custom image), and ccrAllPersonal (shared image).
                     * @param _imageSourceType Image source. Valid values: tcr (public image), ccrPersonal (custom image), and ccrAllPersonal (shared image).
                     * 
                     */
                    void SetImageSourceType(const std::string& _imageSourceType);

                    /**
                     * 判断参数 ImageSourceType 是否已赋值
                     * @return ImageSourceType 是否已赋值
                     * 
                     */
                    bool ImageSourceTypeHasBeenSet() const;

                    /**
                     * 获取Image information.
                     * @return ImageInfo Image information.
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置Image information.
                     * @param _imageInfo Image information.
                     * 
                     */
                    void SetImageInfo(const ImageInfo& _imageInfo);

                    /**
                     * 判断参数 ImageInfo 是否已赋值
                     * @return ImageInfo 是否已赋值
                     * 
                     */
                    bool ImageInfoHasBeenSet() const;

                    /**
                     * 获取Key used for obtaining an image.
                     * @return ImagePullSecret Key used for obtaining an image.
                     * 
                     */
                    ImagePullSecret GetImagePullSecret() const;

                    /**
                     * 设置Key used for obtaining an image.
                     * @param _imagePullSecret Key used for obtaining an image.
                     * 
                     */
                    void SetImagePullSecret(const ImagePullSecret& _imagePullSecret);

                    /**
                     * 判断参数 ImagePullSecret 是否已赋值
                     * @return ImagePullSecret 是否已赋值
                     * 
                     */
                    bool ImagePullSecretHasBeenSet() const;

                private:

                    /**
                     * Image source. Valid values: tcr (public image), ccrPersonal (custom image), and ccrAllPersonal (shared image).
                     */
                    std::string m_imageSourceType;
                    bool m_imageSourceTypeHasBeenSet;

                    /**
                     * Image information.
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * Key used for obtaining an image.
                     */
                    ImagePullSecret m_imagePullSecret;
                    bool m_imagePullSecretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CUSTOMIMAGE_H_
