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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEAPIIMPORTUSERJOBREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEAPIIMPORTUSERJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/ImportUser.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * CreateApiImportUserJob request structure.
                */
                class CreateApiImportUserJobRequest : public AbstractModel
                {
                public:
                    CreateApiImportUserJobRequest();
                    ~CreateApiImportUserJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User directory ID
                     * @return UserStoreId User directory ID
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置User directory ID
                     * @param _userStoreId User directory ID
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取Imported user data
                     * @return DataFlowUserCreateList Imported user data
                     * 
                     */
                    std::vector<ImportUser> GetDataFlowUserCreateList() const;

                    /**
                     * 设置Imported user data
                     * @param _dataFlowUserCreateList Imported user data
                     * 
                     */
                    void SetDataFlowUserCreateList(const std::vector<ImportUser>& _dataFlowUserCreateList);

                    /**
                     * 判断参数 DataFlowUserCreateList 是否已赋值
                     * @return DataFlowUserCreateList 是否已赋值
                     * 
                     */
                    bool DataFlowUserCreateListHasBeenSet() const;

                private:

                    /**
                     * User directory ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * Imported user data
                     */
                    std::vector<ImportUser> m_dataFlowUserCreateList;
                    bool m_dataFlowUserCreateListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEAPIIMPORTUSERJOBREQUEST_H_
