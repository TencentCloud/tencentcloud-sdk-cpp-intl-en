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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_QARETRIEVALCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_QARETRIEVALCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * QA search configuration
                */
                class QARetrievalConfig : public AbstractModel
                {
                public:
                    QARetrievalConfig();
                    ~QARetrievalConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Confidence threshold</p>
                     * @return Confidence <p>Confidence threshold</p>
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置<p>Confidence threshold</p>
                     * @param _confidence <p>Confidence threshold</p>
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable</p>
                     * @return Enabled <p>Whether to enable</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>Whether to enable</p>
                     * @param _enabled <p>Whether to enable</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>Return the top N entries</p>
                     * @return TopN <p>Return the top N entries</p>
                     * 
                     */
                    uint64_t GetTopN() const;

                    /**
                     * 设置<p>Return the top N entries</p>
                     * @param _topN <p>Return the top N entries</p>
                     * 
                     */
                    void SetTopN(const uint64_t& _topN);

                    /**
                     * 判断参数 TopN 是否已赋值
                     * @return TopN 是否已赋值
                     * 
                     */
                    bool TopNHasBeenSet() const;

                private:

                    /**
                     * <p>Confidence threshold</p>
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>Whether to enable</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>Return the top N entries</p>
                     */
                    uint64_t m_topN;
                    bool m_topNHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_QARETRIEVALCONFIG_H_
