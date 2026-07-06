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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DETECTVIDEOSUBTITLEAREARESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DETECTVIDEOSUBTITLEAREARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SubtitleArea.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DetectVideoSubtitleArea response structure.
                */
                class DetectVideoSubtitleAreaResponse : public AbstractModel
                {
                public:
                    DetectVideoSubtitleAreaResponse();
                    ~DetectVideoSubtitleAreaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Video width.</p><p>Unit: px.</p>
                     * @return Width <p>Video width.</p><p>Unit: px.</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取<p>Video height.</p><p>Unit: px.</p>
                     * @return Height <p>Video height.</p><p>Unit: px.</p>
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取<p>Detected subtitle box. If nothing is detected, the value is empty.</p>
                     * @return Result <p>Detected subtitle box. If nothing is detected, the value is empty.</p>
                     * 
                     */
                    std::vector<SubtitleArea> GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * <p>Video width.</p><p>Unit: px.</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>Video height.</p><p>Unit: px.</p>
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>Detected subtitle box. If nothing is detected, the value is empty.</p>
                     */
                    std::vector<SubtitleArea> m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DETECTVIDEOSUBTITLEAREARESPONSE_H_
