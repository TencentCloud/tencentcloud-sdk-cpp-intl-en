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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_REVOKEDATASOURCEAUTHORIZATIONREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_REVOKEDATASOURCEAUTHORIZATIONREQUEST_H_

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
                * RevokeDataSourceAuthorization request structure.
                */
                class RevokeDataSourceAuthorizationRequest : public AbstractModel
                {
                public:
                    RevokeDataSourceAuthorizationRequest();
                    ~RevokeDataSourceAuthorizationRequest() = default;
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
                     * 获取Reclaim the project id or the UserUin parameter. only one can be filled in.
                     * @return RevokeProjectId Reclaim the project id or the UserUin parameter. only one can be filled in.
                     * 
                     */
                    std::string GetRevokeProjectId() const;

                    /**
                     * 设置Reclaim the project id or the UserUin parameter. only one can be filled in.
                     * @param _revokeProjectId Reclaim the project id or the UserUin parameter. only one can be filled in.
                     * 
                     */
                    void SetRevokeProjectId(const std::string& _revokeProjectId);

                    /**
                     * 判断参数 RevokeProjectId 是否已赋值
                     * @return RevokeProjectId 是否已赋值
                     * 
                     */
                    bool RevokeProjectIdHasBeenSet() const;

                    /**
                     * 获取Reclaim the list of users under the project in the format: project id_user id.
Specifies that only one of the parameters can be filled in with RevokeProjectId.


                     * @return RevokeUser Reclaim the list of users under the project in the format: project id_user id.
Specifies that only one of the parameters can be filled in with RevokeProjectId.


                     * 
                     */
                    std::string GetRevokeUser() const;

                    /**
                     * 设置Reclaim the list of users under the project in the format: project id_user id.
Specifies that only one of the parameters can be filled in with RevokeProjectId.


                     * @param _revokeUser Reclaim the list of users under the project in the format: project id_user id.
Specifies that only one of the parameters can be filled in with RevokeProjectId.


                     * 
                     */
                    void SetRevokeUser(const std::string& _revokeUser);

                    /**
                     * 判断参数 RevokeUser 是否已赋值
                     * @return RevokeUser 是否已赋值
                     * 
                     */
                    bool RevokeUserHasBeenSet() const;

                private:

                    /**
                     * Data source ID.
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * Reclaim the project id or the UserUin parameter. only one can be filled in.
                     */
                    std::string m_revokeProjectId;
                    bool m_revokeProjectIdHasBeenSet;

                    /**
                     * Reclaim the list of users under the project in the format: project id_user id.
Specifies that only one of the parameters can be filled in with RevokeProjectId.


                     */
                    std::string m_revokeUser;
                    bool m_revokeUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_REVOKEDATASOURCEAUTHORIZATIONREQUEST_H_
