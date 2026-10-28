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

#ifndef TENCENTCLOUD_ADP_V20260520_ADPCLIENT_H_
#define TENCENTCLOUD_ADP_V20260520_ADPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/adp/v20260520/model/SearchKnowledgeRequest.h>
#include <tencentcloud/adp/v20260520/model/SearchKnowledgeResponse.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            class AdpClient : public AbstractClient
            {
            public:
                AdpClient(const Credential &credential, const std::string &region);
                AdpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::SearchKnowledgeResponse> SearchKnowledgeOutcome;
                typedef std::future<SearchKnowledgeOutcome> SearchKnowledgeOutcomeCallable;
                typedef std::function<void(const AdpClient*, const Model::SearchKnowledgeRequest&, SearchKnowledgeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchKnowledgeAsyncHandler;



                /**
                 *Knowledge retrieval
                 * @param req SearchKnowledgeRequest
                 * @return SearchKnowledgeOutcome
                 */
                SearchKnowledgeOutcome SearchKnowledge(const Model::SearchKnowledgeRequest &request);
                void SearchKnowledgeAsync(const Model::SearchKnowledgeRequest& request, const SearchKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchKnowledgeOutcomeCallable SearchKnowledgeCallable(const Model::SearchKnowledgeRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_ADPCLIENT_H_
