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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKCLASSIFICATIONOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKCLASSIFICATIONOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaAiAnalysisClassificationItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Result information of intelligent categorization
                */
                class AiAnalysisTaskClassificationOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskClassificationOutput();
                    ~AiAnalysisTaskClassificationOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of intelligently generated video categories
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `ClassificationSetFileUrl`.
                     * @return ClassificationSet List of intelligently generated video categories
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `ClassificationSetFileUrl`.
                     * 
                     */
                    std::vector<MediaAiAnalysisClassificationItem> GetClassificationSet() const;

                    /**
                     * 设置List of intelligently generated video categories
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `ClassificationSetFileUrl`.
                     * @param _classificationSet List of intelligently generated video categories
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `ClassificationSetFileUrl`.
                     * 
                     */
                    void SetClassificationSet(const std::vector<MediaAiAnalysisClassificationItem>& _classificationSet);

                    /**
                     * 判断参数 ClassificationSet 是否已赋值
                     * @return ClassificationSet 是否已赋值
                     * 
                     */
                    bool ClassificationSetHasBeenSet() const;

                    /**
                     * 获取URL to the file for intelligently generated video categories. The file is in JSON format and has the same data structure as `ClassificationSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `ClassificationSetFileUrlExpireTime`.
                     * @return ClassificationSetFileUrl URL to the file for intelligently generated video categories. The file is in JSON format and has the same data structure as `ClassificationSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `ClassificationSetFileUrlExpireTime`.
                     * 
                     */
                    std::string GetClassificationSetFileUrl() const;

                    /**
                     * 设置URL to the file for intelligently generated video categories. The file is in JSON format and has the same data structure as `ClassificationSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `ClassificationSetFileUrlExpireTime`.
                     * @param _classificationSetFileUrl URL to the file for intelligently generated video categories. The file is in JSON format and has the same data structure as `ClassificationSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `ClassificationSetFileUrlExpireTime`.
                     * 
                     */
                    void SetClassificationSetFileUrl(const std::string& _classificationSetFileUrl);

                    /**
                     * 判断参数 ClassificationSetFileUrl 是否已赋值
                     * @return ClassificationSetFileUrl 是否已赋值
                     * 
                     */
                    bool ClassificationSetFileUrlHasBeenSet() const;

                    /**
                     * 获取Expiration time of the URL to the file for intelligently generated video categories, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     * @return ClassificationSetFileUrlExpireTime Expiration time of the URL to the file for intelligently generated video categories, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     * 
                     */
                    std::string GetClassificationSetFileUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the URL to the file for intelligently generated video categories, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     * @param _classificationSetFileUrlExpireTime Expiration time of the URL to the file for intelligently generated video categories, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     * 
                     */
                    void SetClassificationSetFileUrlExpireTime(const std::string& _classificationSetFileUrlExpireTime);

                    /**
                     * 判断参数 ClassificationSetFileUrlExpireTime 是否已赋值
                     * @return ClassificationSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool ClassificationSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * List of intelligently generated video categories
<font color=red>Note</font>: This list displays the first 100 results at most. You can get all the results from the file at the URL specified by `ClassificationSetFileUrl`.
                     */
                    std::vector<MediaAiAnalysisClassificationItem> m_classificationSet;
                    bool m_classificationSetHasBeenSet;

                    /**
                     * URL to the file for intelligently generated video categories. The file is in JSON format and has the same data structure as `ClassificationSet`. Instead of being saved permanently, the file is deleted upon the expiration time specified by `ClassificationSetFileUrlExpireTime`.
                     */
                    std::string m_classificationSetFileUrl;
                    bool m_classificationSetFileUrlHasBeenSet;

                    /**
                     * Expiration time of the URL to the file for intelligently generated video categories, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732#iso-date-format)
                     */
                    std::string m_classificationSetFileUrlExpireTime;
                    bool m_classificationSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKCLASSIFICATIONOUTPUT_H_
