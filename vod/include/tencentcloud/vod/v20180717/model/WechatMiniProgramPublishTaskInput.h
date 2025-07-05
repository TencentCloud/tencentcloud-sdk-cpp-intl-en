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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_WECHATMINIPROGRAMPUBLISHTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_WECHATMINIPROGRAMPUBLISHTASKINPUT_H_

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
                * Type of a release on WeChat Mini Program task
                */
                class WechatMiniProgramPublishTaskInput : public AbstractModel
                {
                public:
                    WechatMiniProgramPublishTaskInput();
                    ~WechatMiniProgramPublishTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the transcoding template corresponding to the published video. 0 represents the source video.
                     * @return SourceDefinition ID of the transcoding template corresponding to the published video. 0 represents the source video.
                     * 
                     */
                    uint64_t GetSourceDefinition() const;

                    /**
                     * 设置ID of the transcoding template corresponding to the published video. 0 represents the source video.
                     * @param _sourceDefinition ID of the transcoding template corresponding to the published video. 0 represents the source video.
                     * 
                     */
                    void SetSourceDefinition(const uint64_t& _sourceDefinition);

                    /**
                     * 判断参数 SourceDefinition 是否已赋值
                     * @return SourceDefinition 是否已赋值
                     * 
                     */
                    bool SourceDefinitionHasBeenSet() const;

                private:

                    /**
                     * ID of the transcoding template corresponding to the published video. 0 represents the source video.
                     */
                    uint64_t m_sourceDefinition;
                    bool m_sourceDefinitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_WECHATMINIPROGRAMPUBLISHTASKINPUT_H_
