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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_VALUEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_VALUEINFO_H_

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
                * Index description information of the field for which key-value index needs to be enabled
                */
                class ValueInfo : public AbstractModel
                {
                public:
                    ValueInfo();
                    ~ValueInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field type. Valid values: `long`, `text`, `double`
                     * @return Type Field type. Valid values: `long`, `text`, `double`
                     */
                    std::string GetType() const;

                    /**
                     * 设置Field type. Valid values: `long`, `text`, `double`
                     * @param Type Field type. Valid values: `long`, `text`, `double`
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Separator of fields. Each character represents a separator.
Only symbols, \n\t\r, and escape character \ are supported.
`long` and `double` fields need to be null.
Note: \n\t\r can be directly enclosed in double quotes as the input parameter without escaping. When debugging with API Explorer, use the JSON parameter input method to avoid repeated escaping of \n\t\r.
                     * @return Tokenizer Separator of fields. Each character represents a separator.
Only symbols, \n\t\r, and escape character \ are supported.
`long` and `double` fields need to be null.
Note: \n\t\r can be directly enclosed in double quotes as the input parameter without escaping. When debugging with API Explorer, use the JSON parameter input method to avoid repeated escaping of \n\t\r.
                     */
                    std::string GetTokenizer() const;

                    /**
                     * 设置Separator of fields. Each character represents a separator.
Only symbols, \n\t\r, and escape character \ are supported.
`long` and `double` fields need to be null.
Note: \n\t\r can be directly enclosed in double quotes as the input parameter without escaping. When debugging with API Explorer, use the JSON parameter input method to avoid repeated escaping of \n\t\r.
                     * @param Tokenizer Separator of fields. Each character represents a separator.
Only symbols, \n\t\r, and escape character \ are supported.
`long` and `double` fields need to be null.
Note: \n\t\r can be directly enclosed in double quotes as the input parameter without escaping. When debugging with API Explorer, use the JSON parameter input method to avoid repeated escaping of \n\t\r.
                     */
                    void SetTokenizer(const std::string& _tokenizer);

                    /**
                     * 判断参数 Tokenizer 是否已赋值
                     * @return Tokenizer 是否已赋值
                     */
                    bool TokenizerHasBeenSet() const;

                    /**
                     * 获取Whether the analysis feature is enabled for the field
                     * @return SqlFlag Whether the analysis feature is enabled for the field
                     */
                    bool GetSqlFlag() const;

                    /**
                     * 设置Whether the analysis feature is enabled for the field
                     * @param SqlFlag Whether the analysis feature is enabled for the field
                     */
                    void SetSqlFlag(const bool& _sqlFlag);

                    /**
                     * 判断参数 SqlFlag 是否已赋值
                     * @return SqlFlag 是否已赋值
                     */
                    bool SqlFlagHasBeenSet() const;

                    /**
                     * 获取Whether Chinese characters are contained. For `long` and `double` fields, set them to `false`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainZH Whether Chinese characters are contained. For `long` and `double` fields, set them to `false`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetContainZH() const;

                    /**
                     * 设置Whether Chinese characters are contained. For `long` and `double` fields, set them to `false`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ContainZH Whether Chinese characters are contained. For `long` and `double` fields, set them to `false`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetContainZH(const bool& _containZH);

                    /**
                     * 判断参数 ContainZH 是否已赋值
                     * @return ContainZH 是否已赋值
                     */
                    bool ContainZHHasBeenSet() const;

                private:

                    /**
                     * Field type. Valid values: `long`, `text`, `double`
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Separator of fields. Each character represents a separator.
Only symbols, \n\t\r, and escape character \ are supported.
`long` and `double` fields need to be null.
Note: \n\t\r can be directly enclosed in double quotes as the input parameter without escaping. When debugging with API Explorer, use the JSON parameter input method to avoid repeated escaping of \n\t\r.
                     */
                    std::string m_tokenizer;
                    bool m_tokenizerHasBeenSet;

                    /**
                     * Whether the analysis feature is enabled for the field
                     */
                    bool m_sqlFlag;
                    bool m_sqlFlagHasBeenSet;

                    /**
                     * Whether Chinese characters are contained. For `long` and `double` fields, set them to `false`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_containZH;
                    bool m_containZHHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_VALUEINFO_H_
