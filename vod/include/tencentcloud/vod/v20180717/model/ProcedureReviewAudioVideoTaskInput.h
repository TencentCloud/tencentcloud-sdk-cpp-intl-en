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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCEDUREREVIEWAUDIOVIDEOTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCEDUREREVIEWAUDIOVIDEOTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Input parameter type for audio/video moderation in the task flow template.
                */
                class ProcedureReviewAudioVideoTaskInput : public AbstractModel
                {
                public:
                    ProcedureReviewAudioVideoTaskInput();
                    ~ProcedureReviewAudioVideoTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Moderation template.
                     * @return Definition Moderation template.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Moderation template.
                     * @param _definition Moderation template.
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Content for review. Available values:
<li>Media: original audio/video;</li>
<li>Cover: cover.</li>
If this parameter is not specified or is set to an empty array, Media is reviewed by default.
                     * @return ReviewContents Content for review. Available values:
<li>Media: original audio/video;</li>
<li>Cover: cover.</li>
If this parameter is not specified or is set to an empty array, Media is reviewed by default.
                     * 
                     */
                    std::vector<std::string> GetReviewContents() const;

                    /**
                     * 设置Content for review. Available values:
<li>Media: original audio/video;</li>
<li>Cover: cover.</li>
If this parameter is not specified or is set to an empty array, Media is reviewed by default.
                     * @param _reviewContents Content for review. Available values:
<li>Media: original audio/video;</li>
<li>Cover: cover.</li>
If this parameter is not specified or is set to an empty array, Media is reviewed by default.
                     * 
                     */
                    void SetReviewContents(const std::vector<std::string>& _reviewContents);

                    /**
                     * 判断参数 ReviewContents 是否已赋值
                     * @return ReviewContents 是否已赋值
                     * 
                     */
                    bool ReviewContentsHasBeenSet() const;

                private:

                    /**
                     * Moderation template.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Content for review. Available values:
<li>Media: original audio/video;</li>
<li>Cover: cover.</li>
If this parameter is not specified or is set to an empty array, Media is reviewed by default.
                     */
                    std::vector<std::string> m_reviewContents;
                    bool m_reviewContentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCEDUREREVIEWAUDIOVIDEOTASKINPUT_H_
