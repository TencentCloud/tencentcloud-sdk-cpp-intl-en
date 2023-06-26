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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_LICENSEPLATEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_LICENSEPLATEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Rect.h>
#include <tencentcloud/ocr/v20181119/model/LicensePlateInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * LicensePlateOCR response structure.
                */
                class LicensePlateOCRResponse : public AbstractModel
                {
                public:
                    LicensePlateOCRResponse();
                    ~LicensePlateOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The recognized license plate number.
                     * @return Number The recognized license plate number.
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取The confidence score (0–100).
                     * @return Confidence The confidence score (0–100).
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取The bounding box coordinates of the text line in the original image.
                     * @return Rect The bounding box coordinates of the text line in the original image.
                     * 
                     */
                    Rect GetRect() const;

                    /**
                     * 判断参数 Rect 是否已赋值
                     * @return Rect 是否已赋值
                     * 
                     */
                    bool RectHasBeenSet() const;

                    /**
                     * 获取The recognized license plate color, which currently includes "white", "black", "blue", "green", "yellow", "yellow-green", and "temporary plate".
                     * @return Color The recognized license plate color, which currently includes "white", "black", "blue", "green", "yellow", "yellow-green", and "temporary plate".
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取The vehicle license plate information.
                     * @return LicensePlateInfos The vehicle license plate information.
                     * 
                     */
                    std::vector<LicensePlateInfo> GetLicensePlateInfos() const;

                    /**
                     * 判断参数 LicensePlateInfos 是否已赋值
                     * @return LicensePlateInfos 是否已赋值
                     * 
                     */
                    bool LicensePlateInfosHasBeenSet() const;

                private:

                    /**
                     * The recognized license plate number.
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * The confidence score (0–100).
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * The bounding box coordinates of the text line in the original image.
                     */
                    Rect m_rect;
                    bool m_rectHasBeenSet;

                    /**
                     * The recognized license plate color, which currently includes "white", "black", "blue", "green", "yellow", "yellow-green", and "temporary plate".
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * The vehicle license plate information.
                     */
                    std::vector<LicensePlateInfo> m_licensePlateInfos;
                    bool m_licensePlateInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_LICENSEPLATEOCRRESPONSE_H_
