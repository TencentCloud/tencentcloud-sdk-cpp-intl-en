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

#ifndef TENCENTCLOUD_VM_V20201229_MODEL_IMAGERESULTRESULT_H_
#define TENCENTCLOUD_VM_V20201229_MODEL_IMAGERESULTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20201229/model/ImageResultsResultDetail.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Sub-result of the image output result
                */
                class ImageResultResult : public AbstractModel
                {
                public:
                    ImageResultResult();
                    ~ImageResultResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field is used to return the maliciousness scenario in the detection result. Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **AppLogo**: advertising logo; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Scene This field is used to return the maliciousness scenario in the detection result. Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **AppLogo**: advertising logo; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置This field is used to return the maliciousness scenario in the detection result. Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **AppLogo**: advertising logo; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _scene This field is used to return the maliciousness scenario in the detection result. Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **AppLogo**: advertising logo; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取This parameter indicates whether the moderated content hit a maliciousness tag. Valid values: 0 (**no**), 1 (**yes**).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HitFlag This parameter indicates whether the moderated content hit a maliciousness tag. Valid values: 0 (**no**), 1 (**yes**).
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHitFlag() const;

                    /**
                     * 设置This parameter indicates whether the moderated content hit a maliciousness tag. Valid values: 0 (**no**), 1 (**yes**).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _hitFlag This parameter indicates whether the moderated content hit a maliciousness tag. Valid values: 0 (**no**), 1 (**yes**).
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHitFlag(const int64_t& _hitFlag);

                    /**
                     * 判断参数 HitFlag 是否已赋值
                     * @return HitFlag 是否已赋值
                     * 
                     */
                    bool HitFlagHasBeenSet() const;

                    /**
                     * 获取This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Suggestion This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _suggestion This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Label This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _label This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubLabel This field is used to return the detection result for a subtag under the maliciousness tag, such as *Porn-SexBehavior*.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置This field is used to return the detection result for a subtag under the maliciousness tag, such as *Porn-SexBehavior*.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _subLabel This field is used to return the detection result for a subtag under the maliciousness tag, such as *Porn-SexBehavior*.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn-SexBehavior 99* indicates that the text is highly likely to fall into the category of content involving sexual behaviors.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Score This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn-SexBehavior 99* indicates that the text is highly likely to fall into the category of content involving sexual behaviors.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn-SexBehavior 99* indicates that the text is highly likely to fall into the category of content involving sexual behaviors.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _score This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn-SexBehavior 99* indicates that the text is highly likely to fall into the category of content involving sexual behaviors.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取This field is used to return the list of specific object names hit by the moderated image in a sensitive scenario.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Names This field is used to return the list of specific object names hit by the moderated image in a sensitive scenario.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置This field is used to return the list of specific object names hit by the moderated image in a sensitive scenario.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _names This field is used to return the list of specific object names hit by the moderated image in a sensitive scenario.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取This field is used to return the OCR result of an image. OCR can recognize text of **up to 5,000 bytes**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Text This field is used to return the OCR result of an image. OCR can recognize text of **up to 5,000 bytes**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置This field is used to return the OCR result of an image. OCR can recognize text of **up to 5,000 bytes**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _text This field is used to return the OCR result of an image. OCR can recognize text of **up to 5,000 bytes**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取This field is used to return other detailed information of the image moderation sub-result, such as text position and custom library. For the detailed returned content, see the description of the `ImageResultsResultDetail` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Details This field is used to return other detailed information of the image moderation sub-result, such as text position and custom library. For the detailed returned content, see the description of the `ImageResultsResultDetail` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ImageResultsResultDetail> GetDetails() const;

                    /**
                     * 设置This field is used to return other detailed information of the image moderation sub-result, such as text position and custom library. For the detailed returned content, see the description of the `ImageResultsResultDetail` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _details This field is used to return other detailed information of the image moderation sub-result, such as text position and custom library. For the detailed returned content, see the description of the `ImageResultsResultDetail` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDetails(const std::vector<ImageResultsResultDetail>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * This field is used to return the maliciousness scenario in the detection result. Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **AppLogo**: advertising logo; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * This parameter indicates whether the moderated content hit a maliciousness tag. Valid values: 0 (**no**), 1 (**yes**).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * This field is used to return the detection result for a subtag under the maliciousness tag, such as *Porn-SexBehavior*.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn-SexBehavior 99* indicates that the text is highly likely to fall into the category of content involving sexual behaviors.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * This field is used to return the list of specific object names hit by the moderated image in a sensitive scenario.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * This field is used to return the OCR result of an image. OCR can recognize text of **up to 5,000 bytes**.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * This field is used to return other detailed information of the image moderation sub-result, such as text position and custom library. For the detailed returned content, see the description of the `ImageResultsResultDetail` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ImageResultsResultDetail> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20201229_MODEL_IMAGERESULTRESULT_H_
