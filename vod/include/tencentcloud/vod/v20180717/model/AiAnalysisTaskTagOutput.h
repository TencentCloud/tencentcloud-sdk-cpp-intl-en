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
                * 
                */
                class AiAnalysisTaskTagOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskTagOutput();
                    ~AiAnalysisTaskTagOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return TagSet 
                     * 
                     */
                    std::vector<MediaAiAnalysisTagItem> GetTagSet() const;

                    /**
                     * 设置
                     * @param _tagSet 
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
                     * 获取
                     * @return TagSetFileUrl 
                     * 
                     */
                    std::string GetTagSetFileUrl() const;

                    /**
                     * 设置
                     * @param _tagSetFileUrl 
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
                     * 获取
                     * @return TagSetFileUrlExpireTime 
                     * 
                     */
                    std::string GetTagSetFileUrlExpireTime() const;

                    /**
                     * 设置
                     * @param _tagSetFileUrlExpireTime 
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
                     * 
                     */
                    std::vector<MediaAiAnalysisTagItem> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_tagSetFileUrl;
                    bool m_tagSetFileUrlHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_tagSetFileUrlExpireTime;
                    bool m_tagSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKTAGOUTPUT_H_
