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

#ifndef TENCENTCLOUD_TDID_V20210519_TDIDCLIENT_H_
#define TENCENTCLOUD_TDID_V20210519_TDIDCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tdid/v20210519/model/AddLabelRequest.h>
#include <tencentcloud/tdid/v20210519/model/AddLabelResponse.h>
#include <tencentcloud/tdid/v20210519/model/CancelAuthorityIssuerRequest.h>
#include <tencentcloud/tdid/v20210519/model/CancelAuthorityIssuerResponse.h>
#include <tencentcloud/tdid/v20210519/model/CheckChainRequest.h>
#include <tencentcloud/tdid/v20210519/model/CheckChainResponse.h>
#include <tencentcloud/tdid/v20210519/model/CheckDidDeployRequest.h>
#include <tencentcloud/tdid/v20210519/model/CheckDidDeployResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateCredentialRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateCredentialResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateDidServiceRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateDidServiceResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateLabelRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateLabelResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateSelectiveCredentialRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateSelectiveCredentialResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidByPrivateKeyRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidByPrivateKeyResponse.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidByPublicKeyRequest.h>
#include <tencentcloud/tdid/v20210519/model/CreateTDidByPublicKeyResponse.h>
#include <tencentcloud/tdid/v20210519/model/DeployByNameRequest.h>
#include <tencentcloud/tdid/v20210519/model/DeployByNameResponse.h>
#include <tencentcloud/tdid/v20210519/model/DownCptRequest.h>
#include <tencentcloud/tdid/v20210519/model/DownCptResponse.h>
#include <tencentcloud/tdid/v20210519/model/EnableHashRequest.h>
#include <tencentcloud/tdid/v20210519/model/EnableHashResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetAgencyTDidRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetAgencyTDidResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetAuthoritiesListRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetAuthoritiesListResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetAuthorityIssuerRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetAuthorityIssuerResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetConsortiumClusterListRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetConsortiumClusterListResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetConsortiumListRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetConsortiumListResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetCptInfoRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetCptInfoResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetCptListRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetCptListResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetCredentialCptRankRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetCredentialCptRankResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetCredentialIssueRankRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetCredentialIssueRankResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetCredentialIssueTrendRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetCredentialIssueTrendResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetCredentialStatusRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetCredentialStatusResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetDataPanelRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetDataPanelResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetDeployInfoRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetDeployInfoResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetDeployListRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetDeployListResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetDidClusterDetailRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetDidClusterDetailResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetDidClusterListRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetDidClusterListResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetDidDetailRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetDidDetailResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetDidDocumentRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetDidDocumentResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetDidListRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetDidListResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetDidRegisterTrendRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetDidRegisterTrendResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetDidServiceDetailRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetDidServiceDetailResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetDidServiceListRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetDidServiceListResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetGroupListRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetGroupListResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetLabelListRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetLabelListResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetPolicyListRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetPolicyListResponse.h>
#include <tencentcloud/tdid/v20210519/model/GetPublicKeyRequest.h>
#include <tencentcloud/tdid/v20210519/model/GetPublicKeyResponse.h>
#include <tencentcloud/tdid/v20210519/model/QueryPolicyRequest.h>
#include <tencentcloud/tdid/v20210519/model/QueryPolicyResponse.h>
#include <tencentcloud/tdid/v20210519/model/RecognizeAuthorityIssuerRequest.h>
#include <tencentcloud/tdid/v20210519/model/RecognizeAuthorityIssuerResponse.h>
#include <tencentcloud/tdid/v20210519/model/RegisterClaimPolicyRequest.h>
#include <tencentcloud/tdid/v20210519/model/RegisterClaimPolicyResponse.h>
#include <tencentcloud/tdid/v20210519/model/RegisterCptRequest.h>
#include <tencentcloud/tdid/v20210519/model/RegisterCptResponse.h>
#include <tencentcloud/tdid/v20210519/model/RegisterIssuerRequest.h>
#include <tencentcloud/tdid/v20210519/model/RegisterIssuerResponse.h>
#include <tencentcloud/tdid/v20210519/model/RemoveHashRequest.h>
#include <tencentcloud/tdid/v20210519/model/RemoveHashResponse.h>
#include <tencentcloud/tdid/v20210519/model/SetCredentialStatusRequest.h>
#include <tencentcloud/tdid/v20210519/model/SetCredentialStatusResponse.h>
#include <tencentcloud/tdid/v20210519/model/VerifyCredentialRequest.h>
#include <tencentcloud/tdid/v20210519/model/VerifyCredentialResponse.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            class TdidClient : public AbstractClient
            {
            public:
                TdidClient(const Credential &credential, const std::string &region);
                TdidClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddLabelResponse> AddLabelOutcome;
                typedef std::future<AddLabelOutcome> AddLabelOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::AddLabelRequest&, AddLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::CancelAuthorityIssuerResponse> CancelAuthorityIssuerOutcome;
                typedef std::future<CancelAuthorityIssuerOutcome> CancelAuthorityIssuerOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CancelAuthorityIssuerRequest&, CancelAuthorityIssuerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelAuthorityIssuerAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckChainResponse> CheckChainOutcome;
                typedef std::future<CheckChainOutcome> CheckChainOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CheckChainRequest&, CheckChainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckChainAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckDidDeployResponse> CheckDidDeployOutcome;
                typedef std::future<CheckDidDeployOutcome> CheckDidDeployOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CheckDidDeployRequest&, CheckDidDeployOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckDidDeployAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCredentialResponse> CreateCredentialOutcome;
                typedef std::future<CreateCredentialOutcome> CreateCredentialOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateCredentialRequest&, CreateCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDidServiceResponse> CreateDidServiceOutcome;
                typedef std::future<CreateDidServiceOutcome> CreateDidServiceOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateDidServiceRequest&, CreateDidServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDidServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLabelResponse> CreateLabelOutcome;
                typedef std::future<CreateLabelOutcome> CreateLabelOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateLabelRequest&, CreateLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSelectiveCredentialResponse> CreateSelectiveCredentialOutcome;
                typedef std::future<CreateSelectiveCredentialOutcome> CreateSelectiveCredentialOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateSelectiveCredentialRequest&, CreateSelectiveCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSelectiveCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTDidResponse> CreateTDidOutcome;
                typedef std::future<CreateTDidOutcome> CreateTDidOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateTDidRequest&, CreateTDidOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTDidAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTDidByPrivateKeyResponse> CreateTDidByPrivateKeyOutcome;
                typedef std::future<CreateTDidByPrivateKeyOutcome> CreateTDidByPrivateKeyOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateTDidByPrivateKeyRequest&, CreateTDidByPrivateKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTDidByPrivateKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTDidByPublicKeyResponse> CreateTDidByPublicKeyOutcome;
                typedef std::future<CreateTDidByPublicKeyOutcome> CreateTDidByPublicKeyOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::CreateTDidByPublicKeyRequest&, CreateTDidByPublicKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTDidByPublicKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeployByNameResponse> DeployByNameOutcome;
                typedef std::future<DeployByNameOutcome> DeployByNameOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::DeployByNameRequest&, DeployByNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployByNameAsyncHandler;
                typedef Outcome<Core::Error, Model::DownCptResponse> DownCptOutcome;
                typedef std::future<DownCptOutcome> DownCptOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::DownCptRequest&, DownCptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownCptAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableHashResponse> EnableHashOutcome;
                typedef std::future<EnableHashOutcome> EnableHashOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::EnableHashRequest&, EnableHashOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableHashAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAgencyTDidResponse> GetAgencyTDidOutcome;
                typedef std::future<GetAgencyTDidOutcome> GetAgencyTDidOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetAgencyTDidRequest&, GetAgencyTDidOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAgencyTDidAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAuthoritiesListResponse> GetAuthoritiesListOutcome;
                typedef std::future<GetAuthoritiesListOutcome> GetAuthoritiesListOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetAuthoritiesListRequest&, GetAuthoritiesListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAuthoritiesListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAuthorityIssuerResponse> GetAuthorityIssuerOutcome;
                typedef std::future<GetAuthorityIssuerOutcome> GetAuthorityIssuerOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetAuthorityIssuerRequest&, GetAuthorityIssuerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAuthorityIssuerAsyncHandler;
                typedef Outcome<Core::Error, Model::GetConsortiumClusterListResponse> GetConsortiumClusterListOutcome;
                typedef std::future<GetConsortiumClusterListOutcome> GetConsortiumClusterListOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetConsortiumClusterListRequest&, GetConsortiumClusterListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetConsortiumClusterListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetConsortiumListResponse> GetConsortiumListOutcome;
                typedef std::future<GetConsortiumListOutcome> GetConsortiumListOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetConsortiumListRequest&, GetConsortiumListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetConsortiumListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCptInfoResponse> GetCptInfoOutcome;
                typedef std::future<GetCptInfoOutcome> GetCptInfoOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetCptInfoRequest&, GetCptInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCptInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCptListResponse> GetCptListOutcome;
                typedef std::future<GetCptListOutcome> GetCptListOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetCptListRequest&, GetCptListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCptListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCredentialCptRankResponse> GetCredentialCptRankOutcome;
                typedef std::future<GetCredentialCptRankOutcome> GetCredentialCptRankOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetCredentialCptRankRequest&, GetCredentialCptRankOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCredentialCptRankAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCredentialIssueRankResponse> GetCredentialIssueRankOutcome;
                typedef std::future<GetCredentialIssueRankOutcome> GetCredentialIssueRankOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetCredentialIssueRankRequest&, GetCredentialIssueRankOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCredentialIssueRankAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCredentialIssueTrendResponse> GetCredentialIssueTrendOutcome;
                typedef std::future<GetCredentialIssueTrendOutcome> GetCredentialIssueTrendOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetCredentialIssueTrendRequest&, GetCredentialIssueTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCredentialIssueTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCredentialStatusResponse> GetCredentialStatusOutcome;
                typedef std::future<GetCredentialStatusOutcome> GetCredentialStatusOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetCredentialStatusRequest&, GetCredentialStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCredentialStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDataPanelResponse> GetDataPanelOutcome;
                typedef std::future<GetDataPanelOutcome> GetDataPanelOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetDataPanelRequest&, GetDataPanelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDataPanelAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDeployInfoResponse> GetDeployInfoOutcome;
                typedef std::future<GetDeployInfoOutcome> GetDeployInfoOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetDeployInfoRequest&, GetDeployInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDeployInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDeployListResponse> GetDeployListOutcome;
                typedef std::future<GetDeployListOutcome> GetDeployListOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetDeployListRequest&, GetDeployListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDeployListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDidClusterDetailResponse> GetDidClusterDetailOutcome;
                typedef std::future<GetDidClusterDetailOutcome> GetDidClusterDetailOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetDidClusterDetailRequest&, GetDidClusterDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDidClusterDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDidClusterListResponse> GetDidClusterListOutcome;
                typedef std::future<GetDidClusterListOutcome> GetDidClusterListOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetDidClusterListRequest&, GetDidClusterListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDidClusterListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDidDetailResponse> GetDidDetailOutcome;
                typedef std::future<GetDidDetailOutcome> GetDidDetailOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetDidDetailRequest&, GetDidDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDidDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDidDocumentResponse> GetDidDocumentOutcome;
                typedef std::future<GetDidDocumentOutcome> GetDidDocumentOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetDidDocumentRequest&, GetDidDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDidDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDidListResponse> GetDidListOutcome;
                typedef std::future<GetDidListOutcome> GetDidListOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetDidListRequest&, GetDidListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDidListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDidRegisterTrendResponse> GetDidRegisterTrendOutcome;
                typedef std::future<GetDidRegisterTrendOutcome> GetDidRegisterTrendOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetDidRegisterTrendRequest&, GetDidRegisterTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDidRegisterTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDidServiceDetailResponse> GetDidServiceDetailOutcome;
                typedef std::future<GetDidServiceDetailOutcome> GetDidServiceDetailOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetDidServiceDetailRequest&, GetDidServiceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDidServiceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDidServiceListResponse> GetDidServiceListOutcome;
                typedef std::future<GetDidServiceListOutcome> GetDidServiceListOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetDidServiceListRequest&, GetDidServiceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDidServiceListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetGroupListResponse> GetGroupListOutcome;
                typedef std::future<GetGroupListOutcome> GetGroupListOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetGroupListRequest&, GetGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLabelListResponse> GetLabelListOutcome;
                typedef std::future<GetLabelListOutcome> GetLabelListOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetLabelListRequest&, GetLabelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLabelListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPolicyListResponse> GetPolicyListOutcome;
                typedef std::future<GetPolicyListOutcome> GetPolicyListOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetPolicyListRequest&, GetPolicyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPolicyListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPublicKeyResponse> GetPublicKeyOutcome;
                typedef std::future<GetPublicKeyOutcome> GetPublicKeyOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::GetPublicKeyRequest&, GetPublicKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPublicKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryPolicyResponse> QueryPolicyOutcome;
                typedef std::future<QueryPolicyOutcome> QueryPolicyOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::QueryPolicyRequest&, QueryPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::RecognizeAuthorityIssuerResponse> RecognizeAuthorityIssuerOutcome;
                typedef std::future<RecognizeAuthorityIssuerOutcome> RecognizeAuthorityIssuerOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::RecognizeAuthorityIssuerRequest&, RecognizeAuthorityIssuerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeAuthorityIssuerAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterClaimPolicyResponse> RegisterClaimPolicyOutcome;
                typedef std::future<RegisterClaimPolicyOutcome> RegisterClaimPolicyOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::RegisterClaimPolicyRequest&, RegisterClaimPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterClaimPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterCptResponse> RegisterCptOutcome;
                typedef std::future<RegisterCptOutcome> RegisterCptOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::RegisterCptRequest&, RegisterCptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterCptAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterIssuerResponse> RegisterIssuerOutcome;
                typedef std::future<RegisterIssuerOutcome> RegisterIssuerOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::RegisterIssuerRequest&, RegisterIssuerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterIssuerAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveHashResponse> RemoveHashOutcome;
                typedef std::future<RemoveHashOutcome> RemoveHashOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::RemoveHashRequest&, RemoveHashOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveHashAsyncHandler;
                typedef Outcome<Core::Error, Model::SetCredentialStatusResponse> SetCredentialStatusOutcome;
                typedef std::future<SetCredentialStatusOutcome> SetCredentialStatusOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::SetCredentialStatusRequest&, SetCredentialStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetCredentialStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyCredentialResponse> VerifyCredentialOutcome;
                typedef std::future<VerifyCredentialOutcome> VerifyCredentialOutcomeCallable;
                typedef std::function<void(const TdidClient*, const Model::VerifyCredentialRequest&, VerifyCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyCredentialAsyncHandler;



                /**
                 *This API is used to add a label to a DID.

                 * @param req AddLabelRequest
                 * @return AddLabelOutcome
                 */
                AddLabelOutcome AddLabel(const Model::AddLabelRequest &request);
                void AddLabelAsync(const Model::AddLabelRequest& request, const AddLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddLabelOutcomeCallable AddLabelCallable(const Model::AddLabelRequest& request);

                /**
                 *This API is used to revoke the certification of an issuing authority.
                 * @param req CancelAuthorityIssuerRequest
                 * @return CancelAuthorityIssuerOutcome
                 */
                CancelAuthorityIssuerOutcome CancelAuthorityIssuer(const Model::CancelAuthorityIssuerRequest &request);
                void CancelAuthorityIssuerAsync(const Model::CancelAuthorityIssuerRequest& request, const CancelAuthorityIssuerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelAuthorityIssuerOutcomeCallable CancelAuthorityIssuerCallable(const Model::CancelAuthorityIssuerRequest& request);

                /**
                 *This API is used to get blockchain information.
                 * @param req CheckChainRequest
                 * @return CheckChainOutcome
                 */
                CheckChainOutcome CheckChain(const Model::CheckChainRequest &request);
                void CheckChainAsync(const Model::CheckChainRequest& request, const CheckChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckChainOutcomeCallable CheckChainCallable(const Model::CheckChainRequest& request);

                /**
                 *This API is used to query a deployment task.
                 * @param req CheckDidDeployRequest
                 * @return CheckDidDeployOutcome
                 */
                CheckDidDeployOutcome CheckDidDeploy(const Model::CheckDidDeployRequest &request);
                void CheckDidDeployAsync(const Model::CheckDidDeployRequest& request, const CheckDidDeployAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckDidDeployOutcomeCallable CheckDidDeployCallable(const Model::CheckDidDeployRequest& request);

                /**
                 *This API is used to create a credential.
                 * @param req CreateCredentialRequest
                 * @return CreateCredentialOutcome
                 */
                CreateCredentialOutcome CreateCredential(const Model::CreateCredentialRequest &request);
                void CreateCredentialAsync(const Model::CreateCredentialRequest& request, const CreateCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCredentialOutcomeCallable CreateCredentialCallable(const Model::CreateCredentialRequest& request);

                /**
                 *This API is used to create a DID service.
                 * @param req CreateDidServiceRequest
                 * @return CreateDidServiceOutcome
                 */
                CreateDidServiceOutcome CreateDidService(const Model::CreateDidServiceRequest &request);
                void CreateDidServiceAsync(const Model::CreateDidServiceRequest& request, const CreateDidServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDidServiceOutcomeCallable CreateDidServiceCallable(const Model::CreateDidServiceRequest& request);

                /**
                 *This API is used to create a label.
                 * @param req CreateLabelRequest
                 * @return CreateLabelOutcome
                 */
                CreateLabelOutcome CreateLabel(const Model::CreateLabelRequest &request);
                void CreateLabelAsync(const Model::CreateLabelRequest& request, const CreateLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLabelOutcomeCallable CreateLabelCallable(const Model::CreateLabelRequest& request);

                /**
                 *This API is used to create a selective disclosure credential.
                 * @param req CreateSelectiveCredentialRequest
                 * @return CreateSelectiveCredentialOutcome
                 */
                CreateSelectiveCredentialOutcome CreateSelectiveCredential(const Model::CreateSelectiveCredentialRequest &request);
                void CreateSelectiveCredentialAsync(const Model::CreateSelectiveCredentialRequest& request, const CreateSelectiveCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSelectiveCredentialOutcomeCallable CreateSelectiveCredentialCallable(const Model::CreateSelectiveCredentialRequest& request);

                /**
                 *This API is used to create an organization DID.
                 * @param req CreateTDidRequest
                 * @return CreateTDidOutcome
                 */
                CreateTDidOutcome CreateTDid(const Model::CreateTDidRequest &request);
                void CreateTDidAsync(const Model::CreateTDidRequest& request, const CreateTDidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTDidOutcomeCallable CreateTDidCallable(const Model::CreateTDidRequest& request);

                /**
                 *This API is used to generate a TDID by private key.
                 * @param req CreateTDidByPrivateKeyRequest
                 * @return CreateTDidByPrivateKeyOutcome
                 */
                CreateTDidByPrivateKeyOutcome CreateTDidByPrivateKey(const Model::CreateTDidByPrivateKeyRequest &request);
                void CreateTDidByPrivateKeyAsync(const Model::CreateTDidByPrivateKeyRequest& request, const CreateTDidByPrivateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTDidByPrivateKeyOutcomeCallable CreateTDidByPrivateKeyCallable(const Model::CreateTDidByPrivateKeyRequest& request);

                /**
                 * This API is used to generate a TDID by public key.
                 * @param req CreateTDidByPublicKeyRequest
                 * @return CreateTDidByPublicKeyOutcome
                 */
                CreateTDidByPublicKeyOutcome CreateTDidByPublicKey(const Model::CreateTDidByPublicKeyRequest &request);
                void CreateTDidByPublicKeyAsync(const Model::CreateTDidByPublicKeyRequest& request, const CreateTDidByPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTDidByPublicKeyOutcomeCallable CreateTDidByPublicKeyCallable(const Model::CreateTDidByPublicKeyRequest& request);

                /**
                 *This API is used to deploy a TDID contract by name.
                 * @param req DeployByNameRequest
                 * @return DeployByNameOutcome
                 */
                DeployByNameOutcome DeployByName(const Model::DeployByNameRequest &request);
                void DeployByNameAsync(const Model::DeployByNameRequest& request, const DeployByNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeployByNameOutcomeCallable DeployByNameCallable(const Model::DeployByNameRequest& request);

                /**
                 *This API is used to download a claim protocol type (CPT).
                 * @param req DownCptRequest
                 * @return DownCptOutcome
                 */
                DownCptOutcome DownCpt(const Model::DownCptRequest &request);
                void DownCptAsync(const Model::DownCptRequest& request, const DownCptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownCptOutcomeCallable DownCptCallable(const Model::DownCptRequest& request);

                /**
                 *This API is used to enable a contract.
                 * @param req EnableHashRequest
                 * @return EnableHashOutcome
                 */
                EnableHashOutcome EnableHash(const Model::EnableHashRequest &request);
                void EnableHashAsync(const Model::EnableHashRequest& request, const EnableHashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableHashOutcomeCallable EnableHashCallable(const Model::EnableHashRequest& request);

                /**
                 *该接口已废弃

This API is used to get the DID details of the current organization.
                 * @param req GetAgencyTDidRequest
                 * @return GetAgencyTDidOutcome
                 */
                GetAgencyTDidOutcome GetAgencyTDid(const Model::GetAgencyTDidRequest &request);
                void GetAgencyTDidAsync(const Model::GetAgencyTDidRequest& request, const GetAgencyTDidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAgencyTDidOutcomeCallable GetAgencyTDidCallable(const Model::GetAgencyTDidRequest& request);

                /**
                 *This API is used to query authorities.
                 * @param req GetAuthoritiesListRequest
                 * @return GetAuthoritiesListOutcome
                 */
                GetAuthoritiesListOutcome GetAuthoritiesList(const Model::GetAuthoritiesListRequest &request);
                void GetAuthoritiesListAsync(const Model::GetAuthoritiesListRequest& request, const GetAuthoritiesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAuthoritiesListOutcomeCallable GetAuthoritiesListCallable(const Model::GetAuthoritiesListRequest& request);

                /**
                 *This API is used to get the information of an issuing authority.
                 * @param req GetAuthorityIssuerRequest
                 * @return GetAuthorityIssuerOutcome
                 */
                GetAuthorityIssuerOutcome GetAuthorityIssuer(const Model::GetAuthorityIssuerRequest &request);
                void GetAuthorityIssuerAsync(const Model::GetAuthorityIssuerRequest& request, const GetAuthorityIssuerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAuthorityIssuerOutcomeCallable GetAuthorityIssuerCallable(const Model::GetAuthorityIssuerRequest& request);

                /**
                 *This API is used to query the BCOS networks of a consortium.
                 * @param req GetConsortiumClusterListRequest
                 * @return GetConsortiumClusterListOutcome
                 */
                GetConsortiumClusterListOutcome GetConsortiumClusterList(const Model::GetConsortiumClusterListRequest &request);
                void GetConsortiumClusterListAsync(const Model::GetConsortiumClusterListRequest& request, const GetConsortiumClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetConsortiumClusterListOutcomeCallable GetConsortiumClusterListCallable(const Model::GetConsortiumClusterListRequest& request);

                /**
                 *This API is used to query consortiums.
                 * @param req GetConsortiumListRequest
                 * @return GetConsortiumListOutcome
                 */
                GetConsortiumListOutcome GetConsortiumList(const Model::GetConsortiumListRequest &request);
                void GetConsortiumListAsync(const Model::GetConsortiumListRequest& request, const GetConsortiumListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetConsortiumListOutcomeCallable GetConsortiumListCallable(const Model::GetConsortiumListRequest& request);

                /**
                 *This API is used to get the information of a claim protocol type (CPT).
                 * @param req GetCptInfoRequest
                 * @return GetCptInfoOutcome
                 */
                GetCptInfoOutcome GetCptInfo(const Model::GetCptInfoRequest &request);
                void GetCptInfoAsync(const Model::GetCptInfoRequest& request, const GetCptInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCptInfoOutcomeCallable GetCptInfoCallable(const Model::GetCptInfoRequest& request);

                /**
                 *This API is used to query claim protocol types (CPT).
                 * @param req GetCptListRequest
                 * @return GetCptListOutcome
                 */
                GetCptListOutcome GetCptList(const Model::GetCptListRequest &request);
                void GetCptListAsync(const Model::GetCptListRequest& request, const GetCptListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCptListOutcomeCallable GetCptListCallable(const Model::GetCptListRequest& request);

                /**
                 *This API is used to get the rankings of claim protocol types (CPT).
                 * @param req GetCredentialCptRankRequest
                 * @return GetCredentialCptRankOutcome
                 */
                GetCredentialCptRankOutcome GetCredentialCptRank(const Model::GetCredentialCptRankRequest &request);
                void GetCredentialCptRankAsync(const Model::GetCredentialCptRankRequest& request, const GetCredentialCptRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCredentialCptRankOutcomeCallable GetCredentialCptRankCallable(const Model::GetCredentialCptRankRequest& request);

                /**
                 *This API is used to get the rankings of issuers.
                 * @param req GetCredentialIssueRankRequest
                 * @return GetCredentialIssueRankOutcome
                 */
                GetCredentialIssueRankOutcome GetCredentialIssueRank(const Model::GetCredentialIssueRankRequest &request);
                void GetCredentialIssueRankAsync(const Model::GetCredentialIssueRankRequest& request, const GetCredentialIssueRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCredentialIssueRankOutcomeCallable GetCredentialIssueRankCallable(const Model::GetCredentialIssueRankRequest& request);

                /**
                 *This API is used to query credential issuing trends.
                 * @param req GetCredentialIssueTrendRequest
                 * @return GetCredentialIssueTrendOutcome
                 */
                GetCredentialIssueTrendOutcome GetCredentialIssueTrend(const Model::GetCredentialIssueTrendRequest &request);
                void GetCredentialIssueTrendAsync(const Model::GetCredentialIssueTrendRequest& request, const GetCredentialIssueTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCredentialIssueTrendOutcomeCallable GetCredentialIssueTrendCallable(const Model::GetCredentialIssueTrendRequest& request);

                /**
                 *This API is used to query the on-chain status of a credential.
                 * @param req GetCredentialStatusRequest
                 * @return GetCredentialStatusOutcome
                 */
                GetCredentialStatusOutcome GetCredentialStatus(const Model::GetCredentialStatusRequest &request);
                void GetCredentialStatusAsync(const Model::GetCredentialStatusRequest& request, const GetCredentialStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCredentialStatusOutcomeCallable GetCredentialStatusCallable(const Model::GetCredentialStatusRequest& request);

                /**
                 *This API is used to query the overall statistics of a network.

                 * @param req GetDataPanelRequest
                 * @return GetDataPanelOutcome
                 */
                GetDataPanelOutcome GetDataPanel(const Model::GetDataPanelRequest &request);
                void GetDataPanelAsync(const Model::GetDataPanelRequest& request, const GetDataPanelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDataPanelOutcomeCallable GetDataPanelCallable(const Model::GetDataPanelRequest& request);

                /**
                 *This API is used to query the deployment information of a contract.

                 * @param req GetDeployInfoRequest
                 * @return GetDeployInfoOutcome
                 */
                GetDeployInfoOutcome GetDeployInfo(const Model::GetDeployInfoRequest &request);
                void GetDeployInfoAsync(const Model::GetDeployInfoRequest& request, const GetDeployInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDeployInfoOutcomeCallable GetDeployInfoCallable(const Model::GetDeployInfoRequest& request);

                /**
                 *This API is used to query deployed contracts.
                 * @param req GetDeployListRequest
                 * @return GetDeployListOutcome
                 */
                GetDeployListOutcome GetDeployList(const Model::GetDeployListRequest &request);
                void GetDeployListAsync(const Model::GetDeployListRequest& request, const GetDeployListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDeployListOutcomeCallable GetDeployListCallable(const Model::GetDeployListRequest& request);

                /**
                 *This API is used to get the information of a DID blockchain network.
                 * @param req GetDidClusterDetailRequest
                 * @return GetDidClusterDetailOutcome
                 */
                GetDidClusterDetailOutcome GetDidClusterDetail(const Model::GetDidClusterDetailRequest &request);
                void GetDidClusterDetailAsync(const Model::GetDidClusterDetailRequest& request, const GetDidClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDidClusterDetailOutcomeCallable GetDidClusterDetailCallable(const Model::GetDidClusterDetailRequest& request);

                /**
                 *This API is used to query your DID networks.
                 * @param req GetDidClusterListRequest
                 * @return GetDidClusterListOutcome
                 */
                GetDidClusterListOutcome GetDidClusterList(const Model::GetDidClusterListRequest &request);
                void GetDidClusterListAsync(const Model::GetDidClusterListRequest& request, const GetDidClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDidClusterListOutcomeCallable GetDidClusterListCallable(const Model::GetDidClusterListRequest& request);

                /**
                 *This API is used to get the information of a DID.
                 * @param req GetDidDetailRequest
                 * @return GetDidDetailOutcome
                 */
                GetDidDetailOutcome GetDidDetail(const Model::GetDidDetailRequest &request);
                void GetDidDetailAsync(const Model::GetDidDetailRequest& request, const GetDidDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDidDetailOutcomeCallable GetDidDetailCallable(const Model::GetDidDetailRequest& request);

                /**
                 *This API is used to get the document of a DID.

                 * @param req GetDidDocumentRequest
                 * @return GetDidDocumentOutcome
                 */
                GetDidDocumentOutcome GetDidDocument(const Model::GetDidDocumentRequest &request);
                void GetDidDocumentAsync(const Model::GetDidDocumentRequest& request, const GetDidDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDidDocumentOutcomeCallable GetDidDocumentCallable(const Model::GetDidDocumentRequest& request);

                /**
                 *This API is used to query DIDs.
                 * @param req GetDidListRequest
                 * @return GetDidListOutcome
                 */
                GetDidListOutcome GetDidList(const Model::GetDidListRequest &request);
                void GetDidListAsync(const Model::GetDidListRequest& request, const GetDidListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDidListOutcomeCallable GetDidListCallable(const Model::GetDidListRequest& request);

                /**
                 *This API is used to query DID registration trends.
                 * @param req GetDidRegisterTrendRequest
                 * @return GetDidRegisterTrendOutcome
                 */
                GetDidRegisterTrendOutcome GetDidRegisterTrend(const Model::GetDidRegisterTrendRequest &request);
                void GetDidRegisterTrendAsync(const Model::GetDidRegisterTrendRequest& request, const GetDidRegisterTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDidRegisterTrendOutcomeCallable GetDidRegisterTrendCallable(const Model::GetDidRegisterTrendRequest& request);

                /**
                 *This API is used to get the information of a DID service.
                 * @param req GetDidServiceDetailRequest
                 * @return GetDidServiceDetailOutcome
                 */
                GetDidServiceDetailOutcome GetDidServiceDetail(const Model::GetDidServiceDetailRequest &request);
                void GetDidServiceDetailAsync(const Model::GetDidServiceDetailRequest& request, const GetDidServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDidServiceDetailOutcomeCallable GetDidServiceDetailCallable(const Model::GetDidServiceDetailRequest& request);

                /**
                 *This API is used to query DID services.
                 * @param req GetDidServiceListRequest
                 * @return GetDidServiceListOutcome
                 */
                GetDidServiceListOutcome GetDidServiceList(const Model::GetDidServiceListRequest &request);
                void GetDidServiceListAsync(const Model::GetDidServiceListRequest& request, const GetDidServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDidServiceListOutcomeCallable GetDidServiceListCallable(const Model::GetDidServiceListRequest& request);

                /**
                 *This API is used to query main groups.
                 * @param req GetGroupListRequest
                 * @return GetGroupListOutcome
                 */
                GetGroupListOutcome GetGroupList(const Model::GetGroupListRequest &request);
                void GetGroupListAsync(const Model::GetGroupListRequest& request, const GetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGroupListOutcomeCallable GetGroupListCallable(const Model::GetGroupListRequest& request);

                /**
                 *This API is used to query labels.
                 * @param req GetLabelListRequest
                 * @return GetLabelListOutcome
                 */
                GetLabelListOutcome GetLabelList(const Model::GetLabelListRequest &request);
                void GetLabelListAsync(const Model::GetLabelListRequest& request, const GetLabelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLabelListOutcomeCallable GetLabelListCallable(const Model::GetLabelListRequest& request);

                /**
                 *This API is used to query disclosure policies.
                 * @param req GetPolicyListRequest
                 * @return GetPolicyListOutcome
                 */
                GetPolicyListOutcome GetPolicyList(const Model::GetPolicyListRequest &request);
                void GetPolicyListAsync(const Model::GetPolicyListRequest& request, const GetPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPolicyListOutcomeCallable GetPolicyListCallable(const Model::GetPolicyListRequest& request);

                /**
                 *This API is used to get the public key of a DID.
                 * @param req GetPublicKeyRequest
                 * @return GetPublicKeyOutcome
                 */
                GetPublicKeyOutcome GetPublicKey(const Model::GetPublicKeyRequest &request);
                void GetPublicKeyAsync(const Model::GetPublicKeyRequest& request, const GetPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPublicKeyOutcomeCallable GetPublicKeyCallable(const Model::GetPublicKeyRequest& request);

                /**
                 *This API is used to get the information of a disclosure policy.
                 * @param req QueryPolicyRequest
                 * @return QueryPolicyOutcome
                 */
                QueryPolicyOutcome QueryPolicy(const Model::QueryPolicyRequest &request);
                void QueryPolicyAsync(const Model::QueryPolicyRequest& request, const QueryPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryPolicyOutcomeCallable QueryPolicyCallable(const Model::QueryPolicyRequest& request);

                /**
                 *This API is used to certify an issuing authority.
                 * @param req RecognizeAuthorityIssuerRequest
                 * @return RecognizeAuthorityIssuerOutcome
                 */
                RecognizeAuthorityIssuerOutcome RecognizeAuthorityIssuer(const Model::RecognizeAuthorityIssuerRequest &request);
                void RecognizeAuthorityIssuerAsync(const Model::RecognizeAuthorityIssuerRequest& request, const RecognizeAuthorityIssuerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeAuthorityIssuerOutcomeCallable RecognizeAuthorityIssuerCallable(const Model::RecognizeAuthorityIssuerRequest& request);

                /**
                 *This API is used to register a disclosure policy.
                 * @param req RegisterClaimPolicyRequest
                 * @return RegisterClaimPolicyOutcome
                 */
                RegisterClaimPolicyOutcome RegisterClaimPolicy(const Model::RegisterClaimPolicyRequest &request);
                void RegisterClaimPolicyAsync(const Model::RegisterClaimPolicyRequest& request, const RegisterClaimPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterClaimPolicyOutcomeCallable RegisterClaimPolicyCallable(const Model::RegisterClaimPolicyRequest& request);

                /**
                 *This API is used to create a claim protocol type (CPT).
                 * @param req RegisterCptRequest
                 * @return RegisterCptOutcome
                 */
                RegisterCptOutcome RegisterCpt(const Model::RegisterCptRequest &request);
                void RegisterCptAsync(const Model::RegisterCptRequest& request, const RegisterCptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterCptOutcomeCallable RegisterCptCallable(const Model::RegisterCptRequest& request);

                /**
                 *This API is used to register an issuing authority.
                 * @param req RegisterIssuerRequest
                 * @return RegisterIssuerOutcome
                 */
                RegisterIssuerOutcome RegisterIssuer(const Model::RegisterIssuerRequest &request);
                void RegisterIssuerAsync(const Model::RegisterIssuerRequest& request, const RegisterIssuerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterIssuerOutcomeCallable RegisterIssuerCallable(const Model::RegisterIssuerRequest& request);

                /**
                 *This API is used to delete a contract.
                 * @param req RemoveHashRequest
                 * @return RemoveHashOutcome
                 */
                RemoveHashOutcome RemoveHash(const Model::RemoveHashRequest &request);
                void RemoveHashAsync(const Model::RemoveHashRequest& request, const RemoveHashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveHashOutcomeCallable RemoveHashCallable(const Model::RemoveHashRequest& request);

                /**
                 *This API is used to change the on-chain status of a credential.
                 * @param req SetCredentialStatusRequest
                 * @return SetCredentialStatusOutcome
                 */
                SetCredentialStatusOutcome SetCredentialStatus(const Model::SetCredentialStatusRequest &request);
                void SetCredentialStatusAsync(const Model::SetCredentialStatusRequest& request, const SetCredentialStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetCredentialStatusOutcomeCallable SetCredentialStatusCallable(const Model::SetCredentialStatusRequest& request);

                /**
                 *This API is used to verify a credential.
                 * @param req VerifyCredentialRequest
                 * @return VerifyCredentialOutcome
                 */
                VerifyCredentialOutcome VerifyCredential(const Model::VerifyCredentialRequest &request);
                void VerifyCredentialAsync(const Model::VerifyCredentialRequest& request, const VerifyCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyCredentialOutcomeCallable VerifyCredentialCallable(const Model::VerifyCredentialRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_TDIDCLIENT_H_
