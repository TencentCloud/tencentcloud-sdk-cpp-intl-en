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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_METADATAINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_METADATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Splunk task submission meta information
                */
                class MetadataInfo : public AbstractModel
                {
                public:
                    MetadataInfo();
                    ~MetadataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取data format, rawlog/json
                     * @return Format data format, rawlog/json
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置data format, rawlog/json
                     * @param _format data format, rawlog/json
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Fields to be delivered, including __SOURCE__, __FILENAME__
,\_\_TIMESTAMP\_\_,\_\_HOSTNAME\_\_,\_\_PKG\_ID\_\_
                     * @return MetaFields Fields to be delivered, including __SOURCE__, __FILENAME__
,\_\_TIMESTAMP\_\_,\_\_HOSTNAME\_\_,\_\_PKG\_ID\_\_
                     * 
                     */
                    std::vector<std::string> GetMetaFields() const;

                    /**
                     * 设置Fields to be delivered, including __SOURCE__, __FILENAME__
,\_\_TIMESTAMP\_\_,\_\_HOSTNAME\_\_,\_\_PKG\_ID\_\_
                     * @param _metaFields Fields to be delivered, including __SOURCE__, __FILENAME__
,\_\_TIMESTAMP\_\_,\_\_HOSTNAME\_\_,\_\_PKG\_ID\_\_
                     * 
                     */
                    void SetMetaFields(const std::vector<std::string>& _metaFields);

                    /**
                     * 判断参数 MetaFields 是否已赋值
                     * @return MetaFields 是否已赋值
                     * 
                     */
                    bool MetaFieldsHasBeenSet() const;

                    /**
                     * 获取Whether to deliver the __TAG__ field
                     * @return EnableTag Whether to deliver the __TAG__ field
                     * 
                     */
                    bool GetEnableTag() const;

                    /**
                     * 设置Whether to deliver the __TAG__ field
                     * @param _enableTag Whether to deliver the __TAG__ field
                     * 
                     */
                    void SetEnableTag(const bool& _enableTag);

                    /**
                     * 判断参数 EnableTag 是否已赋值
                     * @return EnableTag 是否已赋值
                     * 
                     */
                    bool EnableTagHasBeenSet() const;

                    /**
                     * 获取Whether JSON is flattened. Required when delivering the __TAG__ field.
                     * @return TagJsonTiled Whether JSON is flattened. Required when delivering the __TAG__ field.
                     * 
                     */
                    bool GetTagJsonTiled() const;

                    /**
                     * 设置Whether JSON is flattened. Required when delivering the __TAG__ field.
                     * @param _tagJsonTiled Whether JSON is flattened. Required when delivering the __TAG__ field.
                     * 
                     */
                    void SetTagJsonTiled(const bool& _tagJsonTiled);

                    /**
                     * 判断参数 TagJsonTiled 是否已赋值
                     * @return TagJsonTiled 是否已赋值
                     * 
                     */
                    bool TagJsonTiledHasBeenSet() const;

                private:

                    /**
                     * data format, rawlog/json
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Fields to be delivered, including __SOURCE__, __FILENAME__
,\_\_TIMESTAMP\_\_,\_\_HOSTNAME\_\_,\_\_PKG\_ID\_\_
                     */
                    std::vector<std::string> m_metaFields;
                    bool m_metaFieldsHasBeenSet;

                    /**
                     * Whether to deliver the __TAG__ field
                     */
                    bool m_enableTag;
                    bool m_enableTagHasBeenSet;

                    /**
                     * Whether JSON is flattened. Required when delivering the __TAG__ field.
                     */
                    bool m_tagJsonTiled;
                    bool m_tagJsonTiledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_METADATAINFO_H_
