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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GENERALBASICOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GENERALBASICOCRRESPONSE_H_

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
                * GeneralBasicOCR response structure.
                */
                class GeneralBasicOCRResponse : public AbstractModel
                {
                public:
                    GeneralBasicOCRResponse();
                    ~GeneralBasicOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Information of recognized text, including the text line content, confidence, text line coordinates, and text line coordinates after rotation correction. For more information, please click the link on the left.
                     * @return TextDetections Information of recognized text, including the text line content, confidence, text line coordinates, and text line coordinates after rotation correction. For more information, please click the link on the left.
                     */
                    std::vector<TextDetection> GetTextDetections() const;

                    /**
                     * 判断参数 TextDetections 是否已赋值
                     * @return TextDetections 是否已赋值
                     */
                    bool TextDetectionsHasBeenSet() const;

                    /**
                     * 获取Detected language. For more information on the supported languages, please see the description of the `LanguageType` input parameter.
                     * @return Language Detected language. For more information on the supported languages, please see the description of the `LanguageType` input parameter.
                     */
                    std::string GetLanguage() const;

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取Image rotation angle in degrees. 0° indicates horizontal text, a positive value indicates clockwise rotation, and a negative value indicates anticlockwise rotation. For more information, please see <a href="https://intl.cloud.tencent.com/document/product/866/45139?from_cn_redirect=1">How to Correct Tilted Text</a>.
                     * @return Angel Image rotation angle in degrees. 0° indicates horizontal text, a positive value indicates clockwise rotation, and a negative value indicates anticlockwise rotation. For more information, please see <a href="https://intl.cloud.tencent.com/document/product/866/45139?from_cn_redirect=1">How to Correct Tilted Text</a>.
                     */
                    double GetAngel() const;

                    /**
                     * 判断参数 Angel 是否已赋值
                     * @return Angel 是否已赋值
                     */
                    bool AngelHasBeenSet() const;

                    /**
                     * 获取Total number of PDF pages to be returned if the image is a PDF. Default value: 0.
                     * @return PdfPageSize Total number of PDF pages to be returned if the image is a PDF. Default value: 0.
                     */
                    int64_t GetPdfPageSize() const;

                    /**
                     * 判断参数 PdfPageSize 是否已赋值
                     * @return PdfPageSize 是否已赋值
                     */
                    bool PdfPageSizeHasBeenSet() const;

                private:

                    /**
                     * Information of recognized text, including the text line content, confidence, text line coordinates, and text line coordinates after rotation correction. For more information, please click the link on the left.
                     */
                    std::vector<TextDetection> m_textDetections;
                    bool m_textDetectionsHasBeenSet;

                    /**
                     * Detected language. For more information on the supported languages, please see the description of the `LanguageType` input parameter.
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * Image rotation angle in degrees. 0° indicates horizontal text, a positive value indicates clockwise rotation, and a negative value indicates anticlockwise rotation. For more information, please see <a href="https://intl.cloud.tencent.com/document/product/866/45139?from_cn_redirect=1">How to Correct Tilted Text</a>.
                     */
                    double m_angel;
                    bool m_angelHasBeenSet;

                    /**
                     * Total number of PDF pages to be returned if the image is a PDF. Default value: 0.
                     */
                    int64_t m_pdfPageSize;
                    bool m_pdfPageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GENERALBASICOCRRESPONSE_H_
