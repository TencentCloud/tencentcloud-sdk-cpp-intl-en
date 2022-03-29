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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_OCRTEXTDETAIL_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_OCRTEXTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20201229/model/Location.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * This field is used to return the OCR text result details. More text in the image may increase the time it takes the API to return the result.
                */
                class OcrTextDetail : public AbstractModel
                {
                public:
                    OcrTextDetail();
                    ~OcrTextDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field is used to return the text content recognized by OCR.<br>Note: OCR can recognize text of **up to 5,000 bytes**.
                     * @return Text This field is used to return the text content recognized by OCR.<br>Note: OCR can recognize text of **up to 5,000 bytes**.
                     */
                    std::string GetText() const;

                    /**
                     * 设置This field is used to return the text content recognized by OCR.<br>Note: OCR can recognize text of **up to 5,000 bytes**.
                     * @param Text This field is used to return the text content recognized by OCR.<br>Note: OCR can recognize text of **up to 5,000 bytes**.
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     * @return Label This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     * @param Label This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the ID of the custom library for easier custom library management and configuration.
                     * @return LibId This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the ID of the custom library for easier custom library management and configuration.
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the ID of the custom library for easier custom library management and configuration.
                     * @param LibId This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the ID of the custom library for easier custom library management and configuration.
                     */
                    void SetLibId(const std::string& _libId);

                    /**
                     * 判断参数 LibId 是否已赋值
                     * @return LibId 是否已赋值
                     */
                    bool LibIdHasBeenSet() const;

                    /**
                     * 获取This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the name of the custom library for easier custom library management and configuration.
                     * @return LibName This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the name of the custom library for easier custom library management and configuration.
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the name of the custom library for easier custom library management and configuration.
                     * @param LibName This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the name of the custom library for easier custom library management and configuration.
                     */
                    void SetLibName(const std::string& _libName);

                    /**
                     * 判断参数 LibName 是否已赋值
                     * @return LibName 是否已赋值
                     */
                    bool LibNameHasBeenSet() const;

                    /**
                     * 获取This parameter is used to return the hit keyword under the current tag (label).
                     * @return Keywords This parameter is used to return the hit keyword under the current tag (label).
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置This parameter is used to return the hit keyword under the current tag (label).
                     * @param Keywords This parameter is used to return the hit keyword under the current tag (label).
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取This parameter is used to return the model hit score of the current maliciousness tag. Value range: **0–100**, where a higher value indicates that the current scenario agrees more with the scenario represented by the maliciousness tag.
                     * @return Score This parameter is used to return the model hit score of the current maliciousness tag. Value range: **0–100**, where a higher value indicates that the current scenario agrees more with the scenario represented by the maliciousness tag.
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置This parameter is used to return the model hit score of the current maliciousness tag. Value range: **0–100**, where a higher value indicates that the current scenario agrees more with the scenario represented by the maliciousness tag.
                     * @param Score This parameter is used to return the model hit score of the current maliciousness tag. Value range: **0–100**, where a higher value indicates that the current scenario agrees more with the scenario represented by the maliciousness tag.
                     */
                    void SetScore(const uint64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取This parameter is used to return the position (X and Y coordinates of the top-left corner, length, width, and rotation angle) of the OCR detection frame in the image for quick location of the recognized text.
                     * @return Location This parameter is used to return the position (X and Y coordinates of the top-left corner, length, width, and rotation angle) of the OCR detection frame in the image for quick location of the recognized text.
                     */
                    Location GetLocation() const;

                    /**
                     * 设置This parameter is used to return the position (X and Y coordinates of the top-left corner, length, width, and rotation angle) of the OCR detection frame in the image for quick location of the recognized text.
                     * @param Location This parameter is used to return the position (X and Y coordinates of the top-left corner, length, width, and rotation angle) of the OCR detection frame in the image for quick location of the recognized text.
                     */
                    void SetLocation(const Location& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取This parameter is used to return the confidence of the text OCR result. Valid values: **0** (**the lowest confidence**)–**100** (**the highest confidence**), where a higher value indicates that it is more likely that the image contains the recognized text; for example, *Hello 99* indicates that it is highly likely that the text in the OCR recognition frame is "Hello".
                     * @return Rate This parameter is used to return the confidence of the text OCR result. Valid values: **0** (**the lowest confidence**)–**100** (**the highest confidence**), where a higher value indicates that it is more likely that the image contains the recognized text; for example, *Hello 99* indicates that it is highly likely that the text in the OCR recognition frame is "Hello".
                     */
                    uint64_t GetRate() const;

                    /**
                     * 设置This parameter is used to return the confidence of the text OCR result. Valid values: **0** (**the lowest confidence**)–**100** (**the highest confidence**), where a higher value indicates that it is more likely that the image contains the recognized text; for example, *Hello 99* indicates that it is highly likely that the text in the OCR recognition frame is "Hello".
                     * @param Rate This parameter is used to return the confidence of the text OCR result. Valid values: **0** (**the lowest confidence**)–**100** (**the highest confidence**), where a higher value indicates that it is more likely that the image contains the recognized text; for example, *Hello 99* indicates that it is highly likely that the text in the OCR recognition frame is "Hello".
                     */
                    void SetRate(const uint64_t& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取This field is used to return the maliciousness subtag that corresponds to the detection result.
                     * @return SubLabel This field is used to return the maliciousness subtag that corresponds to the detection result.
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置This field is used to return the maliciousness subtag that corresponds to the detection result.
                     * @param SubLabel This field is used to return the maliciousness subtag that corresponds to the detection result.
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     */
                    bool SubLabelHasBeenSet() const;

                private:

                    /**
                     * This field is used to return the text content recognized by OCR.<br>Note: OCR can recognize text of **up to 5,000 bytes**.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the ID of the custom library for easier custom library management and configuration.
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                    /**
                     * This field is **valid only when `Label` is `Custom` (custom keyword)**. It is used to return the name of the custom library for easier custom library management and configuration.
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * This parameter is used to return the hit keyword under the current tag (label).
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * This parameter is used to return the model hit score of the current maliciousness tag. Value range: **0–100**, where a higher value indicates that the current scenario agrees more with the scenario represented by the maliciousness tag.
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * This parameter is used to return the position (X and Y coordinates of the top-left corner, length, width, and rotation angle) of the OCR detection frame in the image for quick location of the recognized text.
                     */
                    Location m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * This parameter is used to return the confidence of the text OCR result. Valid values: **0** (**the lowest confidence**)–**100** (**the highest confidence**), where a higher value indicates that it is more likely that the image contains the recognized text; for example, *Hello 99* indicates that it is highly likely that the text in the OCR recognition frame is "Hello".
                     */
                    uint64_t m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * This field is used to return the maliciousness subtag that corresponds to the detection result.
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_OCRTEXTDETAIL_H_
