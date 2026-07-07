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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_TOKENHUBCLIENT_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_TOKENHUBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tokenhub/v20260322/model/CreateApiKeyRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/CreateApiKeyResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/CreateGlossaryRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/CreateGlossaryResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/CreateGlossaryEntriesRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/CreateGlossaryEntriesResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DeleteApiKeyRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DeleteApiKeyResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DeleteGlossaryRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DeleteGlossaryResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DeleteGlossaryEntriesRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DeleteGlossaryEntriesResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeGlossariesRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeGlossariesResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeGlossaryEntriesRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeGlossaryEntriesResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyApiKeyInfoRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyApiKeyInfoResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyApiKeyStatusRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyApiKeyStatusResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyGlossaryEntriesRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyGlossaryEntriesResponse.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            class TokenhubClient : public AbstractClient
            {
            public:
                TokenhubClient(const Credential &credential, const std::string &region);
                TokenhubClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateApiKeyResponse> CreateApiKeyOutcome;
                typedef std::future<CreateApiKeyOutcome> CreateApiKeyOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::CreateApiKeyRequest&, CreateApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGlossaryResponse> CreateGlossaryOutcome;
                typedef std::future<CreateGlossaryOutcome> CreateGlossaryOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::CreateGlossaryRequest&, CreateGlossaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlossaryAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGlossaryEntriesResponse> CreateGlossaryEntriesOutcome;
                typedef std::future<CreateGlossaryEntriesOutcome> CreateGlossaryEntriesOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::CreateGlossaryEntriesRequest&, CreateGlossaryEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGlossaryEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApiKeyResponse> DeleteApiKeyOutcome;
                typedef std::future<DeleteApiKeyOutcome> DeleteApiKeyOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DeleteApiKeyRequest&, DeleteApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGlossaryResponse> DeleteGlossaryOutcome;
                typedef std::future<DeleteGlossaryOutcome> DeleteGlossaryOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DeleteGlossaryRequest&, DeleteGlossaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlossaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGlossaryEntriesResponse> DeleteGlossaryEntriesOutcome;
                typedef std::future<DeleteGlossaryEntriesOutcome> DeleteGlossaryEntriesOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DeleteGlossaryEntriesRequest&, DeleteGlossaryEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlossaryEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlossariesResponse> DescribeGlossariesOutcome;
                typedef std::future<DescribeGlossariesOutcome> DescribeGlossariesOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeGlossariesRequest&, DescribeGlossariesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlossariesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlossaryEntriesResponse> DescribeGlossaryEntriesOutcome;
                typedef std::future<DescribeGlossaryEntriesOutcome> DescribeGlossaryEntriesOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeGlossaryEntriesRequest&, DescribeGlossaryEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlossaryEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApiKeyInfoResponse> ModifyApiKeyInfoOutcome;
                typedef std::future<ModifyApiKeyInfoOutcome> ModifyApiKeyInfoOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::ModifyApiKeyInfoRequest&, ModifyApiKeyInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiKeyInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApiKeyStatusResponse> ModifyApiKeyStatusOutcome;
                typedef std::future<ModifyApiKeyStatusOutcome> ModifyApiKeyStatusOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::ModifyApiKeyStatusRequest&, ModifyApiKeyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiKeyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGlossaryEntriesResponse> ModifyGlossaryEntriesOutcome;
                typedef std::future<ModifyGlossaryEntriesOutcome> ModifyGlossaryEntriesOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::ModifyGlossaryEntriesRequest&, ModifyGlossaryEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlossaryEntriesAsyncHandler;



                /**
                 *Create an API key.

Create a new API key. Upon successful creation, return the API Key ID. Specify the platform kind, binding method, and initial state.
                 * @param req CreateApiKeyRequest
                 * @return CreateApiKeyOutcome
                 */
                CreateApiKeyOutcome CreateApiKey(const Model::CreateApiKeyRequest &request);
                void CreateApiKeyAsync(const Model::CreateApiKeyRequest& request, const CreateApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApiKeyOutcomeCallable CreateApiKeyCallable(const Model::CreateApiKeyRequest& request);

                /**
                 *Create a Termbase.

Create a new Termbase in this application for custom definition source to target language terminology mapping. Return the Termbase ID upon success, which can be used to carry out other management operations on terminology entries.
                 * @param req CreateGlossaryRequest
                 * @return CreateGlossaryOutcome
                 */
                CreateGlossaryOutcome CreateGlossary(const Model::CreateGlossaryRequest &request);
                void CreateGlossaryAsync(const Model::CreateGlossaryRequest& request, const CreateGlossaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGlossaryOutcomeCallable CreateGlossaryCallable(const Model::CreateGlossaryRequest& request);

                /**
                 *Create terminology entries in batches.

Create terminology entries in batches under the designated Termbase. You can create up to 100 entries at a time.
                 * @param req CreateGlossaryEntriesRequest
                 * @return CreateGlossaryEntriesOutcome
                 */
                CreateGlossaryEntriesOutcome CreateGlossaryEntries(const Model::CreateGlossaryEntriesRequest &request);
                void CreateGlossaryEntriesAsync(const Model::CreateGlossaryEntriesRequest& request, const CreateGlossaryEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGlossaryEntriesOutcomeCallable CreateGlossaryEntriesCallable(const Model::CreateGlossaryEntriesRequest& request);

                /**
                 *This API is used to delete specified api keys and clean up associated model binding relationships.
                 * @param req DeleteApiKeyRequest
                 * @return DeleteApiKeyOutcome
                 */
                DeleteApiKeyOutcome DeleteApiKey(const Model::DeleteApiKeyRequest &request);
                void DeleteApiKeyAsync(const Model::DeleteApiKeyRequest& request, const DeleteApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApiKeyOutcomeCallable DeleteApiKeyCallable(const Model::DeleteApiKeyRequest& request);

                /**
                 *Delete a termbase.

This API is used to delete specified Termbase and ALL terminology entries under it. The deletion is idempotent and returns a successful result for non-existing Termbase. After calling the API, if the corresponding Termbase cannot be found via DescribeGlossaries, it indicates successful deletion.
                 * @param req DeleteGlossaryRequest
                 * @return DeleteGlossaryOutcome
                 */
                DeleteGlossaryOutcome DeleteGlossary(const Model::DeleteGlossaryRequest &request);
                void DeleteGlossaryAsync(const Model::DeleteGlossaryRequest& request, const DeleteGlossaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGlossaryOutcomeCallable DeleteGlossaryCallable(const Model::DeleteGlossaryRequest& request);

                /**
                 *Delete terminology entries in batches.

Delete terminology entries in batches under the specified Termbase. You can delete up to 200 entries at a time. If the Termbase is nonexistent or NOT_IN this application, it returns a ResourceNotFound error.
                 * @param req DeleteGlossaryEntriesRequest
                 * @return DeleteGlossaryEntriesOutcome
                 */
                DeleteGlossaryEntriesOutcome DeleteGlossaryEntries(const Model::DeleteGlossaryEntriesRequest &request);
                void DeleteGlossaryEntriesAsync(const Model::DeleteGlossaryEntriesRequest& request, const DeleteGlossaryEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGlossaryEntriesOutcomeCallable DeleteGlossaryEntriesCallable(const Model::DeleteGlossaryEntriesRequest& request);

                /**
                 *Query the terminology repository list.

Query the Termbase list under this application. Support paginate, filter, and sort.
                 * @param req DescribeGlossariesRequest
                 * @return DescribeGlossariesOutcome
                 */
                DescribeGlossariesOutcome DescribeGlossaries(const Model::DescribeGlossariesRequest &request);
                void DescribeGlossariesAsync(const Model::DescribeGlossariesRequest& request, const DescribeGlossariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGlossariesOutcomeCallable DescribeGlossariesCallable(const Model::DescribeGlossariesRequest& request);

                /**
                 *Query the terminology entry list.

Query specified entries in a Termbase. Support pagination.
                 * @param req DescribeGlossaryEntriesRequest
                 * @return DescribeGlossaryEntriesOutcome
                 */
                DescribeGlossaryEntriesOutcome DescribeGlossaryEntries(const Model::DescribeGlossaryEntriesRequest &request);
                void DescribeGlossaryEntriesAsync(const Model::DescribeGlossaryEntriesRequest& request, const DescribeGlossaryEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGlossaryEntriesOutcomeCallable DescribeGlossaryEntriesCallable(const Model::DescribeGlossaryEntriesRequest& request);

                /**
                 *Refresh API key information.

This API is used to update the remark information, IP allowlist and Token quota of an API key (recommended to use QuotaDesired parameter for quota modification). Passing no optional parameters means no modification.
                 * @param req ModifyApiKeyInfoRequest
                 * @return ModifyApiKeyInfoOutcome
                 */
                ModifyApiKeyInfoOutcome ModifyApiKeyInfo(const Model::ModifyApiKeyInfoRequest &request);
                void ModifyApiKeyInfoAsync(const Model::ModifyApiKeyInfoRequest& request, const ModifyApiKeyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApiKeyInfoOutcomeCallable ModifyApiKeyInfoCallable(const Model::ModifyApiKeyInfoRequest& request);

                /**
                 *This API is used to enable or disable the status of an api key.
                 * @param req ModifyApiKeyStatusRequest
                 * @return ModifyApiKeyStatusOutcome
                 */
                ModifyApiKeyStatusOutcome ModifyApiKeyStatus(const Model::ModifyApiKeyStatusRequest &request);
                void ModifyApiKeyStatusAsync(const Model::ModifyApiKeyStatusRequest& request, const ModifyApiKeyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApiKeyStatusOutcomeCallable ModifyApiKeyStatusCallable(const Model::ModifyApiKeyStatusRequest& request);

                /**
                 *Batch modify terminology entries.

This API is used to batch modify terminology entries in a designated Termbase. You can modify up to 200 entries at a time.
                 * @param req ModifyGlossaryEntriesRequest
                 * @return ModifyGlossaryEntriesOutcome
                 */
                ModifyGlossaryEntriesOutcome ModifyGlossaryEntries(const Model::ModifyGlossaryEntriesRequest &request);
                void ModifyGlossaryEntriesAsync(const Model::ModifyGlossaryEntriesRequest& request, const ModifyGlossaryEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGlossaryEntriesOutcomeCallable ModifyGlossaryEntriesCallable(const Model::ModifyGlossaryEntriesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_TOKENHUBCLIENT_H_
