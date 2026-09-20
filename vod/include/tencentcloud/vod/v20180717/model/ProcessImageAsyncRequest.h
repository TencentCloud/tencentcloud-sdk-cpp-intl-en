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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncTaskInput.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ProcessImageAsync request structure.
                */
                class ProcessImageAsyncRequest : public AbstractModel
                {
                public:
                    ProcessImageAsyncRequest();
                    ~ProcessImageAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
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
                     * 获取<p>FileId that needs image processing. It cannot be used with Url.</p>
                     * @return FileId <p>FileId that needs image processing. It cannot be used with Url.</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>FileId that needs image processing. It cannot be used with Url.</p>
                     * @param _fileId <p>FileId that needs image processing. It cannot be used with Url.</p>
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
                     * 获取<p>Url that needs image processing. Cannot be input simultaneously with FileId.</p>
                     * @return Url <p>Url that needs image processing. Cannot be input simultaneously with FileId.</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Url that needs image processing. Cannot be input simultaneously with FileId.</p>
                     * @param _url <p>Url that needs image processing. Cannot be input simultaneously with FileId.</p>
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
                     * 获取<p>Base64 of the image to be processed. The image file must be less than 4 MB. When using Base64, do not add any prefix such as <code>data:image/png;base64,</code>. Just provide the Base64 encoded string itself.</p>
                     * @return Base64 <p>Base64 of the image to be processed. The image file must be less than 4 MB. When using Base64, do not add any prefix such as <code>data:image/png;base64,</code>. Just provide the Base64 encoded string itself.</p>
                     * 
                     */
                    std::string GetBase64() const;

                    /**
                     * 设置<p>Base64 of the image to be processed. The image file must be less than 4 MB. When using Base64, do not add any prefix such as <code>data:image/png;base64,</code>. Just provide the Base64 encoded string itself.</p>
                     * @param _base64 <p>Base64 of the image to be processed. The image file must be less than 4 MB. When using Base64, do not add any prefix such as <code>data:image/png;base64,</code>. Just provide the Base64 encoded string itself.</p>
                     * 
                     */
                    void SetBase64(const std::string& _base64);

                    /**
                     * 判断参数 Base64 是否已赋值
                     * @return Base64 是否已赋值
                     * 
                     */
                    bool Base64HasBeenSet() const;

                    /**
                     * 获取<p>Image processing parameter.</p>
                     * @return ImageTaskInput <p>Image processing parameter.</p>
                     * 
                     */
                    ProcessImageAsyncTaskInput GetImageTaskInput() const;

                    /**
                     * 设置<p>Image processing parameter.</p>
                     * @param _imageTaskInput <p>Image processing parameter.</p>
                     * 
                     */
                    void SetImageTaskInput(const ProcessImageAsyncTaskInput& _imageTaskInput);

                    /**
                     * 判断参数 ImageTaskInput 是否已赋值
                     * @return ImageTaskInput 是否已赋值
                     * 
                     */
                    bool ImageTaskInputHasBeenSet() const;

                    /**
                     * 获取<p>Output media file configuration for image processing tasks.</p>
                     * @return OutputConfig <p>Output media file configuration for image processing tasks.</p>
                     * 
                     */
                    ProcessImageAsyncOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>Output media file configuration for image processing tasks.</p>
                     * @param _outputConfig <p>Output media file configuration for image processing tasks.</p>
                     * 
                     */
                    void SetOutputConfig(const ProcessImageAsyncOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取<p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @return SessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @param _sessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
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
                     * 获取<p>Source context, used to pass through user request information. The audio and video quality revival completion callback will return the value of this field. Maximum length: 1000 characters.</p>
                     * @return SessionContext <p>Source context, used to pass through user request information. The audio and video quality revival completion callback will return the value of this field. Maximum length: 1000 characters.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Source context, used to pass through user request information. The audio and video quality revival completion callback will return the value of this field. Maximum length: 1000 characters.</p>
                     * @param _sessionContext <p>Source context, used to pass through user request information. The audio and video quality revival completion callback will return the value of this field. Maximum length: 1000 characters.</p>
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
                     * 获取<p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     * @return TasksPriority <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置<p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     * @param _tasksPriority <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取<p>Reserved field, used for special purpose.</p>
                     * @return ExtInfo <p>Reserved field, used for special purpose.</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>Reserved field, used for special purpose.</p>
                     * @param _extInfo <p>Reserved field, used for special purpose.</p>
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p><b>On-demand <a href="/document/product/266/14574">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>FileId that needs image processing. It cannot be used with Url.</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>Url that needs image processing. Cannot be input simultaneously with FileId.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Base64 of the image to be processed. The image file must be less than 4 MB. When using Base64, do not add any prefix such as <code>data:image/png;base64,</code>. Just provide the Base64 encoded string itself.</p>
                     */
                    std::string m_base64;
                    bool m_base64HasBeenSet;

                    /**
                     * <p>Image processing parameter.</p>
                     */
                    ProcessImageAsyncTaskInput m_imageTaskInput;
                    bool m_imageTaskInputHasBeenSet;

                    /**
                     * <p>Output media file configuration for image processing tasks.</p>
                     */
                    ProcessImageAsyncOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Source context, used to pass through user request information. The audio and video quality revival completion callback will return the value of this field. Maximum length: 1000 characters.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Task priority. The higher the value, the higher the priority. The value range is from -10 to 10. If this is not specified, the default value is 0.</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * <p>Reserved field, used for special purpose.</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCREQUEST_H_
