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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_JSONINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_JSONINFO_H_

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
                * JSON type description
                */
                class JsonInfo : public AbstractModel
                {
                public:
                    JsonInfo();
                    ~JsonInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enablement flag
                     * @return EnableTag Enablement flag
                     */
                    bool GetEnableTag() const;

                    /**
                     * 设置Enablement flag
                     * @param EnableTag Enablement flag
                     */
                    void SetEnableTag(const bool& _enableTag);

                    /**
                     * 判断参数 EnableTag 是否已赋值
                     * @return EnableTag 是否已赋值
                     */
                    bool EnableTagHasBeenSet() const;

                    /**
                     * 获取Metadata information list
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MetaFields Metadata information list
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetMetaFields() const;

                    /**
                     * 设置Metadata information list
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param MetaFields Metadata information list
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetMetaFields(const std::vector<std::string>& _metaFields);

                    /**
                     * 判断参数 MetaFields 是否已赋值
                     * @return MetaFields 是否已赋值
                     */
                    bool MetaFieldsHasBeenSet() const;

                private:

                    /**
                     * Enablement flag
                     */
                    bool m_enableTag;
                    bool m_enableTagHasBeenSet;

                    /**
                     * Metadata information list
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_metaFields;
                    bool m_metaFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_JSONINFO_H_
