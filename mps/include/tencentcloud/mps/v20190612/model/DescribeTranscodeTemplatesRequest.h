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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBETRANSCODETEMPLATESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBETRANSCODETEMPLATESREQUEST_H_

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
                * DescribeTranscodeTemplates request structure.
                */
                class DescribeTranscodeTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeTranscodeTemplatesRequest();
                    ~DescribeTranscodeTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID filter of transcoding templates. Array length limit: 100.
                     * @return Definitions Unique ID filter of transcoding templates. Array length limit: 100.
                     * 
                     */
                    std::vector<int64_t> GetDefinitions() const;

                    /**
                     * 设置Unique ID filter of transcoding templates. Array length limit: 100.
                     * @param _definitions Unique ID filter of transcoding templates. Array length limit: 100.
                     * 
                     */
                    void SetDefinitions(const std::vector<int64_t>& _definitions);

                    /**
                     * 判断参数 Definitions 是否已赋值
                     * @return Definitions 是否已赋值
                     * 
                     */
                    bool DefinitionsHasBeenSet() const;

                    /**
                     * 获取Template type filter. Valid values:
<li>Preset: Preset template;</li>
<li>Custom: Custom template.</li>
                     * @return Type Template type filter. Valid values:
<li>Preset: Preset template;</li>
<li>Custom: Custom template.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template type filter. Valid values:
<li>Preset: Preset template;</li>
<li>Custom: Custom template.</li>
                     * @param _type Template type filter. Valid values:
<li>Preset: Preset template;</li>
<li>Custom: Custom template.</li>
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
                     * 获取Container format filter. Valid values:
<li>Video: Video container format that can contain both video stream and audio stream;</li>
<li>PureAudio: Audio container format that can contain only audio stream.</li>
                     * @return ContainerType Container format filter. Valid values:
<li>Video: Video container format that can contain both video stream and audio stream;</li>
<li>PureAudio: Audio container format that can contain only audio stream.</li>
                     * 
                     */
                    std::string GetContainerType() const;

                    /**
                     * 设置Container format filter. Valid values:
<li>Video: Video container format that can contain both video stream and audio stream;</li>
<li>PureAudio: Audio container format that can contain only audio stream.</li>
                     * @param _containerType Container format filter. Valid values:
<li>Video: Video container format that can contain both video stream and audio stream;</li>
<li>PureAudio: Audio container format that can contain only audio stream.</li>
                     * 
                     */
                    void SetContainerType(const std::string& _containerType);

                    /**
                     * 判断参数 ContainerType 是否已赋值
                     * @return ContainerType 是否已赋值
                     * 
                     */
                    bool ContainerTypeHasBeenSet() const;

                    /**
                     * 获取TESHD filter, which is used to filter common transcoding or ultra-fast HD transcoding templates. Valid values:
<li>Common: Common transcoding template;</li>
<li>TEHD: TESHD template.</li>
                     * @return TEHDType TESHD filter, which is used to filter common transcoding or ultra-fast HD transcoding templates. Valid values:
<li>Common: Common transcoding template;</li>
<li>TEHD: TESHD template.</li>
                     * 
                     */
                    std::string GetTEHDType() const;

                    /**
                     * 设置TESHD filter, which is used to filter common transcoding or ultra-fast HD transcoding templates. Valid values:
<li>Common: Common transcoding template;</li>
<li>TEHD: TESHD template.</li>
                     * @param _tEHDType TESHD filter, which is used to filter common transcoding or ultra-fast HD transcoding templates. Valid values:
<li>Common: Common transcoding template;</li>
<li>TEHD: TESHD template.</li>
                     * 
                     */
                    void SetTEHDType(const std::string& _tEHDType);

                    /**
                     * 判断参数 TEHDType 是否已赋值
                     * @return TEHDType 是否已赋值
                     * 
                     */
                    bool TEHDTypeHasBeenSet() const;

                    /**
                     * 获取Paging offset. Default value: 0.
                     * @return Offset Paging offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Paging offset. Default value: 0.
                     * @param _offset Paging offset. Default value: 0.
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
                     * 获取The template type (replacing `TEHDType`). Valid values:
<li>Common: Common transcoding template</li>
<li>TEHD: TESHD template</li>
<li>Enhance: Audio/Video enhancement template.</li>
This parameter is left empty by default, which indicates to return all types of templates.
                     * @return TranscodeType The template type (replacing `TEHDType`). Valid values:
<li>Common: Common transcoding template</li>
<li>TEHD: TESHD template</li>
<li>Enhance: Audio/Video enhancement template.</li>
This parameter is left empty by default, which indicates to return all types of templates.
                     * 
                     */
                    std::string GetTranscodeType() const;

                    /**
                     * 设置The template type (replacing `TEHDType`). Valid values:
<li>Common: Common transcoding template</li>
<li>TEHD: TESHD template</li>
<li>Enhance: Audio/Video enhancement template.</li>
This parameter is left empty by default, which indicates to return all types of templates.
                     * @param _transcodeType The template type (replacing `TEHDType`). Valid values:
<li>Common: Common transcoding template</li>
<li>TEHD: TESHD template</li>
<li>Enhance: Audio/Video enhancement template.</li>
This parameter is left empty by default, which indicates to return all types of templates.
                     * 
                     */
                    void SetTranscodeType(const std::string& _transcodeType);

                    /**
                     * 判断参数 TranscodeType 是否已赋值
                     * @return TranscodeType 是否已赋值
                     * 
                     */
                    bool TranscodeTypeHasBeenSet() const;

                    /**
                     * 获取Filter condition for transcoding template identifiers, with a length limit of 64 characters.	
                     * @return Name Filter condition for transcoding template identifiers, with a length limit of 64 characters.	
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filter condition for transcoding template identifiers, with a length limit of 64 characters.	
                     * @param _name Filter condition for transcoding template identifiers, with a length limit of 64 characters.	
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
                     * Unique ID filter of transcoding templates. Array length limit: 100.
                     */
                    std::vector<int64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * Template type filter. Valid values:
<li>Preset: Preset template;</li>
<li>Custom: Custom template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Container format filter. Valid values:
<li>Video: Video container format that can contain both video stream and audio stream;</li>
<li>PureAudio: Audio container format that can contain only audio stream.</li>
                     */
                    std::string m_containerType;
                    bool m_containerTypeHasBeenSet;

                    /**
                     * TESHD filter, which is used to filter common transcoding or ultra-fast HD transcoding templates. Valid values:
<li>Common: Common transcoding template;</li>
<li>TEHD: TESHD template.</li>
                     */
                    std::string m_tEHDType;
                    bool m_tEHDTypeHasBeenSet;

                    /**
                     * Paging offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The template type (replacing `TEHDType`). Valid values:
<li>Common: Common transcoding template</li>
<li>TEHD: TESHD template</li>
<li>Enhance: Audio/Video enhancement template.</li>
This parameter is left empty by default, which indicates to return all types of templates.
                     */
                    std::string m_transcodeType;
                    bool m_transcodeTypeHasBeenSet;

                    /**
                     * Filter condition for transcoding template identifiers, with a length limit of 64 characters.	
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBETRANSCODETEMPLATESREQUEST_H_
