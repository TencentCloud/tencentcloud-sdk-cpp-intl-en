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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_IMAGE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_IMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * CVM image information.
                */
                class Image : public AbstractModel
                {
                public:
                    Image();
                    ~Image() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CVM Image ID, which is the unique identifier of the image.
                     * @return ImageId CVM Image ID, which is the unique identifier of the image.
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置CVM Image ID, which is the unique identifier of the image.
                     * @param _imageId CVM Image ID, which is the unique identifier of the image.
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
                     * 获取Image name.
                     * @return ImageName Image name.
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name.
                     * @param _imageName Image name.
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
                     * 获取Image description.
                     * @return ImageDescription Image description.
                     * 
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置Image description.
                     * @param _imageDescription Image description.
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
                     * 获取Image size, in GB.
                     * @return ImageSize Image size, in GB.
                     * 
                     */
                    int64_t GetImageSize() const;

                    /**
                     * 设置Image size, in GB.
                     * @param _imageSize Image size, in GB.
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
                     * 获取Image source.
<li>CREATE_IMAGE: custom image.</li>
<li>EXTERNAL_IMPORT: externally imported image.</li>
                     * @return ImageSource Image source.
<li>CREATE_IMAGE: custom image.</li>
<li>EXTERNAL_IMPORT: externally imported image.</li>
                     * 
                     */
                    std::string GetImageSource() const;

                    /**
                     * 设置Image source.
<li>CREATE_IMAGE: custom image.</li>
<li>EXTERNAL_IMPORT: externally imported image.</li>
                     * @param _imageSource Image source.
<li>CREATE_IMAGE: custom image.</li>
<li>EXTERNAL_IMPORT: externally imported image.</li>
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
                     * 获取Image classification.
<li>SystemImage: system disk image.</li>
<li>InstanceImage: full-instance image.</li>
                     * @return ImageClass Image classification.
<li>SystemImage: system disk image.</li>
<li>InstanceImage: full-instance image.</li>
                     * 
                     */
                    std::string GetImageClass() const;

                    /**
                     * 设置Image classification.
<li>SystemImage: system disk image.</li>
<li>InstanceImage: full-instance image.</li>
                     * @param _imageClass Image classification.
<li>SystemImage: system disk image.</li>
<li>InstanceImage: full-instance image.</li>
                     * 
                     */
                    void SetImageClass(const std::string& _imageClass);

                    /**
                     * 判断参数 ImageClass 是否已赋值
                     * @return ImageClass 是否已赋值
                     * 
                     */
                    bool ImageClassHasBeenSet() const;

                    /**
                     * 获取Image status.
CREATING: creating.
NORMAL: normal.
CREATEFAILED: creation failed.
USING: in use.
SYNCING: synchronizing.
IMPORTING: importing.
IMPORTFAILED: import failed.
                     * @return ImageState Image status.
CREATING: creating.
NORMAL: normal.
CREATEFAILED: creation failed.
USING: in use.
SYNCING: synchronizing.
IMPORTING: importing.
IMPORTFAILED: import failed.
                     * 
                     */
                    std::string GetImageState() const;

                    /**
                     * 设置Image status.
CREATING: creating.
NORMAL: normal.
CREATEFAILED: creation failed.
USING: in use.
SYNCING: synchronizing.
IMPORTING: importing.
IMPORTFAILED: import failed.
                     * @param _imageState Image status.
CREATING: creating.
NORMAL: normal.
CREATEFAILED: creation failed.
USING: in use.
SYNCING: synchronizing.
IMPORTING: importing.
IMPORTFAILED: import failed.
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
                     * 获取Whether the image supports Cloudinit.
                     * @return IsSupportCloudinit Whether the image supports Cloudinit.
                     * 
                     */
                    bool GetIsSupportCloudinit() const;

                    /**
                     * 设置Whether the image supports Cloudinit.
                     * @param _isSupportCloudinit Whether the image supports Cloudinit.
                     * 
                     */
                    void SetIsSupportCloudinit(const bool& _isSupportCloudinit);

                    /**
                     * 判断参数 IsSupportCloudinit 是否已赋值
                     * @return IsSupportCloudinit 是否已赋值
                     * 
                     */
                    bool IsSupportCloudinitHasBeenSet() const;

                    /**
                     * 获取Image architecture.
                     * @return Architecture Image architecture.
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置Image architecture.
                     * @param _architecture Image architecture.
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
                     * 获取Image operating system.
                     * @return OsName Image operating system.
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置Image operating system.
                     * @param _osName Image operating system.
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取Image source platform.
                     * @return Platform Image source platform.
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置Image source platform.
                     * @param _platform Image source platform.
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
                     * 获取Image creation time.
                     * @return CreatedTime Image creation time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Image creation time.
                     * @param _createdTime Image creation time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Whether the image can be shared to Lighthouse.
                     * @return IsShareable Whether the image can be shared to Lighthouse.
                     * 
                     */
                    bool GetIsShareable() const;

                    /**
                     * 设置Whether the image can be shared to Lighthouse.
                     * @param _isShareable Whether the image can be shared to Lighthouse.
                     * 
                     */
                    void SetIsShareable(const bool& _isShareable);

                    /**
                     * 判断参数 IsShareable 是否已赋值
                     * @return IsShareable 是否已赋值
                     * 
                     */
                    bool IsShareableHasBeenSet() const;

                    /**
                     * 获取Reason for not being shared.
                     * @return UnshareableReason Reason for not being shared.
                     * 
                     */
                    std::string GetUnshareableReason() const;

                    /**
                     * 设置Reason for not being shared.
                     * @param _unshareableReason Reason for not being shared.
                     * 
                     */
                    void SetUnshareableReason(const std::string& _unshareableReason);

                    /**
                     * 判断参数 UnshareableReason 是否已赋值
                     * @return UnshareableReason 是否已赋值
                     * 
                     */
                    bool UnshareableReasonHasBeenSet() const;

                private:

                    /**
                     * CVM Image ID, which is the unique identifier of the image.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Image name.
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Image description.
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                    /**
                     * Image size, in GB.
                     */
                    int64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * Image source.
<li>CREATE_IMAGE: custom image.</li>
<li>EXTERNAL_IMPORT: externally imported image.</li>
                     */
                    std::string m_imageSource;
                    bool m_imageSourceHasBeenSet;

                    /**
                     * Image classification.
<li>SystemImage: system disk image.</li>
<li>InstanceImage: full-instance image.</li>
                     */
                    std::string m_imageClass;
                    bool m_imageClassHasBeenSet;

                    /**
                     * Image status.
CREATING: creating.
NORMAL: normal.
CREATEFAILED: creation failed.
USING: in use.
SYNCING: synchronizing.
IMPORTING: importing.
IMPORTFAILED: import failed.
                     */
                    std::string m_imageState;
                    bool m_imageStateHasBeenSet;

                    /**
                     * Whether the image supports Cloudinit.
                     */
                    bool m_isSupportCloudinit;
                    bool m_isSupportCloudinitHasBeenSet;

                    /**
                     * Image architecture.
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * Image operating system.
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * Image source platform.
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * Image creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Whether the image can be shared to Lighthouse.
                     */
                    bool m_isShareable;
                    bool m_isShareableHasBeenSet;

                    /**
                     * Reason for not being shared.
                     */
                    std::string m_unshareableReason;
                    bool m_unshareableReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_IMAGE_H_
