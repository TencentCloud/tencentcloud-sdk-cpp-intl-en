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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEAREA_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEAREA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/EraseArea.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Data structure that indicates the subtitle area coordinates for the automatic hard subtitle area detection. The confidence is also included.
                */
                class SubtitleArea : public AbstractModel
                {
                public:
                    SubtitleArea();
                    ~SubtitleArea() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Detected subtitle area.</p>
                     * @return Area <p>Detected subtitle area.</p>
                     * 
                     */
                    EraseArea GetArea() const;

                    /**
                     * 设置<p>Detected subtitle area.</p>
                     * @param _area <p>Detected subtitle area.</p>
                     * 
                     */
                    void SetArea(const EraseArea& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取<p>Confidence of the detected area.</p><p>Value range: [0, 100].</p>
                     * @return Confidence <p>Confidence of the detected area.</p><p>Value range: [0, 100].</p>
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置<p>Confidence of the detected area.</p><p>Value range: [0, 100].</p>
                     * @param _confidence <p>Confidence of the detected area.</p><p>Value range: [0, 100].</p>
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
                     * <p>Detected subtitle area.</p>
                     */
                    EraseArea m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>Confidence of the detected area.</p><p>Value range: [0, 100].</p>
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEAREA_H_
