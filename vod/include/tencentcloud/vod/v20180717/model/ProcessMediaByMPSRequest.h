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
                     * 获取Media file ID, i.e., the globally unique ID of a file in VOD assigned by the VOD backend after successful upload. This field can be obtained through the [video upload completion event notification](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) or [VOD Console](https://console.cloud.tencent.com/vod/media).
                     * @return FileId Media file ID, i.e., the globally unique ID of a file in VOD assigned by the VOD backend after successful upload. This field can be obtained through the [video upload completion event notification](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) or [VOD Console](https://console.cloud.tencent.com/vod/media).
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media file ID, i.e., the globally unique ID of a file in VOD assigned by the VOD backend after successful upload. This field can be obtained through the [video upload completion event notification](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) or [VOD Console](https://console.cloud.tencent.com/vod/media).
                     * @param _fileId Media file ID, i.e., the globally unique ID of a file in VOD assigned by the VOD backend after successful upload. This field can be obtained through the [video upload completion event notification](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) or [VOD Console](https://console.cloud.tencent.com/vod/media).
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
                     * 获取<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID.</b>
                     * @return SubAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID.</b>
                     * @param _subAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID.</b>
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
                     * 获取This parameter is used for passing through to media processing service (MPS) so that video processing tasks can be triggered from VOD.
For detailed information on video processing parameters, please refer to [MPS Initiate Media Processing](https://www.tencentcloud.com/document/product/1041/33640). 
Instructions: 
1. Currently, only the AiAnalysisTask parameter in the MPS "ProcessMedia" API needs to be configured. Other parameters are not required. If other parameters are included, the system will automatically ignore them. 
2. Currently, this is the only method used to initiate Smart Erase tasks. If parameters related to other task types are configured, the system will automatically ignore them.

                     * @return MPSProcessMediaParams This parameter is used for passing through to media processing service (MPS) so that video processing tasks can be triggered from VOD.
For detailed information on video processing parameters, please refer to [MPS Initiate Media Processing](https://www.tencentcloud.com/document/product/1041/33640). 
Instructions: 
1. Currently, only the AiAnalysisTask parameter in the MPS "ProcessMedia" API needs to be configured. Other parameters are not required. If other parameters are included, the system will automatically ignore them. 
2. Currently, this is the only method used to initiate Smart Erase tasks. If parameters related to other task types are configured, the system will automatically ignore them.

                     * 
                     */
                    std::string GetMPSProcessMediaParams() const;

                    /**
                     * 设置This parameter is used for passing through to media processing service (MPS) so that video processing tasks can be triggered from VOD.
For detailed information on video processing parameters, please refer to [MPS Initiate Media Processing](https://www.tencentcloud.com/document/product/1041/33640). 
Instructions: 
1. Currently, only the AiAnalysisTask parameter in the MPS "ProcessMedia" API needs to be configured. Other parameters are not required. If other parameters are included, the system will automatically ignore them. 
2. Currently, this is the only method used to initiate Smart Erase tasks. If parameters related to other task types are configured, the system will automatically ignore them.

                     * @param _mPSProcessMediaParams This parameter is used for passing through to media processing service (MPS) so that video processing tasks can be triggered from VOD.
For detailed information on video processing parameters, please refer to [MPS Initiate Media Processing](https://www.tencentcloud.com/document/product/1041/33640). 
Instructions: 
1. Currently, only the AiAnalysisTask parameter in the MPS "ProcessMedia" API needs to be configured. Other parameters are not required. If other parameters are included, the system will automatically ignore them. 
2. Currently, this is the only method used to initiate Smart Erase tasks. If parameters related to other task types are configured, the system will automatically ignore them.

                     * 
                     */
                    void SetMPSProcessMediaParams(const std::string& _mPSProcessMediaParams);

                    /**
                     * 判断参数 MPSProcessMediaParams 是否已赋值
                     * @return MPSProcessMediaParams 是否已赋值
                     * 
                     */
                    bool MPSProcessMediaParamsHasBeenSet() const;

                private:

                    /**
                     * Media file ID, i.e., the globally unique ID of a file in VOD assigned by the VOD backend after successful upload. This field can be obtained through the [video upload completion event notification](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) or [VOD Console](https://console.cloud.tencent.com/vod/media).
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * This parameter is used for passing through to media processing service (MPS) so that video processing tasks can be triggered from VOD.
For detailed information on video processing parameters, please refer to [MPS Initiate Media Processing](https://www.tencentcloud.com/document/product/1041/33640). 
Instructions: 
1. Currently, only the AiAnalysisTask parameter in the MPS "ProcessMedia" API needs to be configured. Other parameters are not required. If other parameters are included, the system will automatically ignore them. 
2. Currently, this is the only method used to initiate Smart Erase tasks. If parameters related to other task types are configured, the system will automatically ignore them.

                     */
                    std::string m_mPSProcessMediaParams;
                    bool m_mPSProcessMediaParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSMEDIABYMPSREQUEST_H_
