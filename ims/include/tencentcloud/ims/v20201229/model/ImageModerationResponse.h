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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_IMAGEMODERATIONRESPONSE_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_IMAGEMODERATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20201229/model/LabelResult.h>
#include <tencentcloud/ims/v20201229/model/ObjectResult.h>
#include <tencentcloud/ims/v20201229/model/OcrResult.h>
#include <tencentcloud/ims/v20201229/model/LibResult.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * ImageModeration response structure.
                */
                class ImageModerationResponse : public AbstractModel
                {
                public:
                    ImageModerationResponse();
                    ~ImageModerationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取This field is used to return the operation suggestion for the `Label` tag. When you get the determination result, the returned value indicates the operation suggested by the system. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Block**, **Review**, **Pass**.
                     * @return Suggestion This field is used to return the operation suggestion for the `Label` tag. When you get the determination result, the returned value indicates the operation suggested by the system. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Block**, **Review**, **Pass**.
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取This field is used to return the **maliciousness tag with the highest priority** in the detection result (LabelResults), which represents the moderation result suggested by the model. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     * @return Label This field is used to return the **maliciousness tag with the highest priority** in the detection result (LabelResults), which represents the moderation result suggested by the model. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     */
                    std::string GetLabel() const;

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取This field is used to return the subtag name under the maliciousness tag with the highest priority hit by the detection result, such as *Porn-SexBehavior*. If no subtag is hit, an empty string will be returned.
                     * @return SubLabel This field is used to return the subtag name under the maliciousness tag with the highest priority hit by the detection result, such as *Porn-SexBehavior*. If no subtag is hit, an empty string will be returned.
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取This field is used to return the confidence under the current tag (Label). Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn 99* indicates that the text is highly likely to be pornographic, while *Porn 0* indicates that the text is not pornographic.
                     * @return Score This field is used to return the confidence under the current tag (Label). Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn 99* indicates that the text is highly likely to be pornographic, while *Porn 0* indicates that the text is not pornographic.
                     */
                    int64_t GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取This field is used to return the detailed recognition result for the maliciousness tag hit by the categorization model, such as porn, advertising, or any other offensive, unsafe, or inappropriate type of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LabelResults This field is used to return the detailed recognition result for the maliciousness tag hit by the categorization model, such as porn, advertising, or any other offensive, unsafe, or inappropriate type of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LabelResult> GetLabelResults() const;

                    /**
                     * 判断参数 LabelResults 是否已赋值
                     * @return LabelResults 是否已赋值
                     */
                    bool LabelResultsHasBeenSet() const;

                    /**
                     * 获取This field is used to return the detailed detection result of the object detection model, including the tag name hit by the content such as object, advertising logo, or QR code, tag score, coordinate information, scenario recognition result, and operation suggestion. For more information on the returned value, see the description of the `ObjectResults` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ObjectResults This field is used to return the detailed detection result of the object detection model, including the tag name hit by the content such as object, advertising logo, or QR code, tag score, coordinate information, scenario recognition result, and operation suggestion. For more information on the returned value, see the description of the `ObjectResults` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ObjectResult> GetObjectResults() const;

                    /**
                     * 判断参数 ObjectResults 是否已赋值
                     * @return ObjectResults 是否已赋值
                     */
                    bool ObjectResultsHasBeenSet() const;

                    /**
                     * 获取This field is used to return the detailed text OCR result, including the text coordinate information, text recognition result, and operation suggestion. For more information on the returned value, see the description of the `OcrResults` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OcrResults This field is used to return the detailed text OCR result, including the text coordinate information, text recognition result, and operation suggestion. For more information on the returned value, see the description of the `OcrResults` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<OcrResult> GetOcrResults() const;

                    /**
                     * 判断参数 OcrResults 是否已赋值
                     * @return OcrResults 是否已赋值
                     */
                    bool OcrResultsHasBeenSet() const;

                    /**
                     * 获取This field is used to return the result of recognition based on image risk libraries (blocklist and allowlist). For more information on the returned value, see the description of the `LibResults` data structure.<br>Note: currently, **you cannot customize image risk libraries**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LibResults This field is used to return the result of recognition based on image risk libraries (blocklist and allowlist). For more information on the returned value, see the description of the `LibResults` data structure.<br>Note: currently, **you cannot customize image risk libraries**.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LibResult> GetLibResults() const;

                    /**
                     * 判断参数 LibResults 是否已赋值
                     * @return LibResults 是否已赋值
                     */
                    bool LibResultsHasBeenSet() const;

                    /**
                     * 获取This field is used to return the `DataId` in the request parameters that correspond to the detected object.
                     * @return DataId This field is used to return the `DataId` in the request parameters that correspond to the detected object.
                     */
                    std::string GetDataId() const;

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取This field is used to return the `BizType` in the request parameters that correspond to the detected object.
                     * @return BizType This field is used to return the `BizType` in the request parameters that correspond to the detected object.
                     */
                    std::string GetBizType() const;

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取This field is used to return the additional information (Extra) configured based on your needs. If it is not configured, an empty value will be returned by default.<br>Note: the returned information varies by customer or `Biztype`. If you need to configure this field, submit a ticket or contact the aftersales service for assistance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Extra This field is used to return the additional information (Extra) configured based on your needs. If it is not configured, an empty value will be returned by default.<br>Note: the returned information varies by customer or `Biztype`. If you need to configure this field, submit a ticket or contact the aftersales service for assistance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetExtra() const;

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取This field is used to return the MD5 checksum of the detected object for easier verification of the file integrity.
                     * @return FileMD5 This field is used to return the MD5 checksum of the detected object for easier verification of the file integrity.
                     */
                    std::string GetFileMD5() const;

                    /**
                     * 判断参数 FileMD5 是否已赋值
                     * @return FileMD5 是否已赋值
                     */
                    bool FileMD5HasBeenSet() const;

                private:

                    /**
                     * This field is used to return the operation suggestion for the `Label` tag. When you get the determination result, the returned value indicates the operation suggested by the system. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Block**, **Review**, **Pass**.
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * This field is used to return the **maliciousness tag with the highest priority** in the detection result (LabelResults), which represents the moderation result suggested by the model. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * This field is used to return the subtag name under the maliciousness tag with the highest priority hit by the detection result, such as *Porn-SexBehavior*. If no subtag is hit, an empty string will be returned.
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * This field is used to return the confidence under the current tag (Label). Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn 99* indicates that the text is highly likely to be pornographic, while *Porn 0* indicates that the text is not pornographic.
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * This field is used to return the detailed recognition result for the maliciousness tag hit by the categorization model, such as porn, advertising, or any other offensive, unsafe, or inappropriate type of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LabelResult> m_labelResults;
                    bool m_labelResultsHasBeenSet;

                    /**
                     * This field is used to return the detailed detection result of the object detection model, including the tag name hit by the content such as object, advertising logo, or QR code, tag score, coordinate information, scenario recognition result, and operation suggestion. For more information on the returned value, see the description of the `ObjectResults` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ObjectResult> m_objectResults;
                    bool m_objectResultsHasBeenSet;

                    /**
                     * This field is used to return the detailed text OCR result, including the text coordinate information, text recognition result, and operation suggestion. For more information on the returned value, see the description of the `OcrResults` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<OcrResult> m_ocrResults;
                    bool m_ocrResultsHasBeenSet;

                    /**
                     * This field is used to return the result of recognition based on image risk libraries (blocklist and allowlist). For more information on the returned value, see the description of the `LibResults` data structure.<br>Note: currently, **you cannot customize image risk libraries**.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LibResult> m_libResults;
                    bool m_libResultsHasBeenSet;

                    /**
                     * This field is used to return the `DataId` in the request parameters that correspond to the detected object.
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * This field is used to return the `BizType` in the request parameters that correspond to the detected object.
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * This field is used to return the additional information (Extra) configured based on your needs. If it is not configured, an empty value will be returned by default.<br>Note: the returned information varies by customer or `Biztype`. If you need to configure this field, submit a ticket or contact the aftersales service for assistance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * This field is used to return the MD5 checksum of the detected object for easier verification of the file integrity.
                     */
                    std::string m_fileMD5;
                    bool m_fileMD5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_IMAGEMODERATIONRESPONSE_H_
