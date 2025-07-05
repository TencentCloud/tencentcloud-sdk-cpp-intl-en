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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DROPDMSDATABASEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DROPDMSDATABASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DropDMSDatabase request structure.
                */
                class DropDMSDatabaseRequest : public AbstractModel
                {
                public:
                    DropDMSDatabaseRequest();
                    ~DropDMSDatabaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database name
                     * @return Name Database name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Database name
                     * @param _name Database name
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
                     * 获取Whether to delete the data.
                     * @return DeleteData Whether to delete the data.
                     * 
                     */
                    bool GetDeleteData() const;

                    /**
                     * 设置Whether to delete the data.
                     * @param _deleteData Whether to delete the data.
                     * 
                     */
                    void SetDeleteData(const bool& _deleteData);

                    /**
                     * 判断参数 DeleteData 是否已赋值
                     * @return DeleteData 是否已赋值
                     * 
                     */
                    bool DeleteDataHasBeenSet() const;

                    /**
                     * 获取Whether to use cascade delete.
                     * @return Cascade Whether to use cascade delete.
                     * 
                     */
                    bool GetCascade() const;

                    /**
                     * 设置Whether to use cascade delete.
                     * @param _cascade Whether to use cascade delete.
                     * 
                     */
                    void SetCascade(const bool& _cascade);

                    /**
                     * 判断参数 Cascade 是否已赋值
                     * @return Cascade 是否已赋值
                     * 
                     */
                    bool CascadeHasBeenSet() const;

                private:

                    /**
                     * Database name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether to delete the data.
                     */
                    bool m_deleteData;
                    bool m_deleteDataHasBeenSet;

                    /**
                     * Whether to use cascade delete.
                     */
                    bool m_cascade;
                    bool m_cascadeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DROPDMSDATABASEREQUEST_H_
