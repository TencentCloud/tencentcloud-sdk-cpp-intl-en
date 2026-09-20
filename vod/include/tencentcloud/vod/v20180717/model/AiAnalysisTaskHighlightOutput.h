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
                * Intelligent highlight result.
                */
                class AiAnalysisTaskHighlightOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskHighlightOutput();
                    ~AiAnalysisTaskHighlightOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Intelligent video highlight list.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to HighlightSetFileUrl.
                     * @return HighlightSet Intelligent video highlight list.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to HighlightSetFileUrl.
                     * 
                     */
                    std::vector<MediaAiAnalysisHighlightItem> GetHighlightSet() const;

                    /**
                     * 设置Intelligent video highlight list.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to HighlightSetFileUrl.
                     * @param _highlightSet Intelligent video highlight list.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to HighlightSetFileUrl.
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
                     * 获取URL of the video intelligent highlight list file. The content of the file is JSON, and the data structure is consistent with the HighlightSet fields. The file is not retained permanently and will be deleted after the HighlightSetFileUrlExpireTime time point is reached.
                     * @return HighlightSetFileUrl URL of the video intelligent highlight list file. The content of the file is JSON, and the data structure is consistent with the HighlightSet fields. The file is not retained permanently and will be deleted after the HighlightSetFileUrlExpireTime time point is reached.
                     * 
                     */
                    std::string GetHighlightSetFileUrl() const;

                    /**
                     * 设置URL of the video intelligent highlight list file. The content of the file is JSON, and the data structure is consistent with the HighlightSet fields. The file is not retained permanently and will be deleted after the HighlightSetFileUrlExpireTime time point is reached.
                     * @param _highlightSetFileUrl URL of the video intelligent highlight list file. The content of the file is JSON, and the data structure is consistent with the HighlightSet fields. The file is not retained permanently and will be deleted after the HighlightSetFileUrlExpireTime time point is reached.
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
                     * 获取Expiration time of the video intelligent highlight list file URL in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return HighlightSetFileUrlExpireTime Expiration time of the video intelligent highlight list file URL in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetHighlightSetFileUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the video intelligent highlight list file URL in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _highlightSetFileUrlExpireTime Expiration time of the video intelligent highlight list file URL in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * Intelligent video highlight list.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to HighlightSetFileUrl.
                     */
                    std::vector<MediaAiAnalysisHighlightItem> m_highlightSet;
                    bool m_highlightSetHasBeenSet;

                    /**
                     * URL of the video intelligent highlight list file. The content of the file is JSON, and the data structure is consistent with the HighlightSet fields. The file is not retained permanently and will be deleted after the HighlightSetFileUrlExpireTime time point is reached.
                     */
                    std::string m_highlightSetFileUrl;
                    bool m_highlightSetFileUrlHasBeenSet;

                    /**
                     * Expiration time of the video intelligent highlight list file URL in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_highlightSetFileUrlExpireTime;
                    bool m_highlightSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKHIGHLIGHTOUTPUT_H_
