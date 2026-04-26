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
                     * 获取[Required] webpage URL that needs to be recorded.
                     * @return RecordUrl [Required] webpage URL that needs to be recorded.
                     * 
                     */
                    std::string GetRecordUrl() const;

                    /**
                     * 设置[Required] webpage URL that needs to be recorded.
                     * @param _recordUrl [Required] webpage URL that needs to be recorded.
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
                     * 获取[Required] cloud storage related parameters. currently supports tencent cloud object storage as well as VOD. no support for third-party cloud storage. the storage format of the output file is only supported for hls or mp4.
                     * @return StorageParams [Required] cloud storage related parameters. currently supports tencent cloud object storage as well as VOD. no support for third-party cloud storage. the storage format of the output file is only supported for hls or mp4.
                     * 
                     */
                    StorageParams GetStorageParams() const;

                    /**
                     * 设置[Required] cloud storage related parameters. currently supports tencent cloud object storage as well as VOD. no support for third-party cloud storage. the storage format of the output file is only supported for hls or mp4.
                     * @param _storageParams [Required] cloud storage related parameters. currently supports tencent cloud object storage as well as VOD. no support for third-party cloud storage. the storage format of the output file is only supported for hls or mp4.
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
                     * 获取[Required] the SdkAppId of TRTC.
                     * @return SdkAppId [Required] the SdkAppId of TRTC.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置[Required] the SdkAppId of TRTC.
                     * @param _sdkAppId [Required] the SdkAppId of TRTC.
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
                     * 获取Maximum recording duration limit in seconds. valid values [1800, 86400]. default 86400s (24 hr).
                     * @return MaxDurationLimit Maximum recording duration limit in seconds. valid values [1800, 86400]. default 86400s (24 hr).
                     * 
                     */
                    uint64_t GetMaxDurationLimit() const;

                    /**
                     * 设置Maximum recording duration limit in seconds. valid values [1800, 86400]. default 86400s (24 hr).
                     * @param _maxDurationLimit Maximum recording duration limit in seconds. valid values [1800, 86400]. default 86400s (24 hr).
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
                     * 获取Page recording video parameter.
                     * @return WebRecordVideoParams Page recording video parameter.
                     * 
                     */
                    WebRecordVideoParams GetWebRecordVideoParams() const;

                    /**
                     * 设置Page recording video parameter.
                     * @param _webRecordVideoParams Page recording video parameter.
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
                     * 获取When sensitive to repetition tasks, pay attention to this value: to avoid triggering tasks repeatedly in a short time frame, which may lead to task duplication.
Import the recording RecordId to identify the task, less than 32 bytes. if carrying RecordId initiates start recording requests more than twice, only one task will start up, and the second will report error FailedOperation.TaskExist. note that when StartWebRecord call fails instead of FailedOperation.TaskExist error, change RecordId and re-initiate the request.
                     * @return RecordId When sensitive to repetition tasks, pay attention to this value: to avoid triggering tasks repeatedly in a short time frame, which may lead to task duplication.
Import the recording RecordId to identify the task, less than 32 bytes. if carrying RecordId initiates start recording requests more than twice, only one task will start up, and the second will report error FailedOperation.TaskExist. note that when StartWebRecord call fails instead of FailedOperation.TaskExist error, change RecordId and re-initiate the request.
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置When sensitive to repetition tasks, pay attention to this value: to avoid triggering tasks repeatedly in a short time frame, which may lead to task duplication.
Import the recording RecordId to identify the task, less than 32 bytes. if carrying RecordId initiates start recording requests more than twice, only one task will start up, and the second will report error FailedOperation.TaskExist. note that when StartWebRecord call fails instead of FailedOperation.TaskExist error, change RecordId and re-initiate the request.
                     * @param _recordId When sensitive to repetition tasks, pay attention to this value: to avoid triggering tasks repeatedly in a short time frame, which may lead to task duplication.
Import the recording RecordId to identify the task, less than 32 bytes. if carrying RecordId initiates start recording requests more than twice, only one task will start up, and the second will report error FailedOperation.TaskExist. note that when StartWebRecord call fails instead of FailedOperation.TaskExist error, change RecordId and re-initiate the request.
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
                     * 获取If you want to push stream to CDN, you can configure parameters in PublishCdnParams.N. it supports streaming simultaneously to up to 10 CDN addresses. if the relay address is tencent cloud CDN, set IsTencentCdn to 1.
                     * @return PublishCdnParams If you want to push stream to CDN, you can configure parameters in PublishCdnParams.N. it supports streaming simultaneously to up to 10 CDN addresses. if the relay address is tencent cloud CDN, set IsTencentCdn to 1.
                     * 
                     */
                    std::vector<McuPublishCdnParam> GetPublishCdnParams() const;

                    /**
                     * 设置If you want to push stream to CDN, you can configure parameters in PublishCdnParams.N. it supports streaming simultaneously to up to 10 CDN addresses. if the relay address is tencent cloud CDN, set IsTencentCdn to 1.
                     * @param _publishCdnParams If you want to push stream to CDN, you can configure parameters in PublishCdnParams.N. it supports streaming simultaneously to up to 10 CDN addresses. if the relay address is tencent cloud CDN, set IsTencentCdn to 1.
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
                     * 获取Timeout period for recording page resource loading, unit: second. default value is 0, which must be greater than or equal to 0 and less than or equal to 60. do not set this parameter when page loading timeout detection is disabled for the recording page.
                     * @return ReadyTimeout Timeout period for recording page resource loading, unit: second. default value is 0, which must be greater than or equal to 0 and less than or equal to 60. do not set this parameter when page loading timeout detection is disabled for the recording page.
                     * 
                     */
                    uint64_t GetReadyTimeout() const;

                    /**
                     * 设置Timeout period for recording page resource loading, unit: second. default value is 0, which must be greater than or equal to 0 and less than or equal to 60. do not set this parameter when page loading timeout detection is disabled for the recording page.
                     * @param _readyTimeout Timeout period for recording page resource loading, unit: second. default value is 0, which must be greater than or equal to 0 and less than or equal to 60. do not set this parameter when page loading timeout detection is disabled for the recording page.
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
                     * 获取Render the mobile mode parameter. do not set this parameter when not preparing to render the mobile mode webpage.
                     * @return EmulateMobileParams Render the mobile mode parameter. do not set this parameter when not preparing to render the mobile mode webpage.
                     * 
                     */
                    EmulateMobileParams GetEmulateMobileParams() const;

                    /**
                     * 设置Render the mobile mode parameter. do not set this parameter when not preparing to render the mobile mode webpage.
                     * @param _emulateMobileParams Render the mobile mode parameter. do not set this parameter when not preparing to render the mobile mode webpage.
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
                     * [Required] webpage URL that needs to be recorded.
                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                    /**
                     * [Required] cloud storage related parameters. currently supports tencent cloud object storage as well as VOD. no support for third-party cloud storage. the storage format of the output file is only supported for hls or mp4.
                     */
                    StorageParams m_storageParams;
                    bool m_storageParamsHasBeenSet;

                    /**
                     * [Required] the SdkAppId of TRTC.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Maximum recording duration limit in seconds. valid values [1800, 86400]. default 86400s (24 hr).
                     */
                    uint64_t m_maxDurationLimit;
                    bool m_maxDurationLimitHasBeenSet;

                    /**
                     * Page recording video parameter.
                     */
                    WebRecordVideoParams m_webRecordVideoParams;
                    bool m_webRecordVideoParamsHasBeenSet;

                    /**
                     * When sensitive to repetition tasks, pay attention to this value: to avoid triggering tasks repeatedly in a short time frame, which may lead to task duplication.
Import the recording RecordId to identify the task, less than 32 bytes. if carrying RecordId initiates start recording requests more than twice, only one task will start up, and the second will report error FailedOperation.TaskExist. note that when StartWebRecord call fails instead of FailedOperation.TaskExist error, change RecordId and re-initiate the request.
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * If you want to push stream to CDN, you can configure parameters in PublishCdnParams.N. it supports streaming simultaneously to up to 10 CDN addresses. if the relay address is tencent cloud CDN, set IsTencentCdn to 1.
                     */
                    std::vector<McuPublishCdnParam> m_publishCdnParams;
                    bool m_publishCdnParamsHasBeenSet;

                    /**
                     * Timeout period for recording page resource loading, unit: second. default value is 0, which must be greater than or equal to 0 and less than or equal to 60. do not set this parameter when page loading timeout detection is disabled for the recording page.
                     */
                    uint64_t m_readyTimeout;
                    bool m_readyTimeoutHasBeenSet;

                    /**
                     * Render the mobile mode parameter. do not set this parameter when not preparing to render the mobile mode webpage.
                     */
                    EmulateMobileParams m_emulateMobileParams;
                    bool m_emulateMobileParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTWEBRECORDREQUEST_H_
