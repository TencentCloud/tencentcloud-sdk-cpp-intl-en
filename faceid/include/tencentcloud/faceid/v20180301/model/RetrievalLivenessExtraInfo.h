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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_RETRIEVALLIVENESSEXTRAINFO_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_RETRIEVALLIVENESSEXTRAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * Template retrieve detailed information
                */
                class RetrievalLivenessExtraInfo : public AbstractModel
                {
                public:
                    RetrievalLivenessExtraInfo();
                    ~RetrievalLivenessExtraInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Hit template type. Among them, Common - public library; Auto - Auto Clustering Library; Owner - custom template.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HitGroup <p>Hit template type. Among them, Common - public library; Auto - Auto Clustering Library; Owner - custom template.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHitGroup() const;

                    /**
                     * 设置<p>Hit template type. Among them, Common - public library; Auto - Auto Clustering Library; Owner - custom template.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hitGroup <p>Hit template type. Among them, Common - public library; Auto - Auto Clustering Library; Owner - custom template.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHitGroup(const std::string& _hitGroup);

                    /**
                     * 判断参数 HitGroup 是否已赋值
                     * @return HitGroup 是否已赋值
                     * 
                     */
                    bool HitGroupHasBeenSet() const;

                    /**
                     * 获取<p>The similarity between the request image and the hit attack template ranges from [0,2]. The smaller the value, the higher the probability of hitting the attack template. The default threshold is 0.6. When SimilarityScore≥0.6, it is judged as normal. SimilarityScore&lt;0.6 is judged as an attack.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SimilarityScore <p>The similarity between the request image and the hit attack template ranges from [0,2]. The smaller the value, the higher the probability of hitting the attack template. The default threshold is 0.6. When SimilarityScore≥0.6, it is judged as normal. SimilarityScore&lt;0.6 is judged as an attack.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetSimilarityScore() const;

                    /**
                     * 设置<p>The similarity between the request image and the hit attack template ranges from [0,2]. The smaller the value, the higher the probability of hitting the attack template. The default threshold is 0.6. When SimilarityScore≥0.6, it is judged as normal. SimilarityScore&lt;0.6 is judged as an attack.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _similarityScore <p>The similarity between the request image and the hit attack template ranges from [0,2]. The smaller the value, the higher the probability of hitting the attack template. The default threshold is 0.6. When SimilarityScore≥0.6, it is judged as normal. SimilarityScore&lt;0.6 is judged as an attack.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSimilarityScore(const double& _similarityScore);

                    /**
                     * 判断参数 SimilarityScore 是否已赋值
                     * @return SimilarityScore 是否已赋值
                     * 
                     */
                    bool SimilarityScoreHasBeenSet() const;

                    /**
                     * 获取<p>Template id of the cache hit</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HitTemplate <p>Template id of the cache hit</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHitTemplate() const;

                    /**
                     * 设置<p>Template id of the cache hit</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hitTemplate <p>Template id of the cache hit</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHitTemplate(const std::string& _hitTemplate);

                    /**
                     * 判断参数 HitTemplate 是否已赋值
                     * @return HitTemplate 是否已赋值
                     * 
                     */
                    bool HitTemplateHasBeenSet() const;

                private:

                    /**
                     * <p>Hit template type. Among them, Common - public library; Auto - Auto Clustering Library; Owner - custom template.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hitGroup;
                    bool m_hitGroupHasBeenSet;

                    /**
                     * <p>The similarity between the request image and the hit attack template ranges from [0,2]. The smaller the value, the higher the probability of hitting the attack template. The default threshold is 0.6. When SimilarityScore≥0.6, it is judged as normal. SimilarityScore&lt;0.6 is judged as an attack.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_similarityScore;
                    bool m_similarityScoreHasBeenSet;

                    /**
                     * <p>Template id of the cache hit</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hitTemplate;
                    bool m_hitTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_RETRIEVALLIVENESSEXTRAINFO_H_
