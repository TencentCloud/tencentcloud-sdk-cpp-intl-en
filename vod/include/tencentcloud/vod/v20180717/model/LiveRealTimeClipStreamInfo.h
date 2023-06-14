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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPSTREAMINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPSTREAMINFO_H_

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
                * The information of the live stream to clip.
                */
                class LiveRealTimeClipStreamInfo : public AbstractModel
                {
                public:
                    LiveRealTimeClipStreamInfo();
                    ~LiveRealTimeClipStreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The type of live stream to clip. Valid values:
<li>Original (<b>default</b>)</li>
<li>Transcoding</li>
                     * @return Type The type of live stream to clip. Valid values:
<li>Original (<b>default</b>)</li>
<li>Transcoding</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The type of live stream to clip. Valid values:
<li>Original (<b>default</b>)</li>
<li>Transcoding</li>
                     * @param _type The type of live stream to clip. Valid values:
<li>Original (<b>default</b>)</li>
<li>Transcoding</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The transcoding template ID.
<b>This is required if `Type` is `Transcoding`.</b>
                     * @return TemplateId The transcoding template ID.
<b>This is required if `Type` is `Transcoding`.</b>
                     * 
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置The transcoding template ID.
<b>This is required if `Type` is `Transcoding`.</b>
                     * @param _templateId The transcoding template ID.
<b>This is required if `Type` is `Transcoding`.</b>
                     * 
                     */
                    void SetTemplateId(const uint64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * The type of live stream to clip. Valid values:
<li>Original (<b>default</b>)</li>
<li>Transcoding</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The transcoding template ID.
<b>This is required if `Type` is `Transcoding`.</b>
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPSTREAMINFO_H_
