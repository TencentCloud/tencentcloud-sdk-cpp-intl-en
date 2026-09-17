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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PATTERNCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PATTERNCONFIG_H_

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
                * 
                */
                class PatternConfig : public AbstractModel
                {
                public:
                    PatternConfig();
                    ~PatternConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return TransparencyThreshold 
                     * 
                     */
                    int64_t GetTransparencyThreshold() const;

                    /**
                     * 设置
                     * @param _transparencyThreshold 
                     * 
                     */
                    void SetTransparencyThreshold(const int64_t& _transparencyThreshold);

                    /**
                     * 判断参数 TransparencyThreshold 是否已赋值
                     * @return TransparencyThreshold 是否已赋值
                     * 
                     */
                    bool TransparencyThresholdHasBeenSet() const;

                    /**
                     * 获取
                     * @return OpaqueThreshold 
                     * 
                     */
                    int64_t GetOpaqueThreshold() const;

                    /**
                     * 设置
                     * @param _opaqueThreshold 
                     * 
                     */
                    void SetOpaqueThreshold(const int64_t& _opaqueThreshold);

                    /**
                     * 判断参数 OpaqueThreshold 是否已赋值
                     * @return OpaqueThreshold 是否已赋值
                     * 
                     */
                    bool OpaqueThresholdHasBeenSet() const;

                    /**
                     * 获取
                     * @return EdgeSamplingStep 
                     * 
                     */
                    int64_t GetEdgeSamplingStep() const;

                    /**
                     * 设置
                     * @param _edgeSamplingStep 
                     * 
                     */
                    void SetEdgeSamplingStep(const int64_t& _edgeSamplingStep);

                    /**
                     * 判断参数 EdgeSamplingStep 是否已赋值
                     * @return EdgeSamplingStep 是否已赋值
                     * 
                     */
                    bool EdgeSamplingStepHasBeenSet() const;

                    /**
                     * 获取
                     * @return EdgeExpansionStep 
                     * 
                     */
                    int64_t GetEdgeExpansionStep() const;

                    /**
                     * 设置
                     * @param _edgeExpansionStep 
                     * 
                     */
                    void SetEdgeExpansionStep(const int64_t& _edgeExpansionStep);

                    /**
                     * 判断参数 EdgeExpansionStep 是否已赋值
                     * @return EdgeExpansionStep 是否已赋值
                     * 
                     */
                    bool EdgeExpansionStepHasBeenSet() const;

                    /**
                     * 获取
                     * @return EdgeBlendingIntensity 
                     * 
                     */
                    double GetEdgeBlendingIntensity() const;

                    /**
                     * 设置
                     * @param _edgeBlendingIntensity 
                     * 
                     */
                    void SetEdgeBlendingIntensity(const double& _edgeBlendingIntensity);

                    /**
                     * 判断参数 EdgeBlendingIntensity 是否已赋值
                     * @return EdgeBlendingIntensity 是否已赋值
                     * 
                     */
                    bool EdgeBlendingIntensityHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    int64_t m_transparencyThreshold;
                    bool m_transparencyThresholdHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_opaqueThreshold;
                    bool m_opaqueThresholdHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_edgeSamplingStep;
                    bool m_edgeSamplingStepHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_edgeExpansionStep;
                    bool m_edgeExpansionStepHasBeenSet;

                    /**
                     * 
                     */
                    double m_edgeBlendingIntensity;
                    bool m_edgeBlendingIntensityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PATTERNCONFIG_H_
