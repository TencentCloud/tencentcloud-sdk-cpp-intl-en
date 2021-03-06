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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_IMAGE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_IMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Snapshot.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Details about an image, including its state and attributes.
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
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID
                     * @param ImageId Image ID
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取Operating system of the image
                     * @return OsName Operating system of the image
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置Operating system of the image
                     * @param OsName Operating system of the image
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取Image type
                     * @return ImageType Image type
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置Image type
                     * @param ImageType Image type
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取Creation time of the image
                     * @return CreatedTime Creation time of the image
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time of the image
                     * @param CreatedTime Creation time of the image
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Image name
                     * @return ImageName Image name
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置Image name
                     * @param ImageName Image name
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取Image description
                     * @return ImageDescription Image description
                     */
                    std::string GetImageDescription() const;

                    /**
                     * 设置Image description
                     * @param ImageDescription Image description
                     */
                    void SetImageDescription(const std::string& _imageDescription);

                    /**
                     * 判断参数 ImageDescription 是否已赋值
                     * @return ImageDescription 是否已赋值
                     */
                    bool ImageDescriptionHasBeenSet() const;

                    /**
                     * 获取Image size
                     * @return ImageSize Image size
                     */
                    int64_t GetImageSize() const;

                    /**
                     * 设置Image size
                     * @param ImageSize Image size
                     */
                    void SetImageSize(const int64_t& _imageSize);

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取Image architecture
                     * @return Architecture Image architecture
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置Image architecture
                     * @param Architecture Image architecture
                     */
                    void SetArchitecture(const std::string& _architecture);

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     */
                    bool ArchitectureHasBeenSet() const;

                    /**
                     * 获取Image state
                     * @return ImageState Image state
                     */
                    std::string GetImageState() const;

                    /**
                     * 设置Image state
                     * @param ImageState Image state
                     */
                    void SetImageState(const std::string& _imageState);

                    /**
                     * 判断参数 ImageState 是否已赋值
                     * @return ImageState 是否已赋值
                     */
                    bool ImageStateHasBeenSet() const;

                    /**
                     * 获取Source platform of the image
                     * @return Platform Source platform of the image
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置Source platform of the image
                     * @param Platform Source platform of the image
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取Image creator
                     * @return ImageCreator Image creator
                     */
                    std::string GetImageCreator() const;

                    /**
                     * 设置Image creator
                     * @param ImageCreator Image creator
                     */
                    void SetImageCreator(const std::string& _imageCreator);

                    /**
                     * 判断参数 ImageCreator 是否已赋值
                     * @return ImageCreator 是否已赋值
                     */
                    bool ImageCreatorHasBeenSet() const;

                    /**
                     * 获取Image source
                     * @return ImageSource Image source
                     */
                    std::string GetImageSource() const;

                    /**
                     * 设置Image source
                     * @param ImageSource Image source
                     */
                    void SetImageSource(const std::string& _imageSource);

                    /**
                     * 判断参数 ImageSource 是否已赋值
                     * @return ImageSource 是否已赋值
                     */
                    bool ImageSourceHasBeenSet() const;

                    /**
                     * 获取Synchronization percentage
Note: This field may return null, indicating that no valid value is found.
                     * @return SyncPercent Synchronization percentage
Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t GetSyncPercent() const;

                    /**
                     * 设置Synchronization percentage
Note: This field may return null, indicating that no valid value is found.
                     * @param SyncPercent Synchronization percentage
Note: This field may return null, indicating that no valid value is found.
                     */
                    void SetSyncPercent(const int64_t& _syncPercent);

                    /**
                     * 判断参数 SyncPercent 是否已赋值
                     * @return SyncPercent 是否已赋值
                     */
                    bool SyncPercentHasBeenSet() const;

                    /**
                     * 获取Whether the image supports cloud-init
Note: This field may return null, indicating that no valid value is found.
                     * @return IsSupportCloudinit Whether the image supports cloud-init
Note: This field may return null, indicating that no valid value is found.
                     */
                    bool GetIsSupportCloudinit() const;

                    /**
                     * 设置Whether the image supports cloud-init
Note: This field may return null, indicating that no valid value is found.
                     * @param IsSupportCloudinit Whether the image supports cloud-init
Note: This field may return null, indicating that no valid value is found.
                     */
                    void SetIsSupportCloudinit(const bool& _isSupportCloudinit);

                    /**
                     * 判断参数 IsSupportCloudinit 是否已赋值
                     * @return IsSupportCloudinit 是否已赋值
                     */
                    bool IsSupportCloudinitHasBeenSet() const;

                    /**
                     * 获取Information on the snapshots associated with the image
Note: This field may return null, indicating that no valid value is found.
                     * @return SnapshotSet Information on the snapshots associated with the image
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<Snapshot> GetSnapshotSet() const;

                    /**
                     * 设置Information on the snapshots associated with the image
Note: This field may return null, indicating that no valid value is found.
                     * @param SnapshotSet Information on the snapshots associated with the image
Note: This field may return null, indicating that no valid value is found.
                     */
                    void SetSnapshotSet(const std::vector<Snapshot>& _snapshotSet);

                    /**
                     * 判断参数 SnapshotSet 是否已赋值
                     * @return SnapshotSet 是否已赋值
                     */
                    bool SnapshotSetHasBeenSet() const;

                private:

                    /**
                     * Image ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Operating system of the image
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * Image type
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * Creation time of the image
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Image name
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Image description
                     */
                    std::string m_imageDescription;
                    bool m_imageDescriptionHasBeenSet;

                    /**
                     * Image size
                     */
                    int64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * Image architecture
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * Image state
                     */
                    std::string m_imageState;
                    bool m_imageStateHasBeenSet;

                    /**
                     * Source platform of the image
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * Image creator
                     */
                    std::string m_imageCreator;
                    bool m_imageCreatorHasBeenSet;

                    /**
                     * Image source
                     */
                    std::string m_imageSource;
                    bool m_imageSourceHasBeenSet;

                    /**
                     * Synchronization percentage
Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_syncPercent;
                    bool m_syncPercentHasBeenSet;

                    /**
                     * Whether the image supports cloud-init
Note: This field may return null, indicating that no valid value is found.
                     */
                    bool m_isSupportCloudinit;
                    bool m_isSupportCloudinitHasBeenSet;

                    /**
                     * Information on the snapshots associated with the image
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<Snapshot> m_snapshotSet;
                    bool m_snapshotSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_IMAGE_H_
