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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_VLPLANRESULTDETAILINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_VLPLANRESULTDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * Visual understanding plan result details
                */
                class VLPlanResultDetailInfo : public AbstractModel
                {
                public:
                    VLPlanResultDetailInfo();
                    ~VLPlanResultDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Analysis result ID</p>
                     * @return VLPlanResultId <p>Analysis result ID</p>
                     * 
                     */
                    std::string GetVLPlanResultId() const;

                    /**
                     * 设置<p>Analysis result ID</p>
                     * @param _vLPlanResultId <p>Analysis result ID</p>
                     * 
                     */
                    void SetVLPlanResultId(const std::string& _vLPlanResultId);

                    /**
                     * 判断参数 VLPlanResultId 是否已赋值
                     * @return VLPlanResultId 是否已赋值
                     * 
                     */
                    bool VLPlanResultIdHasBeenSet() const;

                    /**
                     * 获取<p>Media type. The current fixed value is image</p>
                     * @return MediaType <p>Media type. The current fixed value is image</p>
                     * 
                     */
                    std::string GetMediaType() const;

                    /**
                     * 设置<p>Media type. The current fixed value is image</p>
                     * @param _mediaType <p>Media type. The current fixed value is image</p>
                     * 
                     */
                    void SetMediaType(const std::string& _mediaType);

                    /**
                     * 判断参数 MediaType 是否已赋值
                     * @return MediaType 是否已赋值
                     * 
                     */
                    bool MediaTypeHasBeenSet() const;

                    /**
                     * 获取<p>ID of the associated analysis plan</p>
                     * @return VLPlanId <p>ID of the associated analysis plan</p>
                     * 
                     */
                    std::string GetVLPlanId() const;

                    /**
                     * 设置<p>ID of the associated analysis plan</p>
                     * @param _vLPlanId <p>ID of the associated analysis plan</p>
                     * 
                     */
                    void SetVLPlanId(const std::string& _vLPlanId);

                    /**
                     * 判断参数 VLPlanId 是否已赋值
                     * @return VLPlanId 是否已赋值
                     * 
                     */
                    bool VLPlanIdHasBeenSet() const;

                    /**
                     * 获取<p>Plan name</p>
                     * @return VLPlanName <p>Plan name</p>
                     * 
                     */
                    std::string GetVLPlanName() const;

                    /**
                     * 设置<p>Plan name</p>
                     * @param _vLPlanName <p>Plan name</p>
                     * 
                     */
                    void SetVLPlanName(const std::string& _vLPlanName);

                    /**
                     * 判断参数 VLPlanName 是否已赋值
                     * @return VLPlanName 是否已赋值
                     * 
                     */
                    bool VLPlanNameHasBeenSet() const;

                    /**
                     * 获取<p>Channel ID</p>
                     * @return ChannelId <p>Channel ID</p>
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置<p>Channel ID</p>
                     * @param _channelId <p>Channel ID</p>
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取<p>Channel name</p>
                     * @return ChannelName <p>Channel name</p>
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置<p>Channel name</p>
                     * @param _channelName <p>Channel name</p>
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取<p>Device ID</p>
                     * @return DeviceId <p>Device ID</p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>Device ID</p>
                     * @param _deviceId <p>Device ID</p>
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取<p>Device name</p>
                     * @return DeviceName <p>Device name</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>Device name</p>
                     * @param _deviceName <p>Device name</p>
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取<p>Affiliated organization ID</p>
                     * @return OrganizationId <p>Affiliated organization ID</p>
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置<p>Affiliated organization ID</p>
                     * @param _organizationId <p>Affiliated organization ID</p>
                     * 
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取<p>Affiliated organization name</p>
                     * @return OrganizationName <p>Affiliated organization name</p>
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置<p>Affiliated organization name</p>
                     * @param _organizationName <p>Affiliated organization name</p>
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取<p>Analysis timestamp (seconds)</p>
                     * @return VLResultTimestamp <p>Analysis timestamp (seconds)</p>
                     * 
                     */
                    int64_t GetVLResultTimestamp() const;

                    /**
                     * 设置<p>Analysis timestamp (seconds)</p>
                     * @param _vLResultTimestamp <p>Analysis timestamp (seconds)</p>
                     * 
                     */
                    void SetVLResultTimestamp(const int64_t& _vLResultTimestamp);

                    /**
                     * 判断参数 VLResultTimestamp 是否已赋值
                     * @return VLResultTimestamp 是否已赋值
                     * 
                     */
                    bool VLResultTimestampHasBeenSet() const;

                    /**
                     * 获取<p>Image mode screenshot timestamp (seconds)</p>
                     * @return SnapshotTimestamp <p>Image mode screenshot timestamp (seconds)</p>
                     * 
                     */
                    int64_t GetSnapshotTimestamp() const;

                    /**
                     * 设置<p>Image mode screenshot timestamp (seconds)</p>
                     * @param _snapshotTimestamp <p>Image mode screenshot timestamp (seconds)</p>
                     * 
                     */
                    void SetSnapshotTimestamp(const int64_t& _snapshotTimestamp);

                    /**
                     * 判断参数 SnapshotTimestamp 是否已赋值
                     * @return SnapshotTimestamp 是否已赋值
                     * 
                     */
                    bool SnapshotTimestampHasBeenSet() const;

                    /**
                     * 获取<p>Video clip start timestamp (seconds)</p>
                     * @return VideoStartTimestamp <p>Video clip start timestamp (seconds)</p>
                     * 
                     */
                    int64_t GetVideoStartTimestamp() const;

                    /**
                     * 设置<p>Video clip start timestamp (seconds)</p>
                     * @param _videoStartTimestamp <p>Video clip start timestamp (seconds)</p>
                     * 
                     */
                    void SetVideoStartTimestamp(const int64_t& _videoStartTimestamp);

                    /**
                     * 判断参数 VideoStartTimestamp 是否已赋值
                     * @return VideoStartTimestamp 是否已赋值
                     * 
                     */
                    bool VideoStartTimestampHasBeenSet() const;

                    /**
                     * 获取<p>Video segment end timestamp (seconds)</p>
                     * @return VideoEndTimestamp <p>Video segment end timestamp (seconds)</p>
                     * 
                     */
                    int64_t GetVideoEndTimestamp() const;

                    /**
                     * 设置<p>Video segment end timestamp (seconds)</p>
                     * @param _videoEndTimestamp <p>Video segment end timestamp (seconds)</p>
                     * 
                     */
                    void SetVideoEndTimestamp(const int64_t& _videoEndTimestamp);

                    /**
                     * 判断参数 VideoEndTimestamp 是否已赋值
                     * @return VideoEndTimestamp 是否已赋值
                     * 
                     */
                    bool VideoEndTimestampHasBeenSet() const;

                    /**
                     * 获取<p>Billing method for the number of frames in video mode</p>
                     * @return BilledFrameCount <p>Billing method for the number of frames in video mode</p>
                     * 
                     */
                    int64_t GetBilledFrameCount() const;

                    /**
                     * 设置<p>Billing method for the number of frames in video mode</p>
                     * @param _billedFrameCount <p>Billing method for the number of frames in video mode</p>
                     * 
                     */
                    void SetBilledFrameCount(const int64_t& _billedFrameCount);

                    /**
                     * 判断参数 BilledFrameCount 是否已赋值
                     * @return BilledFrameCount 是否已赋值
                     * 
                     */
                    bool BilledFrameCountHasBeenSet() const;

                    /**
                     * 获取<p>AI analysis result content (JSON string)</p>
                     * @return Content <p>AI analysis result content (JSON string)</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>AI analysis result content (JSON string)</p>
                     * @param _content <p>AI analysis result content (JSON string)</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>Temporary screenshot download URL (valid for 300 seconds)</p>
                     * @return ImageUrl <p>Temporary screenshot download URL (valid for 300 seconds)</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>Temporary screenshot download URL (valid for 300 seconds)</p>
                     * @param _imageUrl <p>Temporary screenshot download URL (valid for 300 seconds)</p>
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>Screenshot URL validity period (seconds)</p>
                     * @return ImageUrlExpire <p>Screenshot URL validity period (seconds)</p>
                     * 
                     */
                    int64_t GetImageUrlExpire() const;

                    /**
                     * 设置<p>Screenshot URL validity period (seconds)</p>
                     * @param _imageUrlExpire <p>Screenshot URL validity period (seconds)</p>
                     * 
                     */
                    void SetImageUrlExpire(const int64_t& _imageUrlExpire);

                    /**
                     * 判断参数 ImageUrlExpire 是否已赋值
                     * @return ImageUrlExpire 是否已赋值
                     * 
                     */
                    bool ImageUrlExpireHasBeenSet() const;

                    /**
                     * 获取<p>Creation time, format: 2006-01-02 15:04:05</p>
                     * @return CreatedAt <p>Creation time, format: 2006-01-02 15:04:05</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>Creation time, format: 2006-01-02 15:04:05</p>
                     * @param _createdAt <p>Creation time, format: 2006-01-02 15:04:05</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>Update time, format 2006-01-02 15:04:05</p>
                     * @return UpdatedAt <p>Update time, format 2006-01-02 15:04:05</p>
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置<p>Update time, format 2006-01-02 15:04:05</p>
                     * @param _updatedAt <p>Update time, format 2006-01-02 15:04:05</p>
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * <p>Analysis result ID</p>
                     */
                    std::string m_vLPlanResultId;
                    bool m_vLPlanResultIdHasBeenSet;

                    /**
                     * <p>Media type. The current fixed value is image</p>
                     */
                    std::string m_mediaType;
                    bool m_mediaTypeHasBeenSet;

                    /**
                     * <p>ID of the associated analysis plan</p>
                     */
                    std::string m_vLPlanId;
                    bool m_vLPlanIdHasBeenSet;

                    /**
                     * <p>Plan name</p>
                     */
                    std::string m_vLPlanName;
                    bool m_vLPlanNameHasBeenSet;

                    /**
                     * <p>Channel ID</p>
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>Channel name</p>
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * <p>Device ID</p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>Device name</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>Affiliated organization ID</p>
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * <p>Affiliated organization name</p>
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * <p>Analysis timestamp (seconds)</p>
                     */
                    int64_t m_vLResultTimestamp;
                    bool m_vLResultTimestampHasBeenSet;

                    /**
                     * <p>Image mode screenshot timestamp (seconds)</p>
                     */
                    int64_t m_snapshotTimestamp;
                    bool m_snapshotTimestampHasBeenSet;

                    /**
                     * <p>Video clip start timestamp (seconds)</p>
                     */
                    int64_t m_videoStartTimestamp;
                    bool m_videoStartTimestampHasBeenSet;

                    /**
                     * <p>Video segment end timestamp (seconds)</p>
                     */
                    int64_t m_videoEndTimestamp;
                    bool m_videoEndTimestampHasBeenSet;

                    /**
                     * <p>Billing method for the number of frames in video mode</p>
                     */
                    int64_t m_billedFrameCount;
                    bool m_billedFrameCountHasBeenSet;

                    /**
                     * <p>AI analysis result content (JSON string)</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>Temporary screenshot download URL (valid for 300 seconds)</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>Screenshot URL validity period (seconds)</p>
                     */
                    int64_t m_imageUrlExpire;
                    bool m_imageUrlExpireHasBeenSet;

                    /**
                     * <p>Creation time, format: 2006-01-02 15:04:05</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>Update time, format 2006-01-02 15:04:05</p>
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_VLPLANRESULTDETAILINFO_H_
