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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_LABELRESULT_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_LABELRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20201229/model/LabelDetailItem.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Hit result of the categorization model
                */
                class LabelResult : public AbstractModel
                {
                public:
                    LabelResult();
                    ~LabelResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field is used to return the scenario result recognized by the model, such as advertising, pornographic, and harmful.
                     * @return Scene This field is used to return the scenario result recognized by the model, such as advertising, pornographic, and harmful.
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置This field is used to return the scenario result recognized by the model, such as advertising, pornographic, and harmful.
                     * @param _scene This field is used to return the scenario result recognized by the model, such as advertising, pornographic, and harmful.
                     * 
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取This field is used to return the operation suggestion for the current maliciousness tag. When you get the determination result, the returned value indicates the operation suggested by the system. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Block**, **Review**, **Pass**.
                     * @return Suggestion This field is used to return the operation suggestion for the current maliciousness tag. When you get the determination result, the returned value indicates the operation suggested by the system. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Block**, **Review**, **Pass**.
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置This field is used to return the operation suggestion for the current maliciousness tag. When you get the determination result, the returned value indicates the operation suggested by the system. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Block**, **Review**, **Pass**.
                     * @param _suggestion This field is used to return the operation suggestion for the current maliciousness tag. When you get the determination result, the returned value indicates the operation suggested by the system. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Block**, **Review**, **Pass**.
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     * @return Label This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     * @param _label This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取This field is used to return the detection result for a subtag under the maliciousness tag, such as *Porn-SexBehavior*.
                     * @return SubLabel This field is used to return the detection result for a subtag under the maliciousness tag, such as *Porn-SexBehavior*.
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置This field is used to return the detection result for a subtag under the maliciousness tag, such as *Porn-SexBehavior*.
                     * @param _subLabel This field is used to return the detection result for a subtag under the maliciousness tag, such as *Porn-SexBehavior*.
                     * 
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     * 
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取Confidence score of the under the current label. Value range: 0 (**the lowest confidence**) to 100 (**the highest confidence**). For example, *Porn 99* indicates that the image is highly likely to be pornographic, while *Porn 0* indicates that the image is not pornographic.
                     * @return Score Confidence score of the under the current label. Value range: 0 (**the lowest confidence**) to 100 (**the highest confidence**). For example, *Porn 99* indicates that the image is highly likely to be pornographic, while *Porn 0* indicates that the image is not pornographic.
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置Confidence score of the under the current label. Value range: 0 (**the lowest confidence**) to 100 (**the highest confidence**). For example, *Porn 99* indicates that the image is highly likely to be pornographic, while *Porn 0* indicates that the image is not pornographic.
                     * @param _score Confidence score of the under the current label. Value range: 0 (**the lowest confidence**) to 100 (**the highest confidence**). For example, *Porn 99* indicates that the image is highly likely to be pornographic, while *Porn 0* indicates that the image is not pornographic.
                     * 
                     */
                    void SetScore(const uint64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取This field is used to return the details of the subtag hit by the categorization model, such as number, hit tag name, and score.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Details This field is used to return the details of the subtag hit by the categorization model, such as number, hit tag name, and score.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<LabelDetailItem> GetDetails() const;

                    /**
                     * 设置This field is used to return the details of the subtag hit by the categorization model, such as number, hit tag name, and score.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _details This field is used to return the details of the subtag hit by the categorization model, such as number, hit tag name, and score.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDetails(const std::vector<LabelDetailItem>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * This field is used to return the scenario result recognized by the model, such as advertising, pornographic, and harmful.
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * This field is used to return the operation suggestion for the current maliciousness tag. When you get the determination result, the returned value indicates the operation suggested by the system. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Block**, **Review**, **Pass**.
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * This field is used to return the detection result for a subtag under the maliciousness tag, such as *Porn-SexBehavior*.
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * Confidence score of the under the current label. Value range: 0 (**the lowest confidence**) to 100 (**the highest confidence**). For example, *Porn 99* indicates that the image is highly likely to be pornographic, while *Porn 0* indicates that the image is not pornographic.
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * This field is used to return the details of the subtag hit by the categorization model, such as number, hit tag name, and score.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LabelDetailItem> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_LABELRESULT_H_
