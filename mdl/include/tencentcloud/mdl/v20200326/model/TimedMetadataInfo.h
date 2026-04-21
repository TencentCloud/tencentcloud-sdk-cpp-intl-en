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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_TIMEDMETADATAINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_TIMEDMETADATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Transparent transmission of meta information plan configuration.
                */
                class TimedMetadataInfo : public AbstractModel
                {
                public:
                    TimedMetadataInfo();
                    ~TimedMetadataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Base64-encoded ID3 metadata information, with a maximum limit of 1024 characters. When both ID3 and Tag have values, the ID3 value takes precedence
                     * @return ID3 Base64-encoded ID3 metadata information, with a maximum limit of 1024 characters. When both ID3 and Tag have values, the ID3 value takes precedence
                     * 
                     */
                    std::string GetID3() const;

                    /**
                     * 设置Base64-encoded ID3 metadata information, with a maximum limit of 1024 characters. When both ID3 and Tag have values, the ID3 value takes precedence
                     * @param _iD3 Base64-encoded ID3 metadata information, with a maximum limit of 1024 characters. When both ID3 and Tag have values, the ID3 value takes precedence
                     * 
                     */
                    void SetID3(const std::string& _iD3);

                    /**
                     * 判断参数 ID3 是否已赋值
                     * @return ID3 是否已赋值
                     * 
                     */
                    bool ID3HasBeenSet() const;

                    /**
                     * 获取Label, the maximum supported length is 1024 characters for the label, 
                     * @return Tag Label, the maximum supported length is 1024 characters for the label, 
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Label, the maximum supported length is 1024 characters for the label, 
                     * @param _tag Label, the maximum supported length is 1024 characters for the label, 
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * Base64-encoded ID3 metadata information, with a maximum limit of 1024 characters. When both ID3 and Tag have values, the ID3 value takes precedence
                     */
                    std::string m_iD3;
                    bool m_iD3HasBeenSet;

                    /**
                     * Label, the maximum supported length is 1024 characters for the label, 
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_TIMEDMETADATAINFO_H_
