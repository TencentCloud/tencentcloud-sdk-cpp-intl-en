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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_COMPAREFACELIVENESSREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_COMPAREFACELIVENESSREQUEST_H_

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
                * CompareFaceLiveness request structure.
                */
                class CompareFaceLivenessRequest : public AbstractModel
                {
                public:
                    CompareFaceLivenessRequest();
                    ~CompareFaceLivenessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64 string of the image for face comparison.
- The size of the Base64-encoded image data can be up to 3 MB. JPG and PNG formats are supported.
- Please use the standard Base64 encoding method (with = padding). Refer to RFC4648 for the encoding specification.
                     * @return ImageBase64 Base64 string of the image for face comparison.
- The size of the Base64-encoded image data can be up to 3 MB. JPG and PNG formats are supported.
- Please use the standard Base64 encoding method (with = padding). Refer to RFC4648 for the encoding specification.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置Base64 string of the image for face comparison.
- The size of the Base64-encoded image data can be up to 3 MB. JPG and PNG formats are supported.
- Please use the standard Base64 encoding method (with = padding). Refer to RFC4648 for the encoding specification.
                     * @param _imageBase64 Base64 string of the image for face comparison.
- The size of the Base64-encoded image data can be up to 3 MB. JPG and PNG formats are supported.
- Please use the standard Base64 encoding method (with = padding). Refer to RFC4648 for the encoding specification.
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取Base64 string of the video for liveness detection.
- The size of the Base64-encoded video data can be up to 8 MB. MP4, AVI, and FLV formats are supported.
-Use standard Base64 encoding (with = padding), following RFC4648.
                     * @return VideoBase64 Base64 string of the video for liveness detection.
- The size of the Base64-encoded video data can be up to 8 MB. MP4, AVI, and FLV formats are supported.
-Use standard Base64 encoding (with = padding), following RFC4648.
                     * 
                     */
                    std::string GetVideoBase64() const;

                    /**
                     * 设置Base64 string of the video for liveness detection.
- The size of the Base64-encoded video data can be up to 8 MB. MP4, AVI, and FLV formats are supported.
-Use standard Base64 encoding (with = padding), following RFC4648.
                     * @param _videoBase64 Base64 string of the video for liveness detection.
- The size of the Base64-encoded video data can be up to 8 MB. MP4, AVI, and FLV formats are supported.
-Use standard Base64 encoding (with = padding), following RFC4648.
                     * 
                     */
                    void SetVideoBase64(const std::string& _videoBase64);

                    /**
                     * 判断参数 VideoBase64 是否已赋值
                     * @return VideoBase64 是否已赋值
                     * 
                     */
                    bool VideoBase64HasBeenSet() const;

                    /**
                     * 获取Liveness detection type.
-Values:
ACTION is action mode.
SILENT is silent mode.
-Choose one of the two modes to pass in.
                     * @return LivenessType Liveness detection type.
-Values:
ACTION is action mode.
SILENT is silent mode.
-Choose one of the two modes to pass in.
                     * 
                     */
                    std::string GetLivenessType() const;

                    /**
                     * 设置Liveness detection type.
-Values:
ACTION is action mode.
SILENT is silent mode.
-Choose one of the two modes to pass in.
                     * @param _livenessType Liveness detection type.
-Values:
ACTION is action mode.
SILENT is silent mode.
-Choose one of the two modes to pass in.
                     * 
                     */
                    void SetLivenessType(const std::string& _livenessType);

                    /**
                     * 判断参数 LivenessType 是否已赋值
                     * @return LivenessType 是否已赋值
                     * 
                     */
                    bool LivenessTypeHasBeenSet() const;

                    /**
                     * 获取Control the action sequence. Action types include: 1 (open mouth), 2 (blink), 3 (nod), 4 (shake head). Supports one or two actions.
-Required when the LivenessType parameter is set to ACTION.
-Single action example: "1".
-Multiple actions parameter passing example: "4,2".
-When the LivenessType parameter is set to SILENT, leave it blank.
                     * @return ValidateData Control the action sequence. Action types include: 1 (open mouth), 2 (blink), 3 (nod), 4 (shake head). Supports one or two actions.
-Required when the LivenessType parameter is set to ACTION.
-Single action example: "1".
-Multiple actions parameter passing example: "4,2".
-When the LivenessType parameter is set to SILENT, leave it blank.
                     * 
                     */
                    std::string GetValidateData() const;

                    /**
                     * 设置Control the action sequence. Action types include: 1 (open mouth), 2 (blink), 3 (nod), 4 (shake head). Supports one or two actions.
-Required when the LivenessType parameter is set to ACTION.
-Single action example: "1".
-Multiple actions parameter passing example: "4,2".
-When the LivenessType parameter is set to SILENT, leave it blank.
                     * @param _validateData Control the action sequence. Action types include: 1 (open mouth), 2 (blink), 3 (nod), 4 (shake head). Supports one or two actions.
-Required when the LivenessType parameter is set to ACTION.
-Single action example: "1".
-Multiple actions parameter passing example: "4,2".
-When the LivenessType parameter is set to SILENT, leave it blank.
                     * 
                     */
                    void SetValidateData(const std::string& _validateData);

                    /**
                     * 判断参数 ValidateData 是否已赋值
                     * @return ValidateData 是否已赋值
                     * 
                     */
                    bool ValidateDataHasBeenSet() const;

                private:

                    /**
                     * Base64 string of the image for face comparison.
- The size of the Base64-encoded image data can be up to 3 MB. JPG and PNG formats are supported.
- Please use the standard Base64 encoding method (with = padding). Refer to RFC4648 for the encoding specification.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * Base64 string of the video for liveness detection.
- The size of the Base64-encoded video data can be up to 8 MB. MP4, AVI, and FLV formats are supported.
-Use standard Base64 encoding (with = padding), following RFC4648.
                     */
                    std::string m_videoBase64;
                    bool m_videoBase64HasBeenSet;

                    /**
                     * Liveness detection type.
-Values:
ACTION is action mode.
SILENT is silent mode.
-Choose one of the two modes to pass in.
                     */
                    std::string m_livenessType;
                    bool m_livenessTypeHasBeenSet;

                    /**
                     * Control the action sequence. Action types include: 1 (open mouth), 2 (blink), 3 (nod), 4 (shake head). Supports one or two actions.
-Required when the LivenessType parameter is set to ACTION.
-Single action example: "1".
-Multiple actions parameter passing example: "4,2".
-When the LivenessType parameter is set to SILENT, leave it blank.
                     */
                    std::string m_validateData;
                    bool m_validateDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_COMPAREFACELIVENESSREQUEST_H_
