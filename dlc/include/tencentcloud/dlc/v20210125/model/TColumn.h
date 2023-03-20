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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TCOLUMN_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TCOLUMN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Table field information
                */
                class TColumn : public AbstractModel
                {
                public:
                    TColumn();
                    ~TColumn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The field name.
                     * @return Name The field name.
                     */
                    std::string GetName() const;

                    /**
                     * 设置The field name.
                     * @param Name The field name.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The field type.
                     * @return Type The field type.
                     */
                    std::string GetType() const;

                    /**
                     * 设置The field type.
                     * @param Type The field type.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The field description.
                     * @return Comment The field description.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置The field description.
                     * @param Comment The field description.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取The default field value.
                     * @return Default The default field value.
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置The default field value.
                     * @param Default The default field value.
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取Whether the field is not null.
                     * @return NotNull Whether the field is not null.
                     */
                    bool GetNotNull() const;

                    /**
                     * 设置Whether the field is not null.
                     * @param NotNull Whether the field is not null.
                     */
                    void SetNotNull(const bool& _notNull);

                    /**
                     * 判断参数 NotNull 是否已赋值
                     * @return NotNull 是否已赋值
                     */
                    bool NotNullHasBeenSet() const;

                private:

                    /**
                     * The field name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The field type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The field description.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * The default field value.
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * Whether the field is not null.
                     */
                    bool m_notNull;
                    bool m_notNullHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TCOLUMN_H_
