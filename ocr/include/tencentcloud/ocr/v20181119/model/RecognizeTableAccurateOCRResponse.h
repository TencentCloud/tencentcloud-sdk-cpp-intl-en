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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETABLEACCURATEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETABLEACCURATEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/TableInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeTableAccurateOCR response structure.
                */
                class RecognizeTableAccurateOCRResponse : public AbstractModel
                {
                public:
                    RecognizeTableAccurateOCRResponse();
                    ~RecognizeTableAccurateOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The recognized text information. Please click the link on the left for details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TableDetections The recognized text information. Please click the link on the left for details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TableInfo> GetTableDetections() const;

                    /**
                     * 判断参数 TableDetections 是否已赋值
                     * @return TableDetections 是否已赋值
                     * 
                     */
                    bool TableDetectionsHasBeenSet() const;

                    /**
                     * 获取Base64-encoded Excel data.
                     * @return Data Base64-encoded Excel data.
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取The total number of pages in the PDF file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PdfPageSize The total number of pages in the PDF file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPdfPageSize() const;

                    /**
                     * 判断参数 PdfPageSize 是否已赋值
                     * @return PdfPageSize 是否已赋值
                     * 
                     */
                    bool PdfPageSizeHasBeenSet() const;

                    /**
                     * 获取Image rotation angle in degrees. 0°: The horizontal direction of the text on the image; a negative value: rotate counterclockwise. Value range: -360° to 0°.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Angle Image rotation angle in degrees. 0°: The horizontal direction of the text on the image; a negative value: rotate counterclockwise. Value range: -360° to 0°.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * The recognized text information. Please click the link on the left for details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TableInfo> m_tableDetections;
                    bool m_tableDetectionsHasBeenSet;

                    /**
                     * Base64-encoded Excel data.
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * The total number of pages in the PDF file.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pdfPageSize;
                    bool m_pdfPageSizeHasBeenSet;

                    /**
                     * Image rotation angle in degrees. 0°: The horizontal direction of the text on the image; a negative value: rotate counterclockwise. Value range: -360° to 0°.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETABLEACCURATEOCRRESPONSE_H_
