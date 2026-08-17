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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISCOVERITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISCOVERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Intelligent cover information
                */
                class MediaAiAnalysisCoverItem : public AbstractModel
                {
                public:
                    MediaAiAnalysisCoverItem();
                    ~MediaAiAnalysisCoverItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Intelligent cover storage path.
                     * @return CoverPath Intelligent cover storage path.
                     * 
                     */
                    std::string GetCoverPath() const;

                    /**
                     * 设置Intelligent cover storage path.
                     * @param _coverPath Intelligent cover storage path.
                     * 
                     */
                    void SetCoverPath(const std::string& _coverPath);

                    /**
                     * 判断参数 CoverPath 是否已赋值
                     * @return CoverPath 是否已赋值
                     * 
                     */
                    bool CoverPathHasBeenSet() const;

                    /**
                     * 获取Reliability of the intelligent cover, with a value range from 0 to -100.
                     * @return Confidence Reliability of the intelligent cover, with a value range from 0 to -100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Reliability of the intelligent cover, with a value range from 0 to -100.
                     * @param _confidence Reliability of the intelligent cover, with a value range from 0 to -100.
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
                     * Intelligent cover storage path.
                     */
                    std::string m_coverPath;
                    bool m_coverPathHasBeenSet;

                    /**
                     * Reliability of the intelligent cover, with a value range from 0 to -100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISCOVERITEM_H_
