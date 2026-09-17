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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKHIGHLIGHTOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKHIGHLIGHTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaAiAnalysisHighlightItem.h>


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
                class AiAnalysisTaskHighlightOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskHighlightOutput();
                    ~AiAnalysisTaskHighlightOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return HighlightSet 
                     * 
                     */
                    std::vector<MediaAiAnalysisHighlightItem> GetHighlightSet() const;

                    /**
                     * 设置
                     * @param _highlightSet 
                     * 
                     */
                    void SetHighlightSet(const std::vector<MediaAiAnalysisHighlightItem>& _highlightSet);

                    /**
                     * 判断参数 HighlightSet 是否已赋值
                     * @return HighlightSet 是否已赋值
                     * 
                     */
                    bool HighlightSetHasBeenSet() const;

                    /**
                     * 获取
                     * @return HighlightSetFileUrl 
                     * 
                     */
                    std::string GetHighlightSetFileUrl() const;

                    /**
                     * 设置
                     * @param _highlightSetFileUrl 
                     * 
                     */
                    void SetHighlightSetFileUrl(const std::string& _highlightSetFileUrl);

                    /**
                     * 判断参数 HighlightSetFileUrl 是否已赋值
                     * @return HighlightSetFileUrl 是否已赋值
                     * 
                     */
                    bool HighlightSetFileUrlHasBeenSet() const;

                    /**
                     * 获取
                     * @return HighlightSetFileUrlExpireTime 
                     * 
                     */
                    std::string GetHighlightSetFileUrlExpireTime() const;

                    /**
                     * 设置
                     * @param _highlightSetFileUrlExpireTime 
                     * 
                     */
                    void SetHighlightSetFileUrlExpireTime(const std::string& _highlightSetFileUrlExpireTime);

                    /**
                     * 判断参数 HighlightSetFileUrlExpireTime 是否已赋值
                     * @return HighlightSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool HighlightSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::vector<MediaAiAnalysisHighlightItem> m_highlightSet;
                    bool m_highlightSetHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_highlightSetFileUrl;
                    bool m_highlightSetFileUrlHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_highlightSetFileUrlExpireTime;
                    bool m_highlightSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKHIGHLIGHTOUTPUT_H_
