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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEBASESINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEBASESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/KnowledgeAnalysisInfo.h>
#include <tencentcloud/vod/v20180717/model/KnowledgeBaseDetail.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Media asset intelligent knowledge base information
                */
                class KnowledgeBasesInfo : public AbstractModel
                {
                public:
                    KnowledgeBasesInfo();
                    ~KnowledgeBasesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>List of knowledge bases currently imported for the media asset</p>
                     * @return Bases <p>List of knowledge bases currently imported for the media asset</p>
                     * 
                     */
                    std::vector<std::string> GetBases() const;

                    /**
                     * 设置<p>List of knowledge bases currently imported for the media asset</p>
                     * @param _bases <p>List of knowledge bases currently imported for the media asset</p>
                     * 
                     */
                    void SetBases(const std::vector<std::string>& _bases);

                    /**
                     * 判断参数 Bases 是否已赋值
                     * @return Bases 是否已赋值
                     * 
                     */
                    bool BasesHasBeenSet() const;

                    /**
                     * 获取<p>Media analysis info in the knowledge base</p>
                     * @return KnowledgeAnalysisInfos <p>Media analysis info in the knowledge base</p>
                     * 
                     */
                    std::vector<KnowledgeAnalysisInfo> GetKnowledgeAnalysisInfos() const;

                    /**
                     * 设置<p>Media analysis info in the knowledge base</p>
                     * @param _knowledgeAnalysisInfos <p>Media analysis info in the knowledge base</p>
                     * 
                     */
                    void SetKnowledgeAnalysisInfos(const std::vector<KnowledgeAnalysisInfo>& _knowledgeAnalysisInfos);

                    /**
                     * 判断参数 KnowledgeAnalysisInfos 是否已赋值
                     * @return KnowledgeAnalysisInfos 是否已赋值
                     * 
                     */
                    bool KnowledgeAnalysisInfosHasBeenSet() const;

                    /**
                     * 获取<p>Current repository list imported for the media asset, as well as detailed information such as the parsing template used</p>
                     * @return KnowledgeBaseDetails <p>Current repository list imported for the media asset, as well as detailed information such as the parsing template used</p>
                     * 
                     */
                    std::vector<KnowledgeBaseDetail> GetKnowledgeBaseDetails() const;

                    /**
                     * 设置<p>Current repository list imported for the media asset, as well as detailed information such as the parsing template used</p>
                     * @param _knowledgeBaseDetails <p>Current repository list imported for the media asset, as well as detailed information such as the parsing template used</p>
                     * 
                     */
                    void SetKnowledgeBaseDetails(const std::vector<KnowledgeBaseDetail>& _knowledgeBaseDetails);

                    /**
                     * 判断参数 KnowledgeBaseDetails 是否已赋值
                     * @return KnowledgeBaseDetails 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseDetailsHasBeenSet() const;

                private:

                    /**
                     * <p>List of knowledge bases currently imported for the media asset</p>
                     */
                    std::vector<std::string> m_bases;
                    bool m_basesHasBeenSet;

                    /**
                     * <p>Media analysis info in the knowledge base</p>
                     */
                    std::vector<KnowledgeAnalysisInfo> m_knowledgeAnalysisInfos;
                    bool m_knowledgeAnalysisInfosHasBeenSet;

                    /**
                     * <p>Current repository list imported for the media asset, as well as detailed information such as the parsing template used</p>
                     */
                    std::vector<KnowledgeBaseDetail> m_knowledgeBaseDetails;
                    bool m_knowledgeBaseDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEBASESINFO_H_
