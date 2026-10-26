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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEVIDEODOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEVIDEODOWNLOADURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeVideoDownloadUrl request structure.
                */
                class DescribeVideoDownloadUrlRequest : public AbstractModel
                {
                public:
                    DescribeVideoDownloadUrlRequest();
                    ~DescribeVideoDownloadUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel ID
                     * @return ChannelId Channel ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel ID
                     * @param _channelId Channel ID
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
                     * 获取Download start time in UTC seconds. The longest period between the start and end times is 60 minutes and cannot span across days.
Note: The actual downloaded file duration may be longer than this period. You can obtain the actual download start time and end time by specifying the IsRespActualTime parameter. This is because downloads are aligned by TS segments to ensure data integrity and include the entire specified period.
                     * @return BeginTime Download start time in UTC seconds. The longest period between the start and end times is 60 minutes and cannot span across days.
Note: The actual downloaded file duration may be longer than this period. You can obtain the actual download start time and end time by specifying the IsRespActualTime parameter. This is because downloads are aligned by TS segments to ensure data integrity and include the entire specified period.
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Download start time in UTC seconds. The longest period between the start and end times is 60 minutes and cannot span across days.
Note: The actual downloaded file duration may be longer than this period. You can obtain the actual download start time and end time by specifying the IsRespActualTime parameter. This is because downloads are aligned by TS segments to ensure data integrity and include the entire specified period.
                     * @param _beginTime Download start time in UTC seconds. The longest period between the start and end times is 60 minutes and cannot span across days.
Note: The actual downloaded file duration may be longer than this period. You can obtain the actual download start time and end time by specifying the IsRespActualTime parameter. This is because downloads are aligned by TS segments to ensure data integrity and include the entire specified period.
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取Download end time in UTC seconds. The longest period between the start and end times is 60 minutes and cannot span across days.
Note: The actual downloaded file duration may be longer than this period. You can obtain the actual download start time and end time by specifying the IsRespActualTime parameter. This is because downloads are aligned by TS segments to ensure data integrity and include the entire specified period.
                     * @return EndTime Download end time in UTC seconds. The longest period between the start and end times is 60 minutes and cannot span across days.
Note: The actual downloaded file duration may be longer than this period. You can obtain the actual download start time and end time by specifying the IsRespActualTime parameter. This is because downloads are aligned by TS segments to ensure data integrity and include the entire specified period.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Download end time in UTC seconds. The longest period between the start and end times is 60 minutes and cannot span across days.
Note: The actual downloaded file duration may be longer than this period. You can obtain the actual download start time and end time by specifying the IsRespActualTime parameter. This is because downloads are aligned by TS segments to ensure data integrity and include the entire specified period.
                     * @param _endTime Download end time in UTC seconds. The longest period between the start and end times is 60 minutes and cannot span across days.
Note: The actual downloaded file duration may be longer than this period. You can obtain the actual download start time and end time by specifying the IsRespActualTime parameter. This is because downloads are aligned by TS segments to ensure data integrity and include the entire specified period.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取File format. "mp4": MP4 format. "ts": TS file format.
                     * @return FileType File format. "mp4": MP4 format. "ts": TS file format.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置File format. "mp4": MP4 format. "ts": TS file format.
                     * @param _fileType File format. "mp4": MP4 format. "ts": TS file format.
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取data carries the actual download video recording start time and end time required or not
                     * @return IsRespActualTime data carries the actual download video recording start time and end time required or not
                     * 
                     */
                    bool GetIsRespActualTime() const;

                    /**
                     * 设置data carries the actual download video recording start time and end time required or not
                     * @param _isRespActualTime data carries the actual download video recording start time and end time required or not
                     * 
                     */
                    void SetIsRespActualTime(const bool& _isRespActualTime);

                    /**
                     * 判断参数 IsRespActualTime 是否已赋值
                     * @return IsRespActualTime 是否已赋值
                     * 
                     */
                    bool IsRespActualTimeHasBeenSet() const;

                    /**
                     * 获取Whether to return the private network download URL. Default false: the public network download URL is returned. If true, the private network download URL is returned.
                     * @return IsInternal Whether to return the private network download URL. Default false: the public network download URL is returned. If true, the private network download URL is returned.
                     * 
                     */
                    bool GetIsInternal() const;

                    /**
                     * 设置Whether to return the private network download URL. Default false: the public network download URL is returned. If true, the private network download URL is returned.
                     * @param _isInternal Whether to return the private network download URL. Default false: the public network download URL is returned. If true, the private network download URL is returned.
                     * 
                     */
                    void SetIsInternal(const bool& _isInternal);

                    /**
                     * 判断参数 IsInternal 是否已赋值
                     * @return IsInternal 是否已赋值
                     * 
                     */
                    bool IsInternalHasBeenSet() const;

                    /**
                     * 获取Set the valid period of the URL. The minimum value is 1 second and the maximum value is 86400 seconds. If not set, the default is 600 seconds.
                     * @return Expires Set the valid period of the URL. The minimum value is 1 second and the maximum value is 86400 seconds. If not set, the default is 600 seconds.
                     * 
                     */
                    int64_t GetExpires() const;

                    /**
                     * 设置Set the valid period of the URL. The minimum value is 1 second and the maximum value is 86400 seconds. If not set, the default is 600 seconds.
                     * @param _expires Set the valid period of the URL. The minimum value is 1 second and the maximum value is 86400 seconds. If not set, the default is 600 seconds.
                     * 
                     */
                    void SetExpires(const int64_t& _expires);

                    /**
                     * 判断参数 Expires 是否已赋值
                     * @return Expires 是否已赋值
                     * 
                     */
                    bool ExpiresHasBeenSet() const;

                    /**
                     * 获取Whether the downloaded MP4 file supports G711 audio encoding. 
Note: If the audio encoding in cloud recording is AAC, then the downloaded MP4 supports AAC encoding by default.
If the audio encoding in the cloud recording is G711 and IsSupportG711 is set to true, the downloaded MP4 supports G711 audio encoding.
If the audio encoding in the cloud recording is G711 and IsSupportG711 is set to false, the downloaded MP4 does not support G711 audio encoding.
This parameter is valid only when FileType is mp4. If left unset, it defaults to false.
                     * @return IsSupportG711 Whether the downloaded MP4 file supports G711 audio encoding. 
Note: If the audio encoding in cloud recording is AAC, then the downloaded MP4 supports AAC encoding by default.
If the audio encoding in the cloud recording is G711 and IsSupportG711 is set to true, the downloaded MP4 supports G711 audio encoding.
If the audio encoding in the cloud recording is G711 and IsSupportG711 is set to false, the downloaded MP4 does not support G711 audio encoding.
This parameter is valid only when FileType is mp4. If left unset, it defaults to false.
                     * 
                     */
                    bool GetIsSupportG711() const;

                    /**
                     * 设置Whether the downloaded MP4 file supports G711 audio encoding. 
Note: If the audio encoding in cloud recording is AAC, then the downloaded MP4 supports AAC encoding by default.
If the audio encoding in the cloud recording is G711 and IsSupportG711 is set to true, the downloaded MP4 supports G711 audio encoding.
If the audio encoding in the cloud recording is G711 and IsSupportG711 is set to false, the downloaded MP4 does not support G711 audio encoding.
This parameter is valid only when FileType is mp4. If left unset, it defaults to false.
                     * @param _isSupportG711 Whether the downloaded MP4 file supports G711 audio encoding. 
Note: If the audio encoding in cloud recording is AAC, then the downloaded MP4 supports AAC encoding by default.
If the audio encoding in the cloud recording is G711 and IsSupportG711 is set to true, the downloaded MP4 supports G711 audio encoding.
If the audio encoding in the cloud recording is G711 and IsSupportG711 is set to false, the downloaded MP4 does not support G711 audio encoding.
This parameter is valid only when FileType is mp4. If left unset, it defaults to false.
                     * 
                     */
                    void SetIsSupportG711(const bool& _isSupportG711);

                    /**
                     * 判断参数 IsSupportG711 是否已赋值
                     * @return IsSupportG711 是否已赋值
                     * 
                     */
                    bool IsSupportG711HasBeenSet() const;

                private:

                    /**
                     * Channel ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Download start time in UTC seconds. The longest period between the start and end times is 60 minutes and cannot span across days.
Note: The actual downloaded file duration may be longer than this period. You can obtain the actual download start time and end time by specifying the IsRespActualTime parameter. This is because downloads are aligned by TS segments to ensure data integrity and include the entire specified period.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * Download end time in UTC seconds. The longest period between the start and end times is 60 minutes and cannot span across days.
Note: The actual downloaded file duration may be longer than this period. You can obtain the actual download start time and end time by specifying the IsRespActualTime parameter. This is because downloads are aligned by TS segments to ensure data integrity and include the entire specified period.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * File format. "mp4": MP4 format. "ts": TS file format.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * data carries the actual download video recording start time and end time required or not
                     */
                    bool m_isRespActualTime;
                    bool m_isRespActualTimeHasBeenSet;

                    /**
                     * Whether to return the private network download URL. Default false: the public network download URL is returned. If true, the private network download URL is returned.
                     */
                    bool m_isInternal;
                    bool m_isInternalHasBeenSet;

                    /**
                     * Set the valid period of the URL. The minimum value is 1 second and the maximum value is 86400 seconds. If not set, the default is 600 seconds.
                     */
                    int64_t m_expires;
                    bool m_expiresHasBeenSet;

                    /**
                     * Whether the downloaded MP4 file supports G711 audio encoding. 
Note: If the audio encoding in cloud recording is AAC, then the downloaded MP4 supports AAC encoding by default.
If the audio encoding in the cloud recording is G711 and IsSupportG711 is set to true, the downloaded MP4 supports G711 audio encoding.
If the audio encoding in the cloud recording is G711 and IsSupportG711 is set to false, the downloaded MP4 does not support G711 audio encoding.
This parameter is valid only when FileType is mp4. If left unset, it defaults to false.
                     */
                    bool m_isSupportG711;
                    bool m_isSupportG711HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEVIDEODOWNLOADURLREQUEST_H_
