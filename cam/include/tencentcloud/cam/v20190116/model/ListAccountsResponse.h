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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTACCOUNTSRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTACCOUNTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/ListAllUser.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ListAccounts response structure.
                */
                class ListAccountsResponse : public AbstractModel
                {
                public:
                    ListAccountsResponse();
                    ~ListAccountsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Sub-account list.</p>
                     * @return Users <p>Sub-account list.</p>
                     * 
                     */
                    std::vector<ListAllUser> GetUsers() const;

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取<p>This field is returned only when IsTruncated is true. If it returns true, you need to continue to call this API and use Marker to get the truncated content.</p>
                     * @return Marker <p>This field is returned only when IsTruncated is true. If it returns true, you need to continue to call this API and use Marker to get the truncated content.</p>
                     * 
                     */
                    std::string GetMarker() const;

                    /**
                     * 判断参数 Marker 是否已赋值
                     * @return Marker 是否已赋值
                     * 
                     */
                    bool MarkerHasBeenSet() const;

                    /**
                     * 获取<p>Whether the returned result of the request is truncated.</p>
                     * @return IsTruncated <p>Whether the returned result of the request is truncated.</p>
                     * 
                     */
                    bool GetIsTruncated() const;

                    /**
                     * 判断参数 IsTruncated 是否已赋值
                     * @return IsTruncated 是否已赋值
                     * 
                     */
                    bool IsTruncatedHasBeenSet() const;

                private:

                    /**
                     * <p>Sub-account list.</p>
                     */
                    std::vector<ListAllUser> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * <p>This field is returned only when IsTruncated is true. If it returns true, you need to continue to call this API and use Marker to get the truncated content.</p>
                     */
                    std::string m_marker;
                    bool m_markerHasBeenSet;

                    /**
                     * <p>Whether the returned result of the request is truncated.</p>
                     */
                    bool m_isTruncated;
                    bool m_isTruncatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTACCOUNTSRESPONSE_H_
