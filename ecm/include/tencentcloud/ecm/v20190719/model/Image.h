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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_IMAGE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_IMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/SrcImage.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Image information
                */
                class Image : public AbstractModel
                {
                public:
                    Image();
                    ~Image() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image ID
                     * @return ImageId Image ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID
                     * @param _imageId Image ID
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
                     * 获取Image name
                     * @return ImageName Image name
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name
                     * @param _imageName Image name
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
                     * 获取Image status
                     * @return ImageState Image status
                     * 
                     */
                    std::string GetImageState() const;

                    /**
                     * 设置Image status
                     * @param _imageState Image status
                     * 
                     */
                    void SetImageState(const std::string& _imageState);

                    /**
                     * 判断参数 ImageState 是否已赋值
                     * @return ImageState 是否已赋值
                     * 
                     */
                    bool ImageStateHasBeenSet() const;

                    /**
                     * 获取Image type
                     * @return ImageType Image type
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置Image type
                     * @param _imageType Image type
                     * 
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     * 
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取OS name
                     * @return ImageOsName OS name
                     * 
                     */
                    std::string GetImageOsName() const;

                    /**
                     * 设置OS name
                     * @param _imageOsName OS name
                     * 
                     */
                    void SetImageOsName(const std::string& _imageOsName);

                    /**
                     * 判断参数 ImageOsName 是否已赋值
                     * @return ImageOsName 是否已赋值
                     * 
                     */
                    bool ImageOsNameHasBeenSet() const;

                    /**
                     * 获取Image description
                     * @return ImageDescription Image description
                     * 
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置Image description
                     * @param _imageDescription Image description
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
                     * 获取Image import time
                     * @return ImageCreateTime Image import time
                     * 
                     */
                    std::string GetImageCreateTime() const;

                    /**
                     * 设置Image import time
                     * @param _imageCreateTime Image import time
                     * 
                     */
                    void SetImageCreateTime(const std::string& _imageCreateTime);

                    /**
                     * 判断参数 ImageCreateTime 是否已赋值
                     * @return ImageCreateTime 是否已赋值
                     * 
                     */
                    bool ImageCreateTimeHasBeenSet() const;

                    /**
                     * 获取Number of bits of the OS
                     * @return Architecture Number of bits of the OS
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置Number of bits of the OS
                     * @param _architecture Number of bits of the OS
                     * 
                     */
                    void SetArchitecture(const std::string& _architecture);

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     * 
                     */
                    bool ArchitectureHasBeenSet() const;

                    /**
                     * 获取OS type
                     * @return OsType OS type
                     * 
                     */
                    std::string GetOsType() const;

                    /**
                     * 设置OS type
                     * @param _osType OS type
                     * 
                     */
                    void SetOsType(const std::string& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取OS version
                     * @return OsVersion OS version
                     * 
                     */
                    std::string GetOsVersion() const;

                    /**
                     * 设置OS version
                     * @param _osVersion OS version
                     * 
                     */
                    void SetOsVersion(const std::string& _osVersion);

                    /**
                     * 判断参数 OsVersion 是否已赋值
                     * @return OsVersion 是否已赋值
                     * 
                     */
                    bool OsVersionHasBeenSet() const;

                    /**
                     * 获取OS platform
                     * @return Platform OS platform
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置OS platform
                     * @param _platform OS platform
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取Image owner
                     * @return ImageOwner Image owner
                     * 
                     */
                    int64_t GetImageOwner() const;

                    /**
                     * 设置Image owner
                     * @param _imageOwner Image owner
                     * 
                     */
                    void SetImageOwner(const int64_t& _imageOwner);

                    /**
                     * 判断参数 ImageOwner 是否已赋值
                     * @return ImageOwner 是否已赋值
                     * 
                     */
                    bool ImageOwnerHasBeenSet() const;

                    /**
                     * 获取Image size in GB
                     * @return ImageSize Image size in GB
                     * 
                     */
                    int64_t GetImageSize() const;

                    /**
                     * 设置Image size in GB
                     * @param _imageSize Image size in GB
                     * 
                     */
                    void SetImageSize(const int64_t& _imageSize);

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     * 
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取Image source information
                     * @return SrcImage Image source information
                     * 
                     */
                    SrcImage GetSrcImage() const;

                    /**
                     * 设置Image source information
                     * @param _srcImage Image source information
                     * 
                     */
                    void SetSrcImage(const SrcImage& _srcImage);

                    /**
                     * 判断参数 SrcImage 是否已赋值
                     * @return SrcImage 是否已赋值
                     * 
                     */
                    bool SrcImageHasBeenSet() const;

                    /**
                     * 获取Image source type
                     * @return ImageSource Image source type
                     * 
                     */
                    std::string GetImageSource() const;

                    /**
                     * 设置Image source type
                     * @param _imageSource Image source type
                     * 
                     */
                    void SetImageSource(const std::string& _imageSource);

                    /**
                     * 判断参数 ImageSource 是否已赋值
                     * @return ImageSource 是否已赋值
                     * 
                     */
                    bool ImageSourceHasBeenSet() const;

                    /**
                     * 获取ID of the task in intermediate or failed status
                     * @return TaskId ID of the task in intermediate or failed status
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置ID of the task in intermediate or failed status
                     * @param _taskId ID of the task in intermediate or failed status
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Whether cloud-init is supported
                     * @return IsSupportCloudInit Whether cloud-init is supported
                     * 
                     */
                    bool GetIsSupportCloudInit() const;

                    /**
                     * 设置Whether cloud-init is supported
                     * @param _isSupportCloudInit Whether cloud-init is supported
                     * 
                     */
                    void SetIsSupportCloudInit(const bool& _isSupportCloudInit);

                    /**
                     * 判断参数 IsSupportCloudInit 是否已赋值
                     * @return IsSupportCloudInit 是否已赋值
                     * 
                     */
                    bool IsSupportCloudInitHasBeenSet() const;

                private:

                    /**
                     * Image ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Image status
                     */
                    std::string m_imageState;
                    bool m_imageStateHasBeenSet;

                    /**
                     * Image type
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * OS name
                     */
                    std::string m_imageOsName;
                    bool m_imageOsNameHasBeenSet;

                    /**
                     * Image description
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                    /**
                     * Image import time
                     */
                    std::string m_imageCreateTime;
                    bool m_imageCreateTimeHasBeenSet;

                    /**
                     * Number of bits of the OS
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * OS type
                     */
                    std::string m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * OS version
                     */
                    std::string m_osVersion;
                    bool m_osVersionHasBeenSet;

                    /**
                     * OS platform
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * Image owner
                     */
                    int64_t m_imageOwner;
                    bool m_imageOwnerHasBeenSet;

                    /**
                     * Image size in GB
                     */
                    int64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * Image source information
                     */
                    SrcImage m_srcImage;
                    bool m_srcImageHasBeenSet;

                    /**
                     * Image source type
                     */
                    std::string m_imageSource;
                    bool m_imageSourceHasBeenSet;

                    /**
                     * ID of the task in intermediate or failed status
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Whether cloud-init is supported
                     */
                    bool m_isSupportCloudInit;
                    bool m_isSupportCloudInitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_IMAGE_H_
