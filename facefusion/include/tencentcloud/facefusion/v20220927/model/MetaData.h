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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_METADATA_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_METADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * Metadata structure, in key/value format
                */
                class MetaData : public AbstractModel
                {
                public:
                    MetaData();
                    ~MetaData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metadata key
                     * @return MetaKey Metadata key
                     * 
                     */
                    std::string GetMetaKey() const;

                    /**
                     * 设置Metadata key
                     * @param _metaKey Metadata key
                     * 
                     */
                    void SetMetaKey(const std::string& _metaKey);

                    /**
                     * 判断参数 MetaKey 是否已赋值
                     * @return MetaKey 是否已赋值
                     * 
                     */
                    bool MetaKeyHasBeenSet() const;

                    /**
                     * 获取Metadata value
                     * @return MetaValue Metadata value
                     * 
                     */
                    std::string GetMetaValue() const;

                    /**
                     * 设置Metadata value
                     * @param _metaValue Metadata value
                     * 
                     */
                    void SetMetaValue(const std::string& _metaValue);

                    /**
                     * 判断参数 MetaValue 是否已赋值
                     * @return MetaValue 是否已赋值
                     * 
                     */
                    bool MetaValueHasBeenSet() const;

                private:

                    /**
                     * Metadata key
                     */
                    std::string m_metaKey;
                    bool m_metaKeyHasBeenSet;

                    /**
                     * Metadata value
                     */
                    std::string m_metaValue;
                    bool m_metaValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_METADATA_H_
