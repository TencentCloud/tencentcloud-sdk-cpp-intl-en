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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKTAGOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKTAGOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaAiAnalysisTagItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Intelligent tag result information.
                */
                class AiAnalysisTaskTagOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskTagOutput();
                    ~AiAnalysisTaskTagOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video intelligent tag list.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to TagSetFileUrl.
                     * @return TagSet Video intelligent tag list.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to TagSetFileUrl.
                     * 
                     */
                    std::vector<MediaAiAnalysisTagItem> GetTagSet() const;

                    /**
                     * 设置Video intelligent tag list.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to TagSetFileUrl.
                     * @param _tagSet Video intelligent tag list.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to TagSetFileUrl.
                     * 
                     */
                    void SetTagSet(const std::vector<MediaAiAnalysisTagItem>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取URL of the video intelligent tag list file. The file content is in JSON format, and its data structure is consistent with the TagSet field. (The file will not be retained permanently and will be deleted after reaching the TagSetFileUrlExpireTime time point.)
                     * @return TagSetFileUrl URL of the video intelligent tag list file. The file content is in JSON format, and its data structure is consistent with the TagSet field. (The file will not be retained permanently and will be deleted after reaching the TagSetFileUrlExpireTime time point.)
                     * 
                     */
                    std::string GetTagSetFileUrl() const;

                    /**
                     * 设置URL of the video intelligent tag list file. The file content is in JSON format, and its data structure is consistent with the TagSet field. (The file will not be retained permanently and will be deleted after reaching the TagSetFileUrlExpireTime time point.)
                     * @param _tagSetFileUrl URL of the video intelligent tag list file. The file content is in JSON format, and its data structure is consistent with the TagSet field. (The file will not be retained permanently and will be deleted after reaching the TagSetFileUrlExpireTime time point.)
                     * 
                     */
                    void SetTagSetFileUrl(const std::string& _tagSetFileUrl);

                    /**
                     * 判断参数 TagSetFileUrl 是否已赋值
                     * @return TagSetFileUrl 是否已赋值
                     * 
                     */
                    bool TagSetFileUrlHasBeenSet() const;

                    /**
                     * 获取Expiration time of the video intelligent tag list file URL, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return TagSetFileUrlExpireTime Expiration time of the video intelligent tag list file URL, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetTagSetFileUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the video intelligent tag list file URL, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _tagSetFileUrlExpireTime Expiration time of the video intelligent tag list file URL, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetTagSetFileUrlExpireTime(const std::string& _tagSetFileUrlExpireTime);

                    /**
                     * 判断参数 TagSetFileUrlExpireTime 是否已赋值
                     * @return TagSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool TagSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Video intelligent tag list.
<font color=red>Note</font>: This list can only display up to the first 100 elements. To obtain the complete result, get it from the file corresponding to TagSetFileUrl.
                     */
                    std::vector<MediaAiAnalysisTagItem> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * URL of the video intelligent tag list file. The file content is in JSON format, and its data structure is consistent with the TagSet field. (The file will not be retained permanently and will be deleted after reaching the TagSetFileUrlExpireTime time point.)
                     */
                    std::string m_tagSetFileUrl;
                    bool m_tagSetFileUrlHasBeenSet;

                    /**
                     * Expiration time of the video intelligent tag list file URL, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_tagSetFileUrlExpireTime;
                    bool m_tagSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKTAGOUTPUT_H_
