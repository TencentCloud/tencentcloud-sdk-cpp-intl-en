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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_AUTHORIZEDATASOURCEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_AUTHORIZEDATASOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * AuthorizeDataSource request structure.
                */
                class AuthorizeDataSourceRequest : public AbstractModel
                {
                public:
                    AuthorizeDataSourceRequest();
                    ~AuthorizeDataSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Data source ID.
                     * @return DataSourceId Data source ID.
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置Data source ID.
                     * @param _dataSourceId Data source ID.
                     * 
                     */
                    void SetDataSourceId(const std::string& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

                    /**
                     * 获取Authorize the target project id.
                     * @return AuthProjectId Authorize the target project id.
                     * 
                     */
                    std::string GetAuthProjectId() const;

                    /**
                     * 设置Authorize the target project id.
                     * @param _authProjectId Authorize the target project id.
                     * 
                     */
                    void SetAuthProjectId(const std::string& _authProjectId);

                    /**
                     * 判断参数 AuthProjectId 是否已赋值
                     * @return AuthProjectId 是否已赋值
                     * 
                     */
                    bool AuthProjectIdHasBeenSet() const;

                    /**
                     * 获取List of users in the authorized project, format: project id_user id.
Can only select either the AuthProjectId parameter.
Authorize multiple objects. the project id must be consistent.
                     * @return AuthUsers List of users in the authorized project, format: project id_user id.
Can only select either the AuthProjectId parameter.
Authorize multiple objects. the project id must be consistent.
                     * 
                     */
                    std::vector<std::string> GetAuthUsers() const;

                    /**
                     * 设置List of users in the authorized project, format: project id_user id.
Can only select either the AuthProjectId parameter.
Authorize multiple objects. the project id must be consistent.
                     * @param _authUsers List of users in the authorized project, format: project id_user id.
Can only select either the AuthProjectId parameter.
Authorize multiple objects. the project id must be consistent.
                     * 
                     */
                    void SetAuthUsers(const std::vector<std::string>& _authUsers);

                    /**
                     * 判断参数 AuthUsers 是否已赋值
                     * @return AuthUsers 是否已赋值
                     * 
                     */
                    bool AuthUsersHasBeenSet() const;

                private:

                    /**
                     * Data source ID.
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * Authorize the target project id.
                     */
                    std::string m_authProjectId;
                    bool m_authProjectIdHasBeenSet;

                    /**
                     * List of users in the authorized project, format: project id_user id.
Can only select either the AuthProjectId parameter.
Authorize multiple objects. the project id must be consistent.
                     */
                    std::vector<std::string> m_authUsers;
                    bool m_authUsersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_AUTHORIZEDATASOURCEREQUEST_H_
