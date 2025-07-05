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
                * Result information of intelligent tagging
                */
                class AiAnalysisTaskTagOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskTagOutput();
                    ~AiAnalysisTaskTagOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of intelligently generated video tags
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `TagSetFileUrl`.
                     * @return TagSet List of intelligently generated video tags
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `TagSetFileUrl`.
                     * 
                     */
                    std::vector<MediaAiAnalysisTagItem> GetTagSet() const;

                    /**
                     * 设置List of intelligently generated video tags
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `TagSetFileUrl`.
                     * @param _tagSet List of intelligently generated video tags
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `TagSetFileUrl`.
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
                     * 获取URL to the file for intelligently generated video tags. The file is in JSON format and has the same data structure as `TagSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `TagSetFileUrlExpireTime`.
                     * @return TagSetFileUrl URL to the file for intelligently generated video tags. The file is in JSON format and has the same data structure as `TagSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `TagSetFileUrlExpireTime`.
                     * 
                     */
                    std::string GetTagSetFileUrl() const;

                    /**
                     * 设置URL to the file for intelligently generated video tags. The file is in JSON format and has the same data structure as `TagSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `TagSetFileUrlExpireTime`.
                     * @param _tagSetFileUrl URL to the file for intelligently generated video tags. The file is in JSON format and has the same data structure as `TagSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `TagSetFileUrlExpireTime`.
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
                     * 获取Expiration time of the URL to the file for intelligently generated video tags, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     * @return TagSetFileUrlExpireTime Expiration time of the URL to the file for intelligently generated video tags, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     * 
                     */
                    std::string GetTagSetFileUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the URL to the file for intelligently generated video tags, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     * @param _tagSetFileUrlExpireTime Expiration time of the URL to the file for intelligently generated video tags, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
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
                     * List of intelligently generated video tags
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `TagSetFileUrl`.
                     */
                    std::vector<MediaAiAnalysisTagItem> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * URL to the file for intelligently generated video tags. The file is in JSON format and has the same data structure as `TagSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `TagSetFileUrlExpireTime`.
                     */
                    std::string m_tagSetFileUrl;
                    bool m_tagSetFileUrlHasBeenSet;

                    /**
                     * Expiration time of the URL to the file for intelligently generated video tags, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     */
                    std::string m_tagSetFileUrlExpireTime;
                    bool m_tagSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKTAGOUTPUT_H_
