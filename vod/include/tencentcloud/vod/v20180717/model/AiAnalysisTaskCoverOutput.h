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
                * Intelligent cover result information.
                */
                class AiAnalysisTaskCoverOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskCoverOutput();
                    ~AiAnalysisTaskCoverOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of smart covers.
<font color=red>Note</font>: This list only shows the first 100 elements. To obtain the complete result, get it from the file corresponding to CoverSetFileUrl.
                     * @return CoverSet List of smart covers.
<font color=red>Note</font>: This list only shows the first 100 elements. To obtain the complete result, get it from the file corresponding to CoverSetFileUrl.
                     * 
                     */
                    std::vector<MediaAiAnalysisCoverItem> GetCoverSet() const;

                    /**
                     * 设置List of smart covers.
<font color=red>Note</font>: This list only shows the first 100 elements. To obtain the complete result, get it from the file corresponding to CoverSetFileUrl.
                     * @param _coverSet List of smart covers.
<font color=red>Note</font>: This list only shows the first 100 elements. To obtain the complete result, get it from the file corresponding to CoverSetFileUrl.
                     * 
                     */
                    void SetCoverSet(const std::vector<MediaAiAnalysisCoverItem>& _coverSet);

                    /**
                     * 判断参数 CoverSet 是否已赋值
                     * @return CoverSet 是否已赋值
                     * 
                     */
                    bool CoverSetHasBeenSet() const;

                    /**
                     * 获取URL of the intelligent cover list file. The content of the file is in JSON format, and the data structure is consistent with the CoverSet fields. (The file is not retained permanently. It will be deleted after the CoverSetFileUrlExpireTime time point is reached.)
                     * @return CoverSetFileUrl URL of the intelligent cover list file. The content of the file is in JSON format, and the data structure is consistent with the CoverSet fields. (The file is not retained permanently. It will be deleted after the CoverSetFileUrlExpireTime time point is reached.)
                     * 
                     */
                    std::string GetCoverSetFileUrl() const;

                    /**
                     * 设置URL of the intelligent cover list file. The content of the file is in JSON format, and the data structure is consistent with the CoverSet fields. (The file is not retained permanently. It will be deleted after the CoverSetFileUrlExpireTime time point is reached.)
                     * @param _coverSetFileUrl URL of the intelligent cover list file. The content of the file is in JSON format, and the data structure is consistent with the CoverSet fields. (The file is not retained permanently. It will be deleted after the CoverSetFileUrlExpireTime time point is reached.)
                     * 
                     */
                    void SetCoverSetFileUrl(const std::string& _coverSetFileUrl);

                    /**
                     * 判断参数 CoverSetFileUrl 是否已赋值
                     * @return CoverSetFileUrl 是否已赋值
                     * 
                     */
                    bool CoverSetFileUrlHasBeenSet() const;

                    /**
                     * 获取Expiration time of the intelligent cover list file URL, using the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return CoverSetFileUrlExpireTime Expiration time of the intelligent cover list file URL, using the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetCoverSetFileUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the intelligent cover list file URL, using the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _coverSetFileUrlExpireTime Expiration time of the intelligent cover list file URL, using the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetCoverSetFileUrlExpireTime(const std::string& _coverSetFileUrlExpireTime);

                    /**
                     * 判断参数 CoverSetFileUrlExpireTime 是否已赋值
                     * @return CoverSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool CoverSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * List of smart covers.
<font color=red>Note</font>: This list only shows the first 100 elements. To obtain the complete result, get it from the file corresponding to CoverSetFileUrl.
                     */
                    std::vector<MediaAiAnalysisCoverItem> m_coverSet;
                    bool m_coverSetHasBeenSet;

                    /**
                     * URL of the intelligent cover list file. The content of the file is in JSON format, and the data structure is consistent with the CoverSet fields. (The file is not retained permanently. It will be deleted after the CoverSetFileUrlExpireTime time point is reached.)
                     */
                    std::string m_coverSetFileUrl;
                    bool m_coverSetFileUrlHasBeenSet;

                    /**
                     * Expiration time of the intelligent cover list file URL, using the [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_coverSetFileUrlExpireTime;
                    bool m_coverSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKCOVEROUTPUT_H_
