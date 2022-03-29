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

#ifndef TENCENTCLOUD_VM_V20201229_MODEL_IMAGERESULT_H_
#define TENCENTCLOUD_VM_V20201229_MODEL_IMAGERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20201229/model/ImageResultResult.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Result details
                */
                class ImageResult : public AbstractModel
                {
                public:
                    ImageResult();
                    ~ImageResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This parameter indicates whether the moderated content hit a maliciousness tag. Valid values: 0 (**no**), 1 (**yes**).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HitFlag This parameter indicates whether the moderated content hit a maliciousness tag. Valid values: 0 (**no**), 1 (**yes**).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetHitFlag() const;

                    /**
                     * 设置This parameter indicates whether the moderated content hit a maliciousness tag. Valid values: 0 (**no**), 1 (**yes**).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param HitFlag This parameter indicates whether the moderated content hit a maliciousness tag. Valid values: 0 (**no**), 1 (**yes**).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHitFlag(const int64_t& _hitFlag);

                    /**
                     * 判断参数 HitFlag 是否已赋值
                     * @return HitFlag 是否已赋值
                     */
                    bool HitFlagHasBeenSet() const;

                    /**
                     * 获取This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Label This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Label This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Suggestion This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Suggestion This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn-SexBehavior 99* indicates that the text is highly likely to fall into the category of content involving sexual behaviors.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Score This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn-SexBehavior 99* indicates that the text is highly likely to fall into the category of content involving sexual behaviors.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn-SexBehavior 99* indicates that the text is highly likely to fall into the category of content involving sexual behaviors.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Score This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn-SexBehavior 99* indicates that the text is highly likely to fall into the category of content involving sexual behaviors.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取This field is used to return the sub-result of the image moderation result. For details, see the description of the `ImageResultResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Results This field is used to return the sub-result of the image moderation result. For details, see the description of the `ImageResultResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ImageResultResult> GetResults() const;

                    /**
                     * 设置This field is used to return the sub-result of the image moderation result. For details, see the description of the `ImageResultResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Results This field is used to return the sub-result of the image moderation result. For details, see the description of the `ImageResultResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResults(const std::vector<ImageResultResult>& _results);

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取This field is used to return the access URL of the moderation result. Supported image formats include PNG, JPG, JPEG, BMP, GIF, and WEBP.<br>Note: the data **is valid for 12 hours by default**. If you need a longer storage period, configure it in the COS bucket where the data is stored.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Url This field is used to return the access URL of the moderation result. Supported image formats include PNG, JPG, JPEG, BMP, GIF, and WEBP.<br>Note: the data **is valid for 12 hours by default**. If you need a longer storage period, configure it in the COS bucket where the data is stored.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置This field is used to return the access URL of the moderation result. Supported image formats include PNG, JPG, JPEG, BMP, GIF, and WEBP.<br>Note: the data **is valid for 12 hours by default**. If you need a longer storage period, configure it in the COS bucket where the data is stored.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Url This field is used to return the access URL of the moderation result. Supported image formats include PNG, JPG, JPEG, BMP, GIF, and WEBP.<br>Note: the data **is valid for 12 hours by default**. If you need a longer storage period, configure it in the COS bucket where the data is stored.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取This field is used to return the additional information (Extra) in the input parameters. If it is not configured, an empty value will be returned by default.<br>Note: the returned information varies by customer or `Biztype`. If you need to configure this field, submit a ticket or contact the aftersales service for assistance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Extra This field is used to return the additional information (Extra) in the input parameters. If it is not configured, an empty value will be returned by default.<br>Note: the returned information varies by customer or `Biztype`. If you need to configure this field, submit a ticket or contact the aftersales service for assistance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置This field is used to return the additional information (Extra) in the input parameters. If it is not configured, an empty value will be returned by default.<br>Note: the returned information varies by customer or `Biztype`. If you need to configure this field, submit a ticket or contact the aftersales service for assistance.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Extra This field is used to return the additional information (Extra) in the input parameters. If it is not configured, an empty value will be returned by default.<br>Note: the returned information varies by customer or `Biztype`. If you need to configure this field, submit a ticket or contact the aftersales service for assistance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取This field is used to return a subtag under the current tag (Lable).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubLabel This field is used to return a subtag under the current tag (Lable).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置This field is used to return a subtag under the current tag (Lable).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SubLabel This field is used to return a subtag under the current tag (Lable).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     */
                    bool SubLabelHasBeenSet() const;

                private:

                    /**
                     * This parameter indicates whether the moderated content hit a maliciousness tag. Valid values: 0 (**no**), 1 (**yes**).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * This field is used to return the operation suggestion. When you get the determination result, the returned value indicates the suggested operation.<br>
Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * This field is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the text is more likely to fall into the category of the current returned tag; for example, *Porn-SexBehavior 99* indicates that the text is highly likely to fall into the category of content involving sexual behaviors.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * This field is used to return the sub-result of the image moderation result. For details, see the description of the `ImageResultResult` data structure.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ImageResultResult> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * This field is used to return the access URL of the moderation result. Supported image formats include PNG, JPG, JPEG, BMP, GIF, and WEBP.<br>Note: the data **is valid for 12 hours by default**. If you need a longer storage period, configure it in the COS bucket where the data is stored.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * This field is used to return the additional information (Extra) in the input parameters. If it is not configured, an empty value will be returned by default.<br>Note: the returned information varies by customer or `Biztype`. If you need to configure this field, submit a ticket or contact the aftersales service for assistance.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * This field is used to return a subtag under the current tag (Lable).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20201229_MODEL_IMAGERESULT_H_
