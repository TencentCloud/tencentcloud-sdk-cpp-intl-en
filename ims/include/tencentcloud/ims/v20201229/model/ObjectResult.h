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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_OBJECTRESULT_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_OBJECTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20201229/model/ObjectDetail.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Returns object detection result details
                */
                class ObjectResult : public AbstractModel
                {
                public:
                    ObjectResult();
                    ~ObjectResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field is used to return the recognized object scenario result, such as QR code, logo, and image OCR.
                     * @return Scene This field is used to return the recognized object scenario result, such as QR code, logo, and image OCR.
                     */
                    std::string GetScene() const;

                    /**
                     * 设置This field is used to return the recognized object scenario result, such as QR code, logo, and image OCR.
                     * @param Scene This field is used to return the recognized object scenario result, such as QR code, logo, and image OCR.
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取This field is used to return the operation suggestion for the current maliciousness tag. When you get the determination result, the returned value indicates the operation suggested by the system. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Block**, **Review**, **Pass**.
                     * @return Suggestion This field is used to return the operation suggestion for the current maliciousness tag. When you get the determination result, the returned value indicates the operation suggested by the system. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Block**, **Review**, **Pass**.
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置This field is used to return the operation suggestion for the current maliciousness tag. When you get the determination result, the returned value indicates the operation suggested by the system. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Block**, **Review**, **Pass**.
                     * @param Suggestion This field is used to return the operation suggestion for the current maliciousness tag. When you get the determination result, the returned value indicates the operation suggested by the system. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Block**, **Review**, **Pass**.
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取This field is used to return the maliciousness tag in the detection result, which represents the moderation result suggested by the model. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     * @return Label This field is used to return the maliciousness tag in the detection result, which represents the moderation result suggested by the model. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置This field is used to return the maliciousness tag in the detection result, which represents the moderation result suggested by the model. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     * @param Label This field is used to return the maliciousness tag in the detection result, which represents the moderation result suggested by the model. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取This field is used to return the detection result for a subtag under the current maliciousness tag, such as *Porn-SexBehavior*.
                     * @return SubLabel This field is used to return the detection result for a subtag under the current maliciousness tag, such as *Porn-SexBehavior*.
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置This field is used to return the detection result for a subtag under the current maliciousness tag, such as *Porn-SexBehavior*.
                     * @param SubLabel This field is used to return the detection result for a subtag under the current maliciousness tag, such as *Porn-SexBehavior*.
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取This field is used to return the hit score of a subtag under the current maliciousness tag. Value range: **0–100**; for example, *Porn-SexBehavior 99* indicates that the hit score of the *Porn-SexBehavior* tag for the recognized content is 99.
                     * @return Score This field is used to return the hit score of a subtag under the current maliciousness tag. Value range: **0–100**; for example, *Porn-SexBehavior 99* indicates that the hit score of the *Porn-SexBehavior* tag for the recognized content is 99.
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置This field is used to return the hit score of a subtag under the current maliciousness tag. Value range: **0–100**; for example, *Porn-SexBehavior 99* indicates that the hit score of the *Porn-SexBehavior* tag for the recognized content is 99.
                     * @param Score This field is used to return the hit score of a subtag under the current maliciousness tag. Value range: **0–100**; for example, *Porn-SexBehavior 99* indicates that the hit score of the *Porn-SexBehavior* tag for the recognized content is 99.
                     */
                    void SetScore(const uint64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取This field is used to return the name of the recognized object.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Names This field is used to return the name of the recognized object.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置This field is used to return the name of the recognized object.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Names This field is used to return the name of the recognized object.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取This field is used to return the details of the recognized object, such as number, hit tag name, and position coordinates. For more information on the returned value, see the description of the [ObjectDetail](https://intl.cloud.tencent.com/document/api/1125/53274?from_cn_redirect=1#ObjectDetail) data structure.
 
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Details This field is used to return the details of the recognized object, such as number, hit tag name, and position coordinates. For more information on the returned value, see the description of the [ObjectDetail](https://intl.cloud.tencent.com/document/api/1125/53274?from_cn_redirect=1#ObjectDetail) data structure.
 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ObjectDetail> GetDetails() const;

                    /**
                     * 设置This field is used to return the details of the recognized object, such as number, hit tag name, and position coordinates. For more information on the returned value, see the description of the [ObjectDetail](https://intl.cloud.tencent.com/document/api/1125/53274?from_cn_redirect=1#ObjectDetail) data structure.
 
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Details This field is used to return the details of the recognized object, such as number, hit tag name, and position coordinates. For more information on the returned value, see the description of the [ObjectDetail](https://intl.cloud.tencent.com/document/api/1125/53274?from_cn_redirect=1#ObjectDetail) data structure.
 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDetails(const std::vector<ObjectDetail>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * This field is used to return the recognized object scenario result, such as QR code, logo, and image OCR.
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * This field is used to return the operation suggestion for the current maliciousness tag. When you get the determination result, the returned value indicates the operation suggested by the system. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Block**, **Review**, **Pass**.
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * This field is used to return the maliciousness tag in the detection result, which represents the moderation result suggested by the model. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * This field is used to return the detection result for a subtag under the current maliciousness tag, such as *Porn-SexBehavior*.
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * This field is used to return the hit score of a subtag under the current maliciousness tag. Value range: **0–100**; for example, *Porn-SexBehavior 99* indicates that the hit score of the *Porn-SexBehavior* tag for the recognized content is 99.
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * This field is used to return the name of the recognized object.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * This field is used to return the details of the recognized object, such as number, hit tag name, and position coordinates. For more information on the returned value, see the description of the [ObjectDetail](https://intl.cloud.tencent.com/document/api/1125/53274?from_cn_redirect=1#ObjectDetail) data structure.
 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ObjectDetail> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_OBJECTRESULT_H_
