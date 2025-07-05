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

#ifndef TENCENTCLOUD_CIAM_V20210420_CIAMCLIENT_H_
#define TENCENTCLOUD_CIAM_V20210420_CIAMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ciam/v20210420/model/ListUserGroupsRequest.h>
#include <tencentcloud/ciam/v20210420/model/ListUserGroupsResponse.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20210420
        {
            class CiamClient : public AbstractClient
            {
            public:
                CiamClient(const Credential &credential, const std::string &region);
                CiamClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ListUserGroupsResponse> ListUserGroupsOutcome;
                typedef std::future<ListUserGroupsOutcome> ListUserGroupsOutcomeCallable;
                typedef std::function<void(const CiamClient*, const Model::ListUserGroupsRequest&, ListUserGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListUserGroupsAsyncHandler;



                /**
                 *This API is used to list user groups.
                 * @param req ListUserGroupsRequest
                 * @return ListUserGroupsOutcome
                 */
                ListUserGroupsOutcome ListUserGroups(const Model::ListUserGroupsRequest &request);
                void ListUserGroupsAsync(const Model::ListUserGroupsRequest& request, const ListUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListUserGroupsOutcomeCallable ListUserGroupsCallable(const Model::ListUserGroupsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20210420_CIAMCLIENT_H_
