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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_EXPORTPROPERTYMAP_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_EXPORTPROPERTYMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * Exported attribute mapping
                */
                class ExportPropertyMap : public AbstractModel
                {
                public:
                    ExportPropertyMap();
                    ~ExportPropertyMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User attribute code
                     * @return UserPropertyCode User attribute code
                     * 
                     */
                    std::string GetUserPropertyCode() const;

                    /**
                     * 设置User attribute code
                     * @param _userPropertyCode User attribute code
                     * 
                     */
                    void SetUserPropertyCode(const std::string& _userPropertyCode);

                    /**
                     * 判断参数 UserPropertyCode 是否已赋值
                     * @return UserPropertyCode 是否已赋值
                     * 
                     */
                    bool UserPropertyCodeHasBeenSet() const;

                    /**
                     * 获取User attribute mapping name
                     * @return ColumnName User attribute mapping name
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置User attribute mapping name
                     * @param _columnName User attribute mapping name
                     * 
                     */
                    void SetColumnName(const std::string& _columnName);

                    /**
                     * 判断参数 ColumnName 是否已赋值
                     * @return ColumnName 是否已赋值
                     * 
                     */
                    bool ColumnNameHasBeenSet() const;

                private:

                    /**
                     * User attribute code
                     */
                    std::string m_userPropertyCode;
                    bool m_userPropertyCodeHasBeenSet;

                    /**
                     * User attribute mapping name
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_EXPORTPROPERTYMAP_H_
