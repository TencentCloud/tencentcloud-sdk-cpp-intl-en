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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_CARDVERIFICATIONCONFIG_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_CARDVERIFICATIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Verification capacity switch configuration
                */
                class CardVerificationConfig : public AbstractModel
                {
                public:
                    CardVerificationConfig();
                    ~CardVerificationConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether to perform card field recognition, true by default</p>
                     * @return EnableRecognition <p>Whether to perform card field recognition, true by default</p>
                     * 
                     */
                    bool GetEnableRecognition() const;

                    /**
                     * 设置<p>Whether to perform card field recognition, true by default</p>
                     * @param _enableRecognition <p>Whether to perform card field recognition, true by default</p>
                     * 
                     */
                    void SetEnableRecognition(const bool& _enableRecognition);

                    /**
                     * 判断参数 EnableRecognition 是否已赋值
                     * @return EnableRecognition 是否已赋值
                     * 
                     */
                    bool EnableRecognitionHasBeenSet() const;

                    /**
                     * 获取<p>Whether to perform quality detection (blurry/reflective/incomplete border/obstruction). false by default</p>
                     * @return EnableQualityCheck <p>Whether to perform quality detection (blurry/reflective/incomplete border/obstruction). false by default</p>
                     * 
                     */
                    bool GetEnableQualityCheck() const;

                    /**
                     * 设置<p>Whether to perform quality detection (blurry/reflective/incomplete border/obstruction). false by default</p>
                     * @param _enableQualityCheck <p>Whether to perform quality detection (blurry/reflective/incomplete border/obstruction). false by default</p>
                     * 
                     */
                    void SetEnableQualityCheck(const bool& _enableQualityCheck);

                    /**
                     * 判断参数 EnableQualityCheck 是否已赋值
                     * @return EnableQualityCheck 是否已赋值
                     * 
                     */
                    bool EnableQualityCheckHasBeenSet() const;

                    /**
                     * 获取<p>Whether to perform tampering detection (PS/synthesis/electronic). false by default</p>
                     * @return EnableTamperCheck <p>Whether to perform tampering detection (PS/synthesis/electronic). false by default</p>
                     * 
                     */
                    bool GetEnableTamperCheck() const;

                    /**
                     * 设置<p>Whether to perform tampering detection (PS/synthesis/electronic). false by default</p>
                     * @param _enableTamperCheck <p>Whether to perform tampering detection (PS/synthesis/electronic). false by default</p>
                     * 
                     */
                    void SetEnableTamperCheck(const bool& _enableTamperCheck);

                    /**
                     * 判断参数 EnableTamperCheck 是否已赋值
                     * @return EnableTamperCheck 是否已赋值
                     * 
                     */
                    bool EnableTamperCheckHasBeenSet() const;

                    /**
                     * 获取<p>Whether to perform photocopy detection. false by default</p>
                     * @return EnableCopyCheck <p>Whether to perform photocopy detection. false by default</p>
                     * 
                     */
                    bool GetEnableCopyCheck() const;

                    /**
                     * 设置<p>Whether to perform photocopy detection. false by default</p>
                     * @param _enableCopyCheck <p>Whether to perform photocopy detection. false by default</p>
                     * 
                     */
                    void SetEnableCopyCheck(const bool& _enableCopyCheck);

                    /**
                     * 判断参数 EnableCopyCheck 是否已赋值
                     * @return EnableCopyCheck 是否已赋值
                     * 
                     */
                    bool EnableCopyCheckHasBeenSet() const;

                    /**
                     * 获取<p>Whether to perform rephotography detection. false by default</p>
                     * @return EnableRecaptureCheck <p>Whether to perform rephotography detection. false by default</p>
                     * 
                     */
                    bool GetEnableRecaptureCheck() const;

                    /**
                     * 设置<p>Whether to perform rephotography detection. false by default</p>
                     * @param _enableRecaptureCheck <p>Whether to perform rephotography detection. false by default</p>
                     * 
                     */
                    void SetEnableRecaptureCheck(const bool& _enableRecaptureCheck);

                    /**
                     * 判断参数 EnableRecaptureCheck 是否已赋值
                     * @return EnableRecaptureCheck 是否已赋值
                     * 
                     */
                    bool EnableRecaptureCheckHasBeenSet() const;

                    /**
                     * 获取<p>Whether to perform format validation (dependent recognition). false by default</p>
                     * @return EnableFormatCheck <p>Whether to perform format validation (dependent recognition). false by default</p>
                     * 
                     */
                    bool GetEnableFormatCheck() const;

                    /**
                     * 设置<p>Whether to perform format validation (dependent recognition). false by default</p>
                     * @param _enableFormatCheck <p>Whether to perform format validation (dependent recognition). false by default</p>
                     * 
                     */
                    void SetEnableFormatCheck(const bool& _enableFormatCheck);

                    /**
                     * 判断参数 EnableFormatCheck 是否已赋值
                     * @return EnableFormatCheck 是否已赋值
                     * 
                     */
                    bool EnableFormatCheckHasBeenSet() const;

                    /**
                     * 获取<p>Whether to perform both sides consistency check (dependent on recognition), false by default</p>
                     * @return EnableConsistencyCheck <p>Whether to perform both sides consistency check (dependent on recognition), false by default</p>
                     * 
                     */
                    bool GetEnableConsistencyCheck() const;

                    /**
                     * 设置<p>Whether to perform both sides consistency check (dependent on recognition), false by default</p>
                     * @param _enableConsistencyCheck <p>Whether to perform both sides consistency check (dependent on recognition), false by default</p>
                     * 
                     */
                    void SetEnableConsistencyCheck(const bool& _enableConsistencyCheck);

                    /**
                     * 判断参数 EnableConsistencyCheck 是否已赋值
                     * @return EnableConsistencyCheck 是否已赋值
                     * 
                     */
                    bool EnableConsistencyCheckHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to perform card field recognition, true by default</p>
                     */
                    bool m_enableRecognition;
                    bool m_enableRecognitionHasBeenSet;

                    /**
                     * <p>Whether to perform quality detection (blurry/reflective/incomplete border/obstruction). false by default</p>
                     */
                    bool m_enableQualityCheck;
                    bool m_enableQualityCheckHasBeenSet;

                    /**
                     * <p>Whether to perform tampering detection (PS/synthesis/electronic). false by default</p>
                     */
                    bool m_enableTamperCheck;
                    bool m_enableTamperCheckHasBeenSet;

                    /**
                     * <p>Whether to perform photocopy detection. false by default</p>
                     */
                    bool m_enableCopyCheck;
                    bool m_enableCopyCheckHasBeenSet;

                    /**
                     * <p>Whether to perform rephotography detection. false by default</p>
                     */
                    bool m_enableRecaptureCheck;
                    bool m_enableRecaptureCheckHasBeenSet;

                    /**
                     * <p>Whether to perform format validation (dependent recognition). false by default</p>
                     */
                    bool m_enableFormatCheck;
                    bool m_enableFormatCheckHasBeenSet;

                    /**
                     * <p>Whether to perform both sides consistency check (dependent on recognition), false by default</p>
                     */
                    bool m_enableConsistencyCheck;
                    bool m_enableConsistencyCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_CARDVERIFICATIONCONFIG_H_
