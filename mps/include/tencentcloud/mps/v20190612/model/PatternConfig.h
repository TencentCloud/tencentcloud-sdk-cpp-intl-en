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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PATTERNCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PATTERNCONFIG_H_

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
                * Stamp extraction configuration.
                */
                class PatternConfig : public AbstractModel
                {
                public:
                    PatternConfig();
                    ~PatternConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Transparency threshold</p><p>Value ranges from 0 to 255.</p><p>Default value: 30</p>
                     * @return TransparencyThreshold <p>Transparency threshold</p><p>Value ranges from 0 to 255.</p><p>Default value: 30</p>
                     * 
                     */
                    int64_t GetTransparencyThreshold() const;

                    /**
                     * 设置<p>Transparency threshold</p><p>Value ranges from 0 to 255.</p><p>Default value: 30</p>
                     * @param _transparencyThreshold <p>Transparency threshold</p><p>Value ranges from 0 to 255.</p><p>Default value: 30</p>
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
                     * 获取<p>Opaque threshold must be greater than TransparencyThreshold.</p><p>Value ranges from 0 to 255.</p><p>Default value: 127.</p>
                     * @return OpaqueThreshold <p>Opaque threshold must be greater than TransparencyThreshold.</p><p>Value ranges from 0 to 255.</p><p>Default value: 127.</p>
                     * 
                     */
                    int64_t GetOpaqueThreshold() const;

                    /**
                     * 设置<p>Opaque threshold must be greater than TransparencyThreshold.</p><p>Value ranges from 0 to 255.</p><p>Default value: 127.</p>
                     * @param _opaqueThreshold <p>Opaque threshold must be greater than TransparencyThreshold.</p><p>Value ranges from 0 to 255.</p><p>Default value: 127.</p>
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
                     * 获取<p>Edge sampling steps, default 5.</p><p>Value ranges from 1 to 10.</p>
                     * @return EdgeSamplingStep <p>Edge sampling steps, default 5.</p><p>Value ranges from 1 to 10.</p>
                     * 
                     */
                    int64_t GetEdgeSamplingStep() const;

                    /**
                     * 设置<p>Edge sampling steps, default 5.</p><p>Value ranges from 1 to 10.</p>
                     * @param _edgeSamplingStep <p>Edge sampling steps, default 5.</p><p>Value ranges from 1 to 10.</p>
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
                     * 获取<p>Edge expansion steps. Default: 5</p>
                     * @return EdgeExpansionStep <p>Edge expansion steps. Default: 5</p>
                     * 
                     */
                    int64_t GetEdgeExpansionStep() const;

                    /**
                     * 设置<p>Edge expansion steps. Default: 5</p>
                     * @param _edgeExpansionStep <p>Edge expansion steps. Default: 5</p>
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
                     * 获取<p>Edge fusion strength, default 0.5</p><p>Value ranges from 0 to 1.0</p>
                     * @return EdgeBlendingIntensity <p>Edge fusion strength, default 0.5</p><p>Value ranges from 0 to 1.0</p>
                     * 
                     */
                    double GetEdgeBlendingIntensity() const;

                    /**
                     * 设置<p>Edge fusion strength, default 0.5</p><p>Value ranges from 0 to 1.0</p>
                     * @param _edgeBlendingIntensity <p>Edge fusion strength, default 0.5</p><p>Value ranges from 0 to 1.0</p>
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
                     * <p>Transparency threshold</p><p>Value ranges from 0 to 255.</p><p>Default value: 30</p>
                     */
                    int64_t m_transparencyThreshold;
                    bool m_transparencyThresholdHasBeenSet;

                    /**
                     * <p>Opaque threshold must be greater than TransparencyThreshold.</p><p>Value ranges from 0 to 255.</p><p>Default value: 127.</p>
                     */
                    int64_t m_opaqueThreshold;
                    bool m_opaqueThresholdHasBeenSet;

                    /**
                     * <p>Edge sampling steps, default 5.</p><p>Value ranges from 1 to 10.</p>
                     */
                    int64_t m_edgeSamplingStep;
                    bool m_edgeSamplingStepHasBeenSet;

                    /**
                     * <p>Edge expansion steps. Default: 5</p>
                     */
                    int64_t m_edgeExpansionStep;
                    bool m_edgeExpansionStepHasBeenSet;

                    /**
                     * <p>Edge fusion strength, default 0.5</p><p>Value ranges from 0 to 1.0</p>
                     */
                    double m_edgeBlendingIntensity;
                    bool m_edgeBlendingIntensityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PATTERNCONFIG_H_
