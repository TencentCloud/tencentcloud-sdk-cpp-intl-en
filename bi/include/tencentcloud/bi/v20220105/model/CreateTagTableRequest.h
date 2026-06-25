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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_CREATETAGTABLEREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_CREATETAGTABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * CreateTagTable request structure.
                */
                class CreateTagTableRequest : public AbstractModel
                {
                public:
                    CreateTagTableRequest();
                    ~CreateTagTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tag table name
                     * @return Name Tag table name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Tag table name
                     * @param _name Tag table name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Project id associated with the tag table
                     * @return AutoImportProjectId Project id associated with the tag table
                     * 
                     */
                    int64_t GetAutoImportProjectId() const;

                    /**
                     * 设置Project id associated with the tag table
                     * @param _autoImportProjectId Project id associated with the tag table
                     * 
                     */
                    void SetAutoImportProjectId(const int64_t& _autoImportProjectId);

                    /**
                     * 判断参数 AutoImportProjectId 是否已赋值
                     * @return AutoImportProjectId 是否已赋值
                     * 
                     */
                    bool AutoImportProjectIdHasBeenSet() const;

                    /**
                     * 获取id of the data table associated with the tag table
                     * @return AutoImportTableId id of the data table associated with the tag table
                     * 
                     */
                    int64_t GetAutoImportTableId() const;

                    /**
                     * 设置id of the data table associated with the tag table
                     * @param _autoImportTableId id of the data table associated with the tag table
                     * 
                     */
                    void SetAutoImportTableId(const int64_t& _autoImportTableId);

                    /**
                     * 判断参数 AutoImportTableId 是否已赋值
                     * @return AutoImportTableId 是否已赋值
                     * 
                     */
                    bool AutoImportTableIdHasBeenSet() const;

                    /**
                     * 获取Corresponding field of uin
                     * @return AutoImportUinField Corresponding field of uin
                     * 
                     */
                    std::string GetAutoImportUinField() const;

                    /**
                     * 设置Corresponding field of uin
                     * @param _autoImportUinField Corresponding field of uin
                     * 
                     */
                    void SetAutoImportUinField(const std::string& _autoImportUinField);

                    /**
                     * 判断参数 AutoImportUinField 是否已赋值
                     * @return AutoImportUinField 是否已赋值
                     * 
                     */
                    bool AutoImportUinFieldHasBeenSet() const;

                private:

                    /**
                     * Tag table name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Project id associated with the tag table
                     */
                    int64_t m_autoImportProjectId;
                    bool m_autoImportProjectIdHasBeenSet;

                    /**
                     * id of the data table associated with the tag table
                     */
                    int64_t m_autoImportTableId;
                    bool m_autoImportTableIdHasBeenSet;

                    /**
                     * Corresponding field of uin
                     */
                    std::string m_autoImportUinField;
                    bool m_autoImportUinFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_CREATETAGTABLEREQUEST_H_
