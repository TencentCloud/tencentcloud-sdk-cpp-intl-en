/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKCOVEROUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKCOVEROUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaAiAnalysisCoverItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Result information of intelligent cover generating
                */
                class AiAnalysisTaskCoverOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskCoverOutput();
                    ~AiAnalysisTaskCoverOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of intelligently generated thumbnails
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `CoverSetFileUrl`.
                     * @return CoverSet List of intelligently generated thumbnails
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `CoverSetFileUrl`.
                     */
                    std::vector<MediaAiAnalysisCoverItem> GetCoverSet() const;

                    /**
                     * 设置List of intelligently generated thumbnails
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `CoverSetFileUrl`.
                     * @param CoverSet List of intelligently generated thumbnails
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `CoverSetFileUrl`.
                     */
                    void SetCoverSet(const std::vector<MediaAiAnalysisCoverItem>& _coverSet);

                    /**
                     * 判断参数 CoverSet 是否已赋值
                     * @return CoverSet 是否已赋值
                     */
                    bool CoverSetHasBeenSet() const;

                    /**
                     * 获取URL to the file for intelligently generated thumbnails. The file is in JSON format and has the same data structure as `CoverSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `CoverSetFileUrlExpireTime`.
                     * @return CoverSetFileUrl URL to the file for intelligently generated thumbnails. The file is in JSON format and has the same data structure as `CoverSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `CoverSetFileUrlExpireTime`.
                     */
                    std::string GetCoverSetFileUrl() const;

                    /**
                     * 设置URL to the file for intelligently generated thumbnails. The file is in JSON format and has the same data structure as `CoverSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `CoverSetFileUrlExpireTime`.
                     * @param CoverSetFileUrl URL to the file for intelligently generated thumbnails. The file is in JSON format and has the same data structure as `CoverSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `CoverSetFileUrlExpireTime`.
                     */
                    void SetCoverSetFileUrl(const std::string& _coverSetFileUrl);

                    /**
                     * 判断参数 CoverSetFileUrl 是否已赋值
                     * @return CoverSetFileUrl 是否已赋值
                     */
                    bool CoverSetFileUrlHasBeenSet() const;

                    /**
                     * 获取Expiration time of the URL to the file for intelligently generated thumbnails, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     * @return CoverSetFileUrlExpireTime Expiration time of the URL to the file for intelligently generated thumbnails, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     */
                    std::string GetCoverSetFileUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the URL to the file for intelligently generated thumbnails, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     * @param CoverSetFileUrlExpireTime Expiration time of the URL to the file for intelligently generated thumbnails, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     */
                    void SetCoverSetFileUrlExpireTime(const std::string& _coverSetFileUrlExpireTime);

                    /**
                     * 判断参数 CoverSetFileUrlExpireTime 是否已赋值
                     * @return CoverSetFileUrlExpireTime 是否已赋值
                     */
                    bool CoverSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * List of intelligently generated thumbnails
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `CoverSetFileUrl`.
                     */
                    std::vector<MediaAiAnalysisCoverItem> m_coverSet;
                    bool m_coverSetHasBeenSet;

                    /**
                     * URL to the file for intelligently generated thumbnails. The file is in JSON format and has the same data structure as `CoverSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `CoverSetFileUrlExpireTime`.
                     */
                    std::string m_coverSetFileUrl;
                    bool m_coverSetFileUrlHasBeenSet;

                    /**
                     * Expiration time of the URL to the file for intelligently generated thumbnails, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     */
                    std::string m_coverSetFileUrlExpireTime;
                    bool m_coverSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKCOVEROUTPUT_H_
