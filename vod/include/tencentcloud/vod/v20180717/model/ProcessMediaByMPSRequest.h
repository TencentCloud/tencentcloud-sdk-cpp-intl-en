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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYMPSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYMPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSAiAnalysisTaskInput.h>
#include <tencentcloud/vod/v20180717/model/MPSSmartSubtitlesTaskInput.h>
#include <tencentcloud/vod/v20180717/model/MPSSmartEraseTaskInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ProcessMediaByMPS request structure.
                */
                class ProcessMediaByMPSRequest : public AbstractModel
                {
                public:
                    ProcessMediaByMPSRequest();
                    ~ProcessMediaByMPSRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Media file ID, the globally unique ID of the file in VOD, is assigned by the VOD backend after successful upload. You can get this field in <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p>
                     * @return FileId <p>Media file ID, the globally unique ID of the file in VOD, is assigned by the VOD backend after successful upload. You can get this field in <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>Media file ID, the globally unique ID of the file in VOD, is assigned by the VOD backend after successful upload. You can get this field in <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p>
                     * @param _fileId <p>Media file ID, the globally unique ID of the file in VOD, is assigned by the VOD backend after successful upload. You can get this field in <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p>
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
                     * 获取<p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
                     * @return SubAppId <p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
                     * @param _subAppId <p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
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
                     * 获取<p>Optional parameter. This parameter is used for passing through to the media processing service (MPS) to trigger MPS video processing tasks from VOD.
                     * @return MPSProcessMediaParams <p>Optional parameter. This parameter is used for passing through to the media processing service (MPS) to trigger MPS video processing tasks from VOD.
                     * 
                     */
                    std::string GetMPSProcessMediaParams() const;

                    /**
                     * 设置<p>Optional parameter. This parameter is used for passing through to the media processing service (MPS) to trigger MPS video processing tasks from VOD.
                     * @param _mPSProcessMediaParams <p>Optional parameter. This parameter is used for passing through to the media processing service (MPS) to trigger MPS video processing tasks from VOD.
                     * 
                     */
                    void SetMPSProcessMediaParams(const std::string& _mPSProcessMediaParams);

                    /**
                     * 判断参数 MPSProcessMediaParams 是否已赋值
                     * @return MPSProcessMediaParams 是否已赋值
                     * 
                     */
                    bool MPSProcessMediaParamsHasBeenSet() const;

                    /**
                     * 获取<p>Parameters for the video content analysis task. Valid when MPSProcessMediaParams is empty.</p>
                     * @return AiAnalysisTask <p>Parameters for the video content analysis task. Valid when MPSProcessMediaParams is empty.</p>
                     * 
                     */
                    MPSAiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置<p>Parameters for the video content analysis task. Valid when MPSProcessMediaParams is empty.</p>
                     * @param _aiAnalysisTask <p>Parameters for the video content analysis task. Valid when MPSProcessMediaParams is empty.</p>
                     * 
                     */
                    void SetAiAnalysisTask(const MPSAiAnalysisTaskInput& _aiAnalysisTask);

                    /**
                     * 判断参数 AiAnalysisTask 是否已赋值
                     * @return AiAnalysisTask 是否已赋值
                     * 
                     */
                    bool AiAnalysisTaskHasBeenSet() const;

                    /**
                     * 获取<p>Parameters for the smart subtitle task of type kind. Valid when MPSProcessMediaParams is empty.</p>
                     * @return SmartSubtitlesTask <p>Parameters for the smart subtitle task of type kind. Valid when MPSProcessMediaParams is empty.</p>
                     * 
                     */
                    MPSSmartSubtitlesTaskInput GetSmartSubtitlesTask() const;

                    /**
                     * 设置<p>Parameters for the smart subtitle task of type kind. Valid when MPSProcessMediaParams is empty.</p>
                     * @param _smartSubtitlesTask <p>Parameters for the smart subtitle task of type kind. Valid when MPSProcessMediaParams is empty.</p>
                     * 
                     */
                    void SetSmartSubtitlesTask(const MPSSmartSubtitlesTaskInput& _smartSubtitlesTask);

                    /**
                     * 判断参数 SmartSubtitlesTask 是否已赋值
                     * @return SmartSubtitlesTask 是否已赋值
                     * 
                     */
                    bool SmartSubtitlesTaskHasBeenSet() const;

                    /**
                     * 获取<p>Parameters for the intelligent erasure task of type kind. Valid when MPSProcessMediaParams is empty.</p>
                     * @return SmartEraseTask <p>Parameters for the intelligent erasure task of type kind. Valid when MPSProcessMediaParams is empty.</p>
                     * 
                     */
                    MPSSmartEraseTaskInput GetSmartEraseTask() const;

                    /**
                     * 设置<p>Parameters for the intelligent erasure task of type kind. Valid when MPSProcessMediaParams is empty.</p>
                     * @param _smartEraseTask <p>Parameters for the intelligent erasure task of type kind. Valid when MPSProcessMediaParams is empty.</p>
                     * 
                     */
                    void SetSmartEraseTask(const MPSSmartEraseTaskInput& _smartEraseTask);

                    /**
                     * 判断参数 SmartEraseTask 是否已赋值
                     * @return SmartEraseTask 是否已赋值
                     * 
                     */
                    bool SmartEraseTaskHasBeenSet() const;

                    /**
                     * 获取<p>Reserved field. Used for special purpose.</p>
                     * @return ExtInfo <p>Reserved field. Used for special purpose.</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>Reserved field. Used for special purpose.</p>
                     * @param _extInfo <p>Reserved field. Used for special purpose.</p>
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
                     * <p>Media file ID, the globally unique ID of the file in VOD, is assigned by the VOD backend after successful upload. You can get this field in <a href="/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p><b>VOD <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID.</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Optional parameter. This parameter is used for passing through to the media processing service (MPS) to trigger MPS video processing tasks from VOD.
                     */
                    std::string m_mPSProcessMediaParams;
                    bool m_mPSProcessMediaParamsHasBeenSet;

                    /**
                     * <p>Parameters for the video content analysis task. Valid when MPSProcessMediaParams is empty.</p>
                     */
                    MPSAiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * <p>Parameters for the smart subtitle task of type kind. Valid when MPSProcessMediaParams is empty.</p>
                     */
                    MPSSmartSubtitlesTaskInput m_smartSubtitlesTask;
                    bool m_smartSubtitlesTaskHasBeenSet;

                    /**
                     * <p>Parameters for the intelligent erasure task of type kind. Valid when MPSProcessMediaParams is empty.</p>
                     */
                    MPSSmartEraseTaskInput m_smartEraseTask;
                    bool m_smartEraseTaskHasBeenSet;

                    /**
                     * <p>Reserved field. Used for special purpose.</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYMPSREQUEST_H_
