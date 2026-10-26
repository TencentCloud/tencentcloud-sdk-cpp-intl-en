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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEVIDEODOWNLOADURLDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEVIDEODOWNLOADURLDATA_H_

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
                * Returned data for obtaining the cloud recording download URL
                */
                class DescribeVideoDownloadUrlData : public AbstractModel
                {
                public:
                    DescribeVideoDownloadUrlData();
                    ~DescribeVideoDownloadUrlData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video recording file download URL
Note:
The URL is valid for 10 minutes. Access will be denied after expiry. Obtain a new one if needed. 
Video file download uses chunked transfer encoding, and the response header is Transfer-Encoding: chunked. 
The naming format of the downloaded file is {ChannelId}-{BeginTime}-{EndTime}.{FileType}
                     * @return Url Video recording file download URL
Note:
The URL is valid for 10 minutes. Access will be denied after expiry. Obtain a new one if needed. 
Video file download uses chunked transfer encoding, and the response header is Transfer-Encoding: chunked. 
The naming format of the downloaded file is {ChannelId}-{BeginTime}-{EndTime}.{FileType}
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Video recording file download URL
Note:
The URL is valid for 10 minutes. Access will be denied after expiry. Obtain a new one if needed. 
Video file download uses chunked transfer encoding, and the response header is Transfer-Encoding: chunked. 
The naming format of the downloaded file is {ChannelId}-{BeginTime}-{EndTime}.{FileType}
                     * @param _url Video recording file download URL
Note:
The URL is valid for 10 minutes. Access will be denied after expiry. Obtain a new one if needed. 
Video file download uses chunked transfer encoding, and the response header is Transfer-Encoding: chunked. 
The naming format of the downloaded file is {ChannelId}-{BeginTime}-{EndTime}.{FileType}
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Actual download start time of the video recording
Note: This field is returned only when the IsRespActualTime parameter is set to true in the request.
                     * @return ActualBeginTime Actual download start time of the video recording
Note: This field is returned only when the IsRespActualTime parameter is set to true in the request.
                     * 
                     */
                    std::string GetActualBeginTime() const;

                    /**
                     * 设置Actual download start time of the video recording
Note: This field is returned only when the IsRespActualTime parameter is set to true in the request.
                     * @param _actualBeginTime Actual download start time of the video recording
Note: This field is returned only when the IsRespActualTime parameter is set to true in the request.
                     * 
                     */
                    void SetActualBeginTime(const std::string& _actualBeginTime);

                    /**
                     * 判断参数 ActualBeginTime 是否已赋值
                     * @return ActualBeginTime 是否已赋值
                     * 
                     */
                    bool ActualBeginTimeHasBeenSet() const;

                    /**
                     * 获取Actual download end time of the video recording
Note: This field is returned only when the IsRespActualTime parameter is set to true in the request.
                     * @return ActualEndTime Actual download end time of the video recording
Note: This field is returned only when the IsRespActualTime parameter is set to true in the request.
                     * 
                     */
                    std::string GetActualEndTime() const;

                    /**
                     * 设置Actual download end time of the video recording
Note: This field is returned only when the IsRespActualTime parameter is set to true in the request.
                     * @param _actualEndTime Actual download end time of the video recording
Note: This field is returned only when the IsRespActualTime parameter is set to true in the request.
                     * 
                     */
                    void SetActualEndTime(const std::string& _actualEndTime);

                    /**
                     * 判断参数 ActualEndTime 是否已赋值
                     * @return ActualEndTime 是否已赋值
                     * 
                     */
                    bool ActualEndTimeHasBeenSet() const;

                private:

                    /**
                     * Video recording file download URL
Note:
The URL is valid for 10 minutes. Access will be denied after expiry. Obtain a new one if needed. 
Video file download uses chunked transfer encoding, and the response header is Transfer-Encoding: chunked. 
The naming format of the downloaded file is {ChannelId}-{BeginTime}-{EndTime}.{FileType}
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Actual download start time of the video recording
Note: This field is returned only when the IsRespActualTime parameter is set to true in the request.
                     */
                    std::string m_actualBeginTime;
                    bool m_actualBeginTimeHasBeenSet;

                    /**
                     * Actual download end time of the video recording
Note: This field is returned only when the IsRespActualTime parameter is set to true in the request.
                     */
                    std::string m_actualEndTime;
                    bool m_actualEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEVIDEODOWNLOADURLDATA_H_
