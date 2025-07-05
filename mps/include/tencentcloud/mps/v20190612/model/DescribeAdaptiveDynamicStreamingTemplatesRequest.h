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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEADAPTIVEDYNAMICSTREAMINGTEMPLATESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEADAPTIVEDYNAMICSTREAMINGTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeAdaptiveDynamicStreamingTemplates request structure.
                */
                class DescribeAdaptiveDynamicStreamingTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeAdaptiveDynamicStreamingTemplatesRequest();
                    ~DescribeAdaptiveDynamicStreamingTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID filter of adaptive bitrate streaming templates. Array length limit: 100.
                     * @return Definitions Unique ID filter of adaptive bitrate streaming templates. Array length limit: 100.
                     * 
                     */
                    std::vector<uint64_t> GetDefinitions() const;

                    /**
                     * 设置Unique ID filter of adaptive bitrate streaming templates. Array length limit: 100.
                     * @param _definitions Unique ID filter of adaptive bitrate streaming templates. Array length limit: 100.
                     * 
                     */
                    void SetDefinitions(const std::vector<uint64_t>& _definitions);

                    /**
                     * 判断参数 Definitions 是否已赋值
                     * @return Definitions 是否已赋值
                     * 
                     */
                    bool DefinitionsHasBeenSet() const;

                    /**
                     * 获取Pagination offset. Default value: 0.
                     * @return Offset Pagination offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Default value: 0.
                     * @param _offset Pagination offset. Default value: 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned entries. Default value: 10. Maximum value: 100.
                     * @return Limit Number of returned entries. Default value: 10. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. Default value: 10. Maximum value: 100.
                     * @param _limit Number of returned entries. Default value: 10. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Template type filter. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
                     * @return Type Template type filter. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template type filter. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
                     * @param _type Template type filter. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
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
                     * 获取Whether it is an audio-only template. 0: video template. 1: audio-only template.

Default value: 0
                     * @return PureAudio Whether it is an audio-only template. 0: video template. 1: audio-only template.

Default value: 0
                     * 
                     */
                    uint64_t GetPureAudio() const;

                    /**
                     * 设置Whether it is an audio-only template. 0: video template. 1: audio-only template.

Default value: 0
                     * @param _pureAudio Whether it is an audio-only template. 0: video template. 1: audio-only template.

Default value: 0
                     * 
                     */
                    void SetPureAudio(const uint64_t& _pureAudio);

                    /**
                     * 判断参数 PureAudio 是否已赋值
                     * @return PureAudio 是否已赋值
                     * 
                     */
                    bool PureAudioHasBeenSet() const;

                    /**
                     * 获取Filter condition for adaptive transcoding template identifiers, with a length limit of 64 characters.
                     * @return Name Filter condition for adaptive transcoding template identifiers, with a length limit of 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filter condition for adaptive transcoding template identifiers, with a length limit of 64 characters.
                     * @param _name Filter condition for adaptive transcoding template identifiers, with a length limit of 64 characters.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Unique ID filter of adaptive bitrate streaming templates. Array length limit: 100.
                     */
                    std::vector<uint64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * Pagination offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Template type filter. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether it is an audio-only template. 0: video template. 1: audio-only template.

Default value: 0
                     */
                    uint64_t m_pureAudio;
                    bool m_pureAudioHasBeenSet;

                    /**
                     * Filter condition for adaptive transcoding template identifiers, with a length limit of 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEADAPTIVEDYNAMICSTREAMINGTEMPLATESREQUEST_H_
