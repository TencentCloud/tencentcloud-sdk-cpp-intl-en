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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_IMAGEMODERATIONREQUEST_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_IMAGEMODERATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20201229/model/User.h>
#include <tencentcloud/ims/v20201229/model/Device.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * ImageModeration request structure.
                */
                class ImageModerationRequest : public AbstractModel
                {
                public:
                    ImageModerationRequest();
                    ~ImageModerationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取This field indicates the specific number of the policy, which is used for API scheduling and can be configured in the CMS console. If the `Biztype` parameter is passed in, a moderation policy will be used based on the business scenario; otherwise, the default moderation policy will be used.<br>Note: `Biztype` can contain 3-32 digits, letters, and underscores; different `Biztype` values are associated with different business scenarios and moderation policies, so you need to verify the `Biztype` before calling this API.
                     * @return BizType This field indicates the specific number of the policy, which is used for API scheduling and can be configured in the CMS console. If the `Biztype` parameter is passed in, a moderation policy will be used based on the business scenario; otherwise, the default moderation policy will be used.<br>Note: `Biztype` can contain 3-32 digits, letters, and underscores; different `Biztype` values are associated with different business scenarios and moderation policies, so you need to verify the `Biztype` before calling this API.
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置This field indicates the specific number of the policy, which is used for API scheduling and can be configured in the CMS console. If the `Biztype` parameter is passed in, a moderation policy will be used based on the business scenario; otherwise, the default moderation policy will be used.<br>Note: `Biztype` can contain 3-32 digits, letters, and underscores; different `Biztype` values are associated with different business scenarios and moderation policies, so you need to verify the `Biztype` before calling this API.
                     * @param _bizType This field indicates the specific number of the policy, which is used for API scheduling and can be configured in the CMS console. If the `Biztype` parameter is passed in, a moderation policy will be used based on the business scenario; otherwise, the default moderation policy will be used.<br>Note: `Biztype` can contain 3-32 digits, letters, and underscores; different `Biztype` values are associated with different business scenarios and moderation policies, so you need to verify the `Biztype` before calling this API.
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取This field indicates the data ID assigned by you to the object to be detected for easier file identification and management.<br>It **can contain up to 64 letters, digits, and special symbols (_-@#)**.
                     * @return DataId This field indicates the data ID assigned by you to the object to be detected for easier file identification and management.<br>It **can contain up to 64 letters, digits, and special symbols (_-@#)**.
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置This field indicates the data ID assigned by you to the object to be detected for easier file identification and management.<br>It **can contain up to 64 letters, digits, and special symbols (_-@#)**.
                     * @param _dataId This field indicates the data ID assigned by you to the object to be detected for easier file identification and management.<br>It **can contain up to 64 letters, digits, and special symbols (_-@#)**.
                     * 
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取This field indicates the Base64 encoding of the image to be detected. The image **size cannot exceed 5 MB**. **A resolution of 256x256 or higher is recommended**; otherwise, the recognition effect may be affected.<br>Note: **you must enter a value for either this field or `FileUrl`**.
                     * @return FileContent This field indicates the Base64 encoding of the image to be detected. The image **size cannot exceed 5 MB**. **A resolution of 256x256 or higher is recommended**; otherwise, the recognition effect may be affected.<br>Note: **you must enter a value for either this field or `FileUrl`**.
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置This field indicates the Base64 encoding of the image to be detected. The image **size cannot exceed 5 MB**. **A resolution of 256x256 or higher is recommended**; otherwise, the recognition effect may be affected.<br>Note: **you must enter a value for either this field or `FileUrl`**.
                     * @param _fileContent This field indicates the Base64 encoding of the image to be detected. The image **size cannot exceed 5 MB**. **A resolution of 256x256 or higher is recommended**; otherwise, the recognition effect may be affected.<br>Note: **you must enter a value for either this field or `FileUrl`**.
                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取URL of the image to moderate. It supports PNG, JPG, JPEG, BMP, GIF AND WEBP files. The file **cannot exceed 5 MB** and the resolution should not below **256*246**. The default timeout period is 3 seconds. Note that **redirection URLs may be blocked by security policies**. In this case, an error message will return. For example, if an HTTP request gets the 302 code, the error `ResourceUnavailable.ImageDownloadError` is returned. <br>**Either `FileUrl` or `FileContent` must be specified. 
                     * @return FileUrl URL of the image to moderate. It supports PNG, JPG, JPEG, BMP, GIF AND WEBP files. The file **cannot exceed 5 MB** and the resolution should not below **256*246**. The default timeout period is 3 seconds. Note that **redirection URLs may be blocked by security policies**. In this case, an error message will return. For example, if an HTTP request gets the 302 code, the error `ResourceUnavailable.ImageDownloadError` is returned. <br>**Either `FileUrl` or `FileContent` must be specified. 
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置URL of the image to moderate. It supports PNG, JPG, JPEG, BMP, GIF AND WEBP files. The file **cannot exceed 5 MB** and the resolution should not below **256*246**. The default timeout period is 3 seconds. Note that **redirection URLs may be blocked by security policies**. In this case, an error message will return. For example, if an HTTP request gets the 302 code, the error `ResourceUnavailable.ImageDownloadError` is returned. <br>**Either `FileUrl` or `FileContent` must be specified. 
                     * @param _fileUrl URL of the image to moderate. It supports PNG, JPG, JPEG, BMP, GIF AND WEBP files. The file **cannot exceed 5 MB** and the resolution should not below **256*246**. The default timeout period is 3 seconds. Note that **redirection URLs may be blocked by security policies**. In this case, an error message will return. For example, if an HTTP request gets the 302 code, the error `ResourceUnavailable.ImageDownloadError` is returned. <br>**Either `FileUrl` or `FileContent` must be specified. 
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取**For GIF/long image detection only**. This field indicates the GIF frame capturing frequency (the image interval for capturing a frame for detection). For long images, you should round the width:height ratio as the total number of images to be split. The default value is 0, where only the first frame of the GIF image will be detected, and the long image will not be split.<br>Note: the `Interval` and `MaxFrames` parameters need to be used in combination; for example, if `Interval` is `3` and `MaxFrames` is `400`, the GIF/long image will be detected once every two frames for up to 400 frames.
                     * @return Interval **For GIF/long image detection only**. This field indicates the GIF frame capturing frequency (the image interval for capturing a frame for detection). For long images, you should round the width:height ratio as the total number of images to be split. The default value is 0, where only the first frame of the GIF image will be detected, and the long image will not be split.<br>Note: the `Interval` and `MaxFrames` parameters need to be used in combination; for example, if `Interval` is `3` and `MaxFrames` is `400`, the GIF/long image will be detected once every two frames for up to 400 frames.
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置**For GIF/long image detection only**. This field indicates the GIF frame capturing frequency (the image interval for capturing a frame for detection). For long images, you should round the width:height ratio as the total number of images to be split. The default value is 0, where only the first frame of the GIF image will be detected, and the long image will not be split.<br>Note: the `Interval` and `MaxFrames` parameters need to be used in combination; for example, if `Interval` is `3` and `MaxFrames` is `400`, the GIF/long image will be detected once every two frames for up to 400 frames.
                     * @param _interval **For GIF/long image detection only**. This field indicates the GIF frame capturing frequency (the image interval for capturing a frame for detection). For long images, you should round the width:height ratio as the total number of images to be split. The default value is 0, where only the first frame of the GIF image will be detected, and the long image will not be split.<br>Note: the `Interval` and `MaxFrames` parameters need to be used in combination; for example, if `Interval` is `3` and `MaxFrames` is `400`, the GIF/long image will be detected once every two frames for up to 400 frames.
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取**For GIF/long image detection only**. This field indicates the maximum number of frames that can be captured. The default value is 1, where only the first frame of the input GIF image will be detected, and the long image will not be split (which may cause a processing timeout).<br>Note: the `Interval` and `MaxFrames` parameters need to be used in combination; for example, if `Interval` is `3` and `MaxFrames` is `400`, the GIF/long image will be detected once every two frames for up to 400 frames.
                     * @return MaxFrames **For GIF/long image detection only**. This field indicates the maximum number of frames that can be captured. The default value is 1, where only the first frame of the input GIF image will be detected, and the long image will not be split (which may cause a processing timeout).<br>Note: the `Interval` and `MaxFrames` parameters need to be used in combination; for example, if `Interval` is `3` and `MaxFrames` is `400`, the GIF/long image will be detected once every two frames for up to 400 frames.
                     * 
                     */
                    int64_t GetMaxFrames() const;

                    /**
                     * 设置**For GIF/long image detection only**. This field indicates the maximum number of frames that can be captured. The default value is 1, where only the first frame of the input GIF image will be detected, and the long image will not be split (which may cause a processing timeout).<br>Note: the `Interval` and `MaxFrames` parameters need to be used in combination; for example, if `Interval` is `3` and `MaxFrames` is `400`, the GIF/long image will be detected once every two frames for up to 400 frames.
                     * @param _maxFrames **For GIF/long image detection only**. This field indicates the maximum number of frames that can be captured. The default value is 1, where only the first frame of the input GIF image will be detected, and the long image will not be split (which may cause a processing timeout).<br>Note: the `Interval` and `MaxFrames` parameters need to be used in combination; for example, if `Interval` is `3` and `MaxFrames` is `400`, the GIF/long image will be detected once every two frames for up to 400 frames.
                     * 
                     */
                    void SetMaxFrames(const int64_t& _maxFrames);

                    /**
                     * 判断参数 MaxFrames 是否已赋值
                     * @return MaxFrames 是否已赋值
                     * 
                     */
                    bool MaxFramesHasBeenSet() const;

                    /**
                     * 获取This field indicates the information of the user that corresponds to the object to be detected. It can be passed in to identify the user involved in the violation.
                     * @return User This field indicates the information of the user that corresponds to the object to be detected. It can be passed in to identify the user involved in the violation.
                     * 
                     */
                    User GetUser() const;

                    /**
                     * 设置This field indicates the information of the user that corresponds to the object to be detected. It can be passed in to identify the user involved in the violation.
                     * @param _user This field indicates the information of the user that corresponds to the object to be detected. It can be passed in to identify the user involved in the violation.
                     * 
                     */
                    void SetUser(const User& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取This field indicates the information of the device that corresponds to the object to be detected. It can be passed in to identify the device involved in the violation.
                     * @return Device This field indicates the information of the device that corresponds to the object to be detected. It can be passed in to identify the device involved in the violation.
                     * 
                     */
                    Device GetDevice() const;

                    /**
                     * 设置This field indicates the information of the device that corresponds to the object to be detected. It can be passed in to identify the device involved in the violation.
                     * @param _device This field indicates the information of the device that corresponds to the object to be detected. It can be passed in to identify the device involved in the violation.
                     * 
                     */
                    void SetDevice(const Device& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     * 
                     */
                    bool DeviceHasBeenSet() const;

                private:

                    /**
                     * This field indicates the specific number of the policy, which is used for API scheduling and can be configured in the CMS console. If the `Biztype` parameter is passed in, a moderation policy will be used based on the business scenario; otherwise, the default moderation policy will be used.<br>Note: `Biztype` can contain 3-32 digits, letters, and underscores; different `Biztype` values are associated with different business scenarios and moderation policies, so you need to verify the `Biztype` before calling this API.
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * This field indicates the data ID assigned by you to the object to be detected for easier file identification and management.<br>It **can contain up to 64 letters, digits, and special symbols (_-@#)**.
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * This field indicates the Base64 encoding of the image to be detected. The image **size cannot exceed 5 MB**. **A resolution of 256x256 or higher is recommended**; otherwise, the recognition effect may be affected.<br>Note: **you must enter a value for either this field or `FileUrl`**.
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * URL of the image to moderate. It supports PNG, JPG, JPEG, BMP, GIF AND WEBP files. The file **cannot exceed 5 MB** and the resolution should not below **256*246**. The default timeout period is 3 seconds. Note that **redirection URLs may be blocked by security policies**. In this case, an error message will return. For example, if an HTTP request gets the 302 code, the error `ResourceUnavailable.ImageDownloadError` is returned. <br>**Either `FileUrl` or `FileContent` must be specified. 
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * **For GIF/long image detection only**. This field indicates the GIF frame capturing frequency (the image interval for capturing a frame for detection). For long images, you should round the width:height ratio as the total number of images to be split. The default value is 0, where only the first frame of the GIF image will be detected, and the long image will not be split.<br>Note: the `Interval` and `MaxFrames` parameters need to be used in combination; for example, if `Interval` is `3` and `MaxFrames` is `400`, the GIF/long image will be detected once every two frames for up to 400 frames.
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * **For GIF/long image detection only**. This field indicates the maximum number of frames that can be captured. The default value is 1, where only the first frame of the input GIF image will be detected, and the long image will not be split (which may cause a processing timeout).<br>Note: the `Interval` and `MaxFrames` parameters need to be used in combination; for example, if `Interval` is `3` and `MaxFrames` is `400`, the GIF/long image will be detected once every two frames for up to 400 frames.
                     */
                    int64_t m_maxFrames;
                    bool m_maxFramesHasBeenSet;

                    /**
                     * This field indicates the information of the user that corresponds to the object to be detected. It can be passed in to identify the user involved in the violation.
                     */
                    User m_user;
                    bool m_userHasBeenSet;

                    /**
                     * This field indicates the information of the device that corresponds to the object to be detected. It can be passed in to identify the device involved in the violation.
                     */
                    Device m_device;
                    bool m_deviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_IMAGEMODERATIONREQUEST_H_
