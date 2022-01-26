/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_SSM_V20190923_SSMCLIENT_H_
#define TENCENTCLOUD_SSM_V20190923_SSMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ssm/v20190923/model/CreateProductSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/CreateProductSecretResponse.h>
#include <tencentcloud/ssm/v20190923/model/CreateSSHKeyPairSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/CreateSSHKeyPairSecretResponse.h>
#include <tencentcloud/ssm/v20190923/model/CreateSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/CreateSecretResponse.h>
#include <tencentcloud/ssm/v20190923/model/DeleteSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/DeleteSecretResponse.h>
#include <tencentcloud/ssm/v20190923/model/DeleteSecretVersionRequest.h>
#include <tencentcloud/ssm/v20190923/model/DeleteSecretVersionResponse.h>
#include <tencentcloud/ssm/v20190923/model/DescribeAsyncRequestInfoRequest.h>
#include <tencentcloud/ssm/v20190923/model/DescribeAsyncRequestInfoResponse.h>
#include <tencentcloud/ssm/v20190923/model/DescribeRotationDetailRequest.h>
#include <tencentcloud/ssm/v20190923/model/DescribeRotationDetailResponse.h>
#include <tencentcloud/ssm/v20190923/model/DescribeRotationHistoryRequest.h>
#include <tencentcloud/ssm/v20190923/model/DescribeRotationHistoryResponse.h>
#include <tencentcloud/ssm/v20190923/model/DescribeSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/DescribeSecretResponse.h>
#include <tencentcloud/ssm/v20190923/model/DescribeSupportedProductsRequest.h>
#include <tencentcloud/ssm/v20190923/model/DescribeSupportedProductsResponse.h>
#include <tencentcloud/ssm/v20190923/model/DisableSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/DisableSecretResponse.h>
#include <tencentcloud/ssm/v20190923/model/EnableSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/EnableSecretResponse.h>
#include <tencentcloud/ssm/v20190923/model/GetRegionsRequest.h>
#include <tencentcloud/ssm/v20190923/model/GetRegionsResponse.h>
#include <tencentcloud/ssm/v20190923/model/GetSSHKeyPairValueRequest.h>
#include <tencentcloud/ssm/v20190923/model/GetSSHKeyPairValueResponse.h>
#include <tencentcloud/ssm/v20190923/model/GetSecretValueRequest.h>
#include <tencentcloud/ssm/v20190923/model/GetSecretValueResponse.h>
#include <tencentcloud/ssm/v20190923/model/GetServiceStatusRequest.h>
#include <tencentcloud/ssm/v20190923/model/GetServiceStatusResponse.h>
#include <tencentcloud/ssm/v20190923/model/ListSecretVersionIdsRequest.h>
#include <tencentcloud/ssm/v20190923/model/ListSecretVersionIdsResponse.h>
#include <tencentcloud/ssm/v20190923/model/ListSecretsRequest.h>
#include <tencentcloud/ssm/v20190923/model/ListSecretsResponse.h>
#include <tencentcloud/ssm/v20190923/model/PutSecretValueRequest.h>
#include <tencentcloud/ssm/v20190923/model/PutSecretValueResponse.h>
#include <tencentcloud/ssm/v20190923/model/RestoreSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/RestoreSecretResponse.h>
#include <tencentcloud/ssm/v20190923/model/RotateProductSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/RotateProductSecretResponse.h>
#include <tencentcloud/ssm/v20190923/model/UpdateDescriptionRequest.h>
#include <tencentcloud/ssm/v20190923/model/UpdateDescriptionResponse.h>
#include <tencentcloud/ssm/v20190923/model/UpdateRotationStatusRequest.h>
#include <tencentcloud/ssm/v20190923/model/UpdateRotationStatusResponse.h>
#include <tencentcloud/ssm/v20190923/model/UpdateSecretRequest.h>
#include <tencentcloud/ssm/v20190923/model/UpdateSecretResponse.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            class SsmClient : public AbstractClient
            {
            public:
                SsmClient(const Credential &credential, const std::string &region);
                SsmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateProductSecretResponse> CreateProductSecretOutcome;
                typedef std::future<CreateProductSecretOutcome> CreateProductSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::CreateProductSecretRequest&, CreateProductSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProductSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSSHKeyPairSecretResponse> CreateSSHKeyPairSecretOutcome;
                typedef std::future<CreateSSHKeyPairSecretOutcome> CreateSSHKeyPairSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::CreateSSHKeyPairSecretRequest&, CreateSSHKeyPairSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSSHKeyPairSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecretResponse> CreateSecretOutcome;
                typedef std::future<CreateSecretOutcome> CreateSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::CreateSecretRequest&, CreateSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecretResponse> DeleteSecretOutcome;
                typedef std::future<DeleteSecretOutcome> DeleteSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::DeleteSecretRequest&, DeleteSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecretVersionResponse> DeleteSecretVersionOutcome;
                typedef std::future<DeleteSecretVersionOutcome> DeleteSecretVersionOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::DeleteSecretVersionRequest&, DeleteSecretVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecretVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAsyncRequestInfoResponse> DescribeAsyncRequestInfoOutcome;
                typedef std::future<DescribeAsyncRequestInfoOutcome> DescribeAsyncRequestInfoOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::DescribeAsyncRequestInfoRequest&, DescribeAsyncRequestInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAsyncRequestInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRotationDetailResponse> DescribeRotationDetailOutcome;
                typedef std::future<DescribeRotationDetailOutcome> DescribeRotationDetailOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::DescribeRotationDetailRequest&, DescribeRotationDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRotationDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRotationHistoryResponse> DescribeRotationHistoryOutcome;
                typedef std::future<DescribeRotationHistoryOutcome> DescribeRotationHistoryOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::DescribeRotationHistoryRequest&, DescribeRotationHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRotationHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecretResponse> DescribeSecretOutcome;
                typedef std::future<DescribeSecretOutcome> DescribeSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::DescribeSecretRequest&, DescribeSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSupportedProductsResponse> DescribeSupportedProductsOutcome;
                typedef std::future<DescribeSupportedProductsOutcome> DescribeSupportedProductsOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::DescribeSupportedProductsRequest&, DescribeSupportedProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSupportedProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableSecretResponse> DisableSecretOutcome;
                typedef std::future<DisableSecretOutcome> DisableSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::DisableSecretRequest&, DisableSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableSecretResponse> EnableSecretOutcome;
                typedef std::future<EnableSecretOutcome> EnableSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::EnableSecretRequest&, EnableSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRegionsResponse> GetRegionsOutcome;
                typedef std::future<GetRegionsOutcome> GetRegionsOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::GetRegionsRequest&, GetRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSSHKeyPairValueResponse> GetSSHKeyPairValueOutcome;
                typedef std::future<GetSSHKeyPairValueOutcome> GetSSHKeyPairValueOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::GetSSHKeyPairValueRequest&, GetSSHKeyPairValueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSSHKeyPairValueAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSecretValueResponse> GetSecretValueOutcome;
                typedef std::future<GetSecretValueOutcome> GetSecretValueOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::GetSecretValueRequest&, GetSecretValueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSecretValueAsyncHandler;
                typedef Outcome<Core::Error, Model::GetServiceStatusResponse> GetServiceStatusOutcome;
                typedef std::future<GetServiceStatusOutcome> GetServiceStatusOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::GetServiceStatusRequest&, GetServiceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSecretVersionIdsResponse> ListSecretVersionIdsOutcome;
                typedef std::future<ListSecretVersionIdsOutcome> ListSecretVersionIdsOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::ListSecretVersionIdsRequest&, ListSecretVersionIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSecretVersionIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSecretsResponse> ListSecretsOutcome;
                typedef std::future<ListSecretsOutcome> ListSecretsOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::ListSecretsRequest&, ListSecretsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSecretsAsyncHandler;
                typedef Outcome<Core::Error, Model::PutSecretValueResponse> PutSecretValueOutcome;
                typedef std::future<PutSecretValueOutcome> PutSecretValueOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::PutSecretValueRequest&, PutSecretValueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutSecretValueAsyncHandler;
                typedef Outcome<Core::Error, Model::RestoreSecretResponse> RestoreSecretOutcome;
                typedef std::future<RestoreSecretOutcome> RestoreSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::RestoreSecretRequest&, RestoreSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestoreSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::RotateProductSecretResponse> RotateProductSecretOutcome;
                typedef std::future<RotateProductSecretOutcome> RotateProductSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::RotateProductSecretRequest&, RotateProductSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RotateProductSecretAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDescriptionResponse> UpdateDescriptionOutcome;
                typedef std::future<UpdateDescriptionOutcome> UpdateDescriptionOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::UpdateDescriptionRequest&, UpdateDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRotationStatusResponse> UpdateRotationStatusOutcome;
                typedef std::future<UpdateRotationStatusOutcome> UpdateRotationStatusOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::UpdateRotationStatusRequest&, UpdateRotationStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRotationStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSecretResponse> UpdateSecretOutcome;
                typedef std::future<UpdateSecretOutcome> UpdateSecretOutcomeCallable;
                typedef std::function<void(const SsmClient*, const Model::UpdateSecretRequest&, UpdateSecretOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSecretAsyncHandler;



                /**
                 *This API is used to create a Tencent Cloud service credential.
                 * @param req CreateProductSecretRequest
                 * @return CreateProductSecretOutcome
                 */
                CreateProductSecretOutcome CreateProductSecret(const Model::CreateProductSecretRequest &request);
                void CreateProductSecretAsync(const Model::CreateProductSecretRequest& request, const CreateProductSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProductSecretOutcomeCallable CreateProductSecretCallable(const Model::CreateProductSecretRequest& request);

                /**
                 *This API is used to create a secret that hosts SSH keys.
                 * @param req CreateSSHKeyPairSecretRequest
                 * @return CreateSSHKeyPairSecretOutcome
                 */
                CreateSSHKeyPairSecretOutcome CreateSSHKeyPairSecret(const Model::CreateSSHKeyPairSecretRequest &request);
                void CreateSSHKeyPairSecretAsync(const Model::CreateSSHKeyPairSecretRequest& request, const CreateSSHKeyPairSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSSHKeyPairSecretOutcomeCallable CreateSSHKeyPairSecretCallable(const Model::CreateSSHKeyPairSecretRequest& request);

                /**
                 *This API is used to create a KMS-encrypted Secret. You can create and store up to 1,000 Secrets in each region.
                 * @param req CreateSecretRequest
                 * @return CreateSecretOutcome
                 */
                CreateSecretOutcome CreateSecret(const Model::CreateSecretRequest &request);
                void CreateSecretAsync(const Model::CreateSecretRequest& request, const CreateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecretOutcomeCallable CreateSecretCallable(const Model::CreateSecretRequest& request);

                /**
                 *This API is used to delete a Secret. You can set whether to delete the Secret immediately or on schedule using the `RecoveryWindowInDays` parameter. For a Secret to be deleted on schedule, its status will be `PendingDelete` before the scheduled deletion time. You can use `RestoreSecret` to restore a deleted Secret during this time. A deleted Secret will not be restorable after the scheduled deletion time. A Secret can only be deleted after being disabled using `DisableSecret`.
                 * @param req DeleteSecretRequest
                 * @return DeleteSecretOutcome
                 */
                DeleteSecretOutcome DeleteSecret(const Model::DeleteSecretRequest &request);
                void DeleteSecretAsync(const Model::DeleteSecretRequest& request, const DeleteSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecretOutcomeCallable DeleteSecretCallable(const Model::DeleteSecretRequest& request);

                /**
                 *This API is used to directly delete a single credential version under the specified credential. The deletion takes effect immediately, and the credential version in all status can be deleted.
This API is only applicable to user-defined credentials but not Tencent Cloud service credentials.
                 * @param req DeleteSecretVersionRequest
                 * @return DeleteSecretVersionOutcome
                 */
                DeleteSecretVersionOutcome DeleteSecretVersion(const Model::DeleteSecretVersionRequest &request);
                void DeleteSecretVersionAsync(const Model::DeleteSecretVersionRequest& request, const DeleteSecretVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecretVersionOutcomeCallable DeleteSecretVersionCallable(const Model::DeleteSecretVersionRequest& request);

                /**
                 *This API is used to query the execution result of an async task.
                 * @param req DescribeAsyncRequestInfoRequest
                 * @return DescribeAsyncRequestInfoOutcome
                 */
                DescribeAsyncRequestInfoOutcome DescribeAsyncRequestInfo(const Model::DescribeAsyncRequestInfoRequest &request);
                void DescribeAsyncRequestInfoAsync(const Model::DescribeAsyncRequestInfoRequest& request, const DescribeAsyncRequestInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAsyncRequestInfoOutcomeCallable DescribeAsyncRequestInfoCallable(const Model::DescribeAsyncRequestInfoRequest& request);

                /**
                 *This API is used to query the details of a credential rotation policy.
This API is only applicable to Tencent Cloud service credentials.
                 * @param req DescribeRotationDetailRequest
                 * @return DescribeRotationDetailOutcome
                 */
                DescribeRotationDetailOutcome DescribeRotationDetail(const Model::DescribeRotationDetailRequest &request);
                void DescribeRotationDetailAsync(const Model::DescribeRotationDetailRequest& request, const DescribeRotationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRotationDetailOutcomeCallable DescribeRotationDetailCallable(const Model::DescribeRotationDetailRequest& request);

                /**
                 *This API is used to query the historical versions of a rotated credential.
This API is only applicable to Tencent Cloud service credentials.
                 * @param req DescribeRotationHistoryRequest
                 * @return DescribeRotationHistoryOutcome
                 */
                DescribeRotationHistoryOutcome DescribeRotationHistory(const Model::DescribeRotationHistoryRequest &request);
                void DescribeRotationHistoryAsync(const Model::DescribeRotationHistoryRequest& request, const DescribeRotationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRotationHistoryOutcomeCallable DescribeRotationHistoryCallable(const Model::DescribeRotationHistoryRequest& request);

                /**
                 *This API is used to obtain the detailed attribute information of a Secret.
                 * @param req DescribeSecretRequest
                 * @return DescribeSecretOutcome
                 */
                DescribeSecretOutcome DescribeSecret(const Model::DescribeSecretRequest &request);
                void DescribeSecretAsync(const Model::DescribeSecretRequest& request, const DescribeSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecretOutcomeCallable DescribeSecretCallable(const Model::DescribeSecretRequest& request);

                /**
                 *This API is used to query the list of supported Tencent Cloud services.
                 * @param req DescribeSupportedProductsRequest
                 * @return DescribeSupportedProductsOutcome
                 */
                DescribeSupportedProductsOutcome DescribeSupportedProducts(const Model::DescribeSupportedProductsRequest &request);
                void DescribeSupportedProductsAsync(const Model::DescribeSupportedProductsRequest& request, const DescribeSupportedProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSupportedProductsOutcomeCallable DescribeSupportedProductsCallable(const Model::DescribeSupportedProductsRequest& request);

                /**
                 *This API is used to disable a Secret and will change its status to `Disabled`. The plaintext of a disabled Secret cannot be obtained through APIs.
                 * @param req DisableSecretRequest
                 * @return DisableSecretOutcome
                 */
                DisableSecretOutcome DisableSecret(const Model::DisableSecretRequest &request);
                void DisableSecretAsync(const Model::DisableSecretRequest& request, const DisableSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableSecretOutcomeCallable DisableSecretCallable(const Model::DisableSecretRequest& request);

                /**
                 *This API is used to enable a Secret and will change its status to `Enabled`. You can call the `GetSecretValue` API to obtain the plaintext of this Secret. Secrets in `PendingDelete` status can only be enabled after being restored by using `RestoreSecret`.
                 * @param req EnableSecretRequest
                 * @return EnableSecretOutcome
                 */
                EnableSecretOutcome EnableSecret(const Model::EnableSecretRequest &request);
                void EnableSecretAsync(const Model::EnableSecretRequest& request, const EnableSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableSecretOutcomeCallable EnableSecretCallable(const Model::EnableSecretRequest& request);

                /**
                 *This API is used to obtain the list of regions displayed on Console.
                 * @param req GetRegionsRequest
                 * @return GetRegionsOutcome
                 */
                GetRegionsOutcome GetRegions(const Model::GetRegionsRequest &request);
                void GetRegionsAsync(const Model::GetRegionsRequest& request, const GetRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRegionsOutcomeCallable GetRegionsCallable(const Model::GetRegionsRequest& request);

                /**
                 *This API is used to obtain the plaintext value of the SSH key secret.
                 * @param req GetSSHKeyPairValueRequest
                 * @return GetSSHKeyPairValueOutcome
                 */
                GetSSHKeyPairValueOutcome GetSSHKeyPairValue(const Model::GetSSHKeyPairValueRequest &request);
                void GetSSHKeyPairValueAsync(const Model::GetSSHKeyPairValueRequest& request, const GetSSHKeyPairValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSSHKeyPairValueOutcomeCallable GetSSHKeyPairValueCallable(const Model::GetSSHKeyPairValueRequest& request);

                /**
                 *For user-defined credentials, this API is used to get the plaintext information of a credential by specifying the credential name and version.
For Tencent Cloud service credentials such as MySQL credentials, this API is used to get the plaintext information of a previously rotated credential by specifying the credential name and historical version number. If you want to get the plaintext of the credential version currently in use, you need to specify the version number as `SSM_Current`.
                 * @param req GetSecretValueRequest
                 * @return GetSecretValueOutcome
                 */
                GetSecretValueOutcome GetSecretValue(const Model::GetSecretValueRequest &request);
                void GetSecretValueAsync(const Model::GetSecretValueRequest& request, const GetSecretValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSecretValueOutcomeCallable GetSecretValueCallable(const Model::GetSecretValueRequest& request);

                /**
                 *This API is used to obtain the SecretsManager service status of a user.
                 * @param req GetServiceStatusRequest
                 * @return GetServiceStatusOutcome
                 */
                GetServiceStatusOutcome GetServiceStatus(const Model::GetServiceStatusRequest &request);
                void GetServiceStatusAsync(const Model::GetServiceStatusRequest& request, const GetServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetServiceStatusOutcomeCallable GetServiceStatusCallable(const Model::GetServiceStatusRequest& request);

                /**
                 *This API is used to obtain list of versions of a Secret.
                 * @param req ListSecretVersionIdsRequest
                 * @return ListSecretVersionIdsOutcome
                 */
                ListSecretVersionIdsOutcome ListSecretVersionIds(const Model::ListSecretVersionIdsRequest &request);
                void ListSecretVersionIdsAsync(const Model::ListSecretVersionIdsRequest& request, const ListSecretVersionIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSecretVersionIdsOutcomeCallable ListSecretVersionIdsCallable(const Model::ListSecretVersionIdsRequest& request);

                /**
                 *This API is used to obtain the detailed information list of all Secrets. You can specify the filter fields and sorting order as needed.
                 * @param req ListSecretsRequest
                 * @return ListSecretsOutcome
                 */
                ListSecretsOutcome ListSecrets(const Model::ListSecretsRequest &request);
                void ListSecretsAsync(const Model::ListSecretsRequest& request, const ListSecretsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSecretsOutcomeCallable ListSecretsCallable(const Model::ListSecretsRequest& request);

                /**
                 *This API adds the new version of the credential content under the specified credential. One credential can have up to 10 versions. New versions can be added to credentials only in `Enabled` or `Disabled` status.
This API is only applicable to user-defined credentials but not Tencent Cloud service credentials.
                 * @param req PutSecretValueRequest
                 * @return PutSecretValueOutcome
                 */
                PutSecretValueOutcome PutSecretValue(const Model::PutSecretValueRequest &request);
                void PutSecretValueAsync(const Model::PutSecretValueRequest& request, const PutSecretValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutSecretValueOutcomeCallable PutSecretValueCallable(const Model::PutSecretValueRequest& request);

                /**
                 *This API is used to restore a `PendingDelete` Secret, canceling its scheduled deletion. The restored Secret will be in `Disabled` status. You can call the `EnableSecret` API to enable this Secret again.
                 * @param req RestoreSecretRequest
                 * @return RestoreSecretOutcome
                 */
                RestoreSecretOutcome RestoreSecret(const Model::RestoreSecretRequest &request);
                void RestoreSecretAsync(const Model::RestoreSecretRequest& request, const RestoreSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestoreSecretOutcomeCallable RestoreSecretCallable(const Model::RestoreSecretRequest& request);

                /**
                 *This API is used to rotate secrets for Tencent Cloud services or Tencent Cloud API key pairs.
Note that only the secrets with the "Enabled" status can be rotated.
                 * @param req RotateProductSecretRequest
                 * @return RotateProductSecretOutcome
                 */
                RotateProductSecretOutcome RotateProductSecret(const Model::RotateProductSecretRequest &request);
                void RotateProductSecretAsync(const Model::RotateProductSecretRequest& request, const RotateProductSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RotateProductSecretOutcomeCallable RotateProductSecretCallable(const Model::RotateProductSecretRequest& request);

                /**
                 *This API is used to update the description of a Secret. This API can only update Secrets in `Enabled` or `Disabled` status.
                 * @param req UpdateDescriptionRequest
                 * @return UpdateDescriptionOutcome
                 */
                UpdateDescriptionOutcome UpdateDescription(const Model::UpdateDescriptionRequest &request);
                void UpdateDescriptionAsync(const Model::UpdateDescriptionRequest& request, const UpdateDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDescriptionOutcomeCallable UpdateDescriptionCallable(const Model::UpdateDescriptionRequest& request);

                /**
                 *This API is used to set a Tencent Cloud service credential rotation policy, including the following parameters:
Specifies whether to enable rotation
Rotation frequency
Rotation start time
                 * @param req UpdateRotationStatusRequest
                 * @return UpdateRotationStatusOutcome
                 */
                UpdateRotationStatusOutcome UpdateRotationStatus(const Model::UpdateRotationStatusRequest &request);
                void UpdateRotationStatusAsync(const Model::UpdateRotationStatusRequest& request, const UpdateRotationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRotationStatusOutcomeCallable UpdateRotationStatusCallable(const Model::UpdateRotationStatusRequest& request);

                /**
                 *This API is used to update the credential content of the specified credential name and version number. Calling this API will encrypt the content of the new credential and overwrite the old content. Only credentials in `Enabled` or `Disabled` status can be updated.
This API is only applicable to user-defined credentials but not Tencent Cloud service credentials.
                 * @param req UpdateSecretRequest
                 * @return UpdateSecretOutcome
                 */
                UpdateSecretOutcome UpdateSecret(const Model::UpdateSecretRequest &request);
                void UpdateSecretAsync(const Model::UpdateSecretRequest& request, const UpdateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSecretOutcomeCallable UpdateSecretCallable(const Model::UpdateSecretRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_SSMCLIENT_H_
