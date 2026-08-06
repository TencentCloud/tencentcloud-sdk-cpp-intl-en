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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATELLMRESPONSE_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATELLMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tmt/v20180321/model/TransDetail.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * ImageTranslateLLM response structure.
                */
                class ImageTranslateLLMResponse : public AbstractModel
                {
                public:
                    ImageTranslateLLMResponse();
                    ~ImageTranslateLLMResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Base64 string of the image data. The output format is JPG.</p>
                     * @return Data <p>Base64 string of the image data. The output format is JPG.</p>
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
                     * 获取<p>Primary source language.</p>
                     * @return Source <p>Primary source language.</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>Target translation language.</p>
                     * @return Target <p>Target translation language.</p>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>All original text in the image.</p>
                     * @return SourceText <p>All original text in the image.</p>
                     * 
                     */
                    std::string GetSourceText() const;

                    /**
                     * 判断参数 SourceText 是否已赋值
                     * @return SourceText 是否已赋值
                     * 
                     */
                    bool SourceTextHasBeenSet() const;

                    /**
                     * 获取<p>All translations in the image.</p>
                     * @return TargetText <p>All translations in the image.</p>
                     * 
                     */
                    std::string GetTargetText() const;

                    /**
                     * 判断参数 TargetText 是否已赋值
                     * @return TargetText 是否已赋值
                     * 
                     */
                    bool TargetTextHasBeenSet() const;

                    /**
                     * 获取<p>Image angle counterclockwise, value range 0-359</p>
                     * @return Angle <p>Image angle counterclockwise, value range 0-359</p>
                     * 
                     */
                    double GetAngle() const;

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                    /**
                     * 获取<p>Translation detailed information</p>
                     * @return TransDetails <p>Translation detailed information</p>
                     * 
                     */
                    std::vector<TransDetail> GetTransDetails() const;

                    /**
                     * 判断参数 TransDetails 是否已赋值
                     * @return TransDetails 是否已赋值
                     * 
                     */
                    bool TransDetailsHasBeenSet() const;

                private:

                    /**
                     * <p>Base64 string of the image data. The output format is JPG.</p>
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>Primary source language.</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>Target translation language.</p>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>All original text in the image.</p>
                     */
                    std::string m_sourceText;
                    bool m_sourceTextHasBeenSet;

                    /**
                     * <p>All translations in the image.</p>
                     */
                    std::string m_targetText;
                    bool m_targetTextHasBeenSet;

                    /**
                     * <p>Image angle counterclockwise, value range 0-359</p>
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * <p>Translation detailed information</p>
                     */
                    std::vector<TransDetail> m_transDetails;
                    bool m_transDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATELLMRESPONSE_H_
