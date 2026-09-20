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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ENHANCEMEDIAQUALITYREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ENHANCEMEDIAQUALITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/EnhanceMediaQualityOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * EnhanceMediaQuality request structure.
                */
                class EnhanceMediaQualityRequest : public AbstractModel
                {
                public:
                    EnhanceMediaQualityRequest();
                    ~EnhanceMediaQualityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Audio-visual quality rebirth template ID.
For typical usage scenarios, VOD provides multiple preset templates (https://www.tencentcloud.com/document/product/266/102586?from_cn_redirect=1#50604b3f-0286-4a10-a3f7-18218116aff7).
                     * @return Definition Audio-visual quality rebirth template ID.
For typical usage scenarios, VOD provides multiple preset templates (https://www.tencentcloud.com/document/product/266/102586?from_cn_redirect=1#50604b3f-0286-4a10-a3f7-18218116aff7).
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Audio-visual quality rebirth template ID.
For typical usage scenarios, VOD provides multiple preset templates (https://www.tencentcloud.com/document/product/266/102586?from_cn_redirect=1#50604b3f-0286-4a10-a3f7-18218116aff7).
                     * @param _definition Audio-visual quality rebirth template ID.
For typical usage scenarios, VOD provides multiple preset templates (https://www.tencentcloud.com/document/product/266/102586?from_cn_redirect=1#50604b3f-0286-4a10-a3f7-18218116aff7).
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Media file ID, the globally unique identifier of the file in VOD, assigned by the VOD backend after successful upload. You can obtain this field in the video upload completion event notification (https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or the VOD console (https://console.cloud.tencent.com/vod/media).
                     * @return FileId Media file ID, the globally unique identifier of the file in VOD, assigned by the VOD backend after successful upload. You can obtain this field in the video upload completion event notification (https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or the VOD console (https://console.cloud.tencent.com/vod/media).
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media file ID, the globally unique identifier of the file in VOD, assigned by the VOD backend after successful upload. You can obtain this field in the video upload completion event notification (https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or the VOD console (https://console.cloud.tencent.com/vod/media).
                     * @param _fileId Media file ID, the globally unique identifier of the file in VOD, assigned by the VOD backend after successful upload. You can obtain this field in the video upload completion event notification (https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or the VOD console (https://console.cloud.tencent.com/vod/media).
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Media storage path.
Only sub-apps in [FileID + Path mode](https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1) can initiate tasks through MediaStoragePath.
Either FileId or MediaStoragePath must be provided.
                     * @return MediaStoragePath Media storage path.
Only sub-apps in [FileID + Path mode](https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1) can initiate tasks through MediaStoragePath.
Either FileId or MediaStoragePath must be provided.
                     * 
                     */
                    std::string GetMediaStoragePath() const;

                    /**
                     * 设置Media storage path.
Only sub-apps in [FileID + Path mode](https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1) can initiate tasks through MediaStoragePath.
Either FileId or MediaStoragePath must be provided.
                     * @param _mediaStoragePath Media storage path.
Only sub-apps in [FileID + Path mode](https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1) can initiate tasks through MediaStoragePath.
Either FileId or MediaStoragePath must be provided.
                     * 
                     */
                    void SetMediaStoragePath(const std::string& _mediaStoragePath);

                    /**
                     * 判断参数 MediaStoragePath 是否已赋值
                     * @return MediaStoragePath 是否已赋值
                     * 
                     */
                    bool MediaStoragePathHasBeenSet() const;

                    /**
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, when accessing resources in VOD applications (whether the default application or a newly created application), this field must be set to the app ID.</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, when accessing resources in VOD applications (whether the default application or a newly created application), this field must be set to the app ID.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, when accessing resources in VOD applications (whether the default application or a newly created application), this field must be set to the app ID.</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, when accessing resources in VOD applications (whether the default application or a newly created application), this field must be set to the app ID.</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Media file configuration after audio and video quality revival.
                     * @return OutputConfig Media file configuration after audio and video quality revival.
                     * 
                     */
                    EnhanceMediaQualityOutputConfig GetOutputConfig() const;

                    /**
                     * 设置Media file configuration after audio and video quality revival.
                     * @param _outputConfig Media file configuration after audio and video quality revival.
                     * 
                     */
                    void SetOutputConfig(const EnhanceMediaQualityOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取An identifier for deduplication. If there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     * @return SessionId An identifier for deduplication. If there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置An identifier for deduplication. If there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     * @param _sessionId An identifier for deduplication. If there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Source context, used to pass through user request information. The audio and video quality revival completion callback will return the value of this field. Maximum length: 1000 characters.
                     * @return SessionContext Source context, used to pass through user request information. The audio and video quality revival completion callback will return the value of this field. Maximum length: 1000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Source context, used to pass through user request information. The audio and video quality revival completion callback will return the value of this field. Maximum length: 1000 characters.
                     * @param _sessionContext Source context, used to pass through user request information. The audio and video quality revival completion callback will return the value of this field. Maximum length: 1000 characters.
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.
                     * @return TasksPriority Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.
                     * @param _tasksPriority Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                private:

                    /**
                     * Audio-visual quality rebirth template ID.
For typical usage scenarios, VOD provides multiple preset templates (https://www.tencentcloud.com/document/product/266/102586?from_cn_redirect=1#50604b3f-0286-4a10-a3f7-18218116aff7).
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Media file ID, the globally unique identifier of the file in VOD, assigned by the VOD backend after successful upload. You can obtain this field in the video upload completion event notification (https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or the VOD console (https://console.cloud.tencent.com/vod/media).
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Media storage path.
Only sub-apps in [FileID + Path mode](https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1) can initiate tasks through MediaStoragePath.
Either FileId or MediaStoragePath must be provided.
                     */
                    std::string m_mediaStoragePath;
                    bool m_mediaStoragePathHasBeenSet;

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD services after December 25, 2023, when accessing resources in VOD applications (whether the default application or a newly created application), this field must be set to the app ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Media file configuration after audio and video quality revival.
                     */
                    EnhanceMediaQualityOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * An identifier for deduplication. If there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Source context, used to pass through user request information. The audio and video quality revival completion callback will return the value of this field. Maximum length: 1000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ENHANCEMEDIAQUALITYREQUEST_H_
