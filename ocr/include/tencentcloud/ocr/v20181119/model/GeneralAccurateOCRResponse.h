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
                     * 获取<p>Detected text information, including row content, confidence degree, text line coordinate, and rotation corrected coordinate. For specific content, please click the left-side link.</p>
                     * @return TextDetections <p>Detected text information, including row content, confidence degree, text line coordinate, and rotation corrected coordinate. For specific content, please click the left-side link.</p>
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
                     * 获取Image rotation angle in degrees. Zero degrees: The horizontal direction of the text on the image; a positive value: rotate clockwise; a negative value: rotate counterclockwise.
                     * @return Angel Image rotation angle in degrees. Zero degrees: The horizontal direction of the text on the image; a positive value: rotate clockwise; a negative value: rotate counterclockwise.
                     * @deprecated
                     */
                    double GetAngel() const;

                    /**
                     * 判断参数 Angel 是否已赋值
                     * @return Angel 是否已赋值
                     * @deprecated
                     */
                    bool AngelHasBeenSet() const;

                    /**
                     * 获取<p>Image rotation angle (angle system), the text's horizontal direction is Zero degrees; clockwise is positive, counterclockwise is negative. Click to view <a href="https://www.tencentcloud.com/document/product/866/45139?from_cn_redirect=1">How to correct tilt text</a></p>
                     * @return Angle <p>Image rotation angle (angle system), the text's horizontal direction is Zero degrees; clockwise is positive, counterclockwise is negative. Click to view <a href="https://www.tencentcloud.com/document/product/866/45139?from_cn_redirect=1">How to correct tilt text</a></p>
                     * 
                     */
                    double GetAngle() const;

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                private:

                    /**
                     * <p>Detected text information, including row content, confidence degree, text line coordinate, and rotation corrected coordinate. For specific content, please click the left-side link.</p>
                     */
                    std::vector<TextDetection> m_textDetections;
                    bool m_textDetectionsHasBeenSet;

                    /**
                     * Image rotation angle in degrees. Zero degrees: The horizontal direction of the text on the image; a positive value: rotate clockwise; a negative value: rotate counterclockwise.
                     */
                    double m_angel;
                    bool m_angelHasBeenSet;

                    /**
                     * <p>Image rotation angle (angle system), the text's horizontal direction is Zero degrees; clockwise is positive, counterclockwise is negative. Click to view <a href="https://www.tencentcloud.com/document/product/866/45139?from_cn_redirect=1">How to correct tilt text</a></p>
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GENERALACCURATEOCRRESPONSE_H_
