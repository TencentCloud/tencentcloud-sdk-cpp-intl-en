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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STARTWEBRECORDREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STARTWEBRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/StorageParams.h>
#include <tencentcloud/trtc/v20190722/model/WebRecordVideoParams.h>
#include <tencentcloud/trtc/v20190722/model/McuPublishCdnParam.h>
#include <tencentcloud/trtc/v20190722/model/EmulateMobileParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * StartWebRecord request structure.
                */
                class StartWebRecordRequest : public AbstractModel
                {
                public:
                    StartWebRecordRequest();
                    ~StartWebRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取URL of the web page to be recorded
                     * @return RecordUrl URL of the web page to be recorded
                     * 
                     */
                    std::string GetRecordUrl() const;

                    /**
                     * 设置URL of the web page to be recorded
                     * @param _recordUrl URL of the web page to be recorded
                     * 
                     */
                    void SetRecordUrl(const std::string& _recordUrl);

                    /**
                     * 判断参数 RecordUrl 是否已赋值
                     * @return RecordUrl 是否已赋值
                     * 
                     */
                    bool RecordUrlHasBeenSet() const;

                    /**
                     * 获取Maximum recording duration limit, in seconds. Valid range: [1800, 36000]. Default is 36,000 seconds (10 hours).
                     * @return MaxDurationLimit Maximum recording duration limit, in seconds. Valid range: [1800, 36000]. Default is 36,000 seconds (10 hours).
                     * 
                     */
                    uint64_t GetMaxDurationLimit() const;

                    /**
                     * 设置Maximum recording duration limit, in seconds. Valid range: [1800, 36000]. Default is 36,000 seconds (10 hours).
                     * @param _maxDurationLimit Maximum recording duration limit, in seconds. Valid range: [1800, 36000]. Default is 36,000 seconds (10 hours).
                     * 
                     */
                    void SetMaxDurationLimit(const uint64_t& _maxDurationLimit);

                    /**
                     * 判断参数 MaxDurationLimit 是否已赋值
                     * @return MaxDurationLimit 是否已赋值
                     * 
                     */
                    bool MaxDurationLimitHasBeenSet() const;

                    /**
                     * 获取[Required] Parameters related to cloud storage. Currently, Tencent Cloud Object Storage and Tencent Cloud VOD are supported, but third-party cloud storage is not supported. The storage format of the output file only supports hls or mp4.
                     * @return StorageParams [Required] Parameters related to cloud storage. Currently, Tencent Cloud Object Storage and Tencent Cloud VOD are supported, but third-party cloud storage is not supported. The storage format of the output file only supports hls or mp4.
                     * 
                     */
                    StorageParams GetStorageParams() const;

                    /**
                     * 设置[Required] Parameters related to cloud storage. Currently, Tencent Cloud Object Storage and Tencent Cloud VOD are supported, but third-party cloud storage is not supported. The storage format of the output file only supports hls or mp4.
                     * @param _storageParams [Required] Parameters related to cloud storage. Currently, Tencent Cloud Object Storage and Tencent Cloud VOD are supported, but third-party cloud storage is not supported. The storage format of the output file only supports hls or mp4.
                     * 
                     */
                    void SetStorageParams(const StorageParams& _storageParams);

                    /**
                     * 判断参数 StorageParams 是否已赋值
                     * @return StorageParams 是否已赋值
                     * 
                     */
                    bool StorageParamsHasBeenSet() const;

                    /**
                     * 获取web-page recording video parameters
                     * @return WebRecordVideoParams web-page recording video parameters
                     * 
                     */
                    WebRecordVideoParams GetWebRecordVideoParams() const;

                    /**
                     * 设置web-page recording video parameters
                     * @param _webRecordVideoParams web-page recording video parameters
                     * 
                     */
                    void SetWebRecordVideoParams(const WebRecordVideoParams& _webRecordVideoParams);

                    /**
                     * 判断参数 WebRecordVideoParams 是否已赋值
                     * @return WebRecordVideoParams 是否已赋值
                     * 
                     */
                    bool WebRecordVideoParamsHasBeenSet() const;

                    /**
                     * 获取[Required] The SDKAppID of the TRTC room 
                     * @return SdkAppId [Required] The SDKAppID of the TRTC room 
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置[Required] The SDKAppID of the TRTC room 
                     * @param _sdkAppId [Required] The SDKAppID of the TRTC room 
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取When sensitive to repetitive tasks, please pay attention to this value: To avoid tasks being initiated repeatedly in a short period, leading to task duplication, pass in the recording RecordId to identify the current task. The RecordId should be less than 32 bytes. If you carry the RecordId and initiate the start recording request more than once, only one task will be started, and the second one will report the error FailedOperation.TaskExist. Note that if the StartWebRecord call fails with an error other than FailedOperation.TaskExist, please change the RecordId and initiate the request again.
                     * @return RecordId When sensitive to repetitive tasks, please pay attention to this value: To avoid tasks being initiated repeatedly in a short period, leading to task duplication, pass in the recording RecordId to identify the current task. The RecordId should be less than 32 bytes. If you carry the RecordId and initiate the start recording request more than once, only one task will be started, and the second one will report the error FailedOperation.TaskExist. Note that if the StartWebRecord call fails with an error other than FailedOperation.TaskExist, please change the RecordId and initiate the request again.
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置When sensitive to repetitive tasks, please pay attention to this value: To avoid tasks being initiated repeatedly in a short period, leading to task duplication, pass in the recording RecordId to identify the current task. The RecordId should be less than 32 bytes. If you carry the RecordId and initiate the start recording request more than once, only one task will be started, and the second one will report the error FailedOperation.TaskExist. Note that if the StartWebRecord call fails with an error other than FailedOperation.TaskExist, please change the RecordId and initiate the request again.
                     * @param _recordId When sensitive to repetitive tasks, please pay attention to this value: To avoid tasks being initiated repeatedly in a short period, leading to task duplication, pass in the recording RecordId to identify the current task. The RecordId should be less than 32 bytes. If you carry the RecordId and initiate the start recording request more than once, only one task will be started, and the second one will report the error FailedOperation.TaskExist. Note that if the StartWebRecord call fails with an error other than FailedOperation.TaskExist, please change the RecordId and initiate the request again.
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取If you want to push the stream to a CDN, you can use the PublishCdnParams.N parameter to set it. It supports pushing streams to up to 10 CDN addresses simultaneously. If the relay address is a Tencent Cloud CDN, please explicitly set IsTencentCdn to 1.
                     * @return PublishCdnParams If you want to push the stream to a CDN, you can use the PublishCdnParams.N parameter to set it. It supports pushing streams to up to 10 CDN addresses simultaneously. If the relay address is a Tencent Cloud CDN, please explicitly set IsTencentCdn to 1.
                     * 
                     */
                    std::vector<McuPublishCdnParam> GetPublishCdnParams() const;

                    /**
                     * 设置If you want to push the stream to a CDN, you can use the PublishCdnParams.N parameter to set it. It supports pushing streams to up to 10 CDN addresses simultaneously. If the relay address is a Tencent Cloud CDN, please explicitly set IsTencentCdn to 1.
                     * @param _publishCdnParams If you want to push the stream to a CDN, you can use the PublishCdnParams.N parameter to set it. It supports pushing streams to up to 10 CDN addresses simultaneously. If the relay address is a Tencent Cloud CDN, please explicitly set IsTencentCdn to 1.
                     * 
                     */
                    void SetPublishCdnParams(const std::vector<McuPublishCdnParam>& _publishCdnParams);

                    /**
                     * 判断参数 PublishCdnParams 是否已赋值
                     * @return PublishCdnParams 是否已赋值
                     * 
                     */
                    bool PublishCdnParamsHasBeenSet() const;

                    /**
                     * 获取The timeout for loading page resources during recording, in seconds. The default value is 0 seconds. This value must be greater than or equal to 0 seconds and less than or equal to 60 seconds. If page load timeout detection is not enabled for the recording page, please do not set this parameter.
                     * @return ReadyTimeout The timeout for loading page resources during recording, in seconds. The default value is 0 seconds. This value must be greater than or equal to 0 seconds and less than or equal to 60 seconds. If page load timeout detection is not enabled for the recording page, please do not set this parameter.
                     * 
                     */
                    uint64_t GetReadyTimeout() const;

                    /**
                     * 设置The timeout for loading page resources during recording, in seconds. The default value is 0 seconds. This value must be greater than or equal to 0 seconds and less than or equal to 60 seconds. If page load timeout detection is not enabled for the recording page, please do not set this parameter.
                     * @param _readyTimeout The timeout for loading page resources during recording, in seconds. The default value is 0 seconds. This value must be greater than or equal to 0 seconds and less than or equal to 60 seconds. If page load timeout detection is not enabled for the recording page, please do not set this parameter.
                     * 
                     */
                    void SetReadyTimeout(const uint64_t& _readyTimeout);

                    /**
                     * 判断参数 ReadyTimeout 是否已赋值
                     * @return ReadyTimeout 是否已赋值
                     * 
                     */
                    bool ReadyTimeoutHasBeenSet() const;

                    /**
                     * 获取Render mobile mode parameters; do not set this parameter if you are not going to render mobile mode pages.
                     * @return EmulateMobileParams Render mobile mode parameters; do not set this parameter if you are not going to render mobile mode pages.
                     * 
                     */
                    EmulateMobileParams GetEmulateMobileParams() const;

                    /**
                     * 设置Render mobile mode parameters; do not set this parameter if you are not going to render mobile mode pages.
                     * @param _emulateMobileParams Render mobile mode parameters; do not set this parameter if you are not going to render mobile mode pages.
                     * 
                     */
                    void SetEmulateMobileParams(const EmulateMobileParams& _emulateMobileParams);

                    /**
                     * 判断参数 EmulateMobileParams 是否已赋值
                     * @return EmulateMobileParams 是否已赋值
                     * 
                     */
                    bool EmulateMobileParamsHasBeenSet() const;

                private:

                    /**
                     * URL of the web page to be recorded
                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                    /**
                     * Maximum recording duration limit, in seconds. Valid range: [1800, 36000]. Default is 36,000 seconds (10 hours).
                     */
                    uint64_t m_maxDurationLimit;
                    bool m_maxDurationLimitHasBeenSet;

                    /**
                     * [Required] Parameters related to cloud storage. Currently, Tencent Cloud Object Storage and Tencent Cloud VOD are supported, but third-party cloud storage is not supported. The storage format of the output file only supports hls or mp4.
                     */
                    StorageParams m_storageParams;
                    bool m_storageParamsHasBeenSet;

                    /**
                     * web-page recording video parameters
                     */
                    WebRecordVideoParams m_webRecordVideoParams;
                    bool m_webRecordVideoParamsHasBeenSet;

                    /**
                     * [Required] The SDKAppID of the TRTC room 
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * When sensitive to repetitive tasks, please pay attention to this value: To avoid tasks being initiated repeatedly in a short period, leading to task duplication, pass in the recording RecordId to identify the current task. The RecordId should be less than 32 bytes. If you carry the RecordId and initiate the start recording request more than once, only one task will be started, and the second one will report the error FailedOperation.TaskExist. Note that if the StartWebRecord call fails with an error other than FailedOperation.TaskExist, please change the RecordId and initiate the request again.
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * If you want to push the stream to a CDN, you can use the PublishCdnParams.N parameter to set it. It supports pushing streams to up to 10 CDN addresses simultaneously. If the relay address is a Tencent Cloud CDN, please explicitly set IsTencentCdn to 1.
                     */
                    std::vector<McuPublishCdnParam> m_publishCdnParams;
                    bool m_publishCdnParamsHasBeenSet;

                    /**
                     * The timeout for loading page resources during recording, in seconds. The default value is 0 seconds. This value must be greater than or equal to 0 seconds and less than or equal to 60 seconds. If page load timeout detection is not enabled for the recording page, please do not set this parameter.
                     */
                    uint64_t m_readyTimeout;
                    bool m_readyTimeoutHasBeenSet;

                    /**
                     * Render mobile mode parameters; do not set this parameter if you are not going to render mobile mode pages.
                     */
                    EmulateMobileParams m_emulateMobileParams;
                    bool m_emulateMobileParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTWEBRECORDREQUEST_H_
