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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISFRAMETAGITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISFRAMETAGITEM_H_

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
                * Intelligent frame tagging result information.
                */
                class MediaAiAnalysisFrameTagItem : public AbstractModel
                {
                public:
                    MediaAiAnalysisFrameTagItem();
                    ~MediaAiAnalysisFrameTagItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Frame-specific tag name.
                     * @return Tag Frame-specific tag name.
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Frame-specific tag name.
                     * @param _tag Frame-specific tag name.
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Classification list by frame tag name. CategorySet.N refers to the (N+1)-level category.
For example, when Tag is "tower", CategorySet contains two elements: CategorySet.0 is "scenario" and CategorySet.1 is "building", which means the frame tag is "tower", the level-1 category is "scenario", and the level-2 category is "building".
                     * @return CategorySet Classification list by frame tag name. CategorySet.N refers to the (N+1)-level category.
For example, when Tag is "tower", CategorySet contains two elements: CategorySet.0 is "scenario" and CategorySet.1 is "building", which means the frame tag is "tower", the level-1 category is "scenario", and the level-2 category is "building".
                     * 
                     */
                    std::vector<std::string> GetCategorySet() const;

                    /**
                     * 设置Classification list by frame tag name. CategorySet.N refers to the (N+1)-level category.
For example, when Tag is "tower", CategorySet contains two elements: CategorySet.0 is "scenario" and CategorySet.1 is "building", which means the frame tag is "tower", the level-1 category is "scenario", and the level-2 category is "building".
                     * @param _categorySet Classification list by frame tag name. CategorySet.N refers to the (N+1)-level category.
For example, when Tag is "tower", CategorySet contains two elements: CategorySet.0 is "scenario" and CategorySet.1 is "building", which means the frame tag is "tower", the level-1 category is "scenario", and the level-2 category is "building".
                     * 
                     */
                    void SetCategorySet(const std::vector<std::string>& _categorySet);

                    /**
                     * 判断参数 CategorySet 是否已赋值
                     * @return CategorySet 是否已赋值
                     * 
                     */
                    bool CategorySetHasBeenSet() const;

                    /**
                     * 获取Confidence of frame tagging, with a value range from 0 to 100.
                     * @return Confidence Confidence of frame tagging, with a value range from 0 to 100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence of frame tagging, with a value range from 0 to 100.
                     * @param _confidence Confidence of frame tagging, with a value range from 0 to 100.
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
                     * Frame-specific tag name.
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Classification list by frame tag name. CategorySet.N refers to the (N+1)-level category.
For example, when Tag is "tower", CategorySet contains two elements: CategorySet.0 is "scenario" and CategorySet.1 is "building", which means the frame tag is "tower", the level-1 category is "scenario", and the level-2 category is "building".
                     */
                    std::vector<std::string> m_categorySet;
                    bool m_categorySetHasBeenSet;

                    /**
                     * Confidence of frame tagging, with a value range from 0 to 100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISFRAMETAGITEM_H_
