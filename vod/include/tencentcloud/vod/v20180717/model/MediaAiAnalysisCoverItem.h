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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAIANALYSISCOVERITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAIANALYSISCOVERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Information of intelligently generated cover
                */
                class MediaAiAnalysisCoverItem : public AbstractModel
                {
                public:
                    MediaAiAnalysisCoverItem();
                    ~MediaAiAnalysisCoverItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Address of intelligently generated cover.
                     * @return CoverUrl Address of intelligently generated cover.
                     * 
                     */
                    std::string GetCoverUrl() const;

                    /**
                     * 设置Address of intelligently generated cover.
                     * @param _coverUrl Address of intelligently generated cover.
                     * 
                     */
                    void SetCoverUrl(const std::string& _coverUrl);

                    /**
                     * 判断参数 CoverUrl 是否已赋值
                     * @return CoverUrl 是否已赋值
                     * 
                     */
                    bool CoverUrlHasBeenSet() const;

                    /**
                     * 获取Confidence of intelligently generated cover between 0 and 100.
                     * @return Confidence Confidence of intelligently generated cover between 0 and 100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence of intelligently generated cover between 0 and 100.
                     * @param _confidence Confidence of intelligently generated cover between 0 and 100.
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                private:

                    /**
                     * Address of intelligently generated cover.
                     */
                    std::string m_coverUrl;
                    bool m_coverUrlHasBeenSet;

                    /**
                     * Confidence of intelligently generated cover between 0 and 100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAIANALYSISCOVERITEM_H_
