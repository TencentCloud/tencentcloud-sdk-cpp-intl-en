/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSCOMPAREREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSCOMPAREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * LivenessCompare request structure.
                */
                class LivenessCompareRequest : public AbstractModel
                {
                public:
                    LivenessCompareRequest();
                    ~LivenessCompareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64 value of a photo for face comparison;
Base64-encoded image data is up to 3 MB. Only JPG and PNG formats are supported.
                     * @return ImageBase64 Base64 value of a photo for face comparison;
Base64-encoded image data is up to 3 MB. Only JPG and PNG formats are supported.
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置Base64 value of a photo for face comparison;
Base64-encoded image data is up to 3 MB. Only JPG and PNG formats are supported.
                     * @param ImageBase64 Base64 value of a photo for face comparison;
Base64-encoded image data is up to 3 MB. Only JPG and PNG formats are supported.
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取Base64 value of a video for liveness detection;
The size after Base64-encoding cannot exceed 5 MB. MP4, AVI, and FLV formats are supported.
                     * @return VideoBase64 Base64 value of a video for liveness detection;
The size after Base64-encoding cannot exceed 5 MB. MP4, AVI, and FLV formats are supported.
                     */
                    std::string GetVideoBase64() const;

                    /**
                     * 设置Base64 value of a video for liveness detection;
The size after Base64-encoding cannot exceed 5 MB. MP4, AVI, and FLV formats are supported.
                     * @param VideoBase64 Base64 value of a video for liveness detection;
The size after Base64-encoding cannot exceed 5 MB. MP4, AVI, and FLV formats are supported.
                     */
                    void SetVideoBase64(const std::string& _videoBase64);

                    /**
                     * 判断参数 VideoBase64 是否已赋值
                     * @return VideoBase64 是否已赋值
                     */
                    bool VideoBase64HasBeenSet() const;

                    /**
                     * 获取Liveness detection type. Valid values: LIP/ACTION/SILENT.
LIP: numeric mode; ACTION: motion mode; SILENT: silent mode. You need to select a mode to input.
                     * @return LivenessType Liveness detection type. Valid values: LIP/ACTION/SILENT.
LIP: numeric mode; ACTION: motion mode; SILENT: silent mode. You need to select a mode to input.
                     */
                    std::string GetLivenessType() const;

                    /**
                     * 设置Liveness detection type. Valid values: LIP/ACTION/SILENT.
LIP: numeric mode; ACTION: motion mode; SILENT: silent mode. You need to select a mode to input.
                     * @param LivenessType Liveness detection type. Valid values: LIP/ACTION/SILENT.
LIP: numeric mode; ACTION: motion mode; SILENT: silent mode. You need to select a mode to input.
                     */
                    void SetLivenessType(const std::string& _livenessType);

                    /**
                     * 判断参数 LivenessType 是否已赋值
                     * @return LivenessType 是否已赋值
                     */
                    bool LivenessTypeHasBeenSet() const;

                    /**
                     * 获取Input parameter for the numeric mode: numeric verification code (1234). An API needs to be called first to get a numeric verification code;
Input parameter for the motion mode: motion order (2,1 or 1,2). An API needs to be called first to get the motion order;
Input parameter for silent mode: empty.
                     * @return ValidateData Input parameter for the numeric mode: numeric verification code (1234). An API needs to be called first to get a numeric verification code;
Input parameter for the motion mode: motion order (2,1 or 1,2). An API needs to be called first to get the motion order;
Input parameter for silent mode: empty.
                     */
                    std::string GetValidateData() const;

                    /**
                     * 设置Input parameter for the numeric mode: numeric verification code (1234). An API needs to be called first to get a numeric verification code;
Input parameter for the motion mode: motion order (2,1 or 1,2). An API needs to be called first to get the motion order;
Input parameter for silent mode: empty.
                     * @param ValidateData Input parameter for the numeric mode: numeric verification code (1234). An API needs to be called first to get a numeric verification code;
Input parameter for the motion mode: motion order (2,1 or 1,2). An API needs to be called first to get the motion order;
Input parameter for silent mode: empty.
                     */
                    void SetValidateData(const std::string& _validateData);

                    /**
                     * 判断参数 ValidateData 是否已赋值
                     * @return ValidateData 是否已赋值
                     */
                    bool ValidateDataHasBeenSet() const;

                    /**
                     * 获取This parameter does not need to be passed in for this API.
                     * @return Optional This parameter does not need to be passed in for this API.
                     */
                    std::string GetOptional() const;

                    /**
                     * 设置This parameter does not need to be passed in for this API.
                     * @param Optional This parameter does not need to be passed in for this API.
                     */
                    void SetOptional(const std::string& _optional);

                    /**
                     * 判断参数 Optional 是否已赋值
                     * @return Optional 是否已赋值
                     */
                    bool OptionalHasBeenSet() const;

                private:

                    /**
                     * Base64 value of a photo for face comparison;
Base64-encoded image data is up to 3 MB. Only JPG and PNG formats are supported.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * Base64 value of a video for liveness detection;
The size after Base64-encoding cannot exceed 5 MB. MP4, AVI, and FLV formats are supported.
                     */
                    std::string m_videoBase64;
                    bool m_videoBase64HasBeenSet;

                    /**
                     * Liveness detection type. Valid values: LIP/ACTION/SILENT.
LIP: numeric mode; ACTION: motion mode; SILENT: silent mode. You need to select a mode to input.
                     */
                    std::string m_livenessType;
                    bool m_livenessTypeHasBeenSet;

                    /**
                     * Input parameter for the numeric mode: numeric verification code (1234). An API needs to be called first to get a numeric verification code;
Input parameter for the motion mode: motion order (2,1 or 1,2). An API needs to be called first to get the motion order;
Input parameter for silent mode: empty.
                     */
                    std::string m_validateData;
                    bool m_validateDataHasBeenSet;

                    /**
                     * This parameter does not need to be passed in for this API.
                     */
                    std::string m_optional;
                    bool m_optionalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSCOMPAREREQUEST_H_
