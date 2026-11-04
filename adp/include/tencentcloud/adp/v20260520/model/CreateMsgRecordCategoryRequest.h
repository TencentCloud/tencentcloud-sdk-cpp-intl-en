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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATEMSGRECORDCATEGORYREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATEMSGRECORDCATEGORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateMsgRecordCategory request structure.
                */
                class CreateMsgRecordCategoryRequest : public AbstractModel
                {
                public:
                    CreateMsgRecordCategoryRequest();
                    ~CreateMsgRecordCategoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Category name</p>
                     * @return Name <p>Category name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Category name</p>
                     * @param _name <p>Category name</p>
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
                     * 获取<p>App ID</p>
                     * @return AppId <p>App ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>App ID</p>
                     * @param _appId <p>App ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Parent category business ID. 0 represents a first-level category (unclassified)</p>
                     * @return ParentId <p>Parent category business ID. 0 represents a first-level category (unclassified)</p>
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置<p>Parent category business ID. 0 represents a first-level category (unclassified)</p>
                     * @param _parentId <p>Parent category business ID. 0 represents a first-level category (unclassified)</p>
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                private:

                    /**
                     * <p>Category name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>App ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Parent category business ID. 0 represents a first-level category (unclassified)</p>
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATEMSGRECORDCATEGORYREQUEST_H_
