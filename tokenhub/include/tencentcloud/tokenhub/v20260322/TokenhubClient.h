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
#include <tencentcloud/tokenhub/v20260322/model/CreateTokenPlanApiKeysRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/CreateTokenPlanApiKeysResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/CreateTokenPlanTeamOrderAndBuyRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/CreateTokenPlanTeamOrderAndBuyResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DeleteApiKeyRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DeleteApiKeyResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DeleteGlossaryRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DeleteGlossaryResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DeleteGlossaryEntriesRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DeleteGlossaryEntriesResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DeleteTokenPlanApiKeyRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DeleteTokenPlanApiKeyResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeApiKeyRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeApiKeyResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeApiKeyListRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeApiKeyListResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeGlossariesRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeGlossariesResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeGlossaryEntriesRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeGlossaryEntriesResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyListRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyListResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeySecretRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeySecretResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyUsageDetailRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanApiKeyUsageDetailResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanListRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/DescribeTokenPlanListResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyApiKeyInfoRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyApiKeyInfoResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyApiKeyStatusRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyApiKeyStatusResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyGlossaryEntriesRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyGlossaryEntriesResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyTokenPlanApiKeyRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyTokenPlanApiKeyResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyTokenPlanApiKeySecretRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/ModifyTokenPlanApiKeySecretResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/RenewTokenPlanTeamOrderRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/RenewTokenPlanTeamOrderResponse.h>
#include <tencentcloud/tokenhub/v20260322/model/UpgradeTokenPlanTeamOrderRequest.h>
#include <tencentcloud/tokenhub/v20260322/model/UpgradeTokenPlanTeamOrderResponse.h>


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
                typedef Outcome<Core::Error, Model::CreateTokenPlanApiKeysResponse> CreateTokenPlanApiKeysOutcome;
                typedef std::future<CreateTokenPlanApiKeysOutcome> CreateTokenPlanApiKeysOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::CreateTokenPlanApiKeysRequest&, CreateTokenPlanApiKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTokenPlanApiKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTokenPlanTeamOrderAndBuyResponse> CreateTokenPlanTeamOrderAndBuyOutcome;
                typedef std::future<CreateTokenPlanTeamOrderAndBuyOutcome> CreateTokenPlanTeamOrderAndBuyOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::CreateTokenPlanTeamOrderAndBuyRequest&, CreateTokenPlanTeamOrderAndBuyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTokenPlanTeamOrderAndBuyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApiKeyResponse> DeleteApiKeyOutcome;
                typedef std::future<DeleteApiKeyOutcome> DeleteApiKeyOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DeleteApiKeyRequest&, DeleteApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGlossaryResponse> DeleteGlossaryOutcome;
                typedef std::future<DeleteGlossaryOutcome> DeleteGlossaryOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DeleteGlossaryRequest&, DeleteGlossaryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlossaryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGlossaryEntriesResponse> DeleteGlossaryEntriesOutcome;
                typedef std::future<DeleteGlossaryEntriesOutcome> DeleteGlossaryEntriesOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DeleteGlossaryEntriesRequest&, DeleteGlossaryEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGlossaryEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTokenPlanApiKeyResponse> DeleteTokenPlanApiKeyOutcome;
                typedef std::future<DeleteTokenPlanApiKeyOutcome> DeleteTokenPlanApiKeyOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DeleteTokenPlanApiKeyRequest&, DeleteTokenPlanApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTokenPlanApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiKeyResponse> DescribeApiKeyOutcome;
                typedef std::future<DescribeApiKeyOutcome> DescribeApiKeyOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeApiKeyRequest&, DescribeApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiKeyListResponse> DescribeApiKeyListOutcome;
                typedef std::future<DescribeApiKeyListOutcome> DescribeApiKeyListOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeApiKeyListRequest&, DescribeApiKeyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiKeyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlossariesResponse> DescribeGlossariesOutcome;
                typedef std::future<DescribeGlossariesOutcome> DescribeGlossariesOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeGlossariesRequest&, DescribeGlossariesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlossariesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGlossaryEntriesResponse> DescribeGlossaryEntriesOutcome;
                typedef std::future<DescribeGlossaryEntriesOutcome> DescribeGlossaryEntriesOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeGlossaryEntriesRequest&, DescribeGlossaryEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGlossaryEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenPlanResponse> DescribeTokenPlanOutcome;
                typedef std::future<DescribeTokenPlanOutcome> DescribeTokenPlanOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeTokenPlanRequest&, DescribeTokenPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenPlanApiKeyResponse> DescribeTokenPlanApiKeyOutcome;
                typedef std::future<DescribeTokenPlanApiKeyOutcome> DescribeTokenPlanApiKeyOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeTokenPlanApiKeyRequest&, DescribeTokenPlanApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenPlanApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenPlanApiKeyListResponse> DescribeTokenPlanApiKeyListOutcome;
                typedef std::future<DescribeTokenPlanApiKeyListOutcome> DescribeTokenPlanApiKeyListOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeTokenPlanApiKeyListRequest&, DescribeTokenPlanApiKeyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenPlanApiKeyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenPlanApiKeySecretResponse> DescribeTokenPlanApiKeySecretOutcome;
                typedef std::future<DescribeTokenPlanApiKeySecretOutcome> DescribeTokenPlanApiKeySecretOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeTokenPlanApiKeySecretRequest&, DescribeTokenPlanApiKeySecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenPlanApiKeySecretAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenPlanApiKeyUsageDetailResponse> DescribeTokenPlanApiKeyUsageDetailOutcome;
                typedef std::future<DescribeTokenPlanApiKeyUsageDetailOutcome> DescribeTokenPlanApiKeyUsageDetailOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeTokenPlanApiKeyUsageDetailRequest&, DescribeTokenPlanApiKeyUsageDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenPlanApiKeyUsageDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTokenPlanListResponse> DescribeTokenPlanListOutcome;
                typedef std::future<DescribeTokenPlanListOutcome> DescribeTokenPlanListOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::DescribeTokenPlanListRequest&, DescribeTokenPlanListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTokenPlanListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApiKeyInfoResponse> ModifyApiKeyInfoOutcome;
                typedef std::future<ModifyApiKeyInfoOutcome> ModifyApiKeyInfoOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::ModifyApiKeyInfoRequest&, ModifyApiKeyInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiKeyInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApiKeyStatusResponse> ModifyApiKeyStatusOutcome;
                typedef std::future<ModifyApiKeyStatusOutcome> ModifyApiKeyStatusOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::ModifyApiKeyStatusRequest&, ModifyApiKeyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiKeyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGlossaryEntriesResponse> ModifyGlossaryEntriesOutcome;
                typedef std::future<ModifyGlossaryEntriesOutcome> ModifyGlossaryEntriesOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::ModifyGlossaryEntriesRequest&, ModifyGlossaryEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGlossaryEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTokenPlanApiKeyResponse> ModifyTokenPlanApiKeyOutcome;
                typedef std::future<ModifyTokenPlanApiKeyOutcome> ModifyTokenPlanApiKeyOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::ModifyTokenPlanApiKeyRequest&, ModifyTokenPlanApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTokenPlanApiKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTokenPlanApiKeySecretResponse> ModifyTokenPlanApiKeySecretOutcome;
                typedef std::future<ModifyTokenPlanApiKeySecretOutcome> ModifyTokenPlanApiKeySecretOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::ModifyTokenPlanApiKeySecretRequest&, ModifyTokenPlanApiKeySecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTokenPlanApiKeySecretAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewTokenPlanTeamOrderResponse> RenewTokenPlanTeamOrderOutcome;
                typedef std::future<RenewTokenPlanTeamOrderOutcome> RenewTokenPlanTeamOrderOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::RenewTokenPlanTeamOrderRequest&, RenewTokenPlanTeamOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewTokenPlanTeamOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeTokenPlanTeamOrderResponse> UpgradeTokenPlanTeamOrderOutcome;
                typedef std::future<UpgradeTokenPlanTeamOrderOutcome> UpgradeTokenPlanTeamOrderOutcomeCallable;
                typedef std::function<void(const TokenhubClient*, const Model::UpgradeTokenPlanTeamOrderRequest&, UpgradeTokenPlanTeamOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeTokenPlanTeamOrderAsyncHandler;



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
                 *Batch create TokenPlan API Keys.

Import a name prefix and quantity to automatically generate names in the `{Api Key Name}-{serial number}` format (for example, aaa-1, aaa-2). Duplicate names are allowed. Partial success is supported for up to 100 entries.
                 * @param req CreateTokenPlanApiKeysRequest
                 * @return CreateTokenPlanApiKeysOutcome
                 */
                CreateTokenPlanApiKeysOutcome CreateTokenPlanApiKeys(const Model::CreateTokenPlanApiKeysRequest &request);
                void CreateTokenPlanApiKeysAsync(const Model::CreateTokenPlanApiKeysRequest& request, const CreateTokenPlanApiKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTokenPlanApiKeysOutcomeCallable CreateTokenPlanApiKeysCallable(const Model::CreateTokenPlanApiKeysRequest& request);

                /**
                 *Purchase a package (This API is also used to reactivate and renew expired packages. The teamId of the expired package is required. After the renewal is successful, the total cycle count of the package will include historical cycles. The actual effective cycle of the package is determined by the effective time and expiration time.)

Initiate an order for a TokenPlan package and complete payment. Return the order ID and associated sub-orders and resource information upon success.
                 * @param req CreateTokenPlanTeamOrderAndBuyRequest
                 * @return CreateTokenPlanTeamOrderAndBuyOutcome
                 */
                CreateTokenPlanTeamOrderAndBuyOutcome CreateTokenPlanTeamOrderAndBuy(const Model::CreateTokenPlanTeamOrderAndBuyRequest &request);
                void CreateTokenPlanTeamOrderAndBuyAsync(const Model::CreateTokenPlanTeamOrderAndBuyRequest& request, const CreateTokenPlanTeamOrderAndBuyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTokenPlanTeamOrderAndBuyOutcomeCallable CreateTokenPlanTeamOrderAndBuyCallable(const Model::CreateTokenPlanTeamOrderAndBuyRequest& request);

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
                 *Delete the Token Plan API key.

Simultaneously delete the limit center sub-limit package and notify the Notification Gateway to purge cache.
                 * @param req DeleteTokenPlanApiKeyRequest
                 * @return DeleteTokenPlanApiKeyOutcome
                 */
                DeleteTokenPlanApiKeyOutcome DeleteTokenPlanApiKey(const Model::DeleteTokenPlanApiKeyRequest &request);
                void DeleteTokenPlanApiKeyAsync(const Model::DeleteTokenPlanApiKeyRequest& request, const DeleteTokenPlanApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTokenPlanApiKeyOutcomeCallable DeleteTokenPlanApiKeyCallable(const Model::DeleteTokenPlanApiKeyRequest& request);

                /**
                 *This API is used to query API Key details based on API Key ID or key value, and return the plaintext key. At least one of ApiKeyId and ApiKey must be input, with priority given to ApiKeyId.
                 * @param req DescribeApiKeyRequest
                 * @return DescribeApiKeyOutcome
                 */
                DescribeApiKeyOutcome DescribeApiKey(const Model::DescribeApiKeyRequest &request);
                void DescribeApiKeyAsync(const Model::DescribeApiKeyRequest& request, const DescribeApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiKeyOutcomeCallable DescribeApiKeyCallable(const Model::DescribeApiKeyRequest& request);

                /**
                 *Query API key list.

Query the API key list of the current user with key values in masking display. Support pagination, filtering, and sorting.
                 * @param req DescribeApiKeyListRequest
                 * @return DescribeApiKeyListOutcome
                 */
                DescribeApiKeyListOutcome DescribeApiKeyList(const Model::DescribeApiKeyListRequest &request);
                void DescribeApiKeyListAsync(const Model::DescribeApiKeyListRequest& request, const DescribeApiKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiKeyListOutcomeCallable DescribeApiKeyListCallable(const Model::DescribeApiKeyListRequest& request);

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
                 *Query the TokenPlan package details.

Return the package basic info and the remaining quota of the package.
                 * @param req DescribeTokenPlanRequest
                 * @return DescribeTokenPlanOutcome
                 */
                DescribeTokenPlanOutcome DescribeTokenPlan(const Model::DescribeTokenPlanRequest &request);
                void DescribeTokenPlanAsync(const Model::DescribeTokenPlanRequest& request, const DescribeTokenPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenPlanOutcomeCallable DescribeTokenPlanCallable(const Model::DescribeTokenPlanRequest& request);

                /**
                 *Query TokenPlan APIKey details.

Return the complete APIKey information (including the plaintext key) and the remaining quota of the sub-quota package.
                 * @param req DescribeTokenPlanApiKeyRequest
                 * @return DescribeTokenPlanApiKeyOutcome
                 */
                DescribeTokenPlanApiKeyOutcome DescribeTokenPlanApiKey(const Model::DescribeTokenPlanApiKeyRequest &request);
                void DescribeTokenPlanApiKeyAsync(const Model::DescribeTokenPlanApiKeyRequest& request, const DescribeTokenPlanApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenPlanApiKeyOutcomeCallable DescribeTokenPlanApiKeyCallable(const Model::DescribeTokenPlanApiKeyRequest& request);

                /**
                 *Query the list of Token Plan API keys.

Returns the API key list under a specified package. Keys are masked. Root accounts can view all keys, while sub-accounts can only view keys created by themselves.
                 * @param req DescribeTokenPlanApiKeyListRequest
                 * @return DescribeTokenPlanApiKeyListOutcome
                 */
                DescribeTokenPlanApiKeyListOutcome DescribeTokenPlanApiKeyList(const Model::DescribeTokenPlanApiKeyListRequest &request);
                void DescribeTokenPlanApiKeyListAsync(const Model::DescribeTokenPlanApiKeyListRequest& request, const DescribeTokenPlanApiKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenPlanApiKeyListOutcomeCallable DescribeTokenPlanApiKeyListCallable(const Model::DescribeTokenPlanApiKeyListRequest& request);

                /**
                 *Query the TokenPlan APIKey (plaintext).

Return the plaintext key value of the designated APIKey. Keep it safe.
                 * @param req DescribeTokenPlanApiKeySecretRequest
                 * @return DescribeTokenPlanApiKeySecretOutcome
                 */
                DescribeTokenPlanApiKeySecretOutcome DescribeTokenPlanApiKeySecret(const Model::DescribeTokenPlanApiKeySecretRequest &request);
                void DescribeTokenPlanApiKeySecretAsync(const Model::DescribeTokenPlanApiKeySecretRequest& request, const DescribeTokenPlanApiKeySecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenPlanApiKeySecretOutcomeCallable DescribeTokenPlanApiKeySecretCallable(const Model::DescribeTokenPlanApiKeySecretRequest& request);

                /**
                 *Query the Token Plan APIKey call detail.

This API is used to query call details under a package from CLS log service, filter by team_id, and support cursor-based pagination.
                 * @param req DescribeTokenPlanApiKeyUsageDetailRequest
                 * @return DescribeTokenPlanApiKeyUsageDetailOutcome
                 */
                DescribeTokenPlanApiKeyUsageDetailOutcome DescribeTokenPlanApiKeyUsageDetail(const Model::DescribeTokenPlanApiKeyUsageDetailRequest &request);
                void DescribeTokenPlanApiKeyUsageDetailAsync(const Model::DescribeTokenPlanApiKeyUsageDetailRequest& request, const DescribeTokenPlanApiKeyUsageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenPlanApiKeyUsageDetailOutcomeCallable DescribeTokenPlanApiKeyUsageDetailCallable(const Model::DescribeTokenPlanApiKeyUsageDetailRequest& request);

                /**
                 *Query the list of Token Plan package options.

Supports pagination, filtering, and sorting. Root accounts can view all packages, while sub-accounts can only view packages created by themselves. Returned results include the main limit package details associated with each package in the limit center.
                 * @param req DescribeTokenPlanListRequest
                 * @return DescribeTokenPlanListOutcome
                 */
                DescribeTokenPlanListOutcome DescribeTokenPlanList(const Model::DescribeTokenPlanListRequest &request);
                void DescribeTokenPlanListAsync(const Model::DescribeTokenPlanListRequest& request, const DescribeTokenPlanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTokenPlanListOutcomeCallable DescribeTokenPlanListCallable(const Model::DescribeTokenPlanListRequest& request);

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

                /**
                 *Modify the Token Plan APIKey configuration (field that the gateway focuses on).

After modification, automatically notify the gateway to update the cache and sync the limit center.
                 * @param req ModifyTokenPlanApiKeyRequest
                 * @return ModifyTokenPlanApiKeyOutcome
                 */
                ModifyTokenPlanApiKeyOutcome ModifyTokenPlanApiKey(const Model::ModifyTokenPlanApiKeyRequest &request);
                void ModifyTokenPlanApiKeyAsync(const Model::ModifyTokenPlanApiKeyRequest& request, const ModifyTokenPlanApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTokenPlanApiKeyOutcomeCallable ModifyTokenPlanApiKeyCallable(const Model::ModifyTokenPlanApiKeyRequest& request);

                /**
                 *Reset the TokenPlan API Key.

Regenerate the key value. The key version increments and the old key expires immediately. The API Key ID remains unchanged. After resetting, the new key can be queried through DescribeTokenPlanApiKeySecret.
                 * @param req ModifyTokenPlanApiKeySecretRequest
                 * @return ModifyTokenPlanApiKeySecretOutcome
                 */
                ModifyTokenPlanApiKeySecretOutcome ModifyTokenPlanApiKeySecret(const Model::ModifyTokenPlanApiKeySecretRequest &request);
                void ModifyTokenPlanApiKeySecretAsync(const Model::ModifyTokenPlanApiKeySecretRequest& request, const ModifyTokenPlanApiKeySecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTokenPlanApiKeySecretOutcomeCallable ModifyTokenPlanApiKeySecretCallable(const Model::ModifyTokenPlanApiKeySecretRequest& request);

                /**
                 *Renew a package.

Initiate a renewal order for an existing Token Plan package and complete payment. Return the order ID and associated sub-orders and resource information upon success.
                 * @param req RenewTokenPlanTeamOrderRequest
                 * @return RenewTokenPlanTeamOrderOutcome
                 */
                RenewTokenPlanTeamOrderOutcome RenewTokenPlanTeamOrder(const Model::RenewTokenPlanTeamOrderRequest &request);
                void RenewTokenPlanTeamOrderAsync(const Model::RenewTokenPlanTeamOrderRequest& request, const RenewTokenPlanTeamOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewTokenPlanTeamOrderOutcomeCallable RenewTokenPlanTeamOrderCallable(const Model::RenewTokenPlanTeamOrderRequest& request);

                /**
                 *Upgrade the package.

Initiate an upgrade order for an existing Token Plan package and complete payment to expand point or token limits. Return the order ID and associated sub-orders and resource information upon success. The new limit must be greater than the current limit.
                 * @param req UpgradeTokenPlanTeamOrderRequest
                 * @return UpgradeTokenPlanTeamOrderOutcome
                 */
                UpgradeTokenPlanTeamOrderOutcome UpgradeTokenPlanTeamOrder(const Model::UpgradeTokenPlanTeamOrderRequest &request);
                void UpgradeTokenPlanTeamOrderAsync(const Model::UpgradeTokenPlanTeamOrderRequest& request, const UpgradeTokenPlanTeamOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeTokenPlanTeamOrderOutcomeCallable UpgradeTokenPlanTeamOrderCallable(const Model::UpgradeTokenPlanTeamOrderRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_TOKENHUBCLIENT_H_
