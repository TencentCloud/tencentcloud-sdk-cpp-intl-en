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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIAINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSAiMediaItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Intelligent media information processed with MPS
                */
                class MPSAiMediaInfo : public AbstractModel
                {
                public:
                    MPSAiMediaInfo();
                    ~MPSAiMediaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of intelligent media information processed by MPS
                     * @return AiMediaList List of intelligent media information processed by MPS
                     * 
                     */
                    std::vector<MPSAiMediaItem> GetAiMediaList() const;

                    /**
                     * 设置List of intelligent media information processed by MPS
                     * @param _aiMediaList List of intelligent media information processed by MPS
                     * 
                     */
                    void SetAiMediaList(const std::vector<MPSAiMediaItem>& _aiMediaList);

                    /**
                     * 判断参数 AiMediaList 是否已赋值
                     * @return AiMediaList 是否已赋值
                     * 
                     */
                    bool AiMediaListHasBeenSet() const;

                private:

                    /**
                     * List of intelligent media information processed by MPS
                     */
                    std::vector<MPSAiMediaItem> m_aiMediaList;
                    bool m_aiMediaListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIAINFO_H_
