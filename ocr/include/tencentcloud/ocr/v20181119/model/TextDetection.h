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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTION_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Coord.h>
#include <tencentcloud/ocr/v20181119/model/ItemCoord.h>
#include <tencentcloud/ocr/v20181119/model/DetectedWords.h>
#include <tencentcloud/ocr/v20181119/model/DetectedWordCoordPoint.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * OCR result.
                */
                class TextDetection : public AbstractModel
                {
                public:
                    TextDetection();
                    ~TextDetection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Recognized text line content.
                     * @return DetectedText Recognized text line content.
                     */
                    std::string GetDetectedText() const;

                    /**
                     * 设置Recognized text line content.
                     * @param DetectedText Recognized text line content.
                     */
                    void SetDetectedText(const std::string& _detectedText);

                    /**
                     * 判断参数 DetectedText 是否已赋值
                     * @return DetectedText 是否已赋值
                     */
                    bool DetectedTextHasBeenSet() const;

                    /**
                     * 获取Confidence. Value range: 0–100.
                     * @return Confidence Confidence. Value range: 0–100.
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置Confidence. Value range: 0–100.
                     * @param Confidence Confidence. Value range: 0–100.
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取Text line coordinates, which are represented as 4 vertex coordinates.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Polygon Text line coordinates, which are represented as 4 vertex coordinates.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Coord> GetPolygon() const;

                    /**
                     * 设置Text line coordinates, which are represented as 4 vertex coordinates.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Polygon Text line coordinates, which are represented as 4 vertex coordinates.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPolygon(const std::vector<Coord>& _polygon);

                    /**
                     * 判断参数 Polygon 是否已赋值
                     * @return Polygon 是否已赋值
                     */
                    bool PolygonHasBeenSet() const;

                    /**
                     * 获取Extended field.
The paragraph information `Parag` returned by the `GeneralBasicOcr` API contains `ParagNo`.
                     * @return AdvancedInfo Extended field.
The paragraph information `Parag` returned by the `GeneralBasicOcr` API contains `ParagNo`.
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 设置Extended field.
The paragraph information `Parag` returned by the `GeneralBasicOcr` API contains `ParagNo`.
                     * @param AdvancedInfo Extended field.
The paragraph information `Parag` returned by the `GeneralBasicOcr` API contains `ParagNo`.
                     */
                    void SetAdvancedInfo(const std::string& _advancedInfo);

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     */
                    bool AdvancedInfoHasBeenSet() const;

                    /**
                     * 获取Pixel coordinates of the text line in the image after rotation correction, which is in the format of `(X-coordinate of top-left point, Y-coordinate of top-left point, width, height)`.
                     * @return ItemPolygon Pixel coordinates of the text line in the image after rotation correction, which is in the format of `(X-coordinate of top-left point, Y-coordinate of top-left point, width, height)`.
                     */
                    ItemCoord GetItemPolygon() const;

                    /**
                     * 设置Pixel coordinates of the text line in the image after rotation correction, which is in the format of `(X-coordinate of top-left point, Y-coordinate of top-left point, width, height)`.
                     * @param ItemPolygon Pixel coordinates of the text line in the image after rotation correction, which is in the format of `(X-coordinate of top-left point, Y-coordinate of top-left point, width, height)`.
                     */
                    void SetItemPolygon(const ItemCoord& _itemPolygon);

                    /**
                     * 判断参数 ItemPolygon 是否已赋值
                     * @return ItemPolygon 是否已赋值
                     */
                    bool ItemPolygonHasBeenSet() const;

                    /**
                     * 获取Information about a character, including the character itself and its confidence. Supported APIs: `GeneralBasicOCR`, `GeneralAccurateOCR`
                     * @return Words Information about a character, including the character itself and its confidence. Supported APIs: `GeneralBasicOCR`, `GeneralAccurateOCR`
                     */
                    std::vector<DetectedWords> GetWords() const;

                    /**
                     * 设置Information about a character, including the character itself and its confidence. Supported APIs: `GeneralBasicOCR`, `GeneralAccurateOCR`
                     * @param Words Information about a character, including the character itself and its confidence. Supported APIs: `GeneralBasicOCR`, `GeneralAccurateOCR`
                     */
                    void SetWords(const std::vector<DetectedWords>& _words);

                    /**
                     * 判断参数 Words 是否已赋值
                     * @return Words 是否已赋值
                     */
                    bool WordsHasBeenSet() const;

                    /**
                     * 获取Coordinates of a word’s four corners on the input image. Supported APIs: `GeneralBasicOCR`, `GeneralAccurateOCR`
                     * @return WordCoordPoint Coordinates of a word’s four corners on the input image. Supported APIs: `GeneralBasicOCR`, `GeneralAccurateOCR`
                     */
                    std::vector<DetectedWordCoordPoint> GetWordCoordPoint() const;

                    /**
                     * 设置Coordinates of a word’s four corners on the input image. Supported APIs: `GeneralBasicOCR`, `GeneralAccurateOCR`
                     * @param WordCoordPoint Coordinates of a word’s four corners on the input image. Supported APIs: `GeneralBasicOCR`, `GeneralAccurateOCR`
                     */
                    void SetWordCoordPoint(const std::vector<DetectedWordCoordPoint>& _wordCoordPoint);

                    /**
                     * 判断参数 WordCoordPoint 是否已赋值
                     * @return WordCoordPoint 是否已赋值
                     */
                    bool WordCoordPointHasBeenSet() const;

                private:

                    /**
                     * Recognized text line content.
                     */
                    std::string m_detectedText;
                    bool m_detectedTextHasBeenSet;

                    /**
                     * Confidence. Value range: 0–100.
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Text line coordinates, which are represented as 4 vertex coordinates.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Coord> m_polygon;
                    bool m_polygonHasBeenSet;

                    /**
                     * Extended field.
The paragraph information `Parag` returned by the `GeneralBasicOcr` API contains `ParagNo`.
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                    /**
                     * Pixel coordinates of the text line in the image after rotation correction, which is in the format of `(X-coordinate of top-left point, Y-coordinate of top-left point, width, height)`.
                     */
                    ItemCoord m_itemPolygon;
                    bool m_itemPolygonHasBeenSet;

                    /**
                     * Information about a character, including the character itself and its confidence. Supported APIs: `GeneralBasicOCR`, `GeneralAccurateOCR`
                     */
                    std::vector<DetectedWords> m_words;
                    bool m_wordsHasBeenSet;

                    /**
                     * Coordinates of a word’s four corners on the input image. Supported APIs: `GeneralBasicOCR`, `GeneralAccurateOCR`
                     */
                    std::vector<DetectedWordCoordPoint> m_wordCoordPoint;
                    bool m_wordCoordPointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTION_H_
