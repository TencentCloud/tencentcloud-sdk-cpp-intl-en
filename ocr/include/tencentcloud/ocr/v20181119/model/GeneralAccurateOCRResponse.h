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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GENERALACCURATEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GENERALACCURATEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/TextDetection.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * GeneralAccurateOCR response structure.
                */
                class GeneralAccurateOCRResponse : public AbstractModel
                {
                public:
                    GeneralAccurateOCRResponse();
                    ~GeneralAccurateOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Information on recognized text, including the text line content, confidence, text line coordinates, and text line coordinates after rotation correction. For more information, please click the link on the left.
                     * @return TextDetections Information on recognized text, including the text line content, confidence, text line coordinates, and text line coordinates after rotation correction. For more information, please click the link on the left.
                     * 
                     */
                    std::vector<TextDetection> GetTextDetections() const;

                    /**
                     * 判断参数 TextDetections 是否已赋值
                     * @return TextDetections 是否已赋值
                     * 
                     */
                    bool TextDetectionsHasBeenSet() const;

                    /**
                     * 获取Image rotation angle in degrees. 0°: The horizontal direction of the text on the image; a positive value: rotate clockwise; a negative value: rotate counterclockwise.
                     * @return Angel Image rotation angle in degrees. 0°: The horizontal direction of the text on the image; a positive value: rotate clockwise; a negative value: rotate counterclockwise.
                     * 
                     */
                    double GetAngel() const;

                    /**
                     * 判断参数 Angel 是否已赋值
                     * @return Angel 是否已赋值
                     * 
                     */
                    bool AngelHasBeenSet() const;

                private:

                    /**
                     * Information on recognized text, including the text line content, confidence, text line coordinates, and text line coordinates after rotation correction. For more information, please click the link on the left.
                     */
                    std::vector<TextDetection> m_textDetections;
                    bool m_textDetectionsHasBeenSet;

                    /**
                     * Image rotation angle in degrees. 0°: The horizontal direction of the text on the image; a positive value: rotate clockwise; a negative value: rotate counterclockwise.
                     */
                    double m_angel;
                    bool m_angelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GENERALACCURATEOCRRESPONSE_H_
