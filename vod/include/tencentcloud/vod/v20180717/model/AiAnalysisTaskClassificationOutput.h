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
                * Intelligent classification result info
                */
                class AiAnalysisTaskClassificationOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskClassificationOutput();
                    ~AiAnalysisTaskClassificationOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video intelligent classification list.
<font color=red>Note</font>: This list can only show up to the first 100 elements. To obtain the complete result, get it from the file corresponding to ClassificationSetFileUrl.
                     * @return ClassificationSet Video intelligent classification list.
<font color=red>Note</font>: This list can only show up to the first 100 elements. To obtain the complete result, get it from the file corresponding to ClassificationSetFileUrl.
                     * 
                     */
                    std::vector<MediaAiAnalysisClassificationItem> GetClassificationSet() const;

                    /**
                     * 设置Video intelligent classification list.
<font color=red>Note</font>: This list can only show up to the first 100 elements. To obtain the complete result, get it from the file corresponding to ClassificationSetFileUrl.
                     * @param _classificationSet Video intelligent classification list.
<font color=red>Note</font>: This list can only show up to the first 100 elements. To obtain the complete result, get it from the file corresponding to ClassificationSetFileUrl.
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
                     * 获取Video intelligent classification list file URL. The content of the file is in JSON format, and its data structure is consistent with the ClassificationSet fields. (The file is not retained permanently. It will be deleted after reaching the ClassificationSetFileUrlExpireTime time point.)
                     * @return ClassificationSetFileUrl Video intelligent classification list file URL. The content of the file is in JSON format, and its data structure is consistent with the ClassificationSet fields. (The file is not retained permanently. It will be deleted after reaching the ClassificationSetFileUrlExpireTime time point.)
                     * 
                     */
                    std::string GetClassificationSetFileUrl() const;

                    /**
                     * 设置Video intelligent classification list file URL. The content of the file is in JSON format, and its data structure is consistent with the ClassificationSet fields. (The file is not retained permanently. It will be deleted after reaching the ClassificationSetFileUrlExpireTime time point.)
                     * @param _classificationSetFileUrl Video intelligent classification list file URL. The content of the file is in JSON format, and its data structure is consistent with the ClassificationSet fields. (The file is not retained permanently. It will be deleted after reaching the ClassificationSetFileUrlExpireTime time point.)
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
                     * 获取Expiration time of the video intelligent classification list file URL in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return ClassificationSetFileUrlExpireTime Expiration time of the video intelligent classification list file URL in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetClassificationSetFileUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the video intelligent classification list file URL in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _classificationSetFileUrlExpireTime Expiration time of the video intelligent classification list file URL in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * Video intelligent classification list.
<font color=red>Note</font>: This list can only show up to the first 100 elements. To obtain the complete result, get it from the file corresponding to ClassificationSetFileUrl.
                     */
                    std::vector<MediaAiAnalysisClassificationItem> m_classificationSet;
                    bool m_classificationSetHasBeenSet;

                    /**
                     * Video intelligent classification list file URL. The content of the file is in JSON format, and its data structure is consistent with the ClassificationSet fields. (The file is not retained permanently. It will be deleted after reaching the ClassificationSetFileUrlExpireTime time point.)
                     */
                    std::string m_classificationSetFileUrl;
                    bool m_classificationSetFileUrlHasBeenSet;

                    /**
                     * Expiration time of the video intelligent classification list file URL in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_classificationSetFileUrlExpireTime;
                    bool m_classificationSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKCLASSIFICATIONOUTPUT_H_
