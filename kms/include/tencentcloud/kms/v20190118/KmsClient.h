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

#ifndef TENCENTCLOUD_KMS_V20190118_KMSCLIENT_H_
#define TENCENTCLOUD_KMS_V20190118_KMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/kms/v20190118/model/ArchiveKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/ArchiveKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/AsymmetricRsaDecryptRequest.h>
#include <tencentcloud/kms/v20190118/model/AsymmetricRsaDecryptResponse.h>
#include <tencentcloud/kms/v20190118/model/AsymmetricSm2DecryptRequest.h>
#include <tencentcloud/kms/v20190118/model/AsymmetricSm2DecryptResponse.h>
#include <tencentcloud/kms/v20190118/model/BindCloudResourceRequest.h>
#include <tencentcloud/kms/v20190118/model/BindCloudResourceResponse.h>
#include <tencentcloud/kms/v20190118/model/CancelKeyArchiveRequest.h>
#include <tencentcloud/kms/v20190118/model/CancelKeyArchiveResponse.h>
#include <tencentcloud/kms/v20190118/model/CancelKeyDeletionRequest.h>
#include <tencentcloud/kms/v20190118/model/CancelKeyDeletionResponse.h>
#include <tencentcloud/kms/v20190118/model/CreateKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/CreateKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/CreateWhiteBoxKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/CreateWhiteBoxKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/DecryptRequest.h>
#include <tencentcloud/kms/v20190118/model/DecryptResponse.h>
#include <tencentcloud/kms/v20190118/model/DeleteImportedKeyMaterialRequest.h>
#include <tencentcloud/kms/v20190118/model/DeleteImportedKeyMaterialResponse.h>
#include <tencentcloud/kms/v20190118/model/DeleteWhiteBoxKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/DeleteWhiteBoxKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/DescribeKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/DescribeKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/DescribeKeysRequest.h>
#include <tencentcloud/kms/v20190118/model/DescribeKeysResponse.h>
#include <tencentcloud/kms/v20190118/model/DescribeWhiteBoxDecryptKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/DescribeWhiteBoxDecryptKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/DescribeWhiteBoxDeviceFingerprintsRequest.h>
#include <tencentcloud/kms/v20190118/model/DescribeWhiteBoxDeviceFingerprintsResponse.h>
#include <tencentcloud/kms/v20190118/model/DescribeWhiteBoxKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/DescribeWhiteBoxKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/DescribeWhiteBoxKeyDetailsRequest.h>
#include <tencentcloud/kms/v20190118/model/DescribeWhiteBoxKeyDetailsResponse.h>
#include <tencentcloud/kms/v20190118/model/DescribeWhiteBoxServiceStatusRequest.h>
#include <tencentcloud/kms/v20190118/model/DescribeWhiteBoxServiceStatusResponse.h>
#include <tencentcloud/kms/v20190118/model/DisableKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/DisableKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/DisableKeyRotationRequest.h>
#include <tencentcloud/kms/v20190118/model/DisableKeyRotationResponse.h>
#include <tencentcloud/kms/v20190118/model/DisableKeysRequest.h>
#include <tencentcloud/kms/v20190118/model/DisableKeysResponse.h>
#include <tencentcloud/kms/v20190118/model/DisableWhiteBoxKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/DisableWhiteBoxKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/DisableWhiteBoxKeysRequest.h>
#include <tencentcloud/kms/v20190118/model/DisableWhiteBoxKeysResponse.h>
#include <tencentcloud/kms/v20190118/model/EnableKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/EnableKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/EnableKeyRotationRequest.h>
#include <tencentcloud/kms/v20190118/model/EnableKeyRotationResponse.h>
#include <tencentcloud/kms/v20190118/model/EnableKeysRequest.h>
#include <tencentcloud/kms/v20190118/model/EnableKeysResponse.h>
#include <tencentcloud/kms/v20190118/model/EnableWhiteBoxKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/EnableWhiteBoxKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/EnableWhiteBoxKeysRequest.h>
#include <tencentcloud/kms/v20190118/model/EnableWhiteBoxKeysResponse.h>
#include <tencentcloud/kms/v20190118/model/EncryptRequest.h>
#include <tencentcloud/kms/v20190118/model/EncryptResponse.h>
#include <tencentcloud/kms/v20190118/model/EncryptByWhiteBoxRequest.h>
#include <tencentcloud/kms/v20190118/model/EncryptByWhiteBoxResponse.h>
#include <tencentcloud/kms/v20190118/model/GenerateDataKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/GenerateDataKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/GenerateRandomRequest.h>
#include <tencentcloud/kms/v20190118/model/GenerateRandomResponse.h>
#include <tencentcloud/kms/v20190118/model/GetKeyRotationStatusRequest.h>
#include <tencentcloud/kms/v20190118/model/GetKeyRotationStatusResponse.h>
#include <tencentcloud/kms/v20190118/model/GetParametersForImportRequest.h>
#include <tencentcloud/kms/v20190118/model/GetParametersForImportResponse.h>
#include <tencentcloud/kms/v20190118/model/GetPublicKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/GetPublicKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/GetRegionsRequest.h>
#include <tencentcloud/kms/v20190118/model/GetRegionsResponse.h>
#include <tencentcloud/kms/v20190118/model/GetServiceStatusRequest.h>
#include <tencentcloud/kms/v20190118/model/GetServiceStatusResponse.h>
#include <tencentcloud/kms/v20190118/model/ImportKeyMaterialRequest.h>
#include <tencentcloud/kms/v20190118/model/ImportKeyMaterialResponse.h>
#include <tencentcloud/kms/v20190118/model/ListAlgorithmsRequest.h>
#include <tencentcloud/kms/v20190118/model/ListAlgorithmsResponse.h>
#include <tencentcloud/kms/v20190118/model/ListKeyDetailRequest.h>
#include <tencentcloud/kms/v20190118/model/ListKeyDetailResponse.h>
#include <tencentcloud/kms/v20190118/model/ListKeysRequest.h>
#include <tencentcloud/kms/v20190118/model/ListKeysResponse.h>
#include <tencentcloud/kms/v20190118/model/OverwriteWhiteBoxDeviceFingerprintsRequest.h>
#include <tencentcloud/kms/v20190118/model/OverwriteWhiteBoxDeviceFingerprintsResponse.h>
#include <tencentcloud/kms/v20190118/model/ReEncryptRequest.h>
#include <tencentcloud/kms/v20190118/model/ReEncryptResponse.h>
#include <tencentcloud/kms/v20190118/model/ScheduleKeyDeletionRequest.h>
#include <tencentcloud/kms/v20190118/model/ScheduleKeyDeletionResponse.h>
#include <tencentcloud/kms/v20190118/model/SignByAsymmetricKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/SignByAsymmetricKeyResponse.h>
#include <tencentcloud/kms/v20190118/model/UnbindCloudResourceRequest.h>
#include <tencentcloud/kms/v20190118/model/UnbindCloudResourceResponse.h>
#include <tencentcloud/kms/v20190118/model/UpdateAliasRequest.h>
#include <tencentcloud/kms/v20190118/model/UpdateAliasResponse.h>
#include <tencentcloud/kms/v20190118/model/UpdateKeyDescriptionRequest.h>
#include <tencentcloud/kms/v20190118/model/UpdateKeyDescriptionResponse.h>
#include <tencentcloud/kms/v20190118/model/VerifyByAsymmetricKeyRequest.h>
#include <tencentcloud/kms/v20190118/model/VerifyByAsymmetricKeyResponse.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            class KmsClient : public AbstractClient
            {
            public:
                KmsClient(const Credential &credential, const std::string &region);
                KmsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ArchiveKeyResponse> ArchiveKeyOutcome;
                typedef std::future<ArchiveKeyOutcome> ArchiveKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::ArchiveKeyRequest&, ArchiveKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ArchiveKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::AsymmetricRsaDecryptResponse> AsymmetricRsaDecryptOutcome;
                typedef std::future<AsymmetricRsaDecryptOutcome> AsymmetricRsaDecryptOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::AsymmetricRsaDecryptRequest&, AsymmetricRsaDecryptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AsymmetricRsaDecryptAsyncHandler;
                typedef Outcome<Core::Error, Model::AsymmetricSm2DecryptResponse> AsymmetricSm2DecryptOutcome;
                typedef std::future<AsymmetricSm2DecryptOutcome> AsymmetricSm2DecryptOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::AsymmetricSm2DecryptRequest&, AsymmetricSm2DecryptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AsymmetricSm2DecryptAsyncHandler;
                typedef Outcome<Core::Error, Model::BindCloudResourceResponse> BindCloudResourceOutcome;
                typedef std::future<BindCloudResourceOutcome> BindCloudResourceOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::BindCloudResourceRequest&, BindCloudResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindCloudResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelKeyArchiveResponse> CancelKeyArchiveOutcome;
                typedef std::future<CancelKeyArchiveOutcome> CancelKeyArchiveOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::CancelKeyArchiveRequest&, CancelKeyArchiveOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelKeyArchiveAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelKeyDeletionResponse> CancelKeyDeletionOutcome;
                typedef std::future<CancelKeyDeletionOutcome> CancelKeyDeletionOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::CancelKeyDeletionRequest&, CancelKeyDeletionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelKeyDeletionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateKeyResponse> CreateKeyOutcome;
                typedef std::future<CreateKeyOutcome> CreateKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::CreateKeyRequest&, CreateKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWhiteBoxKeyResponse> CreateWhiteBoxKeyOutcome;
                typedef std::future<CreateWhiteBoxKeyOutcome> CreateWhiteBoxKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::CreateWhiteBoxKeyRequest&, CreateWhiteBoxKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWhiteBoxKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DecryptResponse> DecryptOutcome;
                typedef std::future<DecryptOutcome> DecryptOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DecryptRequest&, DecryptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DecryptAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImportedKeyMaterialResponse> DeleteImportedKeyMaterialOutcome;
                typedef std::future<DeleteImportedKeyMaterialOutcome> DeleteImportedKeyMaterialOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DeleteImportedKeyMaterialRequest&, DeleteImportedKeyMaterialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImportedKeyMaterialAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWhiteBoxKeyResponse> DeleteWhiteBoxKeyOutcome;
                typedef std::future<DeleteWhiteBoxKeyOutcome> DeleteWhiteBoxKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DeleteWhiteBoxKeyRequest&, DeleteWhiteBoxKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWhiteBoxKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKeyResponse> DescribeKeyOutcome;
                typedef std::future<DescribeKeyOutcome> DescribeKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DescribeKeyRequest&, DescribeKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeKeysResponse> DescribeKeysOutcome;
                typedef std::future<DescribeKeysOutcome> DescribeKeysOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DescribeKeysRequest&, DescribeKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhiteBoxDecryptKeyResponse> DescribeWhiteBoxDecryptKeyOutcome;
                typedef std::future<DescribeWhiteBoxDecryptKeyOutcome> DescribeWhiteBoxDecryptKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DescribeWhiteBoxDecryptKeyRequest&, DescribeWhiteBoxDecryptKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteBoxDecryptKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhiteBoxDeviceFingerprintsResponse> DescribeWhiteBoxDeviceFingerprintsOutcome;
                typedef std::future<DescribeWhiteBoxDeviceFingerprintsOutcome> DescribeWhiteBoxDeviceFingerprintsOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DescribeWhiteBoxDeviceFingerprintsRequest&, DescribeWhiteBoxDeviceFingerprintsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteBoxDeviceFingerprintsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhiteBoxKeyResponse> DescribeWhiteBoxKeyOutcome;
                typedef std::future<DescribeWhiteBoxKeyOutcome> DescribeWhiteBoxKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DescribeWhiteBoxKeyRequest&, DescribeWhiteBoxKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteBoxKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhiteBoxKeyDetailsResponse> DescribeWhiteBoxKeyDetailsOutcome;
                typedef std::future<DescribeWhiteBoxKeyDetailsOutcome> DescribeWhiteBoxKeyDetailsOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DescribeWhiteBoxKeyDetailsRequest&, DescribeWhiteBoxKeyDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteBoxKeyDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWhiteBoxServiceStatusResponse> DescribeWhiteBoxServiceStatusOutcome;
                typedef std::future<DescribeWhiteBoxServiceStatusOutcome> DescribeWhiteBoxServiceStatusOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DescribeWhiteBoxServiceStatusRequest&, DescribeWhiteBoxServiceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWhiteBoxServiceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableKeyResponse> DisableKeyOutcome;
                typedef std::future<DisableKeyOutcome> DisableKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DisableKeyRequest&, DisableKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableKeyRotationResponse> DisableKeyRotationOutcome;
                typedef std::future<DisableKeyRotationOutcome> DisableKeyRotationOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DisableKeyRotationRequest&, DisableKeyRotationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableKeyRotationAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableKeysResponse> DisableKeysOutcome;
                typedef std::future<DisableKeysOutcome> DisableKeysOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DisableKeysRequest&, DisableKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableWhiteBoxKeyResponse> DisableWhiteBoxKeyOutcome;
                typedef std::future<DisableWhiteBoxKeyOutcome> DisableWhiteBoxKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DisableWhiteBoxKeyRequest&, DisableWhiteBoxKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableWhiteBoxKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableWhiteBoxKeysResponse> DisableWhiteBoxKeysOutcome;
                typedef std::future<DisableWhiteBoxKeysOutcome> DisableWhiteBoxKeysOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::DisableWhiteBoxKeysRequest&, DisableWhiteBoxKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableWhiteBoxKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableKeyResponse> EnableKeyOutcome;
                typedef std::future<EnableKeyOutcome> EnableKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::EnableKeyRequest&, EnableKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableKeyRotationResponse> EnableKeyRotationOutcome;
                typedef std::future<EnableKeyRotationOutcome> EnableKeyRotationOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::EnableKeyRotationRequest&, EnableKeyRotationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableKeyRotationAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableKeysResponse> EnableKeysOutcome;
                typedef std::future<EnableKeysOutcome> EnableKeysOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::EnableKeysRequest&, EnableKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableWhiteBoxKeyResponse> EnableWhiteBoxKeyOutcome;
                typedef std::future<EnableWhiteBoxKeyOutcome> EnableWhiteBoxKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::EnableWhiteBoxKeyRequest&, EnableWhiteBoxKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableWhiteBoxKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableWhiteBoxKeysResponse> EnableWhiteBoxKeysOutcome;
                typedef std::future<EnableWhiteBoxKeysOutcome> EnableWhiteBoxKeysOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::EnableWhiteBoxKeysRequest&, EnableWhiteBoxKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableWhiteBoxKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::EncryptResponse> EncryptOutcome;
                typedef std::future<EncryptOutcome> EncryptOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::EncryptRequest&, EncryptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EncryptAsyncHandler;
                typedef Outcome<Core::Error, Model::EncryptByWhiteBoxResponse> EncryptByWhiteBoxOutcome;
                typedef std::future<EncryptByWhiteBoxOutcome> EncryptByWhiteBoxOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::EncryptByWhiteBoxRequest&, EncryptByWhiteBoxOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EncryptByWhiteBoxAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateDataKeyResponse> GenerateDataKeyOutcome;
                typedef std::future<GenerateDataKeyOutcome> GenerateDataKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::GenerateDataKeyRequest&, GenerateDataKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateDataKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateRandomResponse> GenerateRandomOutcome;
                typedef std::future<GenerateRandomOutcome> GenerateRandomOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::GenerateRandomRequest&, GenerateRandomOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateRandomAsyncHandler;
                typedef Outcome<Core::Error, Model::GetKeyRotationStatusResponse> GetKeyRotationStatusOutcome;
                typedef std::future<GetKeyRotationStatusOutcome> GetKeyRotationStatusOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::GetKeyRotationStatusRequest&, GetKeyRotationStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetKeyRotationStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetParametersForImportResponse> GetParametersForImportOutcome;
                typedef std::future<GetParametersForImportOutcome> GetParametersForImportOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::GetParametersForImportRequest&, GetParametersForImportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetParametersForImportAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPublicKeyResponse> GetPublicKeyOutcome;
                typedef std::future<GetPublicKeyOutcome> GetPublicKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::GetPublicKeyRequest&, GetPublicKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPublicKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::GetRegionsResponse> GetRegionsOutcome;
                typedef std::future<GetRegionsOutcome> GetRegionsOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::GetRegionsRequest&, GetRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetServiceStatusResponse> GetServiceStatusOutcome;
                typedef std::future<GetServiceStatusOutcome> GetServiceStatusOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::GetServiceStatusRequest&, GetServiceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportKeyMaterialResponse> ImportKeyMaterialOutcome;
                typedef std::future<ImportKeyMaterialOutcome> ImportKeyMaterialOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::ImportKeyMaterialRequest&, ImportKeyMaterialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportKeyMaterialAsyncHandler;
                typedef Outcome<Core::Error, Model::ListAlgorithmsResponse> ListAlgorithmsOutcome;
                typedef std::future<ListAlgorithmsOutcome> ListAlgorithmsOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::ListAlgorithmsRequest&, ListAlgorithmsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListAlgorithmsAsyncHandler;
                typedef Outcome<Core::Error, Model::ListKeyDetailResponse> ListKeyDetailOutcome;
                typedef std::future<ListKeyDetailOutcome> ListKeyDetailOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::ListKeyDetailRequest&, ListKeyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListKeyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ListKeysResponse> ListKeysOutcome;
                typedef std::future<ListKeysOutcome> ListKeysOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::ListKeysRequest&, ListKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::OverwriteWhiteBoxDeviceFingerprintsResponse> OverwriteWhiteBoxDeviceFingerprintsOutcome;
                typedef std::future<OverwriteWhiteBoxDeviceFingerprintsOutcome> OverwriteWhiteBoxDeviceFingerprintsOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::OverwriteWhiteBoxDeviceFingerprintsRequest&, OverwriteWhiteBoxDeviceFingerprintsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OverwriteWhiteBoxDeviceFingerprintsAsyncHandler;
                typedef Outcome<Core::Error, Model::ReEncryptResponse> ReEncryptOutcome;
                typedef std::future<ReEncryptOutcome> ReEncryptOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::ReEncryptRequest&, ReEncryptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReEncryptAsyncHandler;
                typedef Outcome<Core::Error, Model::ScheduleKeyDeletionResponse> ScheduleKeyDeletionOutcome;
                typedef std::future<ScheduleKeyDeletionOutcome> ScheduleKeyDeletionOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::ScheduleKeyDeletionRequest&, ScheduleKeyDeletionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScheduleKeyDeletionAsyncHandler;
                typedef Outcome<Core::Error, Model::SignByAsymmetricKeyResponse> SignByAsymmetricKeyOutcome;
                typedef std::future<SignByAsymmetricKeyOutcome> SignByAsymmetricKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::SignByAsymmetricKeyRequest&, SignByAsymmetricKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SignByAsymmetricKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindCloudResourceResponse> UnbindCloudResourceOutcome;
                typedef std::future<UnbindCloudResourceOutcome> UnbindCloudResourceOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::UnbindCloudResourceRequest&, UnbindCloudResourceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindCloudResourceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAliasResponse> UpdateAliasOutcome;
                typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::UpdateAliasRequest&, UpdateAliasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAliasAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateKeyDescriptionResponse> UpdateKeyDescriptionOutcome;
                typedef std::future<UpdateKeyDescriptionOutcome> UpdateKeyDescriptionOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::UpdateKeyDescriptionRequest&, UpdateKeyDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateKeyDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyByAsymmetricKeyResponse> VerifyByAsymmetricKeyOutcome;
                typedef std::future<VerifyByAsymmetricKeyOutcome> VerifyByAsymmetricKeyOutcomeCallable;
                typedef std::function<void(const KmsClient*, const Model::VerifyByAsymmetricKeyRequest&, VerifyByAsymmetricKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyByAsymmetricKeyAsyncHandler;



                /**
                 *This API is used to archive keys. The archived keys can only be used for decryption but not encryption.
                 * @param req ArchiveKeyRequest
                 * @return ArchiveKeyOutcome
                 */
                ArchiveKeyOutcome ArchiveKey(const Model::ArchiveKeyRequest &request);
                void ArchiveKeyAsync(const Model::ArchiveKeyRequest& request, const ArchiveKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ArchiveKeyOutcomeCallable ArchiveKeyCallable(const Model::ArchiveKeyRequest& request);

                /**
                 *This API is used to decrypt data with the specified private key that is encrypted with RSA asymmetric cryptographic algorithm. The ciphertext must be encrypted with the corresponding public key. The asymmetric key must be in `Enabled` state for decryption.
                 * @param req AsymmetricRsaDecryptRequest
                 * @return AsymmetricRsaDecryptOutcome
                 */
                AsymmetricRsaDecryptOutcome AsymmetricRsaDecrypt(const Model::AsymmetricRsaDecryptRequest &request);
                void AsymmetricRsaDecryptAsync(const Model::AsymmetricRsaDecryptRequest& request, const AsymmetricRsaDecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AsymmetricRsaDecryptOutcomeCallable AsymmetricRsaDecryptCallable(const Model::AsymmetricRsaDecryptRequest& request);

                /**
                 *This API is used to decrypt data with the specified private key that is encrypted with SM2 asymmetric cryptographic algorithm. The ciphertext must be encrypted with the corresponding public key. The asymmetric key must be in `Enabled` state for decryption. The length of the ciphertext passed in cannot exceed 256 bytes.
                 * @param req AsymmetricSm2DecryptRequest
                 * @return AsymmetricSm2DecryptOutcome
                 */
                AsymmetricSm2DecryptOutcome AsymmetricSm2Decrypt(const Model::AsymmetricSm2DecryptRequest &request);
                void AsymmetricSm2DecryptAsync(const Model::AsymmetricSm2DecryptRequest& request, const AsymmetricSm2DecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AsymmetricSm2DecryptOutcomeCallable AsymmetricSm2DecryptCallable(const Model::AsymmetricSm2DecryptRequest& request);

                /**
                 *This API is used to bind a key with a Tencent Cloud resource. If the key has been set to be expired automatically, the setting will be canceled to ensure that the key will not be invalid automatically. If the key and the resource has already been bound, the call will still be successful.
                 * @param req BindCloudResourceRequest
                 * @return BindCloudResourceOutcome
                 */
                BindCloudResourceOutcome BindCloudResource(const Model::BindCloudResourceRequest &request);
                void BindCloudResourceAsync(const Model::BindCloudResourceRequest& request, const BindCloudResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindCloudResourceOutcomeCallable BindCloudResourceCallable(const Model::BindCloudResourceRequest& request);

                /**
                 *This API is used to unarchive keys. If a key is unarchived, its status will be `Enabled`.
                 * @param req CancelKeyArchiveRequest
                 * @return CancelKeyArchiveOutcome
                 */
                CancelKeyArchiveOutcome CancelKeyArchive(const Model::CancelKeyArchiveRequest &request);
                void CancelKeyArchiveAsync(const Model::CancelKeyArchiveRequest& request, const CancelKeyArchiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelKeyArchiveOutcomeCallable CancelKeyArchiveCallable(const Model::CancelKeyArchiveRequest& request);

                /**
                 *Cancel the scheduled deletion of CMK
                 * @param req CancelKeyDeletionRequest
                 * @return CancelKeyDeletionOutcome
                 */
                CancelKeyDeletionOutcome CancelKeyDeletion(const Model::CancelKeyDeletionRequest &request);
                void CancelKeyDeletionAsync(const Model::CancelKeyDeletionRequest& request, const CancelKeyDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelKeyDeletionOutcomeCallable CancelKeyDeletionCallable(const Model::CancelKeyDeletionRequest& request);

                /**
                 *Create a master key CMK (Custom Master Key) for user management data keys
                 * @param req CreateKeyRequest
                 * @return CreateKeyOutcome
                 */
                CreateKeyOutcome CreateKey(const Model::CreateKeyRequest &request);
                void CreateKeyAsync(const Model::CreateKeyRequest& request, const CreateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKeyOutcomeCallable CreateKeyCallable(const Model::CreateKeyRequest& request);

                /**
                 *This API is used to create a white-box key. Up to 50 ones can be created.
                 * @param req CreateWhiteBoxKeyRequest
                 * @return CreateWhiteBoxKeyOutcome
                 */
                CreateWhiteBoxKeyOutcome CreateWhiteBoxKey(const Model::CreateWhiteBoxKeyRequest &request);
                void CreateWhiteBoxKeyAsync(const Model::CreateWhiteBoxKeyRequest& request, const CreateWhiteBoxKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWhiteBoxKeyOutcomeCallable CreateWhiteBoxKeyCallable(const Model::CreateWhiteBoxKeyRequest& request);

                /**
                 *This API is used to decrypt the ciphertext and obtain the plaintext data.
                 * @param req DecryptRequest
                 * @return DecryptOutcome
                 */
                DecryptOutcome Decrypt(const Model::DecryptRequest &request);
                void DecryptAsync(const Model::DecryptRequest& request, const DecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DecryptOutcomeCallable DecryptCallable(const Model::DecryptRequest& request);

                /**
                 *This API is used to delete the imported key material. It is only valid for EXTERNAL CMKs. Specifically, it puts a CMK into `PendingImport` status instead of deleting the CMK, so that the CMK can be used again after key material is reimported. To delete the CMK completely, please call the `ScheduleKeyDeletion` API.
                 * @param req DeleteImportedKeyMaterialRequest
                 * @return DeleteImportedKeyMaterialOutcome
                 */
                DeleteImportedKeyMaterialOutcome DeleteImportedKeyMaterial(const Model::DeleteImportedKeyMaterialRequest &request);
                void DeleteImportedKeyMaterialAsync(const Model::DeleteImportedKeyMaterialRequest& request, const DeleteImportedKeyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImportedKeyMaterialOutcomeCallable DeleteImportedKeyMaterialCallable(const Model::DeleteImportedKeyMaterialRequest& request);

                /**
                 *This API is used to delete a white-box key. Note: only disabled white-box keys can be deleted.
                 * @param req DeleteWhiteBoxKeyRequest
                 * @return DeleteWhiteBoxKeyOutcome
                 */
                DeleteWhiteBoxKeyOutcome DeleteWhiteBoxKey(const Model::DeleteWhiteBoxKeyRequest &request);
                void DeleteWhiteBoxKeyAsync(const Model::DeleteWhiteBoxKeyRequest& request, const DeleteWhiteBoxKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWhiteBoxKeyOutcomeCallable DeleteWhiteBoxKeyCallable(const Model::DeleteWhiteBoxKeyRequest& request);

                /**
                 *This API is used to get the attribute details of the CMK with a specified `KeyId`.
                 * @param req DescribeKeyRequest
                 * @return DescribeKeyOutcome
                 */
                DescribeKeyOutcome DescribeKey(const Model::DescribeKeyRequest &request);
                void DescribeKeyAsync(const Model::DescribeKeyRequest& request, const DescribeKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKeyOutcomeCallable DescribeKeyCallable(const Model::DescribeKeyRequest& request);

                /**
                 *This API is used to get the attribute information of CMKs in batches.
                 * @param req DescribeKeysRequest
                 * @return DescribeKeysOutcome
                 */
                DescribeKeysOutcome DescribeKeys(const Model::DescribeKeysRequest &request);
                void DescribeKeysAsync(const Model::DescribeKeysRequest& request, const DescribeKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeKeysOutcomeCallable DescribeKeysCallable(const Model::DescribeKeysRequest& request);

                /**
                 *This API is used to get a white-box decryption key.
                 * @param req DescribeWhiteBoxDecryptKeyRequest
                 * @return DescribeWhiteBoxDecryptKeyOutcome
                 */
                DescribeWhiteBoxDecryptKeyOutcome DescribeWhiteBoxDecryptKey(const Model::DescribeWhiteBoxDecryptKeyRequest &request);
                void DescribeWhiteBoxDecryptKeyAsync(const Model::DescribeWhiteBoxDecryptKeyRequest& request, const DescribeWhiteBoxDecryptKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhiteBoxDecryptKeyOutcomeCallable DescribeWhiteBoxDecryptKeyCallable(const Model::DescribeWhiteBoxDecryptKeyRequest& request);

                /**
                 *This API is used to get the device fingerprint list of a specified key.
                 * @param req DescribeWhiteBoxDeviceFingerprintsRequest
                 * @return DescribeWhiteBoxDeviceFingerprintsOutcome
                 */
                DescribeWhiteBoxDeviceFingerprintsOutcome DescribeWhiteBoxDeviceFingerprints(const Model::DescribeWhiteBoxDeviceFingerprintsRequest &request);
                void DescribeWhiteBoxDeviceFingerprintsAsync(const Model::DescribeWhiteBoxDeviceFingerprintsRequest& request, const DescribeWhiteBoxDeviceFingerprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhiteBoxDeviceFingerprintsOutcomeCallable DescribeWhiteBoxDeviceFingerprintsCallable(const Model::DescribeWhiteBoxDeviceFingerprintsRequest& request);

                /**
                 *This API is used to display white-box key information.
                 * @param req DescribeWhiteBoxKeyRequest
                 * @return DescribeWhiteBoxKeyOutcome
                 */
                DescribeWhiteBoxKeyOutcome DescribeWhiteBoxKey(const Model::DescribeWhiteBoxKeyRequest &request);
                void DescribeWhiteBoxKeyAsync(const Model::DescribeWhiteBoxKeyRequest& request, const DescribeWhiteBoxKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhiteBoxKeyOutcomeCallable DescribeWhiteBoxKeyCallable(const Model::DescribeWhiteBoxKeyRequest& request);

                /**
                 *This API is used to get the white-box key list.
                 * @param req DescribeWhiteBoxKeyDetailsRequest
                 * @return DescribeWhiteBoxKeyDetailsOutcome
                 */
                DescribeWhiteBoxKeyDetailsOutcome DescribeWhiteBoxKeyDetails(const Model::DescribeWhiteBoxKeyDetailsRequest &request);
                void DescribeWhiteBoxKeyDetailsAsync(const Model::DescribeWhiteBoxKeyDetailsRequest& request, const DescribeWhiteBoxKeyDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhiteBoxKeyDetailsOutcomeCallable DescribeWhiteBoxKeyDetailsCallable(const Model::DescribeWhiteBoxKeyDetailsRequest& request);

                /**
                 *This API is used to get the white-box key service status.
                 * @param req DescribeWhiteBoxServiceStatusRequest
                 * @return DescribeWhiteBoxServiceStatusOutcome
                 */
                DescribeWhiteBoxServiceStatusOutcome DescribeWhiteBoxServiceStatus(const Model::DescribeWhiteBoxServiceStatusRequest &request);
                void DescribeWhiteBoxServiceStatusAsync(const Model::DescribeWhiteBoxServiceStatusRequest& request, const DescribeWhiteBoxServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWhiteBoxServiceStatusOutcomeCallable DescribeWhiteBoxServiceStatusCallable(const Model::DescribeWhiteBoxServiceStatusRequest& request);

                /**
                 *This API is used to disable a master key. The disabled key cannot be used for encryption and decryption operations.
                 * @param req DisableKeyRequest
                 * @return DisableKeyOutcome
                 */
                DisableKeyOutcome DisableKey(const Model::DisableKeyRequest &request);
                void DisableKeyAsync(const Model::DisableKeyRequest& request, const DisableKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableKeyOutcomeCallable DisableKeyCallable(const Model::DisableKeyRequest& request);

                /**
                 *Disabled key rotation for the specified CMK.
                 * @param req DisableKeyRotationRequest
                 * @return DisableKeyRotationOutcome
                 */
                DisableKeyRotationOutcome DisableKeyRotation(const Model::DisableKeyRotationRequest &request);
                void DisableKeyRotationAsync(const Model::DisableKeyRotationRequest& request, const DisableKeyRotationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableKeyRotationOutcomeCallable DisableKeyRotationCallable(const Model::DisableKeyRotationRequest& request);

                /**
                 *This API is used to batch prohibit the use of CMK.
                 * @param req DisableKeysRequest
                 * @return DisableKeysOutcome
                 */
                DisableKeysOutcome DisableKeys(const Model::DisableKeysRequest &request);
                void DisableKeysAsync(const Model::DisableKeysRequest& request, const DisableKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableKeysOutcomeCallable DisableKeysCallable(const Model::DisableKeysRequest& request);

                /**
                 *This API is used to disable a white-box key.
                 * @param req DisableWhiteBoxKeyRequest
                 * @return DisableWhiteBoxKeyOutcome
                 */
                DisableWhiteBoxKeyOutcome DisableWhiteBoxKey(const Model::DisableWhiteBoxKeyRequest &request);
                void DisableWhiteBoxKeyAsync(const Model::DisableWhiteBoxKeyRequest& request, const DisableWhiteBoxKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableWhiteBoxKeyOutcomeCallable DisableWhiteBoxKeyCallable(const Model::DisableWhiteBoxKeyRequest& request);

                /**
                 *This API is used to disable white-box keys in batches.
                 * @param req DisableWhiteBoxKeysRequest
                 * @return DisableWhiteBoxKeysOutcome
                 */
                DisableWhiteBoxKeysOutcome DisableWhiteBoxKeys(const Model::DisableWhiteBoxKeysRequest &request);
                void DisableWhiteBoxKeysAsync(const Model::DisableWhiteBoxKeysRequest& request, const DisableWhiteBoxKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableWhiteBoxKeysOutcomeCallable DisableWhiteBoxKeysCallable(const Model::DisableWhiteBoxKeysRequest& request);

                /**
                 *Enable a specified CMK.
                 * @param req EnableKeyRequest
                 * @return EnableKeyOutcome
                 */
                EnableKeyOutcome EnableKey(const Model::EnableKeyRequest &request);
                void EnableKeyAsync(const Model::EnableKeyRequest& request, const EnableKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableKeyOutcomeCallable EnableKeyCallable(const Model::EnableKeyRequest& request);

                /**
                 *Turn on the key rotation function for the specified CMK.
                 * @param req EnableKeyRotationRequest
                 * @return EnableKeyRotationOutcome
                 */
                EnableKeyRotationOutcome EnableKeyRotation(const Model::EnableKeyRotationRequest &request);
                void EnableKeyRotationAsync(const Model::EnableKeyRotationRequest& request, const EnableKeyRotationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableKeyRotationOutcomeCallable EnableKeyRotationCallable(const Model::EnableKeyRotationRequest& request);

                /**
                 *This API is used to enable CMK in batches.
                 * @param req EnableKeysRequest
                 * @return EnableKeysOutcome
                 */
                EnableKeysOutcome EnableKeys(const Model::EnableKeysRequest &request);
                void EnableKeysAsync(const Model::EnableKeysRequest& request, const EnableKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableKeysOutcomeCallable EnableKeysCallable(const Model::EnableKeysRequest& request);

                /**
                 *This API is used to enable a white-box key.
                 * @param req EnableWhiteBoxKeyRequest
                 * @return EnableWhiteBoxKeyOutcome
                 */
                EnableWhiteBoxKeyOutcome EnableWhiteBoxKey(const Model::EnableWhiteBoxKeyRequest &request);
                void EnableWhiteBoxKeyAsync(const Model::EnableWhiteBoxKeyRequest& request, const EnableWhiteBoxKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableWhiteBoxKeyOutcomeCallable EnableWhiteBoxKeyCallable(const Model::EnableWhiteBoxKeyRequest& request);

                /**
                 *This API is used to enable white-box keys in batches.
                 * @param req EnableWhiteBoxKeysRequest
                 * @return EnableWhiteBoxKeysOutcome
                 */
                EnableWhiteBoxKeysOutcome EnableWhiteBoxKeys(const Model::EnableWhiteBoxKeysRequest &request);
                void EnableWhiteBoxKeysAsync(const Model::EnableWhiteBoxKeysRequest& request, const EnableWhiteBoxKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableWhiteBoxKeysOutcomeCallable EnableWhiteBoxKeysCallable(const Model::EnableWhiteBoxKeysRequest& request);

                /**
                 *This API is used to encrypt any data up to 4KB. It can be used to encrypt database passwords, RSA Key, or other small sensitive information. For application data encryption, use the DataKey generated by GenerateDataKey to perform local data encryption and decryption operations
                 * @param req EncryptRequest
                 * @return EncryptOutcome
                 */
                EncryptOutcome Encrypt(const Model::EncryptRequest &request);
                void EncryptAsync(const Model::EncryptRequest& request, const EncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EncryptOutcomeCallable EncryptCallable(const Model::EncryptRequest& request);

                /**
                 *This API is used to encrypt data with a white-box key.
                 * @param req EncryptByWhiteBoxRequest
                 * @return EncryptByWhiteBoxOutcome
                 */
                EncryptByWhiteBoxOutcome EncryptByWhiteBox(const Model::EncryptByWhiteBoxRequest &request);
                void EncryptByWhiteBoxAsync(const Model::EncryptByWhiteBoxRequest& request, const EncryptByWhiteBoxAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EncryptByWhiteBoxOutcomeCallable EncryptByWhiteBoxCallable(const Model::EncryptByWhiteBoxRequest& request);

                /**
                 *This API generates a data key, which you can use to encrypt local data.
                 * @param req GenerateDataKeyRequest
                 * @return GenerateDataKeyOutcome
                 */
                GenerateDataKeyOutcome GenerateDataKey(const Model::GenerateDataKeyRequest &request);
                void GenerateDataKeyAsync(const Model::GenerateDataKeyRequest& request, const GenerateDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateDataKeyOutcomeCallable GenerateDataKeyCallable(const Model::GenerateDataKeyRequest& request);

                /**
                 *This API is used to generate a random number.
                 * @param req GenerateRandomRequest
                 * @return GenerateRandomOutcome
                 */
                GenerateRandomOutcome GenerateRandom(const Model::GenerateRandomRequest &request);
                void GenerateRandomAsync(const Model::GenerateRandomRequest& request, const GenerateRandomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateRandomOutcomeCallable GenerateRandomCallable(const Model::GenerateRandomRequest& request);

                /**
                 *Query whether the specified CMK has the key rotation function.
                 * @param req GetKeyRotationStatusRequest
                 * @return GetKeyRotationStatusOutcome
                 */
                GetKeyRotationStatusOutcome GetKeyRotationStatus(const Model::GetKeyRotationStatusRequest &request);
                void GetKeyRotationStatusAsync(const Model::GetKeyRotationStatusRequest& request, const GetKeyRotationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetKeyRotationStatusOutcomeCallable GetKeyRotationStatusCallable(const Model::GetKeyRotationStatusRequest& request);

                /**
                 *This API is used to obtain the parameters of the material to be imported into a CMK. The returned `Token` is used as one of the parameters to execute `ImportKeyMaterial`, and the returned `PublicKey` is used to encrypt the key material. The `Token` and `PublicKey` are valid for 24 hours. If they are expired, you will need to call the API again to get a new `Token` and `PublicKey`.
                 * @param req GetParametersForImportRequest
                 * @return GetParametersForImportOutcome
                 */
                GetParametersForImportOutcome GetParametersForImport(const Model::GetParametersForImportRequest &request);
                void GetParametersForImportAsync(const Model::GetParametersForImportRequest& request, const GetParametersForImportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetParametersForImportOutcomeCallable GetParametersForImportCallable(const Model::GetParametersForImportRequest& request);

                /**
                 *This API is used to get the public key of an asymmetric KMS key (which must be enabled). With the public key, you can encrypt messages and verify signatures.
                 * @param req GetPublicKeyRequest
                 * @return GetPublicKeyOutcome
                 */
                GetPublicKeyOutcome GetPublicKey(const Model::GetPublicKeyRequest &request);
                void GetPublicKeyAsync(const Model::GetPublicKeyRequest& request, const GetPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPublicKeyOutcomeCallable GetPublicKeyCallable(const Model::GetPublicKeyRequest& request);

                /**
                 *This API is used to return all regions support KMS service.
                 * @param req GetRegionsRequest
                 * @return GetRegionsOutcome
                 */
                GetRegionsOutcome GetRegions(const Model::GetRegionsRequest &request);
                void GetRegionsAsync(const Model::GetRegionsRequest& request, const GetRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetRegionsOutcomeCallable GetRegionsCallable(const Model::GetRegionsRequest& request);

                /**
                 *Used to query whether the user has activated the KMS service.
                 * @param req GetServiceStatusRequest
                 * @return GetServiceStatusOutcome
                 */
                GetServiceStatusOutcome GetServiceStatus(const Model::GetServiceStatusRequest &request);
                void GetServiceStatusAsync(const Model::GetServiceStatusRequest& request, const GetServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetServiceStatusOutcomeCallable GetServiceStatusCallable(const Model::GetServiceStatusRequest& request);

                /**
                 *This API is used to import key material into an EXTERNAL CMK. The key obtained through the `GetParametersForImport` API is used to encrypt the key material. You can only reimport the same key material into the specified CMK and set a new expiration time. After the CMK key material is imported, it cannot be replaced. After the key material is expired or deleted, the CMK will remain unavailable until the same key material is reimported. CMKs are independent, which means that the same key material can be imported into different CMKs, but data encrypted by one CMK cannot be decrypted by another one.
Key material can only be imported into CMKs in `Enabled` and `PendingImport` status.
                 * @param req ImportKeyMaterialRequest
                 * @return ImportKeyMaterialOutcome
                 */
                ImportKeyMaterialOutcome ImportKeyMaterial(const Model::ImportKeyMaterialRequest &request);
                void ImportKeyMaterialAsync(const Model::ImportKeyMaterialRequest& request, const ImportKeyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportKeyMaterialOutcomeCallable ImportKeyMaterialCallable(const Model::ImportKeyMaterialRequest& request);

                /**
                 *This API is used to list the encryption methods supported in the current region.
                 * @param req ListAlgorithmsRequest
                 * @return ListAlgorithmsOutcome
                 */
                ListAlgorithmsOutcome ListAlgorithms(const Model::ListAlgorithmsRequest &request);
                void ListAlgorithmsAsync(const Model::ListAlgorithmsRequest& request, const ListAlgorithmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListAlgorithmsOutcomeCallable ListAlgorithmsCallable(const Model::ListAlgorithmsRequest& request);

                /**
                 *Get the master key list details according to the specified Offset and Limit.
                 * @param req ListKeyDetailRequest
                 * @return ListKeyDetailOutcome
                 */
                ListKeyDetailOutcome ListKeyDetail(const Model::ListKeyDetailRequest &request);
                void ListKeyDetailAsync(const Model::ListKeyDetailRequest& request, const ListKeyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListKeyDetailOutcomeCallable ListKeyDetailCallable(const Model::ListKeyDetailRequest& request);

                /**
                 *This API is used to list the KeyIds of CMKs in `Enabled`, `Disabled`, and `PendingImport` status under the account.
                 * @param req ListKeysRequest
                 * @return ListKeysOutcome
                 */
                ListKeysOutcome ListKeys(const Model::ListKeysRequest &request);
                void ListKeysAsync(const Model::ListKeysRequest& request, const ListKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListKeysOutcomeCallable ListKeysCallable(const Model::ListKeysRequest& request);

                /**
                 *This API is used to overwrite the device fingerprint information of a specified key.
                 * @param req OverwriteWhiteBoxDeviceFingerprintsRequest
                 * @return OverwriteWhiteBoxDeviceFingerprintsOutcome
                 */
                OverwriteWhiteBoxDeviceFingerprintsOutcome OverwriteWhiteBoxDeviceFingerprints(const Model::OverwriteWhiteBoxDeviceFingerprintsRequest &request);
                void OverwriteWhiteBoxDeviceFingerprintsAsync(const Model::OverwriteWhiteBoxDeviceFingerprintsRequest& request, const OverwriteWhiteBoxDeviceFingerprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OverwriteWhiteBoxDeviceFingerprintsOutcomeCallable OverwriteWhiteBoxDeviceFingerprintsCallable(const Model::OverwriteWhiteBoxDeviceFingerprintsRequest& request);

                /**
                 *Re-encrypt the ciphertext using the specified CMK.
                 * @param req ReEncryptRequest
                 * @return ReEncryptOutcome
                 */
                ReEncryptOutcome ReEncrypt(const Model::ReEncryptRequest &request);
                void ReEncryptAsync(const Model::ReEncryptRequest& request, const ReEncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReEncryptOutcomeCallable ReEncryptCallable(const Model::ReEncryptRequest& request);

                /**
                 *CMK planned deletion API, used to specify the time of CMK deletion, the optional time interval is [7,30] days
                 * @param req ScheduleKeyDeletionRequest
                 * @return ScheduleKeyDeletionOutcome
                 */
                ScheduleKeyDeletionOutcome ScheduleKeyDeletion(const Model::ScheduleKeyDeletionRequest &request);
                void ScheduleKeyDeletionAsync(const Model::ScheduleKeyDeletionRequest& request, const ScheduleKeyDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScheduleKeyDeletionOutcomeCallable ScheduleKeyDeletionCallable(const Model::ScheduleKeyDeletionRequest& request);

                /**
                 *This API is used to generate a signature with an asymmetric key.
Note that only when KeyUsage is `ASYMMETRIC_SIGN_VERIFY_${ALGORITHM}` (e.g., `ASYMMETRIC_SIGN_VERIFY_SM2` and `ASYMMETRIC_SIGN_VERIFY_ECC`), the key can be used for signing.
                 * @param req SignByAsymmetricKeyRequest
                 * @return SignByAsymmetricKeyOutcome
                 */
                SignByAsymmetricKeyOutcome SignByAsymmetricKey(const Model::SignByAsymmetricKeyRequest &request);
                void SignByAsymmetricKeyAsync(const Model::SignByAsymmetricKeyRequest& request, const SignByAsymmetricKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SignByAsymmetricKeyOutcomeCallable SignByAsymmetricKeyCallable(const Model::SignByAsymmetricKeyRequest& request);

                /**
                 *This API is used to unbind a key with a Tencent Cloud resource, indicating that the Tencent Cloud resource will not use the key any longer.
                 * @param req UnbindCloudResourceRequest
                 * @return UnbindCloudResourceOutcome
                 */
                UnbindCloudResourceOutcome UnbindCloudResource(const Model::UnbindCloudResourceRequest &request);
                void UnbindCloudResourceAsync(const Model::UnbindCloudResourceRequest& request, const UnbindCloudResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindCloudResourceOutcomeCallable UnbindCloudResourceCallable(const Model::UnbindCloudResourceRequest& request);

                /**
                 *This API is used to modify the alias of a CMK. CMKs in `PendingDelete` status cannot be modified.
                 * @param req UpdateAliasRequest
                 * @return UpdateAliasOutcome
                 */
                UpdateAliasOutcome UpdateAlias(const Model::UpdateAliasRequest &request);
                void UpdateAliasAsync(const Model::UpdateAliasRequest& request, const UpdateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAliasOutcomeCallable UpdateAliasCallable(const Model::UpdateAliasRequest& request);

                /**
                 *This API is used to modify the description of the specified CMK. CMKs in `PendingDelete` status cannot be modified.
                 * @param req UpdateKeyDescriptionRequest
                 * @return UpdateKeyDescriptionOutcome
                 */
                UpdateKeyDescriptionOutcome UpdateKeyDescription(const Model::UpdateKeyDescriptionRequest &request);
                void UpdateKeyDescriptionAsync(const Model::UpdateKeyDescriptionRequest& request, const UpdateKeyDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateKeyDescriptionOutcomeCallable UpdateKeyDescriptionCallable(const Model::UpdateKeyDescriptionRequest& request);

                /**
                 *This API is used to verify a signature with an asymmetric key.
                 * @param req VerifyByAsymmetricKeyRequest
                 * @return VerifyByAsymmetricKeyOutcome
                 */
                VerifyByAsymmetricKeyOutcome VerifyByAsymmetricKey(const Model::VerifyByAsymmetricKeyRequest &request);
                void VerifyByAsymmetricKeyAsync(const Model::VerifyByAsymmetricKeyRequest& request, const VerifyByAsymmetricKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyByAsymmetricKeyOutcomeCallable VerifyByAsymmetricKeyCallable(const Model::VerifyByAsymmetricKeyRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_KMSCLIENT_H_
