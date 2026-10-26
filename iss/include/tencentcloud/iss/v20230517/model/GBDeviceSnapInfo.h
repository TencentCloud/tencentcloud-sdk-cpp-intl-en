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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_GBDEVICESNAPINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_GBDEVICESNAPINFO_H_

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
                * Snapshot information
                */
                class GBDeviceSnapInfo : public AbstractModel
                {
                public:
                    GBDeviceSnapInfo();
                    ~GBDeviceSnapInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File name
                     * @return FileName File name
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置File name
                     * @param _fileName File name
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Download link. Empty value means the stored image expires.
                     * @return DownloadUrl Download link. Empty value means the stored image expires.
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置Download link. Empty value means the stored image expires.
                     * @param _downloadUrl Download link. Empty value means the stored image expires.
                     * 
                     */
                    void SetDownloadUrl(const std::string& _downloadUrl);

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取Image size in Unit B.
                     * @return ImageSize Image size in Unit B.
                     * 
                     */
                    int64_t GetImageSize() const;

                    /**
                     * 设置Image size in Unit B.
                     * @param _imageSize Image size in Unit B.
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
                     * 获取Creation time of the file.
                     * @return CreatedTime Creation time of the file.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time of the file.
                     * @param _createdTime Creation time of the file.
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
                     * 获取Reception time of the image
                     * @return ReceivedTime Reception time of the image
                     * 
                     */
                    std::string GetReceivedTime() const;

                    /**
                     * 设置Reception time of the image
                     * @param _receivedTime Reception time of the image
                     * 
                     */
                    void SetReceivedTime(const std::string& _receivedTime);

                    /**
                     * 判断参数 ReceivedTime 是否已赋值
                     * @return ReceivedTime 是否已赋值
                     * 
                     */
                    bool ReceivedTimeHasBeenSet() const;

                    /**
                     * 获取Preview link. Empty value means the stored image expires.
                     * @return PreviewUrl Preview link. Empty value means the stored image expires.
                     * 
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 设置Preview link. Empty value means the stored image expires.
                     * @param _previewUrl Preview link. Empty value means the stored image expires.
                     * 
                     */
                    void SetPreviewUrl(const std::string& _previewUrl);

                    /**
                     * 判断参数 PreviewUrl 是否已赋值
                     * @return PreviewUrl 是否已赋值
                     * 
                     */
                    bool PreviewUrlHasBeenSet() const;

                    /**
                     * 获取National standard signaling session ID, corresponding to the request_id returned by the ControlDeviceSnapshot API.
                     * @return SessionId National standard signaling session ID, corresponding to the request_id returned by the ControlDeviceSnapshot API.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置National standard signaling session ID, corresponding to the request_id returned by the ControlDeviceSnapshot API.
                     * @param _sessionId National standard signaling session ID, corresponding to the request_id returned by the ControlDeviceSnapshot API.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * File name
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Download link. Empty value means the stored image expires.
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * Image size in Unit B.
                     */
                    int64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * Creation time of the file.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Reception time of the image
                     */
                    std::string m_receivedTime;
                    bool m_receivedTimeHasBeenSet;

                    /**
                     * Preview link. Empty value means the stored image expires.
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                    /**
                     * National standard signaling session ID, corresponding to the request_id returned by the ControlDeviceSnapshot API.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_GBDEVICESNAPINFO_H_
