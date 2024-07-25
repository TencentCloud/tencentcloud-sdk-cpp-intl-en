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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_IMPORTTABLEFILEREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_IMPORTTABLEFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * ImportTableFile request structure.
                */
                class ImportTableFileRequest : public AbstractModel
                {
                public:
                    ImportTableFileRequest();
                    ~ImportTableFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID associated with the table
                     * @return ProjectId Project ID associated with the table
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID associated with the table
                     * @param _projectId Project ID associated with the table
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Table name: Up to 200 characters in length is supported.
                     * @return Name Table name: Up to 200 characters in length is supported.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Table name: Up to 200 characters in length is supported.
                     * @param _name Table name: Up to 200 characters in length is supported.
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
                     * 获取Table file COS object path
                     * @return CosUri Table file COS object path
                     * 
                     */
                    std::string GetCosUri() const;

                    /**
                     * 设置Table file COS object path
                     * @param _cosUri Table file COS object path
                     * 
                     */
                    void SetCosUri(const std::string& _cosUri);

                    /**
                     * 判断参数 CosUri 是否已赋值
                     * @return CosUri 是否已赋值
                     * 
                     */
                    bool CosUriHasBeenSet() const;

                    /**
                     * 获取Data type of each column in the table file. Supported types include Int, Float, String, File, Boolean, Array[Int], Array[Float], Array[String], Array[File], and Array[Boolean].
                     * @return DataType Data type of each column in the table file. Supported types include Int, Float, String, File, Boolean, Array[Int], Array[Float], Array[String], Array[File], and Array[Boolean].
                     * 
                     */
                    std::vector<std::string> GetDataType() const;

                    /**
                     * 设置Data type of each column in the table file. Supported types include Int, Float, String, File, Boolean, Array[Int], Array[Float], Array[String], Array[File], and Array[Boolean].
                     * @param _dataType Data type of each column in the table file. Supported types include Int, Float, String, File, Boolean, Array[Int], Array[Float], Array[String], Array[File], and Array[Boolean].
                     * 
                     */
                    void SetDataType(const std::vector<std::string>& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取Table description: Up to 500 characters in length is supported.
                     * @return Description Table description: Up to 500 characters in length is supported.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Table description: Up to 500 characters in length is supported.
                     * @param _description Table description: Up to 500 characters in length is supported.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Project ID associated with the table
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Table name: Up to 200 characters in length is supported.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Table file COS object path
                     */
                    std::string m_cosUri;
                    bool m_cosUriHasBeenSet;

                    /**
                     * Data type of each column in the table file. Supported types include Int, Float, String, File, Boolean, Array[Int], Array[Float], Array[String], Array[File], and Array[Boolean].
                     */
                    std::vector<std::string> m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * Table description: Up to 500 characters in length is supported.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_IMPORTTABLEFILEREQUEST_H_
