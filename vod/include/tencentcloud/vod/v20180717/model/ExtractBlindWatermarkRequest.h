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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTBLINDWATERMARKREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTBLINDWATERMARKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ExtractBlindWatermarkInputInfo.h>
#include <tencentcloud/vod/v20180717/model/ExtractBlindWatermarkTaskConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ExtractBlindWatermark request structure.
                */
                class ExtractBlindWatermarkRequest : public AbstractModel
                {
                public:
                    ExtractBlindWatermarkRequest();
                    ~ExtractBlindWatermarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-trace: trace the source ab sequence watermark.</li>
                     * @return Type Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-trace: trace the source ab sequence watermark.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-trace: trace the source ab sequence watermark.</li>
                     * @param _type Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-trace: trace the source ab sequence watermark.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取File input information for the Media Processing Service (MPS) task.
                     * @return InputInfo File input information for the Media Processing Service (MPS) task.
                     * 
                     */
                    ExtractBlindWatermarkInputInfo GetInputInfo() const;

                    /**
                     * 设置File input information for the Media Processing Service (MPS) task.
                     * @param _inputInfo File input information for the Media Processing Service (MPS) task.
                     * 
                     */
                    void SetInputInfo(const ExtractBlindWatermarkInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取VOD application ID for watermarking. Note that the SubAppId must be in line with the one used during watermarking to extract the watermark, whether importing FILEID or URL.
                     * @return SubAppId VOD application ID for watermarking. Note that the SubAppId must be in line with the one used during watermarking to extract the watermark, whether importing FILEID or URL.
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置VOD application ID for watermarking. Note that the SubAppId must be in line with the one used during watermarking to extract the watermark, whether importing FILEID or URL.
                     * @param _subAppId VOD application ID for watermarking. Note that the SubAppId must be in line with the one used during watermarking to extract the watermark, whether importing FILEID or URL.
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
                     * 获取Configuration of the digital watermark extraction task.
                     * @return ExtractBlindWatermarkConfig Configuration of the digital watermark extraction task.
                     * 
                     */
                    ExtractBlindWatermarkTaskConfig GetExtractBlindWatermarkConfig() const;

                    /**
                     * 设置Configuration of the digital watermark extraction task.
                     * @param _extractBlindWatermarkConfig Configuration of the digital watermark extraction task.
                     * 
                     */
                    void SetExtractBlindWatermarkConfig(const ExtractBlindWatermarkTaskConfig& _extractBlindWatermarkConfig);

                    /**
                     * 判断参数 ExtractBlindWatermarkConfig 是否已赋值
                     * @return ExtractBlindWatermarkConfig 是否已赋值
                     * 
                     */
                    bool ExtractBlindWatermarkConfigHasBeenSet() const;

                    /**
                     * 获取Identify source context, used for passing through user request information. The value of this field will be returned in the ExtractBlindWatermarkComplete callback and task flow status change callback, with a maximum length of 1000 characters.
                     * @return SessionContext Identify source context, used for passing through user request information. The value of this field will be returned in the ExtractBlindWatermarkComplete callback and task flow status change callback, with a maximum length of 1000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Identify source context, used for passing through user request information. The value of this field will be returned in the ExtractBlindWatermarkComplete callback and task flow status change callback, with a maximum length of 1000 characters.
                     * @param _sessionContext Identify source context, used for passing through user request information. The value of this field will be returned in the ExtractBlindWatermarkComplete callback and task flow status change callback, with a maximum length of 1000 characters.
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
                     * 获取An identification code for task deduplication. If there has been a request with the same identification code within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or with an empty string indicates no deduplication.
                     * @return SessionId An identification code for task deduplication. If there has been a request with the same identification code within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or with an empty string indicates no deduplication.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置An identification code for task deduplication. If there has been a request with the same identification code within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or with an empty string indicates no deduplication.
                     * @param _sessionId An identification code for task deduplication. If there has been a request with the same identification code within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or with an empty string indicates no deduplication.
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
                     * 获取Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If left blank, it represents 0.
                     * @return TasksPriority Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If left blank, it represents 0.
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If left blank, it represents 0.
                     * @param _tasksPriority Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If left blank, it represents 0.
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
                     * Digital watermark type. Valid values: <li>blind-basic: basic copyright digital watermark;</li> <li>blind-trace: trace the source ab sequence watermark.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * File input information for the Media Processing Service (MPS) task.
                     */
                    ExtractBlindWatermarkInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * VOD application ID for watermarking. Note that the SubAppId must be in line with the one used during watermarking to extract the watermark, whether importing FILEID or URL.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Configuration of the digital watermark extraction task.
                     */
                    ExtractBlindWatermarkTaskConfig m_extractBlindWatermarkConfig;
                    bool m_extractBlindWatermarkConfigHasBeenSet;

                    /**
                     * Identify source context, used for passing through user request information. The value of this field will be returned in the ExtractBlindWatermarkComplete callback and task flow status change callback, with a maximum length of 1000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * An identification code for task deduplication. If there has been a request with the same identification code within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or with an empty string indicates no deduplication.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If left blank, it represents 0.
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTBLINDWATERMARKREQUEST_H_
