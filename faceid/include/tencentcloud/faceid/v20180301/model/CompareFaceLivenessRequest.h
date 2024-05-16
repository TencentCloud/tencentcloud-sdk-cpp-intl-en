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
                     * 获取Base64 value of photos used for face comparison. 
The size of image data encoded by Base64 shall not exceed 3M, only jpg and png are supported. 
Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. 
Example values: "/9j/4AAQSk... (total length:61944)KiiK//2Q=="
                     * @return ImageBase64 Base64 value of photos used for face comparison. 
The size of image data encoded by Base64 shall not exceed 3M, only jpg and png are supported. 
Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. 
Example values: "/9j/4AAQSk... (total length:61944)KiiK//2Q=="
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置Base64 value of photos used for face comparison. 
The size of image data encoded by Base64 shall not exceed 3M, only jpg and png are supported. 
Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. 
Example values: "/9j/4AAQSk... (total length:61944)KiiK//2Q=="
                     * @param _imageBase64 Base64 value of photos used for face comparison. 
The size of image data encoded by Base64 shall not exceed 3M, only jpg and png are supported. 
Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. 
Example values: "/9j/4AAQSk... (total length:61944)KiiK//2Q=="
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
                     * 获取Base64 value of photos used for face comparison. 
The size of image data encoded by Base64 shall not exceed 3M, only jpg and png are supported. 
Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. 
Example values: "/9j/4AAQSk... (total length:61944)KiiK//2Q=="
                     * @return VideoBase64 Base64 value of photos used for face comparison. 
The size of image data encoded by Base64 shall not exceed 3M, only jpg and png are supported. 
Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. 
Example values: "/9j/4AAQSk... (total length:61944)KiiK//2Q=="
                     * 
                     */
                    std::string GetVideoBase64() const;

                    /**
                     * 设置Base64 value of photos used for face comparison. 
The size of image data encoded by Base64 shall not exceed 3M, only jpg and png are supported. 
Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. 
Example values: "/9j/4AAQSk... (total length:61944)KiiK//2Q=="
                     * @param _videoBase64 Base64 value of photos used for face comparison. 
The size of image data encoded by Base64 shall not exceed 3M, only jpg and png are supported. 
Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. 
Example values: "/9j/4AAQSk... (total length:61944)KiiK//2Q=="
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
                     * 获取The liveness detection type. Valid values: `LIP`, `ACTION`, and `SILENT`.
`LIP`: Numeric mode; `ACTION`: Motion mode; `SILENT`: silent mode. Select one of them.
Example value: "SILENT"
                     * @return LivenessType The liveness detection type. Valid values: `LIP`, `ACTION`, and `SILENT`.
`LIP`: Numeric mode; `ACTION`: Motion mode; `SILENT`: silent mode. Select one of them.
Example value: "SILENT"
                     * 
                     */
                    std::string GetLivenessType() const;

                    /**
                     * 设置The liveness detection type. Valid values: `LIP`, `ACTION`, and `SILENT`.
`LIP`: Numeric mode; `ACTION`: Motion mode; `SILENT`: silent mode. Select one of them.
Example value: "SILENT"
                     * @param _livenessType The liveness detection type. Valid values: `LIP`, `ACTION`, and `SILENT`.
`LIP`: Numeric mode; `ACTION`: Motion mode; `SILENT`: silent mode. Select one of them.
Example value: "SILENT"
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
                     * 获取When the “LivenessType” parameter is “ACTION”, it must be specified.
It is used to control the action sequence. Action types: 
1 (open mouth)
2 (blink)
3 (nod)
4 (shake head). 
Select one or two from the four actions.
Example of passing single action parameter: "1".
Example of passing multiple action parameters: "4,2".
When the “LivenessType” parameter value is “SILENT”, it shall be unspecified.
Example value: ""
                     * @return ValidateData When the “LivenessType” parameter is “ACTION”, it must be specified.
It is used to control the action sequence. Action types: 
1 (open mouth)
2 (blink)
3 (nod)
4 (shake head). 
Select one or two from the four actions.
Example of passing single action parameter: "1".
Example of passing multiple action parameters: "4,2".
When the “LivenessType” parameter value is “SILENT”, it shall be unspecified.
Example value: ""
                     * 
                     */
                    std::string GetValidateData() const;

                    /**
                     * 设置When the “LivenessType” parameter is “ACTION”, it must be specified.
It is used to control the action sequence. Action types: 
1 (open mouth)
2 (blink)
3 (nod)
4 (shake head). 
Select one or two from the four actions.
Example of passing single action parameter: "1".
Example of passing multiple action parameters: "4,2".
When the “LivenessType” parameter value is “SILENT”, it shall be unspecified.
Example value: ""
                     * @param _validateData When the “LivenessType” parameter is “ACTION”, it must be specified.
It is used to control the action sequence. Action types: 
1 (open mouth)
2 (blink)
3 (nod)
4 (shake head). 
Select one or two from the four actions.
Example of passing single action parameter: "1".
Example of passing multiple action parameters: "4,2".
When the “LivenessType” parameter value is “SILENT”, it shall be unspecified.
Example value: ""
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
                     * Base64 value of photos used for face comparison. 
The size of image data encoded by Base64 shall not exceed 3M, only jpg and png are supported. 
Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. 
Example values: "/9j/4AAQSk... (total length:61944)KiiK//2Q=="
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * Base64 value of photos used for face comparison. 
The size of image data encoded by Base64 shall not exceed 3M, only jpg and png are supported. 
Please use standard Base64 encoding (use = for padding). Refer to RFC4648 for encoding specifications. 
Example values: "/9j/4AAQSk... (total length:61944)KiiK//2Q=="
                     */
                    std::string m_videoBase64;
                    bool m_videoBase64HasBeenSet;

                    /**
                     * The liveness detection type. Valid values: `LIP`, `ACTION`, and `SILENT`.
`LIP`: Numeric mode; `ACTION`: Motion mode; `SILENT`: silent mode. Select one of them.
Example value: "SILENT"
                     */
                    std::string m_livenessType;
                    bool m_livenessTypeHasBeenSet;

                    /**
                     * When the “LivenessType” parameter is “ACTION”, it must be specified.
It is used to control the action sequence. Action types: 
1 (open mouth)
2 (blink)
3 (nod)
4 (shake head). 
Select one or two from the four actions.
Example of passing single action parameter: "1".
Example of passing multiple action parameters: "4,2".
When the “LivenessType” parameter value is “SILENT”, it shall be unspecified.
Example value: ""
                     */
                    std::string m_validateData;
                    bool m_validateDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_COMPAREFACELIVENESSREQUEST_H_
